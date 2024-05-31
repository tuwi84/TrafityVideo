// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PICOXRInput/Private/PXR_PICOXRPawn.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePXR_PICOXRPawn() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	PICOXRINPUT_API UClass* Z_Construct_UClass_APXR_PICOXRPawn();
	PICOXRINPUT_API UClass* Z_Construct_UClass_APXR_PICOXRPawn_NoRegister();
	UPackage* Z_Construct_UPackage__Script_PICOXRInput();
// End Cross Module References
	void APXR_PICOXRPawn::StaticRegisterNativesAPXR_PICOXRPawn()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APXR_PICOXRPawn);
	UClass* Z_Construct_UClass_APXR_PICOXRPawn_NoRegister()
	{
		return APXR_PICOXRPawn::StaticClass();
	}
	struct Z_Construct_UClass_APXR_PICOXRPawn_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RightTriggerAxis_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RightTriggerAxis;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RightGripAxis_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RightGripAxis;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RightJoyStickXAxis_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RightJoyStickXAxis;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RightJoyStickYAxis_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RightJoyStickYAxis;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LeftTriggerAxis_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LeftTriggerAxis;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LeftGripAxis_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LeftGripAxis;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LeftJoyStickXAxis_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LeftJoyStickXAxis;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LeftJoyStickYAxis_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LeftJoyStickYAxis;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AButtonPressed_MetaData[];
#endif
		static void NewProp_AButtonPressed_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_AButtonPressed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BButtonPressed_MetaData[];
#endif
		static void NewProp_BButtonPressed_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_BButtonPressed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_XButtonPressed_MetaData[];
#endif
		static void NewProp_XButtonPressed_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_XButtonPressed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_YButtonPressed_MetaData[];
#endif
		static void NewProp_YButtonPressed_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_YButtonPressed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RightHomePressed_MetaData[];
#endif
		static void NewProp_RightHomePressed_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_RightHomePressed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RightSystemPressed_MetaData[];
#endif
		static void NewProp_RightSystemPressed_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_RightSystemPressed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LeftHomePressed_MetaData[];
#endif
		static void NewProp_LeftHomePressed_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_LeftHomePressed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LeftMenuPressed_MetaData[];
#endif
		static void NewProp_LeftMenuPressed_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_LeftMenuPressed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RightTriggerPressed_MetaData[];
#endif
		static void NewProp_RightTriggerPressed_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_RightTriggerPressed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RightGripPressed_MetaData[];
#endif
		static void NewProp_RightGripPressed_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_RightGripPressed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LeftTriggerPressed_MetaData[];
#endif
		static void NewProp_LeftTriggerPressed_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_LeftTriggerPressed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LeftGripPressed_MetaData[];
