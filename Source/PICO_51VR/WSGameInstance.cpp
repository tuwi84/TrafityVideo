// Fill out your copyright notice in the Description page of Project Settings.


#include "WSGameInstance.h"
#include "WebSocketsModule.h"
#include "Dom/JsonObject.h"
#include "Serialization/JsonSerializer.h"
#include "JsonObjectConverter.h"
#include "GeneralProjectSettings.h"
#include <SocketSubsystem.h>
#include <IPAddress.h>
#include "Misc/App.h"
#include "CustomPicoPawn.h"
#include "Misc/Guid.h"
#ifdef __ANDROID__
#include "Android/AndroidPlatformMisc.h"
#endif


void UWSGameInstance::Init()
{
	Super::Init();

	if (!FModuleManager::Get().IsModuleLoaded("WebSockets"))
	{
		FModuleManager::Get().LoadModule("WebSockets");
	}
	UE_LOG(LogTemp, Log, TEXT("WSAdress: %s"), *WSSAdress);
	WSSAdress = "ws://" + HostAddress + ":" + HostPort + "/" + HostService;


	//FString RelativePath = FPaths::ProjectContentDir();
	FString RelativePath = FPaths::ProjectSavedDir();
	ProjectDir = IFileManager::Get().ConvertToAbsolutePathForExternalAppForRead(*RelativePath);
	UE_LOG(LogTemp, Warning, TEXT("Savefile location: %s"), *ProjectDir);
	//GEngine->AddOnScreenDebugMessage(-1, 150.0f, FColor::Red, "Savefile location -> " + ProjectDir);
	LoadGameData();

	if (GameSettings->TryGetField("lang") == NULL)
	{
		GameSettings->SetNumberField("lang", 0);
	}
	GameSettings->TryGetNumberField("lang", LanguageIndex);

	FString Uid;
	if (GameSettings->TryGetField("uid") == NULL)
	{
#ifdef __ANDROID__
		GEngine->AddOnScreenDebugMessage(-1, 150.0f, FColor::Blue, "ID -> " + FAndroidMisc::GetDeviceId());
		Uid = FAndroidMisc::GetDeviceId();
#else
		FGuid::NewGuid().AppendString(Uid);
		Uid = Uid.Left(6);
#endif
		GameSettings->SetStringField("uid", *Uid);
		SaveGameData();
	}
	GameSettings->TryGetStringField("uid", Uid);

}

void UWSGameInstance::OnStart()
{
	Super::OnStart();

	WebSocket = FWebSocketsModule::Get().CreateWebSocket(WSSAdress);
	SetupWebsocket();
}

void UWSGameInstance::Shutdown()
{
	bIsGameStopping = true;
	SaveGameData();
	GetTimerManager().ClearTimer(ReconnectTimer);
	GetTimerManager().ClearTimer(LoadLevelTimer);


	if (WebSocket && WebSocket->IsConnected())
	{
		WebSocket->OnClosed().Clear();
		WebSocket->Close();
	}

	Super::Shutdown();
}

#pragma region WebSockets

// Subscribe to Websocket events and init a connection
void UWSGameInstance::SetupWebsocket()
{
	if (!WebSocket)
	{
		UE_LOG(LogTemp, Error, TEXT("Unable to start connection. No connection to host."));
		return;
	}

	WebSocket->OnConnected().AddLambda([&]()
		{
			GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Green, "Successfully connected");
			GetTimerManager().ClearTimer(ReconnectTimer);
			SendDeviceInfo();
		});

	WebSocket->OnConnectionError().AddLambda([&](const FString& Error)
		{
			GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Red, "Unable to connect to " + WSSAdress + ": " + Error);
			if (bIsGameStopping || !GEngine || !this) return;

			GetTimerManager().ClearTimer(ReconnectTimer);
			GetTimerManager().SetTimer(ReconnectTimer, this, &UWSGameInstance::Connect, 4.0f, false);
		});

	WebSocket->OnClosed().AddLambda([&](int32 StatusCode, const FString& Reason, bool bWasClean)
		{
			if (bIsGameStopping || !GEngine || !this || !WebSocket) return;
			if (!GetWorld()) return;

			GEngine->AddOnScreenDebugMessage(-1, 15.0f, bWasClean ? FColor::Green : FColor::Red, "Connection closed: " + FString::FromInt(StatusCode));
			if (StatusCode == 4000)
			{
				GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Red, "Closing game");
				if (GetWorld()->WorldType != EWorldType::PIE && GetWorld()->WorldType != EWorldType::Editor)
					FGenericPlatformMisc::RequestExit(false);
				return;
			}

			this->GetTimerManager().SetTimer(ReconnectTimer, this, &UWSGameInstance::Connect, 4.0f, false);
		});

	WebSocket->OnMessage().AddLambda([&](const FString& MessageString)
		{
			if (bShouldLogCommunication) UE_LOG(LogTemp, Warning, TEXT("GOT data from server -> %s"), *MessageString);
			this->ParseResponse(MessageString);
		});

	WebSocket->OnMessageSent().AddLambda([&](const FString& MessageString)
		{
			if (bShouldLogCommunication) UE_LOG(LogTemp, Warning, TEXT("SENT data to server -> %s"), *MessageString);
		});

	WebSocket->Connect();
}

