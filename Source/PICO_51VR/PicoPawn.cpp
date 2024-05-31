// Fill out your copyright notice in the Description page of Project Settings.


#include "PicoPawn.h"
#include "PXR_HMDRuntimeSettings.h"


// Sets default values
APicoPawn::APicoPawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void APicoPawn::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void APicoPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void APicoPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	UPICOXRSettings* Settings = GetMutableDefault<UPICOXRSettings>();
	if (Settings->IsValidLowLevel() && Settings->bEnableAutoKeyMapping)
	{
		// This component belongs to the possessing Player Controller
		InputComponent->BindAction("ButtonA", IE_Pressed, this, &APicoPawn::ClickButtonAPressed);
		InputComponent->BindAction("ButtonA", IE_Released, this, &APicoPawn::ClickButtonAReleased);

		InputComponent->BindAction("ButtonB", IE_Pressed, this, &APicoPawn::ClickButtonBPressed);
		InputComponent->BindAction("ButtonB", IE_Released, this, &APicoPawn::ClickButtonBReleased);

		InputComponent->BindAction("ButtonX", IE_Pressed, this, &APicoPawn::ClickButtonXPressed);
		InputComponent->BindAction("ButtonX", IE_Released, this, &APicoPawn::ClickButtonXReleased);

		InputComponent->BindAction("ButtonY", IE_Pressed, this, &APicoPawn::ClickButtonYPressed);
		InputComponent->BindAction("ButtonY", IE_Released, this, &APicoPawn::ClickButtonYReleased);

		InputComponent->BindAction("ButtonLeftGrip", IE_Pressed, this, &APicoPawn::ClickButtonLeftGripPressed);
		InputComponent->BindAction("ButtonLeftGrip", IE_Released, this, &APicoPawn::ClickButtonLeftGripReleased);

		InputComponent->BindAction("ButtonLeftTrigger", IE_Pressed, this, &APicoPawn::ClickButtonLeftTriggerPressed);
		InputComponent->BindAction("ButtonLeftTrigger", IE_Released, this, &APicoPawn::ClickButtonLeftTriggerReleased);


		InputComponent->BindAction("ButtonLeftHome", IE_Pressed, this, &APicoPawn::ClickButtonLeftHomePressed);
		InputComponent->BindAction("ButtonLeftHome", IE_Released, this, &APicoPawn::ClickButtonLeftHomeReleased);

		InputComponent->BindAction("ButtonLeftMenu", IE_Pressed, this, &APicoPawn::ClickButtonLeftMenuPressed);
		InputComponent->BindAction("ButtonLeftMenu", IE_Released, this, &APicoPawn::ClickButtonLeftMenuReleased);

		InputComponent->BindAction("ButtonRightGrip", IE_Pressed, this, &APicoPawn::ClickButtonRightGripPressed);
		InputComponent->BindAction("ButtonRightGrip", IE_Released, this, &APicoPawn::ClickButtonRightGripReleased);

		InputComponent->BindAction("ButtonRightTrigger", IE_Pressed, this, &APicoPawn::ClickButtonRightTriggerPressed);
		InputComponent->BindAction("ButtonRightTrigger", IE_Released, this, &APicoPawn::ClickButtonRightTriggerReleased);

		InputComponent->BindAction("ButtonRightHome", IE_Pressed, this, &APicoPawn::ClickButtonRightHomePressed);
		InputComponent->BindAction("ButtonRightHome", IE_Released, this, &APicoPawn::ClickButtonRightHomeReleased);

		InputComponent->BindAction("ButtonRightSystem", IE_Pressed, this, &APicoPawn::ClickButtonRightSystemPressed);
		InputComponent->BindAction("ButtonRightSystem", IE_Released, this, &APicoPawn::ClickButtonRightSystemReleased);



		InputComponent->BindAxis("LeftTriggerAxis", this, &APicoPawn::LeftTriggerAxisVal);
		InputComponent->BindAxis("LeftGripAxis", this, &APicoPawn::LeftGripAxisVal);

		InputComponent->BindAxis("RightTriggerAxis", this, &APicoPawn::RightTriggerAxisVal);
		InputComponent->BindAxis("RightGripAxis", this, &APicoPawn::RightGripAxisVal);

		InputComponent->BindAxis("LeftJoyStickXAxis", this, &APicoPawn::LeftJoyStickXVal);
		InputComponent->BindAxis("LeftJoyStickYAxis", this, &APicoPawn::LeftJoyStickYVal);

		InputComponent->BindAxis("RightJoyStickXAxis", this, &APicoPawn::RightJoyStickXVal);
		InputComponent->BindAxis("RightJoyStickYAxis", this, &APicoPawn::RightJoyStickYVal);

	}

}