#endif
		static void NewProp_LeftGripPressed_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_LeftGripPressed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APXR_PICOXRPawn_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_PICOXRInput,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APXR_PICOXRPawn_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "PXR_PICOXRPawn.h" },
		{ "ModuleRelativePath", "Private/PXR_PICOXRPawn.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APXR_PICOXRPawn_Statics::NewProp_RightTriggerAxis_MetaData[] = {
		{ "Category", "PICOPawn" },
		{ "ModuleRelativePath", "Private/PXR_PICOXRPawn.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APXR_PICOXRPawn_Statics::NewProp_RightTriggerAxis = { "RightTriggerAxis", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APXR_PICOXRPawn, RightTriggerAxis), METADATA_PARAMS(Z_Construct_UClass_APXR_PICOXRPawn_Statics::NewProp_RightTriggerAxis_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APXR_PICOXRPawn_Statics::NewProp_RightTriggerAxis_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APXR_PICOXRPawn_Statics::NewProp_RightGripAxis_MetaData[] = {
		{ "Category", "PICOPawn" },
		{ "ModuleRelativePath", "Private/PXR_PICOXRPawn.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APXR_PICOXRPawn_Statics::NewProp_RightGripAxis = { "RightGripAxis", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APXR_PICOXRPawn, RightGripAxis), METADATA_PARAMS(Z_Construct_UClass_APXR_PICOXRPawn_Statics::NewProp_RightGripAxis_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APXR_PICOXRPawn_Statics::NewProp_RightGripAxis_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APXR_PICOXRPawn_Statics::NewProp_RightJoyStickXAxis_MetaData[] = {
		{ "Category", "PICOPawn" },
		{ "ModuleRelativePath", "Private/PXR_PICOXRPawn.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APXR_PICOXRPawn_Statics::NewProp_RightJoyStickXAxis = { "RightJoyStickXAxis", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APXR_PICOXRPawn, RightJoyStickXAxis), METADATA_PARAMS(Z_Construct_UClass_APXR_PICOXRPawn_Statics::NewProp_RightJoyStickXAxis_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APXR_PICOXRPawn_Statics::NewProp_RightJoyStickXAxis_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APXR_PICOXRPawn_Statics::NewProp_RightJoyStickYAxis_MetaData[] = {
		{ "Category", "PICOPawn" },
		{ "ModuleRelativePath", "Private/PXR_PICOXRPawn.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APXR_PICOXRPawn_Statics::NewProp_RightJoyStickYAxis = { "RightJoyStickYAxis", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APXR_PICOXRPawn, RightJoyStickYAxis), METADATA_PARAMS(Z_Construct_UClass_APXR_PICOXRPawn_Statics::NewProp_RightJoyStickYAxis_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APXR_PICOXRPawn_Statics::NewProp_RightJoyStickYAxis_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APXR_PICOXRPawn_Statics::NewProp_LeftTriggerAxis_MetaData[] = {
		{ "Category", "PICOPawn" },
		{ "ModuleRelativePath", "Private/PXR_PICOXRPawn.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APXR_PICOXRPawn_Statics::NewProp_LeftTriggerAxis = { "LeftTriggerAxis", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APXR_PICOXRPawn, LeftTriggerAxis), METADATA_PARAMS(Z_Construct_UClass_APXR_PICOXRPawn_Statics::NewProp_LeftTriggerAxis_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APXR_PICOXRPawn_Statics::NewProp_LeftTriggerAxis_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APXR_PICOXRPawn_Statics::NewProp_LeftGripAxis_MetaData[] = {
		{ "Category", "PICOPawn" },
		{ "ModuleRelativePath", "Private/PXR_PICOXRPawn.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APXR_PICOXRPawn_Statics::NewProp_LeftGripAxis = { "LeftGripAxis", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APXR_PICOXRPawn, LeftGripAxis), METADATA_PARAMS(Z_Construct_UClass_APXR_PICOXRPawn_Statics::NewProp_LeftGripAxis_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APXR_PICOXRPawn_Statics::NewProp_LeftGripAxis_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APXR_PICOXRPawn_Statics::NewProp_LeftJoyStickXAxis_MetaData[] = {
		{ "Category", "PICOPawn" },
		{ "ModuleRelativePath", "Private/PXR_PICOXRPawn.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APXR_PICOXRPawn_Statics::NewProp_LeftJoyStickXAxis = { "LeftJoyStickXAxis", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APXR_PICOXRPawn, LeftJoyStickXAxis), METADATA_PARAMS(Z_Construct_UClass_APXR_PICOXRPawn_Statics::NewProp_LeftJoyStickXAxis_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APXR_PICOXRPawn_Statics::NewProp_LeftJoyStickXAxis_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APXR_PICOXRPawn_Statics::NewProp_LeftJoyStickYAxis_MetaData[] = {
		{ "Category", "PICOPawn" },
		{ "ModuleRelativePath", "Private/PXR_PICOXRPawn.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APXR_PICOXRPawn_Statics::NewProp_LeftJoyStickYAxis = { "LeftJoyStickYAxis", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APXR_PICOXRPawn, LeftJoyStickYAxis), METADATA_PARAMS(Z_Construct_UClass_APXR_PICOXRPawn_Statics::NewProp_LeftJoyStickYAxis_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APXR_PICOXRPawn_Statics::NewProp_LeftJoyStickYAxis_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APXR_PICOXRPawn_Statics::NewProp_AButtonPressed_MetaData[] = {
		{ "Category", "PICOPawn" },
		{ "ModuleRelativePath", "Private/PXR_PICOXRPawn.h" },
	};
#endif
	void Z_Construct_UClass_APXR_PICOXRPawn_Statics::NewProp_AButtonPressed_SetBit(void* Obj)
	{
		((APXR_PICOXRPawn*)Obj)->AButtonPressed = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APXR_PICOXRPawn_Statics::NewProp_AButtonPressed = { "AButtonPressed", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(APXR_PICOXRPawn), &Z_Construct_UClass_APXR_PICOXRPawn_Statics::NewProp_AButtonPressed_SetBit, METADATA_PARAMS(Z_Construct_UClass_APXR_PICOXRPawn_Statics::NewProp_AButtonPressed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APXR_PICOXRPawn_Statics::NewProp_AButtonPressed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APXR_PICOXRPawn_Statics::NewProp_BButtonPressed_MetaData[] = {
		{ "Category", "PICOPawn" },
		{ "ModuleRelativePath", "Private/PXR_PICOXRPawn.h" },
	};
#endif
	void Z_Construct_UClass_APXR_PICOXRPawn_Statics::NewProp_BButtonPressed_SetBit(void* Obj)
	{
		((APXR_PICOXRPawn*)Obj)->BButtonPressed = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APXR_PICOXRPawn_Statics::NewProp_BButtonPressed = { "BButtonPressed", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(APXR_PICOXRPawn), &Z_Construct_UClass_APXR_PICOXRPawn_Statics::NewProp_BButtonPressed_SetBit, METADATA_PARAMS(Z_Construct_UClass_APXR_PICOXRPawn_Statics::NewProp_BButtonPressed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APXR_PICOXRPawn_Statics::NewProp_BButtonPressed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APXR_PICOXRPawn_Statics::NewProp_XButtonPressed_MetaData[] = {
		{ "Category", "PICOPawn" },
		{ "ModuleRelativePath", "Private/PXR_PICOXRPawn.h" },
	};
#endif
	void Z_Construct_UClass_APXR_PICOXRPawn_Statics::NewProp_XButtonPressed_SetBit(void* Obj)
	{
		((APXR_PICOXRPawn*)Obj)->XButtonPressed = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APXR_PICOXRPawn_Statics::NewProp_XButtonPressed = { "XButtonPressed", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(APXR_PICOXRPawn), &Z_Construct_UClass_APXR_PICOXRPawn_Statics::NewProp_XButtonPressed_SetBit, METADATA_PARAMS(Z_Construct_UClass_APXR_PICOXRPawn_Statics::NewProp_XButtonPressed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APXR_PICOXRPawn_Statics::NewProp_XButtonPressed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APXR_PICOXRPawn_Statics::NewProp_YButtonPressed_MetaData[] = {
		{ "Category", "PICOPawn" },
		{ "ModuleRelativePath", "Private/PXR_PICOXRPawn.h" },
	};
#endif
	void Z_Construct_UClass_APXR_PICOXRPawn_Statics::NewProp_YButtonPressed_SetBit(void* Obj)
	{
		((APXR_PICOXRPawn*)Obj)->YButtonPressed = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APXR_PICOXRPawn_Statics::NewProp_YButtonPressed = { "YButtonPressed", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(APXR_PICOXRPawn), &Z_Construct_UClass_APXR_PICOXRPawn_Statics::NewProp_YButtonPressed_SetBit, METADATA_PARAMS(Z_Construct_UClass_APXR_PICOXRPawn_Statics::NewProp_YButtonPressed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APXR_PICOXRPawn_Statics::NewProp_YButtonPressed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APXR_PICOXRPawn_Statics::NewProp_RightHomePressed_MetaData[] = {
		{ "Category", "PICOPawn" },
		{ "ModuleRelativePath", "Private/PXR_PICOXRPawn.h" },
	};
#endif
	void Z_Construct_UClass_APXR_PICOXRPawn_Statics::NewProp_RightHomePressed_SetBit(void* Obj)
	{
		((APXR_PICOXRPawn*)Obj)->RightHomePressed = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APXR_PICOXRPawn_Statics::NewProp_RightHomePressed = { "RightHomePressed", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(APXR_PICOXRPawn), &Z_Construct_UClass_APXR_PICOXRPawn_Statics::NewProp_RightHomePressed_SetBit, METADATA_PARAMS(Z_Construct_UClass_APXR_PICOXRPawn_Statics::NewProp_RightHomePressed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APXR_PICOXRPawn_Statics::NewProp_RightHomePressed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APXR_PICOXRPawn_Statics::NewProp_RightSystemPressed_MetaData[] = {
		{ "Category", "PICOPawn" },
		{ "ModuleRelativePath", "Private/PXR_PICOXRPawn.h" },
	};
#endif
	void Z_Construct_UClass_APXR_PICOXRPawn_Statics::NewProp_RightSystemPressed_SetBit(void* Obj)
	{
		((APXR_PICOXRPawn*)Obj)->RightSystemPressed = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APXR_PICOXRPawn_Statics::NewProp_RightSystemPressed = { "RightSystemPressed", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(APXR_PICOXRPawn), &Z_Construct_UClass_APXR_PICOXRPawn_Statics::NewProp_RightSystemPressed_SetBit, METADATA_PARAMS(Z_Construct_UClass_APXR_PICOXRPawn_Statics::NewProp_RightSystemPressed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APXR_PICOXRPawn_Statics::NewProp_RightSystemPressed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APXR_PICOXRPawn_Statics::NewProp_LeftHomePressed_MetaData[] = {
		{ "Category", "PICOPawn" },
		{ "ModuleRelativePath", "Private/PXR_PICOXRPawn.h" },
	};
#endif
	void Z_Construct_UClass_APXR_PICOXRPawn_Statics::NewProp_LeftHomePressed_SetBit(void* Obj)
	{
		((APXR_PICOXRPawn*)Obj)->LeftHomePressed = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APXR_PICOXRPawn_Statics::NewProp_LeftHomePressed = { "LeftHomePressed", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(APXR_PICOXRPawn), &Z_Construct_UClass_APXR_PICOXRPawn_Statics::NewProp_LeftHomePressed_SetBit, METADATA_PARAMS(Z_Construct_UClass_APXR_PICOXRPawn_Statics::NewProp_LeftHomePressed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APXR_PICOXRPawn_Statics::NewProp_LeftHomePressed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APXR_PICOXRPawn_Statics::NewProp_LeftMenuPressed_MetaData[] = {
		{ "Category", "PICOPawn" },
		{ "ModuleRelativePath", "Private/PXR_PICOXRPawn.h" },
	};
#endif
	void Z_Construct_UClass_APXR_PICOXRPawn_Statics::NewProp_LeftMenuPressed_SetBit(void* Obj)
	{
		((APXR_PICOXRPawn*)Obj)->LeftMenuPressed = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APXR_PICOXRPawn_Statics::NewProp_LeftMenuPressed = { "LeftMenuPressed", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(APXR_PICOXRPawn), &Z_Construct_UClass_APXR_PICOXRPawn_Statics::NewProp_LeftMenuPressed_SetBit, METADATA_PARAMS(Z_Construct_UClass_APXR_PICOXRPawn_Statics::NewProp_LeftMenuPressed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APXR_PICOXRPawn_Statics::NewProp_LeftMenuPressed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APXR_PICOXRPawn_Statics::NewProp_RightTriggerPressed_MetaData[] = {
		{ "Category", "PICOPawn" },
		{ "ModuleRelativePath", "Private/PXR_PICOXRPawn.h" },
	};
#endif
	void Z_Construct_UClass_APXR_PICOXRPawn_Statics::NewProp_RightTriggerPressed_SetBit(void* Obj)
	{
		((APXR_PICOXRPawn*)Obj)->RightTriggerPressed = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APXR_PICOXRPawn_Statics::NewProp_RightTriggerPressed = { "RightTriggerPressed", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(APXR_PICOXRPawn), &Z_Construct_UClass_APXR_PICOXRPawn_Statics::NewProp_RightTriggerPressed_SetBit, METADATA_PARAMS(Z_Construct_UClass_APXR_PICOXRPawn_Statics::NewProp_RightTriggerPressed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APXR_PICOXRPawn_Statics::NewProp_RightTriggerPressed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APXR_PICOXRPawn_Statics::NewProp_RightGripPressed_MetaData[] = {
		{ "Category", "PICOPawn" },
		{ "ModuleRelativePath", "Private/PXR_PICOXRPawn.h" },
	};
#endif
	void Z_Construct_UClass_APXR_PICOXRPawn_Statics::NewProp_RightGripPressed_SetBit(void* Obj)
	{
		((APXR_PICOXRPawn*)Obj)->RightGripPressed = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APXR_PICOXRPawn_Statics::NewProp_RightGripPressed = { "RightGripPressed", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(APXR_PICOXRPawn), &Z_Construct_UClass_APXR_PICOXRPawn_Statics::NewProp_RightGripPressed_SetBit, METADATA_PARAMS(Z_Construct_UClass_APXR_PICOXRPawn_Statics::NewProp_RightGripPressed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APXR_PICOXRPawn_Statics::NewProp_RightGripPressed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APXR_PICOXRPawn_Statics::NewProp_LeftTriggerPressed_MetaData[] = {
		{ "Category", "PICOPawn" },
		{ "ModuleRelativePath", "Private/PXR_PICOXRPawn.h" },
	};
#endif
	void Z_Construct_UClass_APXR_PICOXRPawn_Statics::NewProp_LeftTriggerPressed_SetBit(void* Obj)
	{
		((APXR_PICOXRPawn*)Obj)->LeftTriggerPressed = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APXR_PICOXRPawn_Statics::NewProp_LeftTriggerPressed = { "LeftTriggerPressed", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(APXR_PICOXRPawn), &Z_Construct_UClass_APXR_PICOXRPawn_Statics::NewProp_LeftTriggerPressed_SetBit, METADATA_PARAMS(Z_Construct_UClass_APXR_PICOXRPawn_Statics::NewProp_LeftTriggerPressed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APXR_PICOXRPawn_Statics::NewProp_LeftTriggerPressed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APXR_PICOXRPawn_Statics::NewProp_LeftGripPressed_MetaData[] = {
		{ "Category", "PICOPawn" },
		{ "ModuleRelativePath", "Private/PXR_PICOXRPawn.h" },
	};
#endif
	void Z_Construct_UClass_APXR_PICOXRPawn_Statics::NewProp_LeftGripPressed_SetBit(void* Obj)
	{
		((APXR_PICOXRPawn*)Obj)->LeftGripPressed = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APXR_PICOXRPawn_Statics::NewProp_LeftGripPressed = { "LeftGripPressed", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(APXR_PICOXRPawn), &Z_Construct_UClass_APXR_PICOXRPawn_Statics::NewProp_LeftGripPressed_SetBit, METADATA_PARAMS(Z_Construct_UClass_APXR_PICOXRPawn_Statics::NewProp_LeftGripPressed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APXR_PICOXRPawn_Statics::NewProp_LeftGripPressed_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APXR_PICOXRPawn_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APXR_PICOXRPawn_Statics::NewProp_RightTriggerAxis,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APXR_PICOXRPawn_Statics::NewProp_RightGripAxis,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APXR_PICOXRPawn_Statics::NewProp_RightJoyStickXAxis,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APXR_PICOXRPawn_Statics::NewProp_RightJoyStickYAxis,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APXR_PICOXRPawn_Statics::NewProp_LeftTriggerAxis,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APXR_PICOXRPawn_Statics::NewProp_LeftGripAxis,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APXR_PICOXRPawn_Statics::NewProp_LeftJoyStickXAxis,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APXR_PICOXRPawn_Statics::NewProp_LeftJoyStickYAxis,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APXR_PICOXRPawn_Statics::NewProp_AButtonPressed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APXR_PICOXRPawn_Statics::NewProp_BButtonPressed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APXR_PICOXRPawn_Statics::NewProp_XButtonPressed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APXR_PICOXRPawn_Statics::NewProp_YButtonPressed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APXR_PICOXRPawn_Statics::NewProp_RightHomePressed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APXR_PICOXRPawn_Statics::NewProp_RightSystemPressed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APXR_PICOXRPawn_Statics::NewProp_LeftHomePressed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APXR_PICOXRPawn_Statics::NewProp_LeftMenuPressed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APXR_PICOXRPawn_Statics::NewProp_RightTriggerPressed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APXR_PICOXRPawn_Statics::NewProp_RightGripPressed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APXR_PICOXRPawn_Statics::NewProp_LeftTriggerPressed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APXR_PICOXRPawn_Statics::NewProp_LeftGripPressed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APXR_PICOXRPawn_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APXR_PICOXRPawn>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_APXR_PICOXRPawn_Statics::ClassParams = {
		&APXR_PICOXRPawn::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_APXR_PICOXRPawn_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_APXR_PICOXRPawn_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APXR_PICOXRPawn_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APXR_PICOXRPawn_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APXR_PICOXRPawn()
	{
		if (!Z_Registration_Info_UClass_APXR_PICOXRPawn.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APXR_PICOXRPawn.OuterSingleton, Z_Construct_UClass_APXR_PICOXRPawn_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_APXR_PICOXRPawn.OuterSingleton;
	}
	template<> PICOXRINPUT_API UClass* StaticClass<APXR_PICOXRPawn>()
	{
		return APXR_PICOXRPawn::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(APXR_PICOXRPawn);
	APXR_PICOXRPawn::~APXR_PICOXRPawn() {}
	struct Z_CompiledInDeferFile_FID_VR_VrVideoUpdateWS_Plugins_PICOXR_Source_PICOXRInput_Private_PXR_PICOXRPawn_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_VR_VrVideoUpdateWS_Plugins_PICOXR_Source_PICOXRInput_Private_PXR_PICOXRPawn_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_APXR_PICOXRPawn, APXR_PICOXRPawn::StaticClass, TEXT("APXR_PICOXRPawn"), &Z_Registration_Info_UClass_APXR_PICOXRPawn, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APXR_PICOXRPawn), 1467660932U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_VR_VrVideoUpdateWS_Plugins_PICOXR_Source_PICOXRInput_Private_PXR_PICOXRPawn_h_2928989283(TEXT("/Script/PICOXRInput"),
		Z_CompiledInDeferFile_FID_VR_VrVideoUpdateWS_Plugins_PICOXR_Source_PICOXRInput_Private_PXR_PICOXRPawn_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_VR_VrVideoUpdateWS_Plugins_PICOXR_Source_PICOXRInput_Private_PXR_PICOXRPawn_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
