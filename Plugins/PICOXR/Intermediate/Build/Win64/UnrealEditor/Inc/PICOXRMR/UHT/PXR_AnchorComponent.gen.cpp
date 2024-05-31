// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PICOXRMR/Public/PXR_AnchorComponent.h"
#include "PICOXRMR/Public/PXR_MRTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePXR_AnchorComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	PICOXRMR_API UClass* Z_Construct_UClass_UPICOAnchorComponent();
	PICOXRMR_API UClass* Z_Construct_UClass_UPICOAnchorComponent_NoRegister();
	PICOXRMR_API UClass* Z_Construct_UClass_UPICOMREventComponent();
	PICOXRMR_API UClass* Z_Construct_UClass_UPICOMREventComponent_NoRegister();
	PICOXRMR_API UEnum* Z_Construct_UEnum_PICOXRMR_EPICOSpatialTrackingState();
	PICOXRMR_API UEnum* Z_Construct_UEnum_PICOXRMR_EPICOSpatialTrackingStateMessage();
	PICOXRMR_API UScriptStruct* Z_Construct_UScriptStruct_FPICOAnchor();
	PICOXRMR_API UScriptStruct* Z_Construct_UScriptStruct_FPICOAnchorUUID();
	UPackage* Z_Construct_UPackage__Script_PICOXRMR();
