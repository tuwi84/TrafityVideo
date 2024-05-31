// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "Kismet/GameplayStatics.h"
#include "IWebSocket.h"
#include "Misc/OutputDeviceNull.h"
#include "WSGameInstance.generated.h"


UCLASS()
class PICO_51VR_API UWSGameInstance : public UGameInstance
{
	GENERATED_BODY()

private:
	FString UID;
	FString NextLevelName;
	FString WSSAdress;
	bool bIsGameStopping = false;
	void SendDeviceInfo(FString levelName);
	void SetupWebsocket();
	void UpdateLevel();

	void ParseResponse(FString data);
	int TryParse(FString in);

	FString ConstructJSONString(TMap<FString, FString> map);
	TSharedPtr<FJsonObject> ParseJSONString(FString jsonString);
	bool SaveGameData();
	bool LoadGameData();


public:
	virtual void Init() override;
	virtual void OnStart() override;
	virtual void Shutdown() override;
	TSharedPtr<IWebSocket> WebSocket;
	void Connect();

	UFUNCTION(BlueprintCallable, Category = "WS")
	void SendDeviceInfo();
	UFUNCTION(BlueprintCallable, Category = "WS")
	void UpdateStatus(FString status);
	UFUNCTION(BlueprintCallable, Category = "WS")
	void UpdateLanguageIndex(int32 languageIndex);

	UFUNCTION(BlueprintNativeEvent, Category = "WS")
	void OnLanguageUpdated(int languageIndex, const FString& languageLiteral);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WS")
	FString HostAddress = "192.168.0.106";
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WS")
	FString HostPort = "8999";
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WS")
	FString HostService = "Server";
	UPROPERTY(BlueprintReadOnly, Category = "WS")
	FString ResourcePort = "12400";

	UPROPERTY(BlueprintReadOnly, Category = "DeviceState")
	FString BatteryLevel = "NaN";
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "DeviceState")
	int32 LanguageIndex;
	UPROPERTY(BlueprintReadOnly, Category = "DeviceState")
	int32 VolumeLevel = -1;
	UPROPERTY(BlueprintReadWrite, Category = "DeviceState")
	bool IsPassthroughEnabled = false;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "DeviceState")
	FString Status = "PRE";

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WS")
	bool bShouldLogCommunication = false;
	UPROPERTY(BlueprintReadOnly)
	FString ProjectDir = "";
	UPROPERTY(BlueprintReadOnly)
	class ACustomPicoPawn* PicoPawn;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FString> Levels = TArray<FString>();

	UPROPERTY()
	FTimerHandle ReconnectTimer;
	UPROPERTY()
	FTimerHandle LoadLevelTimer;

	TSharedPtr<FJsonObject> GameSettings = MakeShareable(new FJsonObject);

};
