// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PICOXRHMD/Private/PXR_EventManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePXR_EventManager() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	PICOXRHMD_API UClass* Z_Construct_UClass_UPICOXREventManager();
	PICOXRHMD_API UClass* Z_Construct_UClass_UPICOXREventManager_NoRegister();
	PICOXRHMD_API UFunction* Z_Construct_UDelegateFunction_PICOXRHMD_PXRBatteryStateChangedDelegate__DelegateSignature();
	PICOXRHMD_API UFunction* Z_Construct_UDelegateFunction_PICOXRHMD_PXRDeviceConnectChangedDelegate__DelegateSignature();
	PICOXRHMD_API UFunction* Z_Construct_UDelegateFunction_PICOXRHMD_PXRDeviceFitnessBandBatteryDelegate__DelegateSignature();
	PICOXRHMD_API UFunction* Z_Construct_UDelegateFunction_PICOXRHMD_PXRDeviceFitnessBandConnectionDelegate__DelegateSignature();
	PICOXRHMD_API UFunction* Z_Construct_UDelegateFunction_PICOXRHMD_PXRDeviceFitnessRecalibrationBandDelegate__DelegateSignature();
	PICOXRHMD_API UFunction* Z_Construct_UDelegateFunction_PICOXRHMD_PXRDeviceMainChangedDelegate__DelegateSignature();
	PICOXRHMD_API UFunction* Z_Construct_UDelegateFunction_PICOXRHMD_PXRHandnessChangedDelegate__DelegateSignature();
	PICOXRHMD_API UFunction* Z_Construct_UDelegateFunction_PICOXRHMD_PXRInputDeviceChangedDelegate__DelegateSignature();
	PICOXRHMD_API UFunction* Z_Construct_UDelegateFunction_PICOXRHMD_PXRIpdChanged__DelegateSignature();
	PICOXRHMD_API UFunction* Z_Construct_UDelegateFunction_PICOXRHMD_PXRLongHomeKey__DelegateSignature();
	PICOXRHMD_API UFunction* Z_Construct_UDelegateFunction_PICOXRHMD_PXRRefreshRateChanged__DelegateSignature();
	PICOXRHMD_API UFunction* Z_Construct_UDelegateFunction_PICOXRHMD_PXRResume__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_PICOXRHMD();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_PICOXRHMD_PXRDeviceMainChangedDelegate__DelegateSignature_Statics
	{
		struct _Script_PICOXRHMD_eventPXRDeviceMainChangedDelegate_Parms
		{
			int32 Handness;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_Handness;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_PICOXRHMD_PXRDeviceMainChangedDelegate__DelegateSignature_Statics::NewProp_Handness = { "Handness", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_PICOXRHMD_eventPXRDeviceMainChangedDelegate_Parms, Handness), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_PICOXRHMD_PXRDeviceMainChangedDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_PICOXRHMD_PXRDeviceMainChangedDelegate__DelegateSignature_Statics::NewProp_Handness,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_PICOXRHMD_PXRDeviceMainChangedDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//ControllerDelegate\n" },
		{ "ModuleRelativePath", "Private/PXR_EventManager.h" },
		{ "ToolTip", "ControllerDelegate" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_PICOXRHMD_PXRDeviceMainChangedDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_PICOXRHMD, nullptr, "PXRDeviceMainChangedDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_PICOXRHMD_PXRDeviceMainChangedDelegate__DelegateSignature_Statics::_Script_PICOXRHMD_eventPXRDeviceMainChangedDelegate_Parms), Z_Construct_UDelegateFunction_PICOXRHMD_PXRDeviceMainChangedDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_PICOXRHMD_PXRDeviceMainChangedDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_PICOXRHMD_PXRDeviceMainChangedDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_PICOXRHMD_PXRDeviceMainChangedDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_PICOXRHMD_PXRDeviceMainChangedDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_PICOXRHMD_PXRDeviceMainChangedDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_PICOXRHMD_PXRHandnessChangedDelegate__DelegateSignature_Statics
	{
		struct _Script_PICOXRHMD_eventPXRHandnessChangedDelegate_Parms
		{
			int32 Handness;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_Handness;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_PICOXRHMD_PXRHandnessChangedDelegate__DelegateSignature_Statics::NewProp_Handness = { "Handness", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_PICOXRHMD_eventPXRHandnessChangedDelegate_Parms, Handness), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_PICOXRHMD_PXRHandnessChangedDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_PICOXRHMD_PXRHandnessChangedDelegate__DelegateSignature_Statics::NewProp_Handness,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_PICOXRHMD_PXRHandnessChangedDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/PXR_EventManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_PICOXRHMD_PXRHandnessChangedDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_PICOXRHMD, nullptr, "PXRHandnessChangedDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_PICOXRHMD_PXRHandnessChangedDelegate__DelegateSignature_Statics::_Script_PICOXRHMD_eventPXRHandnessChangedDelegate_Parms), Z_Construct_UDelegateFunction_PICOXRHMD_PXRHandnessChangedDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_PICOXRHMD_PXRHandnessChangedDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_PICOXRHMD_PXRHandnessChangedDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_PICOXRHMD_PXRHandnessChangedDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_PICOXRHMD_PXRHandnessChangedDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_PICOXRHMD_PXRHandnessChangedDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_PICOXRHMD_PXRDeviceConnectChangedDelegate__DelegateSignature_Statics
	{
		struct _Script_PICOXRHMD_eventPXRDeviceConnectChangedDelegate_Parms
		{
			int32 Handness;
			int32 State;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_Handness;
		static const UECodeGen_Private::FIntPropertyParams NewProp_State;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_PICOXRHMD_PXRDeviceConnectChangedDelegate__DelegateSignature_Statics::NewProp_Handness = { "Handness", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_PICOXRHMD_eventPXRDeviceConnectChangedDelegate_Parms, Handness), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_PICOXRHMD_PXRDeviceConnectChangedDelegate__DelegateSignature_Statics::NewProp_State = { "State", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_PICOXRHMD_eventPXRDeviceConnectChangedDelegate_Parms, State), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_PICOXRHMD_PXRDeviceConnectChangedDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_PICOXRHMD_PXRDeviceConnectChangedDelegate__DelegateSignature_Statics::NewProp_Handness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_PICOXRHMD_PXRDeviceConnectChangedDelegate__DelegateSignature_Statics::NewProp_State,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_PICOXRHMD_PXRDeviceConnectChangedDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/PXR_EventManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_PICOXRHMD_PXRDeviceConnectChangedDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_PICOXRHMD, nullptr, "PXRDeviceConnectChangedDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_PICOXRHMD_PXRDeviceConnectChangedDelegate__DelegateSignature_Statics::_Script_PICOXRHMD_eventPXRDeviceConnectChangedDelegate_Parms), Z_Construct_UDelegateFunction_PICOXRHMD_PXRDeviceConnectChangedDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_PICOXRHMD_PXRDeviceConnectChangedDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_PICOXRHMD_PXRDeviceConnectChangedDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_PICOXRHMD_PXRDeviceConnectChangedDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_PICOXRHMD_PXRDeviceConnectChangedDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_PICOXRHMD_PXRDeviceConnectChangedDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_PICOXRHMD_PXRInputDeviceChangedDelegate__DelegateSignature_Statics
	{
		struct _Script_PICOXRHMD_eventPXRInputDeviceChangedDelegate_Parms
		{
			int32 State;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_State;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_PICOXRHMD_PXRInputDeviceChangedDelegate__DelegateSignature_Statics::NewProp_State = { "State", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_PICOXRHMD_eventPXRInputDeviceChangedDelegate_Parms, State), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_PICOXRHMD_PXRInputDeviceChangedDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_PICOXRHMD_PXRInputDeviceChangedDelegate__DelegateSignature_Statics::NewProp_State,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_PICOXRHMD_PXRInputDeviceChangedDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/PXR_EventManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_PICOXRHMD_PXRInputDeviceChangedDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_PICOXRHMD, nullptr, "PXRInputDeviceChangedDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_PICOXRHMD_PXRInputDeviceChangedDelegate__DelegateSignature_Statics::_Script_PICOXRHMD_eventPXRInputDeviceChangedDelegate_Parms), Z_Construct_UDelegateFunction_PICOXRHMD_PXRInputDeviceChangedDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_PICOXRHMD_PXRInputDeviceChangedDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_PICOXRHMD_PXRInputDeviceChangedDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_PICOXRHMD_PXRInputDeviceChangedDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_PICOXRHMD_PXRInputDeviceChangedDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_PICOXRHMD_PXRInputDeviceChangedDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_PICOXRHMD_PXRBatteryStateChangedDelegate__DelegateSignature_Statics
	{
		struct _Script_PICOXRHMD_eventPXRBatteryStateChangedDelegate_Parms
		{
			int32 State;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_State;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_PICOXRHMD_PXRBatteryStateChangedDelegate__DelegateSignature_Statics::NewProp_State = { "State", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_PICOXRHMD_eventPXRBatteryStateChangedDelegate_Parms, State), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_PICOXRHMD_PXRBatteryStateChangedDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_PICOXRHMD_PXRBatteryStateChangedDelegate__DelegateSignature_Statics::NewProp_State,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_PICOXRHMD_PXRBatteryStateChangedDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/PXR_EventManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_PICOXRHMD_PXRBatteryStateChangedDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_PICOXRHMD, nullptr, "PXRBatteryStateChangedDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_PICOXRHMD_PXRBatteryStateChangedDelegate__DelegateSignature_Statics::_Script_PICOXRHMD_eventPXRBatteryStateChangedDelegate_Parms), Z_Construct_UDelegateFunction_PICOXRHMD_PXRBatteryStateChangedDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_PICOXRHMD_PXRBatteryStateChangedDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_PICOXRHMD_PXRBatteryStateChangedDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_PICOXRHMD_PXRBatteryStateChangedDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_PICOXRHMD_PXRBatteryStateChangedDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_PICOXRHMD_PXRBatteryStateChangedDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_PICOXRHMD_PXRLongHomeKey__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_PICOXRHMD_PXRLongHomeKey__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/PXR_EventManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_PICOXRHMD_PXRLongHomeKey__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_PICOXRHMD, nullptr, "PXRLongHomeKey__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_PICOXRHMD_PXRLongHomeKey__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_PICOXRHMD_PXRLongHomeKey__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_PICOXRHMD_PXRLongHomeKey__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_PICOXRHMD_PXRLongHomeKey__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_PICOXRHMD_PXRResume__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_PICOXRHMD_PXRResume__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/PXR_EventManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_PICOXRHMD_PXRResume__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_PICOXRHMD, nullptr, "PXRResume__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_PICOXRHMD_PXRResume__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_PICOXRHMD_PXRResume__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_PICOXRHMD_PXRResume__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_PICOXRHMD_PXRResume__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_PICOXRHMD_PXRIpdChanged__DelegateSignature_Statics
	{
		struct _Script_PICOXRHMD_eventPXRIpdChanged_Parms
		{
			float NewIpd;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewIpd;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_PICOXRHMD_PXRIpdChanged__DelegateSignature_Statics::NewProp_NewIpd = { "NewIpd", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_PICOXRHMD_eventPXRIpdChanged_Parms, NewIpd), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_PICOXRHMD_PXRIpdChanged__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_PICOXRHMD_PXRIpdChanged__DelegateSignature_Statics::NewProp_NewIpd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_PICOXRHMD_PXRIpdChanged__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//HMDDelegate\n" },
		{ "ModuleRelativePath", "Private/PXR_EventManager.h" },
		{ "ToolTip", "HMDDelegate" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_PICOXRHMD_PXRIpdChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_PICOXRHMD, nullptr, "PXRIpdChanged__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_PICOXRHMD_PXRIpdChanged__DelegateSignature_Statics::_Script_PICOXRHMD_eventPXRIpdChanged_Parms), Z_Construct_UDelegateFunction_PICOXRHMD_PXRIpdChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_PICOXRHMD_PXRIpdChanged__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_PICOXRHMD_PXRIpdChanged__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_PICOXRHMD_PXRIpdChanged__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_PICOXRHMD_PXRIpdChanged__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_PICOXRHMD_PXRIpdChanged__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_PICOXRHMD_PXRRefreshRateChanged__DelegateSignature_Statics
	{
		struct _Script_PICOXRHMD_eventPXRRefreshRateChanged_Parms
		{
			float NewRate;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewRate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_PICOXRHMD_PXRRefreshRateChanged__DelegateSignature_Statics::NewProp_NewRate = { "NewRate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_PICOXRHMD_eventPXRRefreshRateChanged_Parms, NewRate), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_PICOXRHMD_PXRRefreshRateChanged__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_PICOXRHMD_PXRRefreshRateChanged__DelegateSignature_Statics::NewProp_NewRate,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_PICOXRHMD_PXRRefreshRateChanged__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//SystemDisplayRateDelegate\n" },
		{ "ModuleRelativePath", "Private/PXR_EventManager.h" },
		{ "ToolTip", "SystemDisplayRateDelegate" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_PICOXRHMD_PXRRefreshRateChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_PICOXRHMD, nullptr, "PXRRefreshRateChanged__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_PICOXRHMD_PXRRefreshRateChanged__DelegateSignature_Statics::_Script_PICOXRHMD_eventPXRRefreshRateChanged_Parms), Z_Construct_UDelegateFunction_PICOXRHMD_PXRRefreshRateChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_PICOXRHMD_PXRRefreshRateChanged__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_PICOXRHMD_PXRRefreshRateChanged__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_PICOXRHMD_PXRRefreshRateChanged__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_PICOXRHMD_PXRRefreshRateChanged__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_PICOXRHMD_PXRRefreshRateChanged__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_PICOXRHMD_PXRDeviceFitnessBandBatteryDelegate__DelegateSignature_Statics
	{
		struct _Script_PICOXRHMD_eventPXRDeviceFitnessBandBatteryDelegate_Parms
		{
			int32 Id;
			int32 BatteryState;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_Id;
		static const UECodeGen_Private::FIntPropertyParams NewProp_BatteryState;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_PICOXRHMD_PXRDeviceFitnessBandBatteryDelegate__DelegateSignature_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_PICOXRHMD_eventPXRDeviceFitnessBandBatteryDelegate_Parms, Id), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_PICOXRHMD_PXRDeviceFitnessBandBatteryDelegate__DelegateSignature_Statics::NewProp_BatteryState = { "BatteryState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_PICOXRHMD_eventPXRDeviceFitnessBandBatteryDelegate_Parms, BatteryState), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_PICOXRHMD_PXRDeviceFitnessBandBatteryDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_PICOXRHMD_PXRDeviceFitnessBandBatteryDelegate__DelegateSignature_Statics::NewProp_Id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_PICOXRHMD_PXRDeviceFitnessBandBatteryDelegate__DelegateSignature_Statics::NewProp_BatteryState,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_PICOXRHMD_PXRDeviceFitnessBandBatteryDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//BodyTracking Delegate\n" },
		{ "ModuleRelativePath", "Private/PXR_EventManager.h" },
		{ "ToolTip", "BodyTracking Delegate" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_PICOXRHMD_PXRDeviceFitnessBandBatteryDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_PICOXRHMD, nullptr, "PXRDeviceFitnessBandBatteryDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_PICOXRHMD_PXRDeviceFitnessBandBatteryDelegate__DelegateSignature_Statics::_Script_PICOXRHMD_eventPXRDeviceFitnessBandBatteryDelegate_Parms), Z_Construct_UDelegateFunction_PICOXRHMD_PXRDeviceFitnessBandBatteryDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_PICOXRHMD_PXRDeviceFitnessBandBatteryDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_PICOXRHMD_PXRDeviceFitnessBandBatteryDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_PICOXRHMD_PXRDeviceFitnessBandBatteryDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_PICOXRHMD_PXRDeviceFitnessBandBatteryDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_PICOXRHMD_PXRDeviceFitnessBandBatteryDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_PICOXRHMD_PXRDeviceFitnessBandConnectionDelegate__DelegateSignature_Statics
	{
		struct _Script_PICOXRHMD_eventPXRDeviceFitnessBandConnectionDelegate_Parms
		{
			int32 Count;
			int32 ConnectionState;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_Count;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ConnectionState;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_PICOXRHMD_PXRDeviceFitnessBandConnectionDelegate__DelegateSignature_Statics::NewProp_Count = { "Count", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_PICOXRHMD_eventPXRDeviceFitnessBandConnectionDelegate_Parms, Count), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_PICOXRHMD_PXRDeviceFitnessBandConnectionDelegate__DelegateSignature_Statics::NewProp_ConnectionState = { "ConnectionState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_PICOXRHMD_eventPXRDeviceFitnessBandConnectionDelegate_Parms, ConnectionState), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_PICOXRHMD_PXRDeviceFitnessBandConnectionDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_PICOXRHMD_PXRDeviceFitnessBandConnectionDelegate__DelegateSignature_Statics::NewProp_Count,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_PICOXRHMD_PXRDeviceFitnessBandConnectionDelegate__DelegateSignature_Statics::NewProp_ConnectionState,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_PICOXRHMD_PXRDeviceFitnessBandConnectionDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/PXR_EventManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_PICOXRHMD_PXRDeviceFitnessBandConnectionDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_PICOXRHMD, nullptr, "PXRDeviceFitnessBandConnectionDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_PICOXRHMD_PXRDeviceFitnessBandConnectionDelegate__DelegateSignature_Statics::_Script_PICOXRHMD_eventPXRDeviceFitnessBandConnectionDelegate_Parms), Z_Construct_UDelegateFunction_PICOXRHMD_PXRDeviceFitnessBandConnectionDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_PICOXRHMD_PXRDeviceFitnessBandConnectionDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_PICOXRHMD_PXRDeviceFitnessBandConnectionDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_PICOXRHMD_PXRDeviceFitnessBandConnectionDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_PICOXRHMD_PXRDeviceFitnessBandConnectionDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_PICOXRHMD_PXRDeviceFitnessBandConnectionDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_PICOXRHMD_PXRDeviceFitnessRecalibrationBandDelegate__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_PICOXRHMD_PXRDeviceFitnessRecalibrationBandDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/PXR_EventManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_PICOXRHMD_PXRDeviceFitnessRecalibrationBandDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_PICOXRHMD, nullptr, "PXRDeviceFitnessRecalibrationBandDelegate__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_PICOXRHMD_PXRDeviceFitnessRecalibrationBandDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_PICOXRHMD_PXRDeviceFitnessRecalibrationBandDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_PICOXRHMD_PXRDeviceFitnessRecalibrationBandDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_PICOXRHMD_PXRDeviceFitnessRecalibrationBandDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	void UPICOXREventManager::StaticRegisterNativesUPICOXREventManager()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPICOXREventManager);
	UClass* Z_Construct_UClass_UPICOXREventManager_NoRegister()
	{
		return UPICOXREventManager::StaticClass();
	}
	struct Z_Construct_UClass_UPICOXREventManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeviceMainChangedDelegate_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_DeviceMainChangedDelegate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HandnessChangedDelegate_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_HandnessChangedDelegate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeviceConnectChangedDelegate_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_DeviceConnectChangedDelegate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IpdChangedDelegate_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_IpdChangedDelegate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LongHomePressedDelegate_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_LongHomePressedDelegate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ResumeDelegate_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_ResumeDelegate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RefreshRateChangedDelegate_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_RefreshRateChangedDelegate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputDeviceChangedDelegate_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_InputDeviceChangedDelegate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BatteryStateChangedDelegate_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_BatteryStateChangedDelegate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FitnessBandBatteryDelegate_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_FitnessBandBatteryDelegate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FitnessBandConnectionDelegate_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_FitnessBandConnectionDelegate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FitnessRecalibrationBandDelegate_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_FitnessRecalibrationBandDelegate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPICOXREventManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_PICOXRHMD,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPICOXREventManager_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PXR_EventManager.h" },
		{ "ModuleRelativePath", "Private/PXR_EventManager.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPICOXREventManager_Statics::NewProp_DeviceMainChangedDelegate_MetaData[] = {
		{ "ModuleRelativePath", "Private/PXR_EventManager.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UPICOXREventManager_Statics::NewProp_DeviceMainChangedDelegate = { "DeviceMainChangedDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPICOXREventManager, DeviceMainChangedDelegate), Z_Construct_UDelegateFunction_PICOXRHMD_PXRDeviceMainChangedDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UPICOXREventManager_Statics::NewProp_DeviceMainChangedDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPICOXREventManager_Statics::NewProp_DeviceMainChangedDelegate_MetaData)) }; // 3572566225
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPICOXREventManager_Statics::NewProp_HandnessChangedDelegate_MetaData[] = {
		{ "ModuleRelativePath", "Private/PXR_EventManager.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UPICOXREventManager_Statics::NewProp_HandnessChangedDelegate = { "HandnessChangedDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPICOXREventManager, HandnessChangedDelegate), Z_Construct_UDelegateFunction_PICOXRHMD_PXRHandnessChangedDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UPICOXREventManager_Statics::NewProp_HandnessChangedDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPICOXREventManager_Statics::NewProp_HandnessChangedDelegate_MetaData)) }; // 2458781049
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPICOXREventManager_Statics::NewProp_DeviceConnectChangedDelegate_MetaData[] = {
		{ "ModuleRelativePath", "Private/PXR_EventManager.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UPICOXREventManager_Statics::NewProp_DeviceConnectChangedDelegate = { "DeviceConnectChangedDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPICOXREventManager, DeviceConnectChangedDelegate), Z_Construct_UDelegateFunction_PICOXRHMD_PXRDeviceConnectChangedDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UPICOXREventManager_Statics::NewProp_DeviceConnectChangedDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPICOXREventManager_Statics::NewProp_DeviceConnectChangedDelegate_MetaData)) }; // 3171553542
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPICOXREventManager_Statics::NewProp_IpdChangedDelegate_MetaData[] = {
		{ "ModuleRelativePath", "Private/PXR_EventManager.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UPICOXREventManager_Statics::NewProp_IpdChangedDelegate = { "IpdChangedDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPICOXREventManager, IpdChangedDelegate), Z_Construct_UDelegateFunction_PICOXRHMD_PXRIpdChanged__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UPICOXREventManager_Statics::NewProp_IpdChangedDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPICOXREventManager_Statics::NewProp_IpdChangedDelegate_MetaData)) }; // 350279339
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPICOXREventManager_Statics::NewProp_LongHomePressedDelegate_MetaData[] = {
		{ "ModuleRelativePath", "Private/PXR_EventManager.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UPICOXREventManager_Statics::NewProp_LongHomePressedDelegate = { "LongHomePressedDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPICOXREventManager, LongHomePressedDelegate), Z_Construct_UDelegateFunction_PICOXRHMD_PXRLongHomeKey__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UPICOXREventManager_Statics::NewProp_LongHomePressedDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPICOXREventManager_Statics::NewProp_LongHomePressedDelegate_MetaData)) }; // 978962575
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPICOXREventManager_Statics::NewProp_ResumeDelegate_MetaData[] = {
		{ "ModuleRelativePath", "Private/PXR_EventManager.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UPICOXREventManager_Statics::NewProp_ResumeDelegate = { "ResumeDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPICOXREventManager, ResumeDelegate), Z_Construct_UDelegateFunction_PICOXRHMD_PXRResume__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UPICOXREventManager_Statics::NewProp_ResumeDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPICOXREventManager_Statics::NewProp_ResumeDelegate_MetaData)) }; // 358500302
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPICOXREventManager_Statics::NewProp_RefreshRateChangedDelegate_MetaData[] = {
		{ "ModuleRelativePath", "Private/PXR_EventManager.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UPICOXREventManager_Statics::NewProp_RefreshRateChangedDelegate = { "RefreshRateChangedDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPICOXREventManager, RefreshRateChangedDelegate), Z_Construct_UDelegateFunction_PICOXRHMD_PXRRefreshRateChanged__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UPICOXREventManager_Statics::NewProp_RefreshRateChangedDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPICOXREventManager_Statics::NewProp_RefreshRateChangedDelegate_MetaData)) }; // 920520087
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPICOXREventManager_Statics::NewProp_InputDeviceChangedDelegate_MetaData[] = {
		{ "ModuleRelativePath", "Private/PXR_EventManager.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UPICOXREventManager_Statics::NewProp_InputDeviceChangedDelegate = { "InputDeviceChangedDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPICOXREventManager, InputDeviceChangedDelegate), Z_Construct_UDelegateFunction_PICOXRHMD_PXRInputDeviceChangedDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UPICOXREventManager_Statics::NewProp_InputDeviceChangedDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPICOXREventManager_Statics::NewProp_InputDeviceChangedDelegate_MetaData)) }; // 3518524460
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPICOXREventManager_Statics::NewProp_BatteryStateChangedDelegate_MetaData[] = {
		{ "ModuleRelativePath", "Private/PXR_EventManager.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UPICOXREventManager_Statics::NewProp_BatteryStateChangedDelegate = { "BatteryStateChangedDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPICOXREventManager, BatteryStateChangedDelegate), Z_Construct_UDelegateFunction_PICOXRHMD_PXRBatteryStateChangedDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UPICOXREventManager_Statics::NewProp_BatteryStateChangedDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPICOXREventManager_Statics::NewProp_BatteryStateChangedDelegate_MetaData)) }; // 675612268
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPICOXREventManager_Statics::NewProp_FitnessBandBatteryDelegate_MetaData[] = {
		{ "ModuleRelativePath", "Private/PXR_EventManager.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UPICOXREventManager_Statics::NewProp_FitnessBandBatteryDelegate = { "FitnessBandBatteryDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPICOXREventManager, FitnessBandBatteryDelegate), Z_Construct_UDelegateFunction_PICOXRHMD_PXRDeviceFitnessBandBatteryDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UPICOXREventManager_Statics::NewProp_FitnessBandBatteryDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPICOXREventManager_Statics::NewProp_FitnessBandBatteryDelegate_MetaData)) }; // 1895034663
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPICOXREventManager_Statics::NewProp_FitnessBandConnectionDelegate_MetaData[] = {
		{ "ModuleRelativePath", "Private/PXR_EventManager.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UPICOXREventManager_Statics::NewProp_FitnessBandConnectionDelegate = { "FitnessBandConnectionDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPICOXREventManager, FitnessBandConnectionDelegate), Z_Construct_UDelegateFunction_PICOXRHMD_PXRDeviceFitnessBandConnectionDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UPICOXREventManager_Statics::NewProp_FitnessBandConnectionDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPICOXREventManager_Statics::NewProp_FitnessBandConnectionDelegate_MetaData)) }; // 4104496325
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPICOXREventManager_Statics::NewProp_FitnessRecalibrationBandDelegate_MetaData[] = {
		{ "ModuleRelativePath", "Private/PXR_EventManager.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UPICOXREventManager_Statics::NewProp_FitnessRecalibrationBandDelegate = { "FitnessRecalibrationBandDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPICOXREventManager, FitnessRecalibrationBandDelegate), Z_Construct_UDelegateFunction_PICOXRHMD_PXRDeviceFitnessRecalibrationBandDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UPICOXREventManager_Statics::NewProp_FitnessRecalibrationBandDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPICOXREventManager_Statics::NewProp_FitnessRecalibrationBandDelegate_MetaData)) }; // 3211414531
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPICOXREventManager_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPICOXREventManager_Statics::NewProp_DeviceMainChangedDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPICOXREventManager_Statics::NewProp_HandnessChangedDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPICOXREventManager_Statics::NewProp_DeviceConnectChangedDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPICOXREventManager_Statics::NewProp_IpdChangedDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPICOXREventManager_Statics::NewProp_LongHomePressedDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPICOXREventManager_Statics::NewProp_ResumeDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPICOXREventManager_Statics::NewProp_RefreshRateChangedDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPICOXREventManager_Statics::NewProp_InputDeviceChangedDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPICOXREventManager_Statics::NewProp_BatteryStateChangedDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPICOXREventManager_Statics::NewProp_FitnessBandBatteryDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPICOXREventManager_Statics::NewProp_FitnessBandConnectionDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPICOXREventManager_Statics::NewProp_FitnessRecalibrationBandDelegate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPICOXREventManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPICOXREventManager>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPICOXREventManager_Statics::ClassParams = {
		&UPICOXREventManager::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPICOXREventManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPICOXREventManager_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPICOXREventManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPICOXREventManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPICOXREventManager()
	{
		if (!Z_Registration_Info_UClass_UPICOXREventManager.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPICOXREventManager.OuterSingleton, Z_Construct_UClass_UPICOXREventManager_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPICOXREventManager.OuterSingleton;
	}
	template<> PICOXRHMD_API UClass* StaticClass<UPICOXREventManager>()
	{
		return UPICOXREventManager::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPICOXREventManager);
	UPICOXREventManager::~UPICOXREventManager() {}
	struct Z_CompiledInDeferFile_FID_VR_VrVideoUpdateWS_Plugins_PICOXR_Source_PICOXRHMD_Private_PXR_EventManager_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_VR_VrVideoUpdateWS_Plugins_PICOXR_Source_PICOXRHMD_Private_PXR_EventManager_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPICOXREventManager, UPICOXREventManager::StaticClass, TEXT("UPICOXREventManager"), &Z_Registration_Info_UClass_UPICOXREventManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPICOXREventManager), 3894051099U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_VR_VrVideoUpdateWS_Plugins_PICOXR_Source_PICOXRHMD_Private_PXR_EventManager_h_3227696540(TEXT("/Script/PICOXRHMD"),
		Z_CompiledInDeferFile_FID_VR_VrVideoUpdateWS_Plugins_PICOXR_Source_PICOXRHMD_Private_PXR_EventManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_VR_VrVideoUpdateWS_Plugins_PICOXR_Source_PICOXRHMD_Private_PXR_EventManager_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