// End Cross Module References
	struct PICOMREventComponent_eventOnSpatialTrackingStateUpdate_Parms
	{
		EPICOSpatialTrackingState SpatialTrackingState;
		EPICOSpatialTrackingStateMessage SpatialTrackingStateMessage;
	};
	static FName NAME_UPICOMREventComponent_OnSpatialTrackingStateUpdate = FName(TEXT("OnSpatialTrackingStateUpdate"));
	void UPICOMREventComponent::OnSpatialTrackingStateUpdate(EPICOSpatialTrackingState SpatialTrackingState, EPICOSpatialTrackingStateMessage SpatialTrackingStateMessage)
	{
		PICOMREventComponent_eventOnSpatialTrackingStateUpdate_Parms Parms;
		Parms.SpatialTrackingState=SpatialTrackingState;
		Parms.SpatialTrackingStateMessage=SpatialTrackingStateMessage;
		ProcessEvent(FindFunctionChecked(NAME_UPICOMREventComponent_OnSpatialTrackingStateUpdate),&Parms);
	}
	void UPICOMREventComponent::StaticRegisterNativesUPICOMREventComponent()
	{
	}
	struct Z_Construct_UFunction_UPICOMREventComponent_OnSpatialTrackingStateUpdate_Statics
	{
		static const UECodeGen_Private::FBytePropertyParams NewProp_SpatialTrackingState_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SpatialTrackingState;
		static const UECodeGen_Private::FBytePropertyParams NewProp_SpatialTrackingStateMessage_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SpatialTrackingStateMessage;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPICOMREventComponent_OnSpatialTrackingStateUpdate_Statics::NewProp_SpatialTrackingState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPICOMREventComponent_OnSpatialTrackingStateUpdate_Statics::NewProp_SpatialTrackingState = { "SpatialTrackingState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PICOMREventComponent_eventOnSpatialTrackingStateUpdate_Parms, SpatialTrackingState), Z_Construct_UEnum_PICOXRMR_EPICOSpatialTrackingState, METADATA_PARAMS(nullptr, 0) }; // 3831885250
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPICOMREventComponent_OnSpatialTrackingStateUpdate_Statics::NewProp_SpatialTrackingStateMessage_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPICOMREventComponent_OnSpatialTrackingStateUpdate_Statics::NewProp_SpatialTrackingStateMessage = { "SpatialTrackingStateMessage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PICOMREventComponent_eventOnSpatialTrackingStateUpdate_Parms, SpatialTrackingStateMessage), Z_Construct_UEnum_PICOXRMR_EPICOSpatialTrackingStateMessage, METADATA_PARAMS(nullptr, 0) }; // 2407655479
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPICOMREventComponent_OnSpatialTrackingStateUpdate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOMREventComponent_OnSpatialTrackingStateUpdate_Statics::NewProp_SpatialTrackingState_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOMREventComponent_OnSpatialTrackingStateUpdate_Statics::NewProp_SpatialTrackingState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOMREventComponent_OnSpatialTrackingStateUpdate_Statics::NewProp_SpatialTrackingStateMessage_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOMREventComponent_OnSpatialTrackingStateUpdate_Statics::NewProp_SpatialTrackingStateMessage,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPICOMREventComponent_OnSpatialTrackingStateUpdate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PXR_AnchorComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPICOMREventComponent_OnSpatialTrackingStateUpdate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPICOMREventComponent, nullptr, "OnSpatialTrackingStateUpdate", nullptr, nullptr, sizeof(PICOMREventComponent_eventOnSpatialTrackingStateUpdate_Parms), Z_Construct_UFunction_UPICOMREventComponent_OnSpatialTrackingStateUpdate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOMREventComponent_OnSpatialTrackingStateUpdate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPICOMREventComponent_OnSpatialTrackingStateUpdate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOMREventComponent_OnSpatialTrackingStateUpdate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPICOMREventComponent_OnSpatialTrackingStateUpdate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPICOMREventComponent_OnSpatialTrackingStateUpdate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPICOMREventComponent);
	UClass* Z_Construct_UClass_UPICOMREventComponent_NoRegister()
	{
		return UPICOMREventComponent::StaticClass();
	}
	struct Z_Construct_UClass_UPICOMREventComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPICOMREventComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_PICOXRMR,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPICOMREventComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPICOMREventComponent_OnSpatialTrackingStateUpdate, "OnSpatialTrackingStateUpdate" }, // 2514002657
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPICOMREventComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "PXR_AnchorComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/PXR_AnchorComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPICOMREventComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPICOMREventComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPICOMREventComponent_Statics::ClassParams = {
		&UPICOMREventComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UPICOMREventComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPICOMREventComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPICOMREventComponent()
	{
		if (!Z_Registration_Info_UClass_UPICOMREventComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPICOMREventComponent.OuterSingleton, Z_Construct_UClass_UPICOMREventComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPICOMREventComponent.OuterSingleton;
	}
	template<> PICOXRMR_API UClass* StaticClass<UPICOMREventComponent>()
	{
		return UPICOMREventComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPICOMREventComponent);
	UPICOMREventComponent::~UPICOMREventComponent() {}
	DEFINE_FUNCTION(UPICOAnchorComponent::execGetAnchorUUIDString)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetAnchorUUIDString();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPICOAnchorComponent::execGetAnchorUUID)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FPICOAnchorUUID*)Z_Param__Result=P_THIS->GetAnchorUUID();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPICOAnchorComponent::execSetAnchorUUID)
	{
		P_GET_STRUCT(FPICOAnchorUUID,Z_Param_NewAnchorUUID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAnchorUUID(Z_Param_NewAnchorUUID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPICOAnchorComponent::execIsAnchorValid)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsAnchorValid();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPICOAnchorComponent::execGetAnchorHandleString)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetAnchorHandleString();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPICOAnchorComponent::execSetAnchorHandle)
	{
		P_GET_STRUCT(FPICOAnchor,Z_Param_NewAnchorHandle);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAnchorHandle(Z_Param_NewAnchorHandle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPICOAnchorComponent::execGetAnchorHandle)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FPICOAnchor*)Z_Param__Result=P_THIS->GetAnchorHandle();
		P_NATIVE_END;
	}
	void UPICOAnchorComponent::StaticRegisterNativesUPICOAnchorComponent()
	{
		UClass* Class = UPICOAnchorComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAnchorHandle", &UPICOAnchorComponent::execGetAnchorHandle },
			{ "GetAnchorHandleString", &UPICOAnchorComponent::execGetAnchorHandleString },
			{ "GetAnchorUUID", &UPICOAnchorComponent::execGetAnchorUUID },
			{ "GetAnchorUUIDString", &UPICOAnchorComponent::execGetAnchorUUIDString },
			{ "IsAnchorValid", &UPICOAnchorComponent::execIsAnchorValid },
			{ "SetAnchorHandle", &UPICOAnchorComponent::execSetAnchorHandle },
			{ "SetAnchorUUID", &UPICOAnchorComponent::execSetAnchorUUID },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPICOAnchorComponent_GetAnchorHandle_Statics
	{
		struct PICOAnchorComponent_eventGetAnchorHandle_Parms
		{
			FPICOAnchor ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPICOAnchorComponent_GetAnchorHandle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PICOAnchorComponent_eventGetAnchorHandle_Parms, ReturnValue), Z_Construct_UScriptStruct_FPICOAnchor, METADATA_PARAMS(nullptr, 0) }; // 512787326
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPICOAnchorComponent_GetAnchorHandle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOAnchorComponent_GetAnchorHandle_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPICOAnchorComponent_GetAnchorHandle_Statics::Function_MetaDataParams[] = {
		{ "Category", "PXR|MR" },
		{ "ModuleRelativePath", "Public/PXR_AnchorComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPICOAnchorComponent_GetAnchorHandle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPICOAnchorComponent, nullptr, "GetAnchorHandle", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPICOAnchorComponent_GetAnchorHandle_Statics::PICOAnchorComponent_eventGetAnchorHandle_Parms), Z_Construct_UFunction_UPICOAnchorComponent_GetAnchorHandle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOAnchorComponent_GetAnchorHandle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPICOAnchorComponent_GetAnchorHandle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOAnchorComponent_GetAnchorHandle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPICOAnchorComponent_GetAnchorHandle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPICOAnchorComponent_GetAnchorHandle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPICOAnchorComponent_GetAnchorHandleString_Statics
	{
		struct PICOAnchorComponent_eventGetAnchorHandleString_Parms
		{
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPICOAnchorComponent_GetAnchorHandleString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PICOAnchorComponent_eventGetAnchorHandleString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPICOAnchorComponent_GetAnchorHandleString_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOAnchorComponent_GetAnchorHandleString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPICOAnchorComponent_GetAnchorHandleString_Statics::Function_MetaDataParams[] = {
		{ "Category", "PXR|MR" },
		{ "ModuleRelativePath", "Public/PXR_AnchorComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPICOAnchorComponent_GetAnchorHandleString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPICOAnchorComponent, nullptr, "GetAnchorHandleString", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPICOAnchorComponent_GetAnchorHandleString_Statics::PICOAnchorComponent_eventGetAnchorHandleString_Parms), Z_Construct_UFunction_UPICOAnchorComponent_GetAnchorHandleString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOAnchorComponent_GetAnchorHandleString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPICOAnchorComponent_GetAnchorHandleString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOAnchorComponent_GetAnchorHandleString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPICOAnchorComponent_GetAnchorHandleString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPICOAnchorComponent_GetAnchorHandleString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPICOAnchorComponent_GetAnchorUUID_Statics
	{
		struct PICOAnchorComponent_eventGetAnchorUUID_Parms
		{
			FPICOAnchorUUID ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPICOAnchorComponent_GetAnchorUUID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PICOAnchorComponent_eventGetAnchorUUID_Parms, ReturnValue), Z_Construct_UScriptStruct_FPICOAnchorUUID, METADATA_PARAMS(nullptr, 0) }; // 1646233693
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPICOAnchorComponent_GetAnchorUUID_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOAnchorComponent_GetAnchorUUID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPICOAnchorComponent_GetAnchorUUID_Statics::Function_MetaDataParams[] = {
		{ "Category", "PXR|MR" },
		{ "ModuleRelativePath", "Public/PXR_AnchorComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPICOAnchorComponent_GetAnchorUUID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPICOAnchorComponent, nullptr, "GetAnchorUUID", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPICOAnchorComponent_GetAnchorUUID_Statics::PICOAnchorComponent_eventGetAnchorUUID_Parms), Z_Construct_UFunction_UPICOAnchorComponent_GetAnchorUUID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOAnchorComponent_GetAnchorUUID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPICOAnchorComponent_GetAnchorUUID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOAnchorComponent_GetAnchorUUID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPICOAnchorComponent_GetAnchorUUID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPICOAnchorComponent_GetAnchorUUID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPICOAnchorComponent_GetAnchorUUIDString_Statics
	{
		struct PICOAnchorComponent_eventGetAnchorUUIDString_Parms
		{
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPICOAnchorComponent_GetAnchorUUIDString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PICOAnchorComponent_eventGetAnchorUUIDString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPICOAnchorComponent_GetAnchorUUIDString_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOAnchorComponent_GetAnchorUUIDString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPICOAnchorComponent_GetAnchorUUIDString_Statics::Function_MetaDataParams[] = {
		{ "Category", "PXR|MR" },
		{ "ModuleRelativePath", "Public/PXR_AnchorComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPICOAnchorComponent_GetAnchorUUIDString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPICOAnchorComponent, nullptr, "GetAnchorUUIDString", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPICOAnchorComponent_GetAnchorUUIDString_Statics::PICOAnchorComponent_eventGetAnchorUUIDString_Parms), Z_Construct_UFunction_UPICOAnchorComponent_GetAnchorUUIDString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOAnchorComponent_GetAnchorUUIDString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPICOAnchorComponent_GetAnchorUUIDString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOAnchorComponent_GetAnchorUUIDString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPICOAnchorComponent_GetAnchorUUIDString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPICOAnchorComponent_GetAnchorUUIDString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPICOAnchorComponent_IsAnchorValid_Statics
	{
		struct PICOAnchorComponent_eventIsAnchorValid_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UPICOAnchorComponent_IsAnchorValid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PICOAnchorComponent_eventIsAnchorValid_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPICOAnchorComponent_IsAnchorValid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PICOAnchorComponent_eventIsAnchorValid_Parms), &Z_Construct_UFunction_UPICOAnchorComponent_IsAnchorValid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPICOAnchorComponent_IsAnchorValid_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOAnchorComponent_IsAnchorValid_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPICOAnchorComponent_IsAnchorValid_Statics::Function_MetaDataParams[] = {
		{ "Category", "PXR|MR" },
		{ "ModuleRelativePath", "Public/PXR_AnchorComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPICOAnchorComponent_IsAnchorValid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPICOAnchorComponent, nullptr, "IsAnchorValid", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPICOAnchorComponent_IsAnchorValid_Statics::PICOAnchorComponent_eventIsAnchorValid_Parms), Z_Construct_UFunction_UPICOAnchorComponent_IsAnchorValid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOAnchorComponent_IsAnchorValid_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPICOAnchorComponent_IsAnchorValid_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOAnchorComponent_IsAnchorValid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPICOAnchorComponent_IsAnchorValid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPICOAnchorComponent_IsAnchorValid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPICOAnchorComponent_SetAnchorHandle_Statics
	{
		struct PICOAnchorComponent_eventSetAnchorHandle_Parms
		{
			FPICOAnchor NewAnchorHandle;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewAnchorHandle;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPICOAnchorComponent_SetAnchorHandle_Statics::NewProp_NewAnchorHandle = { "NewAnchorHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PICOAnchorComponent_eventSetAnchorHandle_Parms, NewAnchorHandle), Z_Construct_UScriptStruct_FPICOAnchor, METADATA_PARAMS(nullptr, 0) }; // 512787326
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPICOAnchorComponent_SetAnchorHandle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOAnchorComponent_SetAnchorHandle_Statics::NewProp_NewAnchorHandle,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPICOAnchorComponent_SetAnchorHandle_Statics::Function_MetaDataParams[] = {
		{ "Category", "PXR|MR" },
		{ "ModuleRelativePath", "Public/PXR_AnchorComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPICOAnchorComponent_SetAnchorHandle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPICOAnchorComponent, nullptr, "SetAnchorHandle", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPICOAnchorComponent_SetAnchorHandle_Statics::PICOAnchorComponent_eventSetAnchorHandle_Parms), Z_Construct_UFunction_UPICOAnchorComponent_SetAnchorHandle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOAnchorComponent_SetAnchorHandle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPICOAnchorComponent_SetAnchorHandle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOAnchorComponent_SetAnchorHandle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPICOAnchorComponent_SetAnchorHandle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPICOAnchorComponent_SetAnchorHandle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPICOAnchorComponent_SetAnchorUUID_Statics
	{
		struct PICOAnchorComponent_eventSetAnchorUUID_Parms
		{
			FPICOAnchorUUID NewAnchorUUID;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewAnchorUUID;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPICOAnchorComponent_SetAnchorUUID_Statics::NewProp_NewAnchorUUID = { "NewAnchorUUID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PICOAnchorComponent_eventSetAnchorUUID_Parms, NewAnchorUUID), Z_Construct_UScriptStruct_FPICOAnchorUUID, METADATA_PARAMS(nullptr, 0) }; // 1646233693
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPICOAnchorComponent_SetAnchorUUID_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOAnchorComponent_SetAnchorUUID_Statics::NewProp_NewAnchorUUID,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPICOAnchorComponent_SetAnchorUUID_Statics::Function_MetaDataParams[] = {
		{ "Category", "PXR|MR" },
		{ "ModuleRelativePath", "Public/PXR_AnchorComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPICOAnchorComponent_SetAnchorUUID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPICOAnchorComponent, nullptr, "SetAnchorUUID", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPICOAnchorComponent_SetAnchorUUID_Statics::PICOAnchorComponent_eventSetAnchorUUID_Parms), Z_Construct_UFunction_UPICOAnchorComponent_SetAnchorUUID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOAnchorComponent_SetAnchorUUID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPICOAnchorComponent_SetAnchorUUID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOAnchorComponent_SetAnchorUUID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPICOAnchorComponent_SetAnchorUUID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPICOAnchorComponent_SetAnchorUUID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPICOAnchorComponent);
	UClass* Z_Construct_UClass_UPICOAnchorComponent_NoRegister()
	{
		return UPICOAnchorComponent::StaticClass();
	}
	struct Z_Construct_UClass_UPICOAnchorComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPICOAnchorComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_PICOXRMR,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPICOAnchorComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPICOAnchorComponent_GetAnchorHandle, "GetAnchorHandle" }, // 602092503
		{ &Z_Construct_UFunction_UPICOAnchorComponent_GetAnchorHandleString, "GetAnchorHandleString" }, // 1874093500
		{ &Z_Construct_UFunction_UPICOAnchorComponent_GetAnchorUUID, "GetAnchorUUID" }, // 3733398034
		{ &Z_Construct_UFunction_UPICOAnchorComponent_GetAnchorUUIDString, "GetAnchorUUIDString" }, // 2452151840
		{ &Z_Construct_UFunction_UPICOAnchorComponent_IsAnchorValid, "IsAnchorValid" }, // 3754691917
		{ &Z_Construct_UFunction_UPICOAnchorComponent_SetAnchorHandle, "SetAnchorHandle" }, // 167560287
		{ &Z_Construct_UFunction_UPICOAnchorComponent_SetAnchorUUID, "SetAnchorUUID" }, // 2849572807
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPICOAnchorComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "PXR_AnchorComponent.h" },
		{ "ModuleRelativePath", "Public/PXR_AnchorComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPICOAnchorComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPICOAnchorComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPICOAnchorComponent_Statics::ClassParams = {
		&UPICOAnchorComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UPICOAnchorComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPICOAnchorComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPICOAnchorComponent()
	{
		if (!Z_Registration_Info_UClass_UPICOAnchorComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPICOAnchorComponent.OuterSingleton, Z_Construct_UClass_UPICOAnchorComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPICOAnchorComponent.OuterSingleton;
	}
	template<> PICOXRMR_API UClass* StaticClass<UPICOAnchorComponent>()
	{
		return UPICOAnchorComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPICOAnchorComponent);
	UPICOAnchorComponent::~UPICOAnchorComponent() {}
	struct Z_CompiledInDeferFile_FID_VR_VrVideoUpdateWS_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AnchorComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_VR_VrVideoUpdateWS_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AnchorComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPICOMREventComponent, UPICOMREventComponent::StaticClass, TEXT("UPICOMREventComponent"), &Z_Registration_Info_UClass_UPICOMREventComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPICOMREventComponent), 3222857795U) },
		{ Z_Construct_UClass_UPICOAnchorComponent, UPICOAnchorComponent::StaticClass, TEXT("UPICOAnchorComponent"), &Z_Registration_Info_UClass_UPICOAnchorComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPICOAnchorComponent), 1647016567U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_VR_VrVideoUpdateWS_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AnchorComponent_h_3842524699(TEXT("/Script/PICOXRMR"),
		Z_CompiledInDeferFile_FID_VR_VrVideoUpdateWS_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AnchorComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_VR_VrVideoUpdateWS_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AnchorComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