void APicoPawn::ClickButtonAPressed()
{
	this->AButtonPressed = true;
}

void APicoPawn::ClickButtonAReleased()
{
	this->AButtonPressed = false;
}

void APicoPawn::ClickButtonBPressed()
{
	this->BButtonPressed = true;
}

void APicoPawn::ClickButtonBReleased()
{
	this->BButtonPressed = false;
}

void APicoPawn::ClickButtonXPressed()
{
	this->XButtonPressed = true;
}

void APicoPawn::ClickButtonXReleased()
{
	this->XButtonPressed = false;
}

void APicoPawn::ClickButtonYPressed()
{
	this->YButtonPressed = true;
}

void APicoPawn::ClickButtonYReleased()
{
	this->YButtonPressed = false;
}

void APicoPawn::ClickButtonLeftHomePressed()
{
	this->LeftHomePressed = true;
}

void APicoPawn::ClickButtonLeftHomeReleased()
{
	this->LeftHomePressed = false;
}

void APicoPawn::ClickButtonLeftMenuPressed()
{
	this->LeftMenuPressed = true;
}

void APicoPawn::ClickButtonLeftMenuReleased()
{
	this->LeftMenuPressed = false;
}

void APicoPawn::ClickButtonRightHomePressed()
{
	this->RightHomePressed = true;
}

void APicoPawn::ClickButtonRightHomeReleased()
{
	this->RightHomePressed = false;
}

void APicoPawn::ClickButtonRightSystemPressed()
{
	this->RightSystemPressed = true;
}

void APicoPawn::ClickButtonRightSystemReleased()
{
	this->RightSystemPressed = false;
}

void APicoPawn::ClickButtonLeftTriggerPressed()
{
	this->LeftTriggerPressed = true;
}

void APicoPawn::ClickButtonLeftTriggerReleased()
{
	this->LeftTriggerPressed = false;
}

void APicoPawn::ClickButtonLeftGripPressed()
{
	this->LeftGripPressed = true;
}

void APicoPawn::ClickButtonLeftGripReleased()
{
	this->LeftGripPressed = false;
}

void APicoPawn::ClickButtonRightTriggerPressed()
{
	this->RightTriggerPressed = true;
}

void APicoPawn::ClickButtonRightTriggerReleased()
{
	this->RightTriggerPressed = false;
}

void APicoPawn::ClickButtonRightGripPressed()
{
	this->RightGripPressed = true;
}

void APicoPawn::ClickButtonRightGripReleased()
{
	this->RightGripPressed = false;
}

void APicoPawn::LeftTriggerAxisVal(float Val)
{
	this->LeftTriggerAxis = Val;
}

void APicoPawn::LeftGripAxisVal(float Val)
{
	this->LeftGripAxis = Val;
}

void APicoPawn::LeftJoyStickXVal(float Val)
{
	this->LeftJoyStickXAxis = Val;
}

void APicoPawn::LeftJoyStickYVal(float Val)
{
	this->LeftJoyStickYAxis = Val;
}

void APicoPawn::RightTriggerAxisVal(float Val)
{
	this->RightTriggerAxis = Val;
}

void APicoPawn::RightGripAxisVal(float Val)
{
	this->RightGripAxis = Val;
}

void APicoPawn::RightJoyStickXVal(float Val)
{
	this->RightJoyStickXAxis = Val;
}

void APicoPawn::RightJoyStickYVal(float Val)
{
	this->RightJoyStickYAxis = Val;
}