void UWSGameInstance::Connect()
{
	if (bIsGameStopping || !GEngine || !this) return;

	GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, "Unable to connect to " + WSSAdress + ".Reconnecting...");
	if (WebSocket)
	{
		WebSocket->Connect();
	}
	else
	{
		GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, "Unable to reconnect. Websocket doesn't exist");
	}
}

void UWSGameInstance::ParseResponse(FString data)
{
	TSharedPtr<FJsonObject> JsonObject;
	TSharedRef<TJsonReader<>> Reader = TJsonReaderFactory<>::Create(data);
	if (FJsonSerializer::Deserialize(Reader, JsonObject))
	{
		FString type = JsonObject->GetStringField("type");
		if (type == "PING")
		{
			TMap<FString, FString> dataMap;
			dataMap.Add("type", "PONG");
			FString jsonString = ConstructJSONString(dataMap);
			WebSocket->Send(jsonString);
			return;
		}
		else if (type == "CHANGELEVEL")
		{
			if (PicoPawn) PicoPawn->OnShowSplashScreen();
			NextLevelName = JsonObject->GetStringField("index");
			GetWorld()->GetTimerManager().SetTimer(LoadLevelTimer, this, &UWSGameInstance::UpdateLevel, 1, false);
			return;
		}
		else if (type == "TOGGLEPASSTHROUGH")
		{
			IsPassthroughEnabled = JsonObject->GetBoolField("value");
			if (PicoPawn) PicoPawn->OnTogglePassthrough(IsPassthroughEnabled);
			return;
		}
		else if (type == "UPDATECONF")
		{
			GameSettings->SetNumberField("lang", JsonObject->GetNumberField("lang"));
			LanguageIndex = JsonObject->GetNumberField("lang");
			FString LangLiteral = JsonObject->GetStringField("langLiteral");
			GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Green, "Changing lang to " + LangLiteral);
			SendDeviceInfo();
			OnLanguageUpdated(LanguageIndex, LangLiteral);
			if (PicoPawn) PicoPawn->OnLanguageUpdated(LanguageIndex, LangLiteral);
			SaveGameData();
			return;
		}
		else if (type == "UPDATEID")
		{
			GameSettings->SetStringField("id", JsonObject->GetStringField("id"));
			GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Green, "Changing name to " + JsonObject->GetStringField("id"));
			SendDeviceInfo();
			SaveGameData();
			return;
		}
		else if (type == "UPDATEVOLUME")
		{
			VolumeLevel = JsonObject->GetIntegerField("vol");
			if (PicoPawn) PicoPawn->OnVolumeLevelUpdated(VolumeLevel);
			return;
		}
		else if (type == "REMOVE")
		{
			WebSocket->Close(4000);
			TEnumAsByte<EQuitPreference::Type> QuitPreference = EQuitPreference::Quit; 
			UKismetSystemLibrary::QuitGame(GetWorld(), UGameplayStatics::GetPlayerController(GetWorld(), 0), QuitPreference, true);
			return;
		}

		GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Red, "Unknown messagetype: " + data);
	}
	else
	{
		GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Red, "Unable to parse message: " + data);
	}
}

