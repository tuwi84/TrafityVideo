// Fill out your copyright notice in the Description page of Project Settings.


#include "MyBlueprintFunctionLibrary.h"
#include "Engine/Engine.h"

void UMyBlueprintFunctionLibrary::LogToOutputLog(FString Message)
{
	// The UE_LOG macro logs the message to the output log
	UE_LOG(LogTemp, Warning, TEXT("%s"), *Message);
}
