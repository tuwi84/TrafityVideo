// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PicoPawn.h"
#include "CustomPicoPawn.generated.h"


/**
 * 
 */
UCLASS()
class PICO_51VR_API ACustomPicoPawn : public APicoPawn
{
	GENERATED_BODY()

private:
	class UWSGameInstance* GameInstance;

	
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;


public:
	UFUNCTION(BlueprintNativeEvent, Category = "WS")
	void OnShowSplashScreen();
	UFUNCTION(BlueprintNativeEvent, Category = "WS")
	void OnTogglePassthrough(bool IsPassthroughEnabled);
	UFUNCTION(BlueprintNativeEvent, Category = "WS")
	void OnLanguageUpdated(int LanguageIndex, const FString& LanguageLiteral);
	UFUNCTION(BlueprintNativeEvent, Category = "WS")
	void OnVolumeLevelUpdated(int VolumeLevel);
	UFUNCTION(BlueprintImplementableEvent, Category = "WS")
	void OnSystemApiInfoRequested();

	UFUNCTION(BlueprintCallable, Category = "WS")
	void UpdateSystemApiInfo(FString BatteryLevel, int VolumeLevel);

};