void UWSGameInstance::SendDeviceInfo(FString levelName)
{
	if (WebSocket && WebSocket->IsConnected())
	{
		TMap<FString, FString> dataMap;
		dataMap.Add("type", "AMDEVICE");
		dataMap.Add("project", GetDefault<UGeneralProjectSettings>()->ProjectName);
		dataMap.Add("uid", GameSettings->GetStringField("uid"));
		dataMap.Add("battery", BatteryLevel);
		dataMap.Add("level", (levelName != "" ? levelName : UGameplayStatics::GetCurrentLevelName(this)));
		dataMap.Add("lang", GameSettings->GetStringField("lang"));
		dataMap.Add("status", Status);
		dataMap.Add("vol", FString::FromInt(VolumeLevel));
		FString jsonString = ConstructJSONString(dataMap);
		WebSocket->Send(jsonString);
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("WebSocket not connected"));
		GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Red, "WebSocket not connected");
	}
}

#pragma endregion


#pragma region UpdateGameplay

void UWSGameInstance::UpdateLevel()
{
	GetWorld()->GetTimerManager().ClearTimer(LoadLevelTimer);
	int index = TryParse(NextLevelName);
	if (index >= 0 && index < Levels.Num())
	{
		GEngine->AddOnScreenDebugMessage(11, 15.0f, FColor::Yellow, "Changing level to: " + Levels[index]);
		UGameplayStatics::OpenLevel(GetWorld(), FName(Levels[index]));
		SendDeviceInfo(Levels[index]);
	}
	else
	{
		GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Red, "No level called: " + NextLevelName);
	}

	//if (Levels.Contains(levelName))
	//{
	//	GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, "Changing level to: " + levelName);
	//	UGameplayStatics::OpenLevel(GetWorld(), FName(levelName));
	//	Status = "PLAYING";
	//	SendDeviceInfo(levelName);
	//}
	//else
	//{
	//	GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Red, "No level called: " + levelName);
	//}
}

void UWSGameInstance::UpdateLanguageIndex(int32 languageIndex)
{
	LanguageIndex = languageIndex;
	GameSettings->SetNumberField("lang", languageIndex);
	SendDeviceInfo();
}

void UWSGameInstance::OnLanguageUpdated_Implementation(int languageIndex, const FString& languageLiteral)
{
}

void UWSGameInstance::SendDeviceInfo()
{
	SendDeviceInfo("");
}

void UWSGameInstance::UpdateStatus(FString status)
{
	Status = status;
	SendDeviceInfo();
}

#pragma endregion


#pragma region Serialization

FString UWSGameInstance::ConstructJSONString(TMap<FString, FString> map)
{
	FString output = "{";
	for (auto& Elem : map)
	{
		output += "\"" + Elem.Key + "\":\"" + Elem.Value + "\",";
	}
	output.RemoveFromEnd(",");
	output += "}";
	return output;
}

TSharedPtr<FJsonObject> UWSGameInstance::ParseJSONString(FString jsonString)
{
	TSharedPtr<FJsonObject> JsonObject;
	TSharedRef<TJsonReader<>> Reader = TJsonReaderFactory<>::Create(jsonString);
	if (FJsonSerializer::Deserialize(Reader, JsonObject))
	{
		return JsonObject;
	}
	else
	{
		GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Red, "Unable to parse JSON string: " + jsonString);
		return NULL;
	}
}

bool UWSGameInstance::SaveGameData()
{
	FString file = ProjectDir;
	file.Append(TEXT("lastSettings.txt"));

	FString OutputString;
	TSharedRef< TJsonWriter<> > Writer = TJsonWriterFactory<>::Create(&OutputString);
	FJsonSerializer::Serialize(GameSettings.ToSharedRef(), Writer);
	UE_LOG(LogTemp, Warning, TEXT("Saving following settings -> %s"), *OutputString);

	FFileHelper::SaveStringToFile(OutputString, *file);
	return false;
}

bool UWSGameInstance::LoadGameData()
{
	FString file = ProjectDir;
	file.Append(TEXT("lastSettings.txt"));
	FString JsonString;
	FFileHelper::LoadFileToString(JsonString, *file);

	TSharedPtr<FJsonObject> ParsedSave = ParseJSONString(JsonString);
	if (ParsedSave == NULL)
	{
		UE_LOG(LogTemp, Error, TEXT("Unable to parse savefile -> %s"), *JsonString);
		return false;
	}

	UE_LOG(LogTemp, Warning, TEXT("Loaded following settings -> %s"), *JsonString);
	GameSettings = ParsedSave;
	return true;
}
#pragma endregion


int UWSGameInstance::TryParse(FString in)
{
	if (FCString::IsNumeric(*in))
	{
		return FCString::Atoi(*in);
	}
	else
	{
		return -1;
	}
}