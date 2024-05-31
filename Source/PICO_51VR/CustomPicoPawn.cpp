// Fill out your copyright notice in the Description page of Project Settings.


#include "CustomPicoPawn.h"
#include "WSGameInstance.h"
#include "PXR_HMDFunctionLibrary.h"


void ACustomPicoPawn::BeginPlay()
{
	Super::BeginPlay();

	GameInstance = Cast<UWSGameInstance>(UGameplayStatics::GetGameInstance(GetWorld()));
	if (GameInstance)
	{
		GameInstance->PicoPawn = this;
		FTimerHandle ConnectionDelay;
		GetWorldTimerManager().SetTimer(ConnectionDelay, this, &ACustomPicoPawn::OnSystemApiInfoRequested, 1, false);
	}
	else
	{
		GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Red, "GameInstance not set to WSGameInstance!");
	}
	UPICOXRHMDFunctionLibrary::PXR_ResetHMDSensor();

}

void ACustomPicoPawn::OnShowSplashScreen_Implementation()
{
}

void ACustomPicoPawn::OnTogglePassthrough_Implementation(bool IsPassthroughEnabled)
{
	UPICOXRHMDFunctionLibrary::PXR_SetSeeThroughBackground(IsPassthroughEnabled);
}

void ACustomPicoPawn::OnLanguageUpdated_Implementation(int LanguageIndex, const FString& LanguageLiteral)
{
}

void ACustomPicoPawn::OnVolumeLevelUpdated_Implementation(int VolumeLevel)
{
}

void ACustomPicoPawn::UpdateSystemApiInfo(FString BatteryLevel, int VolumeLevel)
{
	if (!GameInstance) return;

	GameInstance->BatteryLevel = BatteryLevel;
	GameInstance->VolumeLevel = VolumeLevel;
	GameInstance->SendDeviceInfo();
}
