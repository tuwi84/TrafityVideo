// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PICOXRMR/Public/PXR_AsyncAnchorAction.h"
#include "PICOXRMR/Public/PXR_MRTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePXR_AsyncAnchorAction() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
	PICOXRMR_API UClass* Z_Construct_UClass_UPICOAnchorComponent_NoRegister();
	PICOXRMR_API UClass* Z_Construct_UClass_UPICOClearAnchorEntity_AsyncAction();
	PICOXRMR_API UClass* Z_Construct_UClass_UPICOClearAnchorEntity_AsyncAction_NoRegister();
	PICOXRMR_API UClass* Z_Construct_UClass_UPICOCreateAnchorEntity_AsyncAction();
	PICOXRMR_API UClass* Z_Construct_UClass_UPICOCreateAnchorEntity_AsyncAction_NoRegister();
	PICOXRMR_API UClass* Z_Construct_UClass_UPICODestroyAnchorEntityAction();
	PICOXRMR_API UClass* Z_Construct_UClass_UPICODestroyAnchorEntityAction_NoRegister();
	PICOXRMR_API UClass* Z_Construct_UClass_UPICOLoadAnchorEntity_AsyncAction();
	PICOXRMR_API UClass* Z_Construct_UClass_UPICOLoadAnchorEntity_AsyncAction_NoRegister();
	PICOXRMR_API UClass* Z_Construct_UClass_UPICOPersistAnchorEntity_AsyncAction();
	PICOXRMR_API UClass* Z_Construct_UClass_UPICOPersistAnchorEntity_AsyncAction_NoRegister();
	PICOXRMR_API UClass* Z_Construct_UClass_UPICOStartSpatialSceneCapture_AsyncAction();
	PICOXRMR_API UClass* Z_Construct_UClass_UPICOStartSpatialSceneCapture_AsyncAction_NoRegister();
	PICOXRMR_API UClass* Z_Construct_UClass_UPICOUnpersistAnchorEntity_AsyncAction();
	PICOXRMR_API UClass* Z_Construct_UClass_UPICOUnpersistAnchorEntity_AsyncAction_NoRegister();
	PICOXRMR_API UEnum* Z_Construct_UEnum_PICOXRMR_EPICOPersistLocation();
	PICOXRMR_API UEnum* Z_Construct_UEnum_PICOXRMR_EPICOResult();
	PICOXRMR_API UEnum* Z_Construct_UEnum_PICOXRMR_EPICOSpatialSceneCaptureStatus();
	PICOXRMR_API UFunction* Z_Construct_UDelegateFunction_PICOXRMR_PICOClearAnchorEntityActionFailure__DelegateSignature();
	PICOXRMR_API UFunction* Z_Construct_UDelegateFunction_PICOXRMR_PICOClearAnchorEntityActionSuccess__DelegateSignature();
	PICOXRMR_API UFunction* Z_Construct_UDelegateFunction_PICOXRMR_PICOCreateAnchorEntityActionFailure__DelegateSignature();
	PICOXRMR_API UFunction* Z_Construct_UDelegateFunction_PICOXRMR_PICOCreateAnchorEntityActionSuccess__DelegateSignature();
	PICOXRMR_API UFunction* Z_Construct_UDelegateFunction_PICOXRMR_PICODestroyAnchorEntityActionFailure__DelegateSignature();
	PICOXRMR_API UFunction* Z_Construct_UDelegateFunction_PICOXRMR_PICODestroyAnchorEntityActionSuccess__DelegateSignature();
	PICOXRMR_API UFunction* Z_Construct_UDelegateFunction_PICOXRMR_PICOLoadAnchorEntityActionFailure__DelegateSignature();
	PICOXRMR_API UFunction* Z_Construct_UDelegateFunction_PICOXRMR_PICOLoadAnchorEntityActionSuccess__DelegateSignature();
	PICOXRMR_API UFunction* Z_Construct_UDelegateFunction_PICOXRMR_PICOPersistAnchorEntityActionFailure__DelegateSignature();
	PICOXRMR_API UFunction* Z_Construct_UDelegateFunction_PICOXRMR_PICOPersistAnchorEntityActionSuccess__DelegateSignature();
	PICOXRMR_API UFunction* Z_Construct_UDelegateFunction_PICOXRMR_PICOStartSpatialSceneCaptureActionFailure__DelegateSignature();
	PICOXRMR_API UFunction* Z_Construct_UDelegateFunction_PICOXRMR_PICOStartSpatialSceneCaptureActionSuccess__DelegateSignature();
	PICOXRMR_API UFunction* Z_Construct_UDelegateFunction_PICOXRMR_PICOUnpersistAnchorEntityActionFailure__DelegateSignature();
	PICOXRMR_API UFunction* Z_Construct_UDelegateFunction_PICOXRMR_PICOUnpersistAnchorEntityActionSuccess__DelegateSignature();
	PICOXRMR_API UScriptStruct* Z_Construct_UScriptStruct_FAnchorLoadResult();
	PICOXRMR_API UScriptStruct* Z_Construct_UScriptStruct_FPICOAnchorLoadInfo();
	UPackage* Z_Construct_UPackage__Script_PICOXRMR();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_PICOXRMR_PICOCreateAnchorEntityActionSuccess__DelegateSignature_Statics
	{
		struct _Script_PICOXRMR_eventPICOCreateAnchorEntityActionSuccess_Parms
		{
			EPICOResult Result;
			UPICOAnchorComponent* AnchorEntityComponent;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Result;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnchorEntityComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AnchorEntityComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_PICOXRMR_PICOCreateAnchorEntityActionSuccess__DelegateSignature_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_PICOXRMR_PICOCreateAnchorEntityActionSuccess__DelegateSignature_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_PICOXRMR_eventPICOCreateAnchorEntityActionSuccess_Parms, Result), Z_Construct_UEnum_PICOXRMR_EPICOResult, METADATA_PARAMS(nullptr, 0) }; // 3569735258
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_PICOXRMR_PICOCreateAnchorEntityActionSuccess__DelegateSignature_Statics::NewProp_AnchorEntityComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_PICOXRMR_PICOCreateAnchorEntityActionSuccess__DelegateSignature_Statics::NewProp_AnchorEntityComponent = { "AnchorEntityComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_PICOXRMR_eventPICOCreateAnchorEntityActionSuccess_Parms, AnchorEntityComponent), Z_Construct_UClass_UPICOAnchorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_PICOXRMR_PICOCreateAnchorEntityActionSuccess__DelegateSignature_Statics::NewProp_AnchorEntityComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_PICOXRMR_PICOCreateAnchorEntityActionSuccess__DelegateSignature_Statics::NewProp_AnchorEntityComponent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_PICOXRMR_PICOCreateAnchorEntityActionSuccess__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_PICOXRMR_PICOCreateAnchorEntityActionSuccess__DelegateSignature_Statics::NewProp_Result_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_PICOXRMR_PICOCreateAnchorEntityActionSuccess__DelegateSignature_Statics::NewProp_Result,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_PICOXRMR_PICOCreateAnchorEntityActionSuccess__DelegateSignature_Statics::NewProp_AnchorEntityComponent,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_PICOXRMR_PICOCreateAnchorEntityActionSuccess__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/// @file PXR_AsyncAnchorAction.h\n" },
		{ "ModuleRelativePath", "Public/PXR_AsyncAnchorAction.h" },
		{ "ToolTip", "@file PXR_AsyncAnchorAction.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_PICOXRMR_PICOCreateAnchorEntityActionSuccess__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_PICOXRMR, nullptr, "PICOCreateAnchorEntityActionSuccess__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_PICOXRMR_PICOCreateAnchorEntityActionSuccess__DelegateSignature_Statics::_Script_PICOXRMR_eventPICOCreateAnchorEntityActionSuccess_Parms), Z_Construct_UDelegateFunction_PICOXRMR_PICOCreateAnchorEntityActionSuccess__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_PICOXRMR_PICOCreateAnchorEntityActionSuccess__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_PICOXRMR_PICOCreateAnchorEntityActionSuccess__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_PICOXRMR_PICOCreateAnchorEntityActionSuccess__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_PICOXRMR_PICOCreateAnchorEntityActionSuccess__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_PICOXRMR_PICOCreateAnchorEntityActionSuccess__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_PICOXRMR_PICOCreateAnchorEntityActionFailure__DelegateSignature_Statics
	{
		struct _Script_PICOXRMR_eventPICOCreateAnchorEntityActionFailure_Parms
		{
			EPICOResult Result;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Result;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_PICOXRMR_PICOCreateAnchorEntityActionFailure__DelegateSignature_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_PICOXRMR_PICOCreateAnchorEntityActionFailure__DelegateSignature_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_PICOXRMR_eventPICOCreateAnchorEntityActionFailure_Parms, Result), Z_Construct_UEnum_PICOXRMR_EPICOResult, METADATA_PARAMS(nullptr, 0) }; // 3569735258
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_PICOXRMR_PICOCreateAnchorEntityActionFailure__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_PICOXRMR_PICOCreateAnchorEntityActionFailure__DelegateSignature_Statics::NewProp_Result_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_PICOXRMR_PICOCreateAnchorEntityActionFailure__DelegateSignature_Statics::NewProp_Result,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_PICOXRMR_PICOCreateAnchorEntityActionFailure__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PXR_AsyncAnchorAction.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_PICOXRMR_PICOCreateAnchorEntityActionFailure__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_PICOXRMR, nullptr, "PICOCreateAnchorEntityActionFailure__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_PICOXRMR_PICOCreateAnchorEntityActionFailure__DelegateSignature_Statics::_Script_PICOXRMR_eventPICOCreateAnchorEntityActionFailure_Parms), Z_Construct_UDelegateFunction_PICOXRMR_PICOCreateAnchorEntityActionFailure__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_PICOXRMR_PICOCreateAnchorEntityActionFailure__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_PICOXRMR_PICOCreateAnchorEntityActionFailure__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_PICOXRMR_PICOCreateAnchorEntityActionFailure__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_PICOXRMR_PICOCreateAnchorEntityActionFailure__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_PICOXRMR_PICOCreateAnchorEntityActionFailure__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_PICOXRMR_PICODestroyAnchorEntityActionSuccess__DelegateSignature_Statics
	{
		struct _Script_PICOXRMR_eventPICODestroyAnchorEntityActionSuccess_Parms
		{
			EPICOResult Result;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Result;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_PICOXRMR_PICODestroyAnchorEntityActionSuccess__DelegateSignature_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_PICOXRMR_PICODestroyAnchorEntityActionSuccess__DelegateSignature_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_PICOXRMR_eventPICODestroyAnchorEntityActionSuccess_Parms, Result), Z_Construct_UEnum_PICOXRMR_EPICOResult, METADATA_PARAMS(nullptr, 0) }; // 3569735258
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_PICOXRMR_PICODestroyAnchorEntityActionSuccess__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_PICOXRMR_PICODestroyAnchorEntityActionSuccess__DelegateSignature_Statics::NewProp_Result_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_PICOXRMR_PICODestroyAnchorEntityActionSuccess__DelegateSignature_Statics::NewProp_Result,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_PICOXRMR_PICODestroyAnchorEntityActionSuccess__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PXR_AsyncAnchorAction.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_PICOXRMR_PICODestroyAnchorEntityActionSuccess__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_PICOXRMR, nullptr, "PICODestroyAnchorEntityActionSuccess__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_PICOXRMR_PICODestroyAnchorEntityActionSuccess__DelegateSignature_Statics::_Script_PICOXRMR_eventPICODestroyAnchorEntityActionSuccess_Parms), Z_Construct_UDelegateFunction_PICOXRMR_PICODestroyAnchorEntityActionSuccess__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_PICOXRMR_PICODestroyAnchorEntityActionSuccess__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_PICOXRMR_PICODestroyAnchorEntityActionSuccess__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_PICOXRMR_PICODestroyAnchorEntityActionSuccess__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_PICOXRMR_PICODestroyAnchorEntityActionSuccess__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_PICOXRMR_PICODestroyAnchorEntityActionSuccess__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_PICOXRMR_PICODestroyAnchorEntityActionFailure__DelegateSignature_Statics
	{
		struct _Script_PICOXRMR_eventPICODestroyAnchorEntityActionFailure_Parms
		{
			EPICOResult Result;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Result;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_PICOXRMR_PICODestroyAnchorEntityActionFailure__DelegateSignature_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_PICOXRMR_PICODestroyAnchorEntityActionFailure__DelegateSignature_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_PICOXRMR_eventPICODestroyAnchorEntityActionFailure_Parms, Result), Z_Construct_UEnum_PICOXRMR_EPICOResult, METADATA_PARAMS(nullptr, 0) }; // 3569735258
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_PICOXRMR_PICODestroyAnchorEntityActionFailure__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_PICOXRMR_PICODestroyAnchorEntityActionFailure__DelegateSignature_Statics::NewProp_Result_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_PICOXRMR_PICODestroyAnchorEntityActionFailure__DelegateSignature_Statics::NewProp_Result,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_PICOXRMR_PICODestroyAnchorEntityActionFailure__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PXR_AsyncAnchorAction.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_PICOXRMR_PICODestroyAnchorEntityActionFailure__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_PICOXRMR, nullptr, "PICODestroyAnchorEntityActionFailure__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_PICOXRMR_PICODestroyAnchorEntityActionFailure__DelegateSignature_Statics::_Script_PICOXRMR_eventPICODestroyAnchorEntityActionFailure_Parms), Z_Construct_UDelegateFunction_PICOXRMR_PICODestroyAnchorEntityActionFailure__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_PICOXRMR_PICODestroyAnchorEntityActionFailure__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_PICOXRMR_PICODestroyAnchorEntityActionFailure__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_PICOXRMR_PICODestroyAnchorEntityActionFailure__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_PICOXRMR_PICODestroyAnchorEntityActionFailure__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_PICOXRMR_PICODestroyAnchorEntityActionFailure__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_PICOXRMR_PICOPersistAnchorEntityActionSuccess__DelegateSignature_Statics
	{
		struct _Script_PICOXRMR_eventPICOPersistAnchorEntityActionSuccess_Parms
		{
			EPICOResult Result;
			TArray<UPICOAnchorComponent*> AnchorList;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Result;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AnchorList_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnchorList_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AnchorList;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_PICOXRMR_PICOPersistAnchorEntityActionSuccess__DelegateSignature_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_PICOXRMR_PICOPersistAnchorEntityActionSuccess__DelegateSignature_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_PICOXRMR_eventPICOPersistAnchorEntityActionSuccess_Parms, Result), Z_Construct_UEnum_PICOXRMR_EPICOResult, METADATA_PARAMS(nullptr, 0) }; // 3569735258
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_PICOXRMR_PICOPersistAnchorEntityActionSuccess__DelegateSignature_Statics::NewProp_AnchorList_Inner = { "AnchorList", nullptr, (EPropertyFlags)0x0000000000080000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UPICOAnchorComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_PICOXRMR_PICOPersistAnchorEntityActionSuccess__DelegateSignature_Statics::NewProp_AnchorList_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_PICOXRMR_PICOPersistAnchorEntityActionSuccess__DelegateSignature_Statics::NewProp_AnchorList = { "AnchorList", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_PICOXRMR_eventPICOPersistAnchorEntityActionSuccess_Parms, AnchorList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UDelegateFunction_PICOXRMR_PICOPersistAnchorEntityActionSuccess__DelegateSignature_Statics::NewProp_AnchorList_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_PICOXRMR_PICOPersistAnchorEntityActionSuccess__DelegateSignature_Statics::NewProp_AnchorList_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_PICOXRMR_PICOPersistAnchorEntityActionSuccess__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_PICOXRMR_PICOPersistAnchorEntityActionSuccess__DelegateSignature_Statics::NewProp_Result_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_PICOXRMR_PICOPersistAnchorEntityActionSuccess__DelegateSignature_Statics::NewProp_Result,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_PICOXRMR_PICOPersistAnchorEntityActionSuccess__DelegateSignature_Statics::NewProp_AnchorList_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_PICOXRMR_PICOPersistAnchorEntityActionSuccess__DelegateSignature_Statics::NewProp_AnchorList,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_PICOXRMR_PICOPersistAnchorEntityActionSuccess__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PXR_AsyncAnchorAction.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_PICOXRMR_PICOPersistAnchorEntityActionSuccess__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_PICOXRMR, nullptr, "PICOPersistAnchorEntityActionSuccess__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_PICOXRMR_PICOPersistAnchorEntityActionSuccess__DelegateSignature_Statics::_Script_PICOXRMR_eventPICOPersistAnchorEntityActionSuccess_Parms), Z_Construct_UDelegateFunction_PICOXRMR_PICOPersistAnchorEntityActionSuccess__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_PICOXRMR_PICOPersistAnchorEntityActionSuccess__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_PICOXRMR_PICOPersistAnchorEntityActionSuccess__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_PICOXRMR_PICOPersistAnchorEntityActionSuccess__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_PICOXRMR_PICOPersistAnchorEntityActionSuccess__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_PICOXRMR_PICOPersistAnchorEntityActionSuccess__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_PICOXRMR_PICOPersistAnchorEntityActionFailure__DelegateSignature_Statics
	{
		struct _Script_PICOXRMR_eventPICOPersistAnchorEntityActionFailure_Parms
		{
			EPICOResult Result;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Result;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_PICOXRMR_PICOPersistAnchorEntityActionFailure__DelegateSignature_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_PICOXRMR_PICOPersistAnchorEntityActionFailure__DelegateSignature_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_PICOXRMR_eventPICOPersistAnchorEntityActionFailure_Parms, Result), Z_Construct_UEnum_PICOXRMR_EPICOResult, METADATA_PARAMS(nullptr, 0) }; // 3569735258
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_PICOXRMR_PICOPersistAnchorEntityActionFailure__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_PICOXRMR_PICOPersistAnchorEntityActionFailure__DelegateSignature_Statics::NewProp_Result_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_PICOXRMR_PICOPersistAnchorEntityActionFailure__DelegateSignature_Statics::NewProp_Result,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_PICOXRMR_PICOPersistAnchorEntityActionFailure__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PXR_AsyncAnchorAction.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_PICOXRMR_PICOPersistAnchorEntityActionFailure__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_PICOXRMR, nullptr, "PICOPersistAnchorEntityActionFailure__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_PICOXRMR_PICOPersistAnchorEntityActionFailure__DelegateSignature_Statics::_Script_PICOXRMR_eventPICOPersistAnchorEntityActionFailure_Parms), Z_Construct_UDelegateFunction_PICOXRMR_PICOPersistAnchorEntityActionFailure__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_PICOXRMR_PICOPersistAnchorEntityActionFailure__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_PICOXRMR_PICOPersistAnchorEntityActionFailure__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_PICOXRMR_PICOPersistAnchorEntityActionFailure__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_PICOXRMR_PICOPersistAnchorEntityActionFailure__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_PICOXRMR_PICOPersistAnchorEntityActionFailure__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_PICOXRMR_PICOUnpersistAnchorEntityActionSuccess__DelegateSignature_Statics
	{
		struct _Script_PICOXRMR_eventPICOUnpersistAnchorEntityActionSuccess_Parms
		{
			EPICOResult Result;
			TArray<UPICOAnchorComponent*> AnchorList;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Result;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AnchorList_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnchorList_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AnchorList;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_PICOXRMR_PICOUnpersistAnchorEntityActionSuccess__DelegateSignature_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_PICOXRMR_PICOUnpersistAnchorEntityActionSuccess__DelegateSignature_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_PICOXRMR_eventPICOUnpersistAnchorEntityActionSuccess_Parms, Result), Z_Construct_UEnum_PICOXRMR_EPICOResult, METADATA_PARAMS(nullptr, 0) }; // 3569735258
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_PICOXRMR_PICOUnpersistAnchorEntityActionSuccess__DelegateSignature_Statics::NewProp_AnchorList_Inner = { "AnchorList", nullptr, (EPropertyFlags)0x0000000000080000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UPICOAnchorComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_PICOXRMR_PICOUnpersistAnchorEntityActionSuccess__DelegateSignature_Statics::NewProp_AnchorList_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_PICOXRMR_PICOUnpersistAnchorEntityActionSuccess__DelegateSignature_Statics::NewProp_AnchorList = { "AnchorList", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_PICOXRMR_eventPICOUnpersistAnchorEntityActionSuccess_Parms, AnchorList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UDelegateFunction_PICOXRMR_PICOUnpersistAnchorEntityActionSuccess__DelegateSignature_Statics::NewProp_AnchorList_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_PICOXRMR_PICOUnpersistAnchorEntityActionSuccess__DelegateSignature_Statics::NewProp_AnchorList_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_PICOXRMR_PICOUnpersistAnchorEntityActionSuccess__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_PICOXRMR_PICOUnpersistAnchorEntityActionSuccess__DelegateSignature_Statics::NewProp_Result_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_PICOXRMR_PICOUnpersistAnchorEntityActionSuccess__DelegateSignature_Statics::NewProp_Result,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_PICOXRMR_PICOUnpersistAnchorEntityActionSuccess__DelegateSignature_Statics::NewProp_AnchorList_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_PICOXRMR_PICOUnpersistAnchorEntityActionSuccess__DelegateSignature_Statics::NewProp_AnchorList,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_PICOXRMR_PICOUnpersistAnchorEntityActionSuccess__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PXR_AsyncAnchorAction.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_PICOXRMR_PICOUnpersistAnchorEntityActionSuccess__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_PICOXRMR, nullptr, "PICOUnpersistAnchorEntityActionSuccess__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_PICOXRMR_PICOUnpersistAnchorEntityActionSuccess__DelegateSignature_Statics::_Script_PICOXRMR_eventPICOUnpersistAnchorEntityActionSuccess_Parms), Z_Construct_UDelegateFunction_PICOXRMR_PICOUnpersistAnchorEntityActionSuccess__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_PICOXRMR_PICOUnpersistAnchorEntityActionSuccess__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_PICOXRMR_PICOUnpersistAnchorEntityActionSuccess__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_PICOXRMR_PICOUnpersistAnchorEntityActionSuccess__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_PICOXRMR_PICOUnpersistAnchorEntityActionSuccess__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_PICOXRMR_PICOUnpersistAnchorEntityActionSuccess__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_PICOXRMR_PICOUnpersistAnchorEntityActionFailure__DelegateSignature_Statics
	{
		struct _Script_PICOXRMR_eventPICOUnpersistAnchorEntityActionFailure_Parms
		{
			EPICOResult Result;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Result;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_PICOXRMR_PICOUnpersistAnchorEntityActionFailure__DelegateSignature_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_PICOXRMR_PICOUnpersistAnchorEntityActionFailure__DelegateSignature_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_PICOXRMR_eventPICOUnpersistAnchorEntityActionFailure_Parms, Result), Z_Construct_UEnum_PICOXRMR_EPICOResult, METADATA_PARAMS(nullptr, 0) }; // 3569735258
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_PICOXRMR_PICOUnpersistAnchorEntityActionFailure__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_PICOXRMR_PICOUnpersistAnchorEntityActionFailure__DelegateSignature_Statics::NewProp_Result_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_PICOXRMR_PICOUnpersistAnchorEntityActionFailure__DelegateSignature_Statics::NewProp_Result,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_PICOXRMR_PICOUnpersistAnchorEntityActionFailure__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PXR_AsyncAnchorAction.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_PICOXRMR_PICOUnpersistAnchorEntityActionFailure__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_PICOXRMR, nullptr, "PICOUnpersistAnchorEntityActionFailure__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_PICOXRMR_PICOUnpersistAnchorEntityActionFailure__DelegateSignature_Statics::_Script_PICOXRMR_eventPICOUnpersistAnchorEntityActionFailure_Parms), Z_Construct_UDelegateFunction_PICOXRMR_PICOUnpersistAnchorEntityActionFailure__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_PICOXRMR_PICOUnpersistAnchorEntityActionFailure__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_PICOXRMR_PICOUnpersistAnchorEntityActionFailure__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_PICOXRMR_PICOUnpersistAnchorEntityActionFailure__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_PICOXRMR_PICOUnpersistAnchorEntityActionFailure__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_PICOXRMR_PICOUnpersistAnchorEntityActionFailure__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_PICOXRMR_PICOClearAnchorEntityActionSuccess__DelegateSignature_Statics
	{
		struct _Script_PICOXRMR_eventPICOClearAnchorEntityActionSuccess_Parms
		{
			EPICOResult Result;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Result;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_PICOXRMR_PICOClearAnchorEntityActionSuccess__DelegateSignature_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_PICOXRMR_PICOClearAnchorEntityActionSuccess__DelegateSignature_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_PICOXRMR_eventPICOClearAnchorEntityActionSuccess_Parms, Result), Z_Construct_UEnum_PICOXRMR_EPICOResult, METADATA_PARAMS(nullptr, 0) }; // 3569735258
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_PICOXRMR_PICOClearAnchorEntityActionSuccess__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_PICOXRMR_PICOClearAnchorEntityActionSuccess__DelegateSignature_Statics::NewProp_Result_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_PICOXRMR_PICOClearAnchorEntityActionSuccess__DelegateSignature_Statics::NewProp_Result,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_PICOXRMR_PICOClearAnchorEntityActionSuccess__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PXR_AsyncAnchorAction.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_PICOXRMR_PICOClearAnchorEntityActionSuccess__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_PICOXRMR, nullptr, "PICOClearAnchorEntityActionSuccess__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_PICOXRMR_PICOClearAnchorEntityActionSuccess__DelegateSignature_Statics::_Script_PICOXRMR_eventPICOClearAnchorEntityActionSuccess_Parms), Z_Construct_UDelegateFunction_PICOXRMR_PICOClearAnchorEntityActionSuccess__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_PICOXRMR_PICOClearAnchorEntityActionSuccess__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_PICOXRMR_PICOClearAnchorEntityActionSuccess__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_PICOXRMR_PICOClearAnchorEntityActionSuccess__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_PICOXRMR_PICOClearAnchorEntityActionSuccess__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_PICOXRMR_PICOClearAnchorEntityActionSuccess__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_PICOXRMR_PICOClearAnchorEntityActionFailure__DelegateSignature_Statics
	{
		struct _Script_PICOXRMR_eventPICOClearAnchorEntityActionFailure_Parms
		{
			EPICOResult Result;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Result;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_PICOXRMR_PICOClearAnchorEntityActionFailure__DelegateSignature_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_PICOXRMR_PICOClearAnchorEntityActionFailure__DelegateSignature_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_PICOXRMR_eventPICOClearAnchorEntityActionFailure_Parms, Result), Z_Construct_UEnum_PICOXRMR_EPICOResult, METADATA_PARAMS(nullptr, 0) }; // 3569735258
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_PICOXRMR_PICOClearAnchorEntityActionFailure__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_PICOXRMR_PICOClearAnchorEntityActionFailure__DelegateSignature_Statics::NewProp_Result_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_PICOXRMR_PICOClearAnchorEntityActionFailure__DelegateSignature_Statics::NewProp_Result,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_PICOXRMR_PICOClearAnchorEntityActionFailure__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PXR_AsyncAnchorAction.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_PICOXRMR_PICOClearAnchorEntityActionFailure__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_PICOXRMR, nullptr, "PICOClearAnchorEntityActionFailure__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_PICOXRMR_PICOClearAnchorEntityActionFailure__DelegateSignature_Statics::_Script_PICOXRMR_eventPICOClearAnchorEntityActionFailure_Parms), Z_Construct_UDelegateFunction_PICOXRMR_PICOClearAnchorEntityActionFailure__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_PICOXRMR_PICOClearAnchorEntityActionFailure__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_PICOXRMR_PICOClearAnchorEntityActionFailure__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_PICOXRMR_PICOClearAnchorEntityActionFailure__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_PICOXRMR_PICOClearAnchorEntityActionFailure__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_PICOXRMR_PICOClearAnchorEntityActionFailure__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_PICOXRMR_PICOLoadAnchorEntityActionSuccess__DelegateSignature_Statics
	{
		struct _Script_PICOXRMR_eventPICOLoadAnchorEntityActionSuccess_Parms
		{
			EPICOResult Result;
			TArray<FAnchorLoadResult> AnchorLoadResults;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Result;
		static const UECodeGen_Private::FStructPropertyParams NewProp_AnchorLoadResults_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnchorLoadResults_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AnchorLoadResults;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_PICOXRMR_PICOLoadAnchorEntityActionSuccess__DelegateSignature_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_PICOXRMR_PICOLoadAnchorEntityActionSuccess__DelegateSignature_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_PICOXRMR_eventPICOLoadAnchorEntityActionSuccess_Parms, Result), Z_Construct_UEnum_PICOXRMR_EPICOResult, METADATA_PARAMS(nullptr, 0) }; // 3569735258
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_PICOXRMR_PICOLoadAnchorEntityActionSuccess__DelegateSignature_Statics::NewProp_AnchorLoadResults_Inner = { "AnchorLoadResults", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FAnchorLoadResult, METADATA_PARAMS(nullptr, 0) }; // 1274153048
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_PICOXRMR_PICOLoadAnchorEntityActionSuccess__DelegateSignature_Statics::NewProp_AnchorLoadResults_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_PICOXRMR_PICOLoadAnchorEntityActionSuccess__DelegateSignature_Statics::NewProp_AnchorLoadResults = { "AnchorLoadResults", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_PICOXRMR_eventPICOLoadAnchorEntityActionSuccess_Parms, AnchorLoadResults), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UDelegateFunction_PICOXRMR_PICOLoadAnchorEntityActionSuccess__DelegateSignature_Statics::NewProp_AnchorLoadResults_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_PICOXRMR_PICOLoadAnchorEntityActionSuccess__DelegateSignature_Statics::NewProp_AnchorLoadResults_MetaData)) }; // 1274153048
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_PICOXRMR_PICOLoadAnchorEntityActionSuccess__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_PICOXRMR_PICOLoadAnchorEntityActionSuccess__DelegateSignature_Statics::NewProp_Result_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_PICOXRMR_PICOLoadAnchorEntityActionSuccess__DelegateSignature_Statics::NewProp_Result,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_PICOXRMR_PICOLoadAnchorEntityActionSuccess__DelegateSignature_Statics::NewProp_AnchorLoadResults_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_PICOXRMR_PICOLoadAnchorEntityActionSuccess__DelegateSignature_Statics::NewProp_AnchorLoadResults,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_PICOXRMR_PICOLoadAnchorEntityActionSuccess__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PXR_AsyncAnchorAction.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_PICOXRMR_PICOLoadAnchorEntityActionSuccess__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_PICOXRMR, nullptr, "PICOLoadAnchorEntityActionSuccess__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_PICOXRMR_PICOLoadAnchorEntityActionSuccess__DelegateSignature_Statics::_Script_PICOXRMR_eventPICOLoadAnchorEntityActionSuccess_Parms), Z_Construct_UDelegateFunction_PICOXRMR_PICOLoadAnchorEntityActionSuccess__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_PICOXRMR_PICOLoadAnchorEntityActionSuccess__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_PICOXRMR_PICOLoadAnchorEntityActionSuccess__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_PICOXRMR_PICOLoadAnchorEntityActionSuccess__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_PICOXRMR_PICOLoadAnchorEntityActionSuccess__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_PICOXRMR_PICOLoadAnchorEntityActionSuccess__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_PICOXRMR_PICOLoadAnchorEntityActionFailure__DelegateSignature_Statics
	{
		struct _Script_PICOXRMR_eventPICOLoadAnchorEntityActionFailure_Parms
		{
			EPICOResult Result;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Result;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_PICOXRMR_PICOLoadAnchorEntityActionFailure__DelegateSignature_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_PICOXRMR_PICOLoadAnchorEntityActionFailure__DelegateSignature_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_PICOXRMR_eventPICOLoadAnchorEntityActionFailure_Parms, Result), Z_Construct_UEnum_PICOXRMR_EPICOResult, METADATA_PARAMS(nullptr, 0) }; // 3569735258
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_PICOXRMR_PICOLoadAnchorEntityActionFailure__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_PICOXRMR_PICOLoadAnchorEntityActionFailure__DelegateSignature_Statics::NewProp_Result_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_PICOXRMR_PICOLoadAnchorEntityActionFailure__DelegateSignature_Statics::NewProp_Result,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_PICOXRMR_PICOLoadAnchorEntityActionFailure__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PXR_AsyncAnchorAction.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_PICOXRMR_PICOLoadAnchorEntityActionFailure__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_PICOXRMR, nullptr, "PICOLoadAnchorEntityActionFailure__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_PICOXRMR_PICOLoadAnchorEntityActionFailure__DelegateSignature_Statics::_Script_PICOXRMR_eventPICOLoadAnchorEntityActionFailure_Parms), Z_Construct_UDelegateFunction_PICOXRMR_PICOLoadAnchorEntityActionFailure__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_PICOXRMR_PICOLoadAnchorEntityActionFailure__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_PICOXRMR_PICOLoadAnchorEntityActionFailure__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_PICOXRMR_PICOLoadAnchorEntityActionFailure__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_PICOXRMR_PICOLoadAnchorEntityActionFailure__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_PICOXRMR_PICOLoadAnchorEntityActionFailure__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_PICOXRMR_PICOStartSpatialSceneCaptureActionSuccess__DelegateSignature_Statics
	{
		struct _Script_PICOXRMR_eventPICOStartSpatialSceneCaptureActionSuccess_Parms
		{
			EPICOResult Result;
			EPICOSpatialSceneCaptureStatus SpatialSceneCaptureStatus;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Result;
		static const UECodeGen_Private::FBytePropertyParams NewProp_SpatialSceneCaptureStatus_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SpatialSceneCaptureStatus;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_PICOXRMR_PICOStartSpatialSceneCaptureActionSuccess__DelegateSignature_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_PICOXRMR_PICOStartSpatialSceneCaptureActionSuccess__DelegateSignature_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_PICOXRMR_eventPICOStartSpatialSceneCaptureActionSuccess_Parms, Result), Z_Construct_UEnum_PICOXRMR_EPICOResult, METADATA_PARAMS(nullptr, 0) }; // 3569735258
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_PICOXRMR_PICOStartSpatialSceneCaptureActionSuccess__DelegateSignature_Statics::NewProp_SpatialSceneCaptureStatus_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_PICOXRMR_PICOStartSpatialSceneCaptureActionSuccess__DelegateSignature_Statics::NewProp_SpatialSceneCaptureStatus = { "SpatialSceneCaptureStatus", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_PICOXRMR_eventPICOStartSpatialSceneCaptureActionSuccess_Parms, SpatialSceneCaptureStatus), Z_Construct_UEnum_PICOXRMR_EPICOSpatialSceneCaptureStatus, METADATA_PARAMS(nullptr, 0) }; // 239301979
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_PICOXRMR_PICOStartSpatialSceneCaptureActionSuccess__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_PICOXRMR_PICOStartSpatialSceneCaptureActionSuccess__DelegateSignature_Statics::NewProp_Result_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_PICOXRMR_PICOStartSpatialSceneCaptureActionSuccess__DelegateSignature_Statics::NewProp_Result,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_PICOXRMR_PICOStartSpatialSceneCaptureActionSuccess__DelegateSignature_Statics::NewProp_SpatialSceneCaptureStatus_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_PICOXRMR_PICOStartSpatialSceneCaptureActionSuccess__DelegateSignature_Statics::NewProp_SpatialSceneCaptureStatus,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_PICOXRMR_PICOStartSpatialSceneCaptureActionSuccess__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PXR_AsyncAnchorAction.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_PICOXRMR_PICOStartSpatialSceneCaptureActionSuccess__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_PICOXRMR, nullptr, "PICOStartSpatialSceneCaptureActionSuccess__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_PICOXRMR_PICOStartSpatialSceneCaptureActionSuccess__DelegateSignature_Statics::_Script_PICOXRMR_eventPICOStartSpatialSceneCaptureActionSuccess_Parms), Z_Construct_UDelegateFunction_PICOXRMR_PICOStartSpatialSceneCaptureActionSuccess__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_PICOXRMR_PICOStartSpatialSceneCaptureActionSuccess__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_PICOXRMR_PICOStartSpatialSceneCaptureActionSuccess__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_PICOXRMR_PICOStartSpatialSceneCaptureActionSuccess__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_PICOXRMR_PICOStartSpatialSceneCaptureActionSuccess__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_PICOXRMR_PICOStartSpatialSceneCaptureActionSuccess__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_PICOXRMR_PICOStartSpatialSceneCaptureActionFailure__DelegateSignature_Statics
	{
		struct _Script_PICOXRMR_eventPICOStartSpatialSceneCaptureActionFailure_Parms
		{
			EPICOResult Result;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Result;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_PICOXRMR_PICOStartSpatialSceneCaptureActionFailure__DelegateSignature_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_PICOXRMR_PICOStartSpatialSceneCaptureActionFailure__DelegateSignature_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_PICOXRMR_eventPICOStartSpatialSceneCaptureActionFailure_Parms, Result), Z_Construct_UEnum_PICOXRMR_EPICOResult, METADATA_PARAMS(nullptr, 0) }; // 3569735258
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_PICOXRMR_PICOStartSpatialSceneCaptureActionFailure__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_PICOXRMR_PICOStartSpatialSceneCaptureActionFailure__DelegateSignature_Statics::NewProp_Result_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_PICOXRMR_PICOStartSpatialSceneCaptureActionFailure__DelegateSignature_Statics::NewProp_Result,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_PICOXRMR_PICOStartSpatialSceneCaptureActionFailure__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PXR_AsyncAnchorAction.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_PICOXRMR_PICOStartSpatialSceneCaptureActionFailure__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_PICOXRMR, nullptr, "PICOStartSpatialSceneCaptureActionFailure__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_PICOXRMR_PICOStartSpatialSceneCaptureActionFailure__DelegateSignature_Statics::_Script_PICOXRMR_eventPICOStartSpatialSceneCaptureActionFailure_Parms), Z_Construct_UDelegateFunction_PICOXRMR_PICOStartSpatialSceneCaptureActionFailure__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_PICOXRMR_PICOStartSpatialSceneCaptureActionFailure__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_PICOXRMR_PICOStartSpatialSceneCaptureActionFailure__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_PICOXRMR_PICOStartSpatialSceneCaptureActionFailure__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_PICOXRMR_PICOStartSpatialSceneCaptureActionFailure__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_PICOXRMR_PICOStartSpatialSceneCaptureActionFailure__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UPICOCreateAnchorEntity_AsyncAction::execPXR_CreateAnchorEntity_Async)
	{
		P_GET_OBJECT(AActor,Z_Param_InBindingActor);
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_InAnchorEntityTransform);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InTimeout);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UPICOCreateAnchorEntity_AsyncAction**)Z_Param__Result=UPICOCreateAnchorEntity_AsyncAction::PXR_CreateAnchorEntity_Async(Z_Param_InBindingActor,Z_Param_Out_InAnchorEntityTransform,Z_Param_InTimeout);
		P_NATIVE_END;
	}
	void UPICOCreateAnchorEntity_AsyncAction::StaticRegisterNativesUPICOCreateAnchorEntity_AsyncAction()
	{
		UClass* Class = UPICOCreateAnchorEntity_AsyncAction::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "PXR_CreateAnchorEntity_Async", &UPICOCreateAnchorEntity_AsyncAction::execPXR_CreateAnchorEntity_Async },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPICOCreateAnchorEntity_AsyncAction_PXR_CreateAnchorEntity_Async_Statics
	{
		struct PICOCreateAnchorEntity_AsyncAction_eventPXR_CreateAnchorEntity_Async_Parms
		{
			AActor* InBindingActor;
			FTransform InAnchorEntityTransform;
			float InTimeout;
			UPICOCreateAnchorEntity_AsyncAction* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InBindingActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InAnchorEntityTransform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InAnchorEntityTransform;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InTimeout;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPICOCreateAnchorEntity_AsyncAction_PXR_CreateAnchorEntity_Async_Statics::NewProp_InBindingActor = { "InBindingActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PICOCreateAnchorEntity_AsyncAction_eventPXR_CreateAnchorEntity_Async_Parms, InBindingActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPICOCreateAnchorEntity_AsyncAction_PXR_CreateAnchorEntity_Async_Statics::NewProp_InAnchorEntityTransform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPICOCreateAnchorEntity_AsyncAction_PXR_CreateAnchorEntity_Async_Statics::NewProp_InAnchorEntityTransform = { "InAnchorEntityTransform", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PICOCreateAnchorEntity_AsyncAction_eventPXR_CreateAnchorEntity_Async_Parms, InAnchorEntityTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UFunction_UPICOCreateAnchorEntity_AsyncAction_PXR_CreateAnchorEntity_Async_Statics::NewProp_InAnchorEntityTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOCreateAnchorEntity_AsyncAction_PXR_CreateAnchorEntity_Async_Statics::NewProp_InAnchorEntityTransform_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPICOCreateAnchorEntity_AsyncAction_PXR_CreateAnchorEntity_Async_Statics::NewProp_InTimeout = { "InTimeout", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PICOCreateAnchorEntity_AsyncAction_eventPXR_CreateAnchorEntity_Async_Parms, InTimeout), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPICOCreateAnchorEntity_AsyncAction_PXR_CreateAnchorEntity_Async_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PICOCreateAnchorEntity_AsyncAction_eventPXR_CreateAnchorEntity_Async_Parms, ReturnValue), Z_Construct_UClass_UPICOCreateAnchorEntity_AsyncAction_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPICOCreateAnchorEntity_AsyncAction_PXR_CreateAnchorEntity_Async_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOCreateAnchorEntity_AsyncAction_PXR_CreateAnchorEntity_Async_Statics::NewProp_InBindingActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOCreateAnchorEntity_AsyncAction_PXR_CreateAnchorEntity_Async_Statics::NewProp_InAnchorEntityTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOCreateAnchorEntity_AsyncAction_PXR_CreateAnchorEntity_Async_Statics::NewProp_InTimeout,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOCreateAnchorEntity_AsyncAction_PXR_CreateAnchorEntity_Async_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPICOCreateAnchorEntity_AsyncAction_PXR_CreateAnchorEntity_Async_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Comment", "/// @brief Creates an anchor entity in the app's memory.\n/// @param InBindingActor (In) Sets the actor of the anchor entity.\n/// @param InAnchorEntityTransform (In) Sets the position, rotation, and scale of the anchor entity.\n/// @param InTimeout (In) Sets the maximum time allowed for creating an anchor entity to finish.\n/// @return\n/// - Result: Returns 0 for success and other values for failure. For failure reasons, refer to the EPICOResult enum. Currently, the returned error message result is unique, and you temporarily can not identify the error causes.\n/// - AnchorEntityComponent: Associated with an Actor. Each component owns a Handle and a UUID, and updates the anchor entity's pose to the Actor during each Actor Tick. \n" },
		{ "ModuleRelativePath", "Public/PXR_AsyncAnchorAction.h" },
		{ "ToolTip", "@brief Creates an anchor entity in the app's memory.\n@param InBindingActor (In) Sets the actor of the anchor entity.\n@param InAnchorEntityTransform (In) Sets the position, rotation, and scale of the anchor entity.\n@param InTimeout (In) Sets the maximum time allowed for creating an anchor entity to finish.\n@return\n- Result: Returns 0 for success and other values for failure. For failure reasons, refer to the EPICOResult enum. Currently, the returned error message result is unique, and you temporarily can not identify the error causes.\n- AnchorEntityComponent: Associated with an Actor. Each component owns a Handle and a UUID, and updates the anchor entity's pose to the Actor during each Actor Tick." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPICOCreateAnchorEntity_AsyncAction_PXR_CreateAnchorEntity_Async_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPICOCreateAnchorEntity_AsyncAction, nullptr, "PXR_CreateAnchorEntity_Async", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPICOCreateAnchorEntity_AsyncAction_PXR_CreateAnchorEntity_Async_Statics::PICOCreateAnchorEntity_AsyncAction_eventPXR_CreateAnchorEntity_Async_Parms), Z_Construct_UFunction_UPICOCreateAnchorEntity_AsyncAction_PXR_CreateAnchorEntity_Async_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOCreateAnchorEntity_AsyncAction_PXR_CreateAnchorEntity_Async_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPICOCreateAnchorEntity_AsyncAction_PXR_CreateAnchorEntity_Async_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOCreateAnchorEntity_AsyncAction_PXR_CreateAnchorEntity_Async_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPICOCreateAnchorEntity_AsyncAction_PXR_CreateAnchorEntity_Async()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPICOCreateAnchorEntity_AsyncAction_PXR_CreateAnchorEntity_Async_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPICOCreateAnchorEntity_AsyncAction);
	UClass* Z_Construct_UClass_UPICOCreateAnchorEntity_AsyncAction_NoRegister()
	{
		return UPICOCreateAnchorEntity_AsyncAction::StaticClass();
	}
	struct Z_Construct_UClass_UPICOCreateAnchorEntity_AsyncAction_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSuccess;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnFailure_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFailure;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPICOCreateAnchorEntity_AsyncAction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_PICOXRMR,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPICOCreateAnchorEntity_AsyncAction_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPICOCreateAnchorEntity_AsyncAction_PXR_CreateAnchorEntity_Async, "PXR_CreateAnchorEntity_Async" }, // 661259102
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPICOCreateAnchorEntity_AsyncAction_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** \\defgroup PXR_AsyncAnchorAction PXR_AsyncAnchorAction\n * The interfaces below for managing anchors must be used in event graph and cannot be used in code. \n * @{\n */" },
		{ "IncludePath", "PXR_AsyncAnchorAction.h" },
		{ "ModuleRelativePath", "Public/PXR_AsyncAnchorAction.h" },
		{ "ToolTip", "\\defgroup PXR_AsyncAnchorAction PXR_AsyncAnchorAction\nThe interfaces below for managing anchors must be used in event graph and cannot be used in code.\n@{" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPICOCreateAnchorEntity_AsyncAction_Statics::NewProp_OnSuccess_MetaData[] = {
		{ "ModuleRelativePath", "Public/PXR_AsyncAnchorAction.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UPICOCreateAnchorEntity_AsyncAction_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPICOCreateAnchorEntity_AsyncAction, OnSuccess), Z_Construct_UDelegateFunction_PICOXRMR_PICOCreateAnchorEntityActionSuccess__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UPICOCreateAnchorEntity_AsyncAction_Statics::NewProp_OnSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPICOCreateAnchorEntity_AsyncAction_Statics::NewProp_OnSuccess_MetaData)) }; // 4180256811
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPICOCreateAnchorEntity_AsyncAction_Statics::NewProp_OnFailure_MetaData[] = {
		{ "ModuleRelativePath", "Public/PXR_AsyncAnchorAction.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UPICOCreateAnchorEntity_AsyncAction_Statics::NewProp_OnFailure = { "OnFailure", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPICOCreateAnchorEntity_AsyncAction, OnFailure), Z_Construct_UDelegateFunction_PICOXRMR_PICOCreateAnchorEntityActionFailure__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UPICOCreateAnchorEntity_AsyncAction_Statics::NewProp_OnFailure_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPICOCreateAnchorEntity_AsyncAction_Statics::NewProp_OnFailure_MetaData)) }; // 330983483
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPICOCreateAnchorEntity_AsyncAction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPICOCreateAnchorEntity_AsyncAction_Statics::NewProp_OnSuccess,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPICOCreateAnchorEntity_AsyncAction_Statics::NewProp_OnFailure,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPICOCreateAnchorEntity_AsyncAction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPICOCreateAnchorEntity_AsyncAction>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPICOCreateAnchorEntity_AsyncAction_Statics::ClassParams = {
		&UPICOCreateAnchorEntity_AsyncAction::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPICOCreateAnchorEntity_AsyncAction_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPICOCreateAnchorEntity_AsyncAction_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPICOCreateAnchorEntity_AsyncAction_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPICOCreateAnchorEntity_AsyncAction_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPICOCreateAnchorEntity_AsyncAction()
	{
		if (!Z_Registration_Info_UClass_UPICOCreateAnchorEntity_AsyncAction.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPICOCreateAnchorEntity_AsyncAction.OuterSingleton, Z_Construct_UClass_UPICOCreateAnchorEntity_AsyncAction_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPICOCreateAnchorEntity_AsyncAction.OuterSingleton;
	}
	template<> PICOXRMR_API UClass* StaticClass<UPICOCreateAnchorEntity_AsyncAction>()
	{
		return UPICOCreateAnchorEntity_AsyncAction::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPICOCreateAnchorEntity_AsyncAction);
	UPICOCreateAnchorEntity_AsyncAction::~UPICOCreateAnchorEntity_AsyncAction() {}
	DEFINE_FUNCTION(UPICODestroyAnchorEntityAction::execPXR_DestroyAnchorEntity)
	{
		P_GET_OBJECT(AActor,Z_Param_InBoundActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UPICODestroyAnchorEntityAction**)Z_Param__Result=UPICODestroyAnchorEntityAction::PXR_DestroyAnchorEntity(Z_Param_InBoundActor);
		P_NATIVE_END;
	}
	void UPICODestroyAnchorEntityAction::StaticRegisterNativesUPICODestroyAnchorEntityAction()
	{
		UClass* Class = UPICODestroyAnchorEntityAction::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "PXR_DestroyAnchorEntity", &UPICODestroyAnchorEntityAction::execPXR_DestroyAnchorEntity },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPICODestroyAnchorEntityAction_PXR_DestroyAnchorEntity_Statics
	{
		struct PICODestroyAnchorEntityAction_eventPXR_DestroyAnchorEntity_Parms
		{
			AActor* InBoundActor;
			UPICODestroyAnchorEntityAction* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InBoundActor;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPICODestroyAnchorEntityAction_PXR_DestroyAnchorEntity_Statics::NewProp_InBoundActor = { "InBoundActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PICODestroyAnchorEntityAction_eventPXR_DestroyAnchorEntity_Parms, InBoundActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPICODestroyAnchorEntityAction_PXR_DestroyAnchorEntity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PICODestroyAnchorEntityAction_eventPXR_DestroyAnchorEntity_Parms, ReturnValue), Z_Construct_UClass_UPICODestroyAnchorEntityAction_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPICODestroyAnchorEntityAction_PXR_DestroyAnchorEntity_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICODestroyAnchorEntityAction_PXR_DestroyAnchorEntity_Statics::NewProp_InBoundActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICODestroyAnchorEntityAction_PXR_DestroyAnchorEntity_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPICODestroyAnchorEntityAction_PXR_DestroyAnchorEntity_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Comment", "/// @brief Destroys an anchor entity in the app's memory.\n/// @param InBoundActor Specifies the bound Actor of the anchor entity.\n/// @return  Returns 0 for success and other values for failure. For failure reasons, refer to the EPICOResult enum. Currently, the returned error message result is unique, and you temporarily can not identify the error causes.\n" },
		{ "ModuleRelativePath", "Public/PXR_AsyncAnchorAction.h" },
		{ "ToolTip", "@brief Destroys an anchor entity in the app's memory.\n@param InBoundActor Specifies the bound Actor of the anchor entity.\n@return  Returns 0 for success and other values for failure. For failure reasons, refer to the EPICOResult enum. Currently, the returned error message result is unique, and you temporarily can not identify the error causes." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPICODestroyAnchorEntityAction_PXR_DestroyAnchorEntity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPICODestroyAnchorEntityAction, nullptr, "PXR_DestroyAnchorEntity", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPICODestroyAnchorEntityAction_PXR_DestroyAnchorEntity_Statics::PICODestroyAnchorEntityAction_eventPXR_DestroyAnchorEntity_Parms), Z_Construct_UFunction_UPICODestroyAnchorEntityAction_PXR_DestroyAnchorEntity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICODestroyAnchorEntityAction_PXR_DestroyAnchorEntity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPICODestroyAnchorEntityAction_PXR_DestroyAnchorEntity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICODestroyAnchorEntityAction_PXR_DestroyAnchorEntity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPICODestroyAnchorEntityAction_PXR_DestroyAnchorEntity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPICODestroyAnchorEntityAction_PXR_DestroyAnchorEntity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPICODestroyAnchorEntityAction);
	UClass* Z_Construct_UClass_UPICODestroyAnchorEntityAction_NoRegister()
	{
		return UPICODestroyAnchorEntityAction::StaticClass();
	}
	struct Z_Construct_UClass_UPICODestroyAnchorEntityAction_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSuccess;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnFailure_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFailure;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPICODestroyAnchorEntityAction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_PICOXRMR,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPICODestroyAnchorEntityAction_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPICODestroyAnchorEntityAction_PXR_DestroyAnchorEntity, "PXR_DestroyAnchorEntity" }, // 1548202850
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPICODestroyAnchorEntityAction_Statics::Class_MetaDataParams[] = {
		{ "Comment", "//////////////////////////////////////////////////////////////////////////\n/// Destroy Anchor Entity\n//////////////////////////////////////////////////////////////////////////\n" },
		{ "IncludePath", "PXR_AsyncAnchorAction.h" },
		{ "ModuleRelativePath", "Public/PXR_AsyncAnchorAction.h" },
		{ "ToolTip", "Destroy Anchor Entity" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPICODestroyAnchorEntityAction_Statics::NewProp_OnSuccess_MetaData[] = {
		{ "ModuleRelativePath", "Public/PXR_AsyncAnchorAction.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UPICODestroyAnchorEntityAction_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPICODestroyAnchorEntityAction, OnSuccess), Z_Construct_UDelegateFunction_PICOXRMR_PICODestroyAnchorEntityActionSuccess__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UPICODestroyAnchorEntityAction_Statics::NewProp_OnSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPICODestroyAnchorEntityAction_Statics::NewProp_OnSuccess_MetaData)) }; // 514592668
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPICODestroyAnchorEntityAction_Statics::NewProp_OnFailure_MetaData[] = {
		{ "ModuleRelativePath", "Public/PXR_AsyncAnchorAction.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UPICODestroyAnchorEntityAction_Statics::NewProp_OnFailure = { "OnFailure", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPICODestroyAnchorEntityAction, OnFailure), Z_Construct_UDelegateFunction_PICOXRMR_PICODestroyAnchorEntityActionFailure__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UPICODestroyAnchorEntityAction_Statics::NewProp_OnFailure_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPICODestroyAnchorEntityAction_Statics::NewProp_OnFailure_MetaData)) }; // 4149739957
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPICODestroyAnchorEntityAction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPICODestroyAnchorEntityAction_Statics::NewProp_OnSuccess,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPICODestroyAnchorEntityAction_Statics::NewProp_OnFailure,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPICODestroyAnchorEntityAction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPICODestroyAnchorEntityAction>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPICODestroyAnchorEntityAction_Statics::ClassParams = {
		&UPICODestroyAnchorEntityAction::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPICODestroyAnchorEntityAction_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPICODestroyAnchorEntityAction_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPICODestroyAnchorEntityAction_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPICODestroyAnchorEntityAction_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPICODestroyAnchorEntityAction()
	{
		if (!Z_Registration_Info_UClass_UPICODestroyAnchorEntityAction.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPICODestroyAnchorEntityAction.OuterSingleton, Z_Construct_UClass_UPICODestroyAnchorEntityAction_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPICODestroyAnchorEntityAction.OuterSingleton;
	}
	template<> PICOXRMR_API UClass* StaticClass<UPICODestroyAnchorEntityAction>()
	{
		return UPICODestroyAnchorEntityAction::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPICODestroyAnchorEntityAction);
	UPICODestroyAnchorEntityAction::~UPICODestroyAnchorEntityAction() {}
	DEFINE_FUNCTION(UPICOPersistAnchorEntity_AsyncAction::execPXR_PersistAnchorEntity_Async)
	{
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_InBoundActors);
		P_GET_ENUM(EPICOPersistLocation,Z_Param_InPersistLocation);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UPICOPersistAnchorEntity_AsyncAction**)Z_Param__Result=UPICOPersistAnchorEntity_AsyncAction::PXR_PersistAnchorEntity_Async(Z_Param_Out_InBoundActors,EPICOPersistLocation(Z_Param_InPersistLocation));
		P_NATIVE_END;
	}
	void UPICOPersistAnchorEntity_AsyncAction::StaticRegisterNativesUPICOPersistAnchorEntity_AsyncAction()
	{
		UClass* Class = UPICOPersistAnchorEntity_AsyncAction::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "PXR_PersistAnchorEntity_Async", &UPICOPersistAnchorEntity_AsyncAction::execPXR_PersistAnchorEntity_Async },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPICOPersistAnchorEntity_AsyncAction_PXR_PersistAnchorEntity_Async_Statics
	{
		struct PICOPersistAnchorEntity_AsyncAction_eventPXR_PersistAnchorEntity_Async_Parms
		{
			TArray<AActor*> InBoundActors;
			EPICOPersistLocation InPersistLocation;
			UPICOPersistAnchorEntity_AsyncAction* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InBoundActors_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InBoundActors_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InBoundActors;
		static const UECodeGen_Private::FBytePropertyParams NewProp_InPersistLocation_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_InPersistLocation;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPICOPersistAnchorEntity_AsyncAction_PXR_PersistAnchorEntity_Async_Statics::NewProp_InBoundActors_Inner = { "InBoundActors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPICOPersistAnchorEntity_AsyncAction_PXR_PersistAnchorEntity_Async_Statics::NewProp_InBoundActors_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UPICOPersistAnchorEntity_AsyncAction_PXR_PersistAnchorEntity_Async_Statics::NewProp_InBoundActors = { "InBoundActors", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PICOPersistAnchorEntity_AsyncAction_eventPXR_PersistAnchorEntity_Async_Parms, InBoundActors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UPICOPersistAnchorEntity_AsyncAction_PXR_PersistAnchorEntity_Async_Statics::NewProp_InBoundActors_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOPersistAnchorEntity_AsyncAction_PXR_PersistAnchorEntity_Async_Statics::NewProp_InBoundActors_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPICOPersistAnchorEntity_AsyncAction_PXR_PersistAnchorEntity_Async_Statics::NewProp_InPersistLocation_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPICOPersistAnchorEntity_AsyncAction_PXR_PersistAnchorEntity_Async_Statics::NewProp_InPersistLocation = { "InPersistLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PICOPersistAnchorEntity_AsyncAction_eventPXR_PersistAnchorEntity_Async_Parms, InPersistLocation), Z_Construct_UEnum_PICOXRMR_EPICOPersistLocation, METADATA_PARAMS(nullptr, 0) }; // 438259623
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPICOPersistAnchorEntity_AsyncAction_PXR_PersistAnchorEntity_Async_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PICOPersistAnchorEntity_AsyncAction_eventPXR_PersistAnchorEntity_Async_Parms, ReturnValue), Z_Construct_UClass_UPICOPersistAnchorEntity_AsyncAction_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPICOPersistAnchorEntity_AsyncAction_PXR_PersistAnchorEntity_Async_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOPersistAnchorEntity_AsyncAction_PXR_PersistAnchorEntity_Async_Statics::NewProp_InBoundActors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOPersistAnchorEntity_AsyncAction_PXR_PersistAnchorEntity_Async_Statics::NewProp_InBoundActors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOPersistAnchorEntity_AsyncAction_PXR_PersistAnchorEntity_Async_Statics::NewProp_InPersistLocation_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOPersistAnchorEntity_AsyncAction_PXR_PersistAnchorEntity_Async_Statics::NewProp_InPersistLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOPersistAnchorEntity_AsyncAction_PXR_PersistAnchorEntity_Async_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPICOPersistAnchorEntity_AsyncAction_PXR_PersistAnchorEntity_Async_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Comment", "/// @brief Persists specified anchor entities, which means saving anchor entities to a specified location. Currently, only supports saving anchor entities to the device's local storage.\n/// @param InBoundActors Specifies the bound Actors of the to-be-persisted anchor entities.\n/// @param InPersistLocation The location that the anchor entities are saved to:\n/// - Persist Location Local: device's local storage\n/// - Persist Location Remote: not supported\n/// @return\n/// - Result: Returns 0 for success and other values for failure. For failure reasons, refer to the EPICOResult enum. Currently, the returned error message result is unique, and you temporarily can not identify the error causes.\n/// - AnchorList:  An array of anchors.\n" },
		{ "CPP_Default_InPersistLocation", "PersistLocation_Local" },
		{ "ModuleRelativePath", "Public/PXR_AsyncAnchorAction.h" },
		{ "ToolTip", "@brief Persists specified anchor entities, which means saving anchor entities to a specified location. Currently, only supports saving anchor entities to the device's local storage.\n@param InBoundActors Specifies the bound Actors of the to-be-persisted anchor entities.\n@param InPersistLocation The location that the anchor entities are saved to:\n- Persist Location Local: device's local storage\n- Persist Location Remote: not supported\n@return\n- Result: Returns 0 for success and other values for failure. For failure reasons, refer to the EPICOResult enum. Currently, the returned error message result is unique, and you temporarily can not identify the error causes.\n- AnchorList:  An array of anchors." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPICOPersistAnchorEntity_AsyncAction_PXR_PersistAnchorEntity_Async_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPICOPersistAnchorEntity_AsyncAction, nullptr, "PXR_PersistAnchorEntity_Async", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPICOPersistAnchorEntity_AsyncAction_PXR_PersistAnchorEntity_Async_Statics::PICOPersistAnchorEntity_AsyncAction_eventPXR_PersistAnchorEntity_Async_Parms), Z_Construct_UFunction_UPICOPersistAnchorEntity_AsyncAction_PXR_PersistAnchorEntity_Async_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOPersistAnchorEntity_AsyncAction_PXR_PersistAnchorEntity_Async_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPICOPersistAnchorEntity_AsyncAction_PXR_PersistAnchorEntity_Async_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOPersistAnchorEntity_AsyncAction_PXR_PersistAnchorEntity_Async_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPICOPersistAnchorEntity_AsyncAction_PXR_PersistAnchorEntity_Async()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPICOPersistAnchorEntity_AsyncAction_PXR_PersistAnchorEntity_Async_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPICOPersistAnchorEntity_AsyncAction);
	UClass* Z_Construct_UClass_UPICOPersistAnchorEntity_AsyncAction_NoRegister()
	{
		return UPICOPersistAnchorEntity_AsyncAction::StaticClass();
	}
	struct Z_Construct_UClass_UPICOPersistAnchorEntity_AsyncAction_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSuccess;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnFailure_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFailure;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPICOPersistAnchorEntity_AsyncAction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_PICOXRMR,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPICOPersistAnchorEntity_AsyncAction_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPICOPersistAnchorEntity_AsyncAction_PXR_PersistAnchorEntity_Async, "PXR_PersistAnchorEntity_Async" }, // 3351584590
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPICOPersistAnchorEntity_AsyncAction_Statics::Class_MetaDataParams[] = {
		{ "Comment", "//////////////////////////////////////////////////////////////////////////\n/// Persist Anchor Entity\n//////////////////////////////////////////////////////////////////////////\n" },
		{ "IncludePath", "PXR_AsyncAnchorAction.h" },
		{ "ModuleRelativePath", "Public/PXR_AsyncAnchorAction.h" },
		{ "ToolTip", "Persist Anchor Entity" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPICOPersistAnchorEntity_AsyncAction_Statics::NewProp_OnSuccess_MetaData[] = {
		{ "ModuleRelativePath", "Public/PXR_AsyncAnchorAction.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UPICOPersistAnchorEntity_AsyncAction_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPICOPersistAnchorEntity_AsyncAction, OnSuccess), Z_Construct_UDelegateFunction_PICOXRMR_PICOPersistAnchorEntityActionSuccess__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UPICOPersistAnchorEntity_AsyncAction_Statics::NewProp_OnSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPICOPersistAnchorEntity_AsyncAction_Statics::NewProp_OnSuccess_MetaData)) }; // 3324552845
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPICOPersistAnchorEntity_AsyncAction_Statics::NewProp_OnFailure_MetaData[] = {
		{ "ModuleRelativePath", "Public/PXR_AsyncAnchorAction.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UPICOPersistAnchorEntity_AsyncAction_Statics::NewProp_OnFailure = { "OnFailure", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPICOPersistAnchorEntity_AsyncAction, OnFailure), Z_Construct_UDelegateFunction_PICOXRMR_PICOPersistAnchorEntityActionFailure__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UPICOPersistAnchorEntity_AsyncAction_Statics::NewProp_OnFailure_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPICOPersistAnchorEntity_AsyncAction_Statics::NewProp_OnFailure_MetaData)) }; // 123073220
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPICOPersistAnchorEntity_AsyncAction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPICOPersistAnchorEntity_AsyncAction_Statics::NewProp_OnSuccess,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPICOPersistAnchorEntity_AsyncAction_Statics::NewProp_OnFailure,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPICOPersistAnchorEntity_AsyncAction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPICOPersistAnchorEntity_AsyncAction>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPICOPersistAnchorEntity_AsyncAction_Statics::ClassParams = {
		&UPICOPersistAnchorEntity_AsyncAction::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPICOPersistAnchorEntity_AsyncAction_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPICOPersistAnchorEntity_AsyncAction_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPICOPersistAnchorEntity_AsyncAction_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPICOPersistAnchorEntity_AsyncAction_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPICOPersistAnchorEntity_AsyncAction()
	{
		if (!Z_Registration_Info_UClass_UPICOPersistAnchorEntity_AsyncAction.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPICOPersistAnchorEntity_AsyncAction.OuterSingleton, Z_Construct_UClass_UPICOPersistAnchorEntity_AsyncAction_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPICOPersistAnchorEntity_AsyncAction.OuterSingleton;
	}
	template<> PICOXRMR_API UClass* StaticClass<UPICOPersistAnchorEntity_AsyncAction>()
	{
		return UPICOPersistAnchorEntity_AsyncAction::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPICOPersistAnchorEntity_AsyncAction);
	UPICOPersistAnchorEntity_AsyncAction::~UPICOPersistAnchorEntity_AsyncAction() {}
	DEFINE_FUNCTION(UPICOUnpersistAnchorEntity_AsyncAction::execPXR_UnpersistAnchorEntity_Async)
	{
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_InBoundActors);
		P_GET_ENUM(EPICOPersistLocation,Z_Param_InPersistLocation);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UPICOUnpersistAnchorEntity_AsyncAction**)Z_Param__Result=UPICOUnpersistAnchorEntity_AsyncAction::PXR_UnpersistAnchorEntity_Async(Z_Param_Out_InBoundActors,EPICOPersistLocation(Z_Param_InPersistLocation));
		P_NATIVE_END;
	}
	void UPICOUnpersistAnchorEntity_AsyncAction::StaticRegisterNativesUPICOUnpersistAnchorEntity_AsyncAction()
	{
		UClass* Class = UPICOUnpersistAnchorEntity_AsyncAction::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "PXR_UnpersistAnchorEntity_Async", &UPICOUnpersistAnchorEntity_AsyncAction::execPXR_UnpersistAnchorEntity_Async },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPICOUnpersistAnchorEntity_AsyncAction_PXR_UnpersistAnchorEntity_Async_Statics
	{
		struct PICOUnpersistAnchorEntity_AsyncAction_eventPXR_UnpersistAnchorEntity_Async_Parms
		{
			TArray<AActor*> InBoundActors;
			EPICOPersistLocation InPersistLocation;
			UPICOUnpersistAnchorEntity_AsyncAction* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InBoundActors_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InBoundActors_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InBoundActors;
		static const UECodeGen_Private::FBytePropertyParams NewProp_InPersistLocation_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_InPersistLocation;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPICOUnpersistAnchorEntity_AsyncAction_PXR_UnpersistAnchorEntity_Async_Statics::NewProp_InBoundActors_Inner = { "InBoundActors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPICOUnpersistAnchorEntity_AsyncAction_PXR_UnpersistAnchorEntity_Async_Statics::NewProp_InBoundActors_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UPICOUnpersistAnchorEntity_AsyncAction_PXR_UnpersistAnchorEntity_Async_Statics::NewProp_InBoundActors = { "InBoundActors", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PICOUnpersistAnchorEntity_AsyncAction_eventPXR_UnpersistAnchorEntity_Async_Parms, InBoundActors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UPICOUnpersistAnchorEntity_AsyncAction_PXR_UnpersistAnchorEntity_Async_Statics::NewProp_InBoundActors_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOUnpersistAnchorEntity_AsyncAction_PXR_UnpersistAnchorEntity_Async_Statics::NewProp_InBoundActors_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPICOUnpersistAnchorEntity_AsyncAction_PXR_UnpersistAnchorEntity_Async_Statics::NewProp_InPersistLocation_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPICOUnpersistAnchorEntity_AsyncAction_PXR_UnpersistAnchorEntity_Async_Statics::NewProp_InPersistLocation = { "InPersistLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PICOUnpersistAnchorEntity_AsyncAction_eventPXR_UnpersistAnchorEntity_Async_Parms, InPersistLocation), Z_Construct_UEnum_PICOXRMR_EPICOPersistLocation, METADATA_PARAMS(nullptr, 0) }; // 438259623
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPICOUnpersistAnchorEntity_AsyncAction_PXR_UnpersistAnchorEntity_Async_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PICOUnpersistAnchorEntity_AsyncAction_eventPXR_UnpersistAnchorEntity_Async_Parms, ReturnValue), Z_Construct_UClass_UPICOUnpersistAnchorEntity_AsyncAction_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPICOUnpersistAnchorEntity_AsyncAction_PXR_UnpersistAnchorEntity_Async_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOUnpersistAnchorEntity_AsyncAction_PXR_UnpersistAnchorEntity_Async_Statics::NewProp_InBoundActors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOUnpersistAnchorEntity_AsyncAction_PXR_UnpersistAnchorEntity_Async_Statics::NewProp_InBoundActors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOUnpersistAnchorEntity_AsyncAction_PXR_UnpersistAnchorEntity_Async_Statics::NewProp_InPersistLocation_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOUnpersistAnchorEntity_AsyncAction_PXR_UnpersistAnchorEntity_Async_Statics::NewProp_InPersistLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOUnpersistAnchorEntity_AsyncAction_PXR_UnpersistAnchorEntity_Async_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPICOUnpersistAnchorEntity_AsyncAction_PXR_UnpersistAnchorEntity_Async_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Comment", "/// @brief Unpersists specified anchor entities, which means deleting anchor entities from the location where they are saved. Currently, only supports deleting anchor entities saved in the device's local storage.\n/// @param InBoundActors Specifies the bound Actors of the to-be-unpersisted anchor entities.\n/// @param InPersistLocation Specifies the location where the anchor entities are saved:\n/// - Persist Location Local: device's local storage\n/// - Persist Location Remote: not supported\n/// @return\n/// - Result:  Returns 0 for success and other values for failure. For failure reasons, refer to the EPICOResult enum. Currently, the returned error message result is unique, and you temporarily can not identify the error causes.\n/// - AnchorList:  An array of anchors.\n" },
		{ "CPP_Default_InPersistLocation", "PersistLocation_Local" },
		{ "ModuleRelativePath", "Public/PXR_AsyncAnchorAction.h" },
		{ "ToolTip", "@brief Unpersists specified anchor entities, which means deleting anchor entities from the location where they are saved. Currently, only supports deleting anchor entities saved in the device's local storage.\n@param InBoundActors Specifies the bound Actors of the to-be-unpersisted anchor entities.\n@param InPersistLocation Specifies the location where the anchor entities are saved:\n- Persist Location Local: device's local storage\n- Persist Location Remote: not supported\n@return\n- Result:  Returns 0 for success and other values for failure. For failure reasons, refer to the EPICOResult enum. Currently, the returned error message result is unique, and you temporarily can not identify the error causes.\n- AnchorList:  An array of anchors." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPICOUnpersistAnchorEntity_AsyncAction_PXR_UnpersistAnchorEntity_Async_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPICOUnpersistAnchorEntity_AsyncAction, nullptr, "PXR_UnpersistAnchorEntity_Async", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPICOUnpersistAnchorEntity_AsyncAction_PXR_UnpersistAnchorEntity_Async_Statics::PICOUnpersistAnchorEntity_AsyncAction_eventPXR_UnpersistAnchorEntity_Async_Parms), Z_Construct_UFunction_UPICOUnpersistAnchorEntity_AsyncAction_PXR_UnpersistAnchorEntity_Async_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOUnpersistAnchorEntity_AsyncAction_PXR_UnpersistAnchorEntity_Async_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPICOUnpersistAnchorEntity_AsyncAction_PXR_UnpersistAnchorEntity_Async_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOUnpersistAnchorEntity_AsyncAction_PXR_UnpersistAnchorEntity_Async_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPICOUnpersistAnchorEntity_AsyncAction_PXR_UnpersistAnchorEntity_Async()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPICOUnpersistAnchorEntity_AsyncAction_PXR_UnpersistAnchorEntity_Async_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPICOUnpersistAnchorEntity_AsyncAction);
	UClass* Z_Construct_UClass_UPICOUnpersistAnchorEntity_AsyncAction_NoRegister()
	{
		return UPICOUnpersistAnchorEntity_AsyncAction::StaticClass();
	}
	struct Z_Construct_UClass_UPICOUnpersistAnchorEntity_AsyncAction_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSuccess;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnFailure_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFailure;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPICOUnpersistAnchorEntity_AsyncAction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_PICOXRMR,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPICOUnpersistAnchorEntity_AsyncAction_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPICOUnpersistAnchorEntity_AsyncAction_PXR_UnpersistAnchorEntity_Async, "PXR_UnpersistAnchorEntity_Async" }, // 3052435898
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPICOUnpersistAnchorEntity_AsyncAction_Statics::Class_MetaDataParams[] = {
		{ "Comment", "//////////////////////////////////////////////////////////////////////////\n/// Unpersist Anchor Entity\n//////////////////////////////////////////////////////////////////////////\n" },
		{ "IncludePath", "PXR_AsyncAnchorAction.h" },
		{ "ModuleRelativePath", "Public/PXR_AsyncAnchorAction.h" },
		{ "ToolTip", "Unpersist Anchor Entity" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPICOUnpersistAnchorEntity_AsyncAction_Statics::NewProp_OnSuccess_MetaData[] = {
		{ "ModuleRelativePath", "Public/PXR_AsyncAnchorAction.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UPICOUnpersistAnchorEntity_AsyncAction_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPICOUnpersistAnchorEntity_AsyncAction, OnSuccess), Z_Construct_UDelegateFunction_PICOXRMR_PICOUnpersistAnchorEntityActionSuccess__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UPICOUnpersistAnchorEntity_AsyncAction_Statics::NewProp_OnSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPICOUnpersistAnchorEntity_AsyncAction_Statics::NewProp_OnSuccess_MetaData)) }; // 2765466790
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPICOUnpersistAnchorEntity_AsyncAction_Statics::NewProp_OnFailure_MetaData[] = {
		{ "ModuleRelativePath", "Public/PXR_AsyncAnchorAction.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UPICOUnpersistAnchorEntity_AsyncAction_Statics::NewProp_OnFailure = { "OnFailure", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPICOUnpersistAnchorEntity_AsyncAction, OnFailure), Z_Construct_UDelegateFunction_PICOXRMR_PICOUnpersistAnchorEntityActionFailure__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UPICOUnpersistAnchorEntity_AsyncAction_Statics::NewProp_OnFailure_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPICOUnpersistAnchorEntity_AsyncAction_Statics::NewProp_OnFailure_MetaData)) }; // 2395862525
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPICOUnpersistAnchorEntity_AsyncAction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPICOUnpersistAnchorEntity_AsyncAction_Statics::NewProp_OnSuccess,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPICOUnpersistAnchorEntity_AsyncAction_Statics::NewProp_OnFailure,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPICOUnpersistAnchorEntity_AsyncAction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPICOUnpersistAnchorEntity_AsyncAction>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPICOUnpersistAnchorEntity_AsyncAction_Statics::ClassParams = {
		&UPICOUnpersistAnchorEntity_AsyncAction::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPICOUnpersistAnchorEntity_AsyncAction_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPICOUnpersistAnchorEntity_AsyncAction_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPICOUnpersistAnchorEntity_AsyncAction_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPICOUnpersistAnchorEntity_AsyncAction_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPICOUnpersistAnchorEntity_AsyncAction()
	{
		if (!Z_Registration_Info_UClass_UPICOUnpersistAnchorEntity_AsyncAction.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPICOUnpersistAnchorEntity_AsyncAction.OuterSingleton, Z_Construct_UClass_UPICOUnpersistAnchorEntity_AsyncAction_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPICOUnpersistAnchorEntity_AsyncAction.OuterSingleton;
	}
	template<> PICOXRMR_API UClass* StaticClass<UPICOUnpersistAnchorEntity_AsyncAction>()
	{
		return UPICOUnpersistAnchorEntity_AsyncAction::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPICOUnpersistAnchorEntity_AsyncAction);
	UPICOUnpersistAnchorEntity_AsyncAction::~UPICOUnpersistAnchorEntity_AsyncAction() {}
	DEFINE_FUNCTION(UPICOClearAnchorEntity_AsyncAction::execPXR_ClearAnchorEntity_Async)
	{
		P_GET_ENUM(EPICOPersistLocation,Z_Param_InPersistLocation);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UPICOClearAnchorEntity_AsyncAction**)Z_Param__Result=UPICOClearAnchorEntity_AsyncAction::PXR_ClearAnchorEntity_Async(EPICOPersistLocation(Z_Param_InPersistLocation));
		P_NATIVE_END;
	}
	void UPICOClearAnchorEntity_AsyncAction::StaticRegisterNativesUPICOClearAnchorEntity_AsyncAction()
	{
		UClass* Class = UPICOClearAnchorEntity_AsyncAction::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "PXR_ClearAnchorEntity_Async", &UPICOClearAnchorEntity_AsyncAction::execPXR_ClearAnchorEntity_Async },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPICOClearAnchorEntity_AsyncAction_PXR_ClearAnchorEntity_Async_Statics
	{
		struct PICOClearAnchorEntity_AsyncAction_eventPXR_ClearAnchorEntity_Async_Parms
		{
			EPICOPersistLocation InPersistLocation;
			UPICOClearAnchorEntity_AsyncAction* ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_InPersistLocation_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_InPersistLocation;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPICOClearAnchorEntity_AsyncAction_PXR_ClearAnchorEntity_Async_Statics::NewProp_InPersistLocation_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPICOClearAnchorEntity_AsyncAction_PXR_ClearAnchorEntity_Async_Statics::NewProp_InPersistLocation = { "InPersistLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PICOClearAnchorEntity_AsyncAction_eventPXR_ClearAnchorEntity_Async_Parms, InPersistLocation), Z_Construct_UEnum_PICOXRMR_EPICOPersistLocation, METADATA_PARAMS(nullptr, 0) }; // 438259623
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPICOClearAnchorEntity_AsyncAction_PXR_ClearAnchorEntity_Async_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PICOClearAnchorEntity_AsyncAction_eventPXR_ClearAnchorEntity_Async_Parms, ReturnValue), Z_Construct_UClass_UPICOClearAnchorEntity_AsyncAction_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPICOClearAnchorEntity_AsyncAction_PXR_ClearAnchorEntity_Async_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOClearAnchorEntity_AsyncAction_PXR_ClearAnchorEntity_Async_Statics::NewProp_InPersistLocation_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOClearAnchorEntity_AsyncAction_PXR_ClearAnchorEntity_Async_Statics::NewProp_InPersistLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOClearAnchorEntity_AsyncAction_PXR_ClearAnchorEntity_Async_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPICOClearAnchorEntity_AsyncAction_PXR_ClearAnchorEntity_Async_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Comment", "/// @brief Clears all anchor entities saved in a specified location. Currently, only supports deleting all anchor entities saved in the device's local storage.\n/// @param InPersistLocation Specifies the location where the to-be-cleared anchor entities are saved.\n/// - Persist Location Local: device's local storage\n/// - Persist Location Remote: not supported\n/// @return Result:  Returns 0 for success and other values for failure. For failure reasons, refer to the EPICOResult enum. Currently, the returned error message result is unique, and you temporarily can not identify the error causes.\n" },
		{ "CPP_Default_InPersistLocation", "PersistLocation_Local" },
		{ "ModuleRelativePath", "Public/PXR_AsyncAnchorAction.h" },
		{ "ToolTip", "@brief Clears all anchor entities saved in a specified location. Currently, only supports deleting all anchor entities saved in the device's local storage.\n@param InPersistLocation Specifies the location where the to-be-cleared anchor entities are saved.\n- Persist Location Local: device's local storage\n- Persist Location Remote: not supported\n@return Result:  Returns 0 for success and other values for failure. For failure reasons, refer to the EPICOResult enum. Currently, the returned error message result is unique, and you temporarily can not identify the error causes." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPICOClearAnchorEntity_AsyncAction_PXR_ClearAnchorEntity_Async_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPICOClearAnchorEntity_AsyncAction, nullptr, "PXR_ClearAnchorEntity_Async", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPICOClearAnchorEntity_AsyncAction_PXR_ClearAnchorEntity_Async_Statics::PICOClearAnchorEntity_AsyncAction_eventPXR_ClearAnchorEntity_Async_Parms), Z_Construct_UFunction_UPICOClearAnchorEntity_AsyncAction_PXR_ClearAnchorEntity_Async_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOClearAnchorEntity_AsyncAction_PXR_ClearAnchorEntity_Async_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPICOClearAnchorEntity_AsyncAction_PXR_ClearAnchorEntity_Async_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOClearAnchorEntity_AsyncAction_PXR_ClearAnchorEntity_Async_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPICOClearAnchorEntity_AsyncAction_PXR_ClearAnchorEntity_Async()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPICOClearAnchorEntity_AsyncAction_PXR_ClearAnchorEntity_Async_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPICOClearAnchorEntity_AsyncAction);
	UClass* Z_Construct_UClass_UPICOClearAnchorEntity_AsyncAction_NoRegister()
	{
		return UPICOClearAnchorEntity_AsyncAction::StaticClass();
	}
	struct Z_Construct_UClass_UPICOClearAnchorEntity_AsyncAction_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSuccess;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnFailure_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFailure;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPICOClearAnchorEntity_AsyncAction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_PICOXRMR,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPICOClearAnchorEntity_AsyncAction_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPICOClearAnchorEntity_AsyncAction_PXR_ClearAnchorEntity_Async, "PXR_ClearAnchorEntity_Async" }, // 3534939109
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPICOClearAnchorEntity_AsyncAction_Statics::Class_MetaDataParams[] = {
		{ "Comment", "//////////////////////////////////////////////////////////////////////////\n/// Clear Anchor Entity\n//////////////////////////////////////////////////////////////////////////\n" },
		{ "IncludePath", "PXR_AsyncAnchorAction.h" },
		{ "ModuleRelativePath", "Public/PXR_AsyncAnchorAction.h" },
		{ "ToolTip", "Clear Anchor Entity" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPICOClearAnchorEntity_AsyncAction_Statics::NewProp_OnSuccess_MetaData[] = {
		{ "ModuleRelativePath", "Public/PXR_AsyncAnchorAction.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UPICOClearAnchorEntity_AsyncAction_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPICOClearAnchorEntity_AsyncAction, OnSuccess), Z_Construct_UDelegateFunction_PICOXRMR_PICOClearAnchorEntityActionSuccess__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UPICOClearAnchorEntity_AsyncAction_Statics::NewProp_OnSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPICOClearAnchorEntity_AsyncAction_Statics::NewProp_OnSuccess_MetaData)) }; // 2138682751
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPICOClearAnchorEntity_AsyncAction_Statics::NewProp_OnFailure_MetaData[] = {
		{ "ModuleRelativePath", "Public/PXR_AsyncAnchorAction.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UPICOClearAnchorEntity_AsyncAction_Statics::NewProp_OnFailure = { "OnFailure", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPICOClearAnchorEntity_AsyncAction, OnFailure), Z_Construct_UDelegateFunction_PICOXRMR_PICOClearAnchorEntityActionFailure__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UPICOClearAnchorEntity_AsyncAction_Statics::NewProp_OnFailure_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPICOClearAnchorEntity_AsyncAction_Statics::NewProp_OnFailure_MetaData)) }; // 1508747187
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPICOClearAnchorEntity_AsyncAction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPICOClearAnchorEntity_AsyncAction_Statics::NewProp_OnSuccess,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPICOClearAnchorEntity_AsyncAction_Statics::NewProp_OnFailure,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPICOClearAnchorEntity_AsyncAction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPICOClearAnchorEntity_AsyncAction>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPICOClearAnchorEntity_AsyncAction_Statics::ClassParams = {
		&UPICOClearAnchorEntity_AsyncAction::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPICOClearAnchorEntity_AsyncAction_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPICOClearAnchorEntity_AsyncAction_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPICOClearAnchorEntity_AsyncAction_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPICOClearAnchorEntity_AsyncAction_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPICOClearAnchorEntity_AsyncAction()
	{
		if (!Z_Registration_Info_UClass_UPICOClearAnchorEntity_AsyncAction.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPICOClearAnchorEntity_AsyncAction.OuterSingleton, Z_Construct_UClass_UPICOClearAnchorEntity_AsyncAction_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPICOClearAnchorEntity_AsyncAction.OuterSingleton;
	}
	template<> PICOXRMR_API UClass* StaticClass<UPICOClearAnchorEntity_AsyncAction>()
	{
		return UPICOClearAnchorEntity_AsyncAction::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPICOClearAnchorEntity_AsyncAction);
	UPICOClearAnchorEntity_AsyncAction::~UPICOClearAnchorEntity_AsyncAction() {}
	DEFINE_FUNCTION(UPICOLoadAnchorEntity_AsyncAction::execPXR_LoadAnchorEntity_Async)
	{
		P_GET_STRUCT_REF(FPICOAnchorLoadInfo,Z_Param_Out_InLoadInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UPICOLoadAnchorEntity_AsyncAction**)Z_Param__Result=UPICOLoadAnchorEntity_AsyncAction::PXR_LoadAnchorEntity_Async(Z_Param_Out_InLoadInfo);
		P_NATIVE_END;
	}
	void UPICOLoadAnchorEntity_AsyncAction::StaticRegisterNativesUPICOLoadAnchorEntity_AsyncAction()
	{
		UClass* Class = UPICOLoadAnchorEntity_AsyncAction::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "PXR_LoadAnchorEntity_Async", &UPICOLoadAnchorEntity_AsyncAction::execPXR_LoadAnchorEntity_Async },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPICOLoadAnchorEntity_AsyncAction_PXR_LoadAnchorEntity_Async_Statics
	{
		struct PICOLoadAnchorEntity_AsyncAction_eventPXR_LoadAnchorEntity_Async_Parms
		{
			FPICOAnchorLoadInfo InLoadInfo;
			UPICOLoadAnchorEntity_AsyncAction* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InLoadInfo_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InLoadInfo;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPICOLoadAnchorEntity_AsyncAction_PXR_LoadAnchorEntity_Async_Statics::NewProp_InLoadInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPICOLoadAnchorEntity_AsyncAction_PXR_LoadAnchorEntity_Async_Statics::NewProp_InLoadInfo = { "InLoadInfo", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PICOLoadAnchorEntity_AsyncAction_eventPXR_LoadAnchorEntity_Async_Parms, InLoadInfo), Z_Construct_UScriptStruct_FPICOAnchorLoadInfo, METADATA_PARAMS(Z_Construct_UFunction_UPICOLoadAnchorEntity_AsyncAction_PXR_LoadAnchorEntity_Async_Statics::NewProp_InLoadInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOLoadAnchorEntity_AsyncAction_PXR_LoadAnchorEntity_Async_Statics::NewProp_InLoadInfo_MetaData)) }; // 2787575804
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPICOLoadAnchorEntity_AsyncAction_PXR_LoadAnchorEntity_Async_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PICOLoadAnchorEntity_AsyncAction_eventPXR_LoadAnchorEntity_Async_Parms, ReturnValue), Z_Construct_UClass_UPICOLoadAnchorEntity_AsyncAction_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPICOLoadAnchorEntity_AsyncAction_PXR_LoadAnchorEntity_Async_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOLoadAnchorEntity_AsyncAction_PXR_LoadAnchorEntity_Async_Statics::NewProp_InLoadInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOLoadAnchorEntity_AsyncAction_PXR_LoadAnchorEntity_Async_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPICOLoadAnchorEntity_AsyncAction_PXR_LoadAnchorEntity_Async_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Comment", "/// @brief Loads anchor entities from the device's local storage.\n/// @param InLoadInfo Specifying which anchor entities to load.\n/// - Load Max Count: Specifies the maximum number of anchor entities. The maximum value is 1024.\n/// - Timeout: Sets the maximum time allowed for creating an anchor entity to finish. Currently, this parameter is invalid.\n/// - Persist Location:\n/// \x09- Persist Location Local: device's local storage\n/// \x09- Persist Location Remote: not supported\n/// - Include Filter Type:\n/// \x09- Load Filter Type None: All anchor entities will be loaded.\n/// \x09- Load Filter Type UUID: Only anchor entities in your app can be loaded.\n/// \x09- Load Filter Type Spatial Scene Data: Only anchor entities in the Room Capture app can be loaded.\n/// - Exclude Filter Type: Currently, this parameter is invalid.\n/// @return  Returns 0 for success and other values for failure. For failure reasons, refer to the EPICOResult enum. Currently, the returned error message result is unique, and you temporarily can not identify the error causes.\n" },
		{ "ModuleRelativePath", "Public/PXR_AsyncAnchorAction.h" },
		{ "ToolTip", "@brief Loads anchor entities from the device's local storage.\n@param InLoadInfo Specifying which anchor entities to load.\n- Load Max Count: Specifies the maximum number of anchor entities. The maximum value is 1024.\n- Timeout: Sets the maximum time allowed for creating an anchor entity to finish. Currently, this parameter is invalid.\n- Persist Location:\n      - Persist Location Local: device's local storage\n      - Persist Location Remote: not supported\n- Include Filter Type:\n      - Load Filter Type None: All anchor entities will be loaded.\n      - Load Filter Type UUID: Only anchor entities in your app can be loaded.\n      - Load Filter Type Spatial Scene Data: Only anchor entities in the Room Capture app can be loaded.\n- Exclude Filter Type: Currently, this parameter is invalid.\n@return  Returns 0 for success and other values for failure. For failure reasons, refer to the EPICOResult enum. Currently, the returned error message result is unique, and you temporarily can not identify the error causes." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPICOLoadAnchorEntity_AsyncAction_PXR_LoadAnchorEntity_Async_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPICOLoadAnchorEntity_AsyncAction, nullptr, "PXR_LoadAnchorEntity_Async", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPICOLoadAnchorEntity_AsyncAction_PXR_LoadAnchorEntity_Async_Statics::PICOLoadAnchorEntity_AsyncAction_eventPXR_LoadAnchorEntity_Async_Parms), Z_Construct_UFunction_UPICOLoadAnchorEntity_AsyncAction_PXR_LoadAnchorEntity_Async_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOLoadAnchorEntity_AsyncAction_PXR_LoadAnchorEntity_Async_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPICOLoadAnchorEntity_AsyncAction_PXR_LoadAnchorEntity_Async_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOLoadAnchorEntity_AsyncAction_PXR_LoadAnchorEntity_Async_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPICOLoadAnchorEntity_AsyncAction_PXR_LoadAnchorEntity_Async()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPICOLoadAnchorEntity_AsyncAction_PXR_LoadAnchorEntity_Async_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPICOLoadAnchorEntity_AsyncAction);
	UClass* Z_Construct_UClass_UPICOLoadAnchorEntity_AsyncAction_NoRegister()
	{
		return UPICOLoadAnchorEntity_AsyncAction::StaticClass();
	}
	struct Z_Construct_UClass_UPICOLoadAnchorEntity_AsyncAction_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSuccess;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnFailure_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFailure;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPICOLoadAnchorEntity_AsyncAction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_PICOXRMR,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPICOLoadAnchorEntity_AsyncAction_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPICOLoadAnchorEntity_AsyncAction_PXR_LoadAnchorEntity_Async, "PXR_LoadAnchorEntity_Async" }, // 465645826
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPICOLoadAnchorEntity_AsyncAction_Statics::Class_MetaDataParams[] = {
		{ "Comment", "//////////////////////////////////////////////////////////////////////////\n/// Load Anchor Entity\n//////////////////////////////////////////////////////////////////////////\n" },
		{ "IncludePath", "PXR_AsyncAnchorAction.h" },
		{ "ModuleRelativePath", "Public/PXR_AsyncAnchorAction.h" },
		{ "ToolTip", "Load Anchor Entity" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPICOLoadAnchorEntity_AsyncAction_Statics::NewProp_OnSuccess_MetaData[] = {
		{ "ModuleRelativePath", "Public/PXR_AsyncAnchorAction.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UPICOLoadAnchorEntity_AsyncAction_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPICOLoadAnchorEntity_AsyncAction, OnSuccess), Z_Construct_UDelegateFunction_PICOXRMR_PICOLoadAnchorEntityActionSuccess__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UPICOLoadAnchorEntity_AsyncAction_Statics::NewProp_OnSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPICOLoadAnchorEntity_AsyncAction_Statics::NewProp_OnSuccess_MetaData)) }; // 1908835076
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPICOLoadAnchorEntity_AsyncAction_Statics::NewProp_OnFailure_MetaData[] = {
		{ "ModuleRelativePath", "Public/PXR_AsyncAnchorAction.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UPICOLoadAnchorEntity_AsyncAction_Statics::NewProp_OnFailure = { "OnFailure", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPICOLoadAnchorEntity_AsyncAction, OnFailure), Z_Construct_UDelegateFunction_PICOXRMR_PICOLoadAnchorEntityActionFailure__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UPICOLoadAnchorEntity_AsyncAction_Statics::NewProp_OnFailure_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPICOLoadAnchorEntity_AsyncAction_Statics::NewProp_OnFailure_MetaData)) }; // 3803901127
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPICOLoadAnchorEntity_AsyncAction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPICOLoadAnchorEntity_AsyncAction_Statics::NewProp_OnSuccess,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPICOLoadAnchorEntity_AsyncAction_Statics::NewProp_OnFailure,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPICOLoadAnchorEntity_AsyncAction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPICOLoadAnchorEntity_AsyncAction>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPICOLoadAnchorEntity_AsyncAction_Statics::ClassParams = {
		&UPICOLoadAnchorEntity_AsyncAction::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPICOLoadAnchorEntity_AsyncAction_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPICOLoadAnchorEntity_AsyncAction_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPICOLoadAnchorEntity_AsyncAction_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPICOLoadAnchorEntity_AsyncAction_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPICOLoadAnchorEntity_AsyncAction()
	{
		if (!Z_Registration_Info_UClass_UPICOLoadAnchorEntity_AsyncAction.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPICOLoadAnchorEntity_AsyncAction.OuterSingleton, Z_Construct_UClass_UPICOLoadAnchorEntity_AsyncAction_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPICOLoadAnchorEntity_AsyncAction.OuterSingleton;
	}
	template<> PICOXRMR_API UClass* StaticClass<UPICOLoadAnchorEntity_AsyncAction>()
	{
		return UPICOLoadAnchorEntity_AsyncAction::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPICOLoadAnchorEntity_AsyncAction);
	UPICOLoadAnchorEntity_AsyncAction::~UPICOLoadAnchorEntity_AsyncAction() {}
	DEFINE_FUNCTION(UPICOStartSpatialSceneCapture_AsyncAction::execPXR_StartSpatialSceneCapture_Async)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UPICOStartSpatialSceneCapture_AsyncAction**)Z_Param__Result=UPICOStartSpatialSceneCapture_AsyncAction::PXR_StartSpatialSceneCapture_Async();
		P_NATIVE_END;
	}
	void UPICOStartSpatialSceneCapture_AsyncAction::StaticRegisterNativesUPICOStartSpatialSceneCapture_AsyncAction()
	{
		UClass* Class = UPICOStartSpatialSceneCapture_AsyncAction::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "PXR_StartSpatialSceneCapture_Async", &UPICOStartSpatialSceneCapture_AsyncAction::execPXR_StartSpatialSceneCapture_Async },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPICOStartSpatialSceneCapture_AsyncAction_PXR_StartSpatialSceneCapture_Async_Statics
	{
		struct PICOStartSpatialSceneCapture_AsyncAction_eventPXR_StartSpatialSceneCapture_Async_Parms
		{
			UPICOStartSpatialSceneCapture_AsyncAction* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPICOStartSpatialSceneCapture_AsyncAction_PXR_StartSpatialSceneCapture_Async_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PICOStartSpatialSceneCapture_AsyncAction_eventPXR_StartSpatialSceneCapture_Async_Parms, ReturnValue), Z_Construct_UClass_UPICOStartSpatialSceneCapture_AsyncAction_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPICOStartSpatialSceneCapture_AsyncAction_PXR_StartSpatialSceneCapture_Async_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOStartSpatialSceneCapture_AsyncAction_PXR_StartSpatialSceneCapture_Async_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPICOStartSpatialSceneCapture_AsyncAction_PXR_StartSpatialSceneCapture_Async_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Comment", "/// @brief Launches the Room Capture app to capture the scene.\n/// @return \n/// - Result:  Returns 0 for success and other values for failure. For failure reasons, refer to the EPICOResult enum. Currently, the returned error message result is unique, and you temporarily can not identify the error causes.\n/// - SpatialSceneCaptureStatus:  Reserved parameter.\n" },
		{ "ModuleRelativePath", "Public/PXR_AsyncAnchorAction.h" },
		{ "ToolTip", "@brief Launches the Room Capture app to capture the scene.\n@return\n- Result:  Returns 0 for success and other values for failure. For failure reasons, refer to the EPICOResult enum. Currently, the returned error message result is unique, and you temporarily can not identify the error causes.\n- SpatialSceneCaptureStatus:  Reserved parameter." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPICOStartSpatialSceneCapture_AsyncAction_PXR_StartSpatialSceneCapture_Async_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPICOStartSpatialSceneCapture_AsyncAction, nullptr, "PXR_StartSpatialSceneCapture_Async", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPICOStartSpatialSceneCapture_AsyncAction_PXR_StartSpatialSceneCapture_Async_Statics::PICOStartSpatialSceneCapture_AsyncAction_eventPXR_StartSpatialSceneCapture_Async_Parms), Z_Construct_UFunction_UPICOStartSpatialSceneCapture_AsyncAction_PXR_StartSpatialSceneCapture_Async_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOStartSpatialSceneCapture_AsyncAction_PXR_StartSpatialSceneCapture_Async_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPICOStartSpatialSceneCapture_AsyncAction_PXR_StartSpatialSceneCapture_Async_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOStartSpatialSceneCapture_AsyncAction_PXR_StartSpatialSceneCapture_Async_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPICOStartSpatialSceneCapture_AsyncAction_PXR_StartSpatialSceneCapture_Async()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPICOStartSpatialSceneCapture_AsyncAction_PXR_StartSpatialSceneCapture_Async_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPICOStartSpatialSceneCapture_AsyncAction);
	UClass* Z_Construct_UClass_UPICOStartSpatialSceneCapture_AsyncAction_NoRegister()
	{
		return UPICOStartSpatialSceneCapture_AsyncAction::StaticClass();
	}
	struct Z_Construct_UClass_UPICOStartSpatialSceneCapture_AsyncAction_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSuccess;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnFailure_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFailure;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPICOStartSpatialSceneCapture_AsyncAction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_PICOXRMR,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPICOStartSpatialSceneCapture_AsyncAction_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPICOStartSpatialSceneCapture_AsyncAction_PXR_StartSpatialSceneCapture_Async, "PXR_StartSpatialSceneCapture_Async" }, // 1339541249
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPICOStartSpatialSceneCapture_AsyncAction_Statics::Class_MetaDataParams[] = {
		{ "Comment", "//////////////////////////////////////////////////////////////////////////\n/// Start Spatial Scene Capture\n//////////////////////////////////////////////////////////////////////////\n" },
		{ "IncludePath", "PXR_AsyncAnchorAction.h" },
		{ "ModuleRelativePath", "Public/PXR_AsyncAnchorAction.h" },
		{ "ToolTip", "Start Spatial Scene Capture" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPICOStartSpatialSceneCapture_AsyncAction_Statics::NewProp_OnSuccess_MetaData[] = {
		{ "ModuleRelativePath", "Public/PXR_AsyncAnchorAction.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UPICOStartSpatialSceneCapture_AsyncAction_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPICOStartSpatialSceneCapture_AsyncAction, OnSuccess), Z_Construct_UDelegateFunction_PICOXRMR_PICOStartSpatialSceneCaptureActionSuccess__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UPICOStartSpatialSceneCapture_AsyncAction_Statics::NewProp_OnSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPICOStartSpatialSceneCapture_AsyncAction_Statics::NewProp_OnSuccess_MetaData)) }; // 1247474132
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPICOStartSpatialSceneCapture_AsyncAction_Statics::NewProp_OnFailure_MetaData[] = {
		{ "ModuleRelativePath", "Public/PXR_AsyncAnchorAction.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UPICOStartSpatialSceneCapture_AsyncAction_Statics::NewProp_OnFailure = { "OnFailure", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPICOStartSpatialSceneCapture_AsyncAction, OnFailure), Z_Construct_UDelegateFunction_PICOXRMR_PICOStartSpatialSceneCaptureActionFailure__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UPICOStartSpatialSceneCapture_AsyncAction_Statics::NewProp_OnFailure_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPICOStartSpatialSceneCapture_AsyncAction_Statics::NewProp_OnFailure_MetaData)) }; // 1021727564
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPICOStartSpatialSceneCapture_AsyncAction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPICOStartSpatialSceneCapture_AsyncAction_Statics::NewProp_OnSuccess,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPICOStartSpatialSceneCapture_AsyncAction_Statics::NewProp_OnFailure,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPICOStartSpatialSceneCapture_AsyncAction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPICOStartSpatialSceneCapture_AsyncAction>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPICOStartSpatialSceneCapture_AsyncAction_Statics::ClassParams = {
		&UPICOStartSpatialSceneCapture_AsyncAction::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPICOStartSpatialSceneCapture_AsyncAction_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPICOStartSpatialSceneCapture_AsyncAction_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPICOStartSpatialSceneCapture_AsyncAction_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPICOStartSpatialSceneCapture_AsyncAction_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPICOStartSpatialSceneCapture_AsyncAction()
	{
		if (!Z_Registration_Info_UClass_UPICOStartSpatialSceneCapture_AsyncAction.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPICOStartSpatialSceneCapture_AsyncAction.OuterSingleton, Z_Construct_UClass_UPICOStartSpatialSceneCapture_AsyncAction_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPICOStartSpatialSceneCapture_AsyncAction.OuterSingleton;
	}
	template<> PICOXRMR_API UClass* StaticClass<UPICOStartSpatialSceneCapture_AsyncAction>()
	{
		return UPICOStartSpatialSceneCapture_AsyncAction::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPICOStartSpatialSceneCapture_AsyncAction);
	UPICOStartSpatialSceneCapture_AsyncAction::~UPICOStartSpatialSceneCapture_AsyncAction() {}
	struct Z_CompiledInDeferFile_FID_VR_VrVideoUpdateWS_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_VR_VrVideoUpdateWS_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPICOCreateAnchorEntity_AsyncAction, UPICOCreateAnchorEntity_AsyncAction::StaticClass, TEXT("UPICOCreateAnchorEntity_AsyncAction"), &Z_Registration_Info_UClass_UPICOCreateAnchorEntity_AsyncAction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPICOCreateAnchorEntity_AsyncAction), 1352238813U) },
		{ Z_Construct_UClass_UPICODestroyAnchorEntityAction, UPICODestroyAnchorEntityAction::StaticClass, TEXT("UPICODestroyAnchorEntityAction"), &Z_Registration_Info_UClass_UPICODestroyAnchorEntityAction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPICODestroyAnchorEntityAction), 44263012U) },
		{ Z_Construct_UClass_UPICOPersistAnchorEntity_AsyncAction, UPICOPersistAnchorEntity_AsyncAction::StaticClass, TEXT("UPICOPersistAnchorEntity_AsyncAction"), &Z_Registration_Info_UClass_UPICOPersistAnchorEntity_AsyncAction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPICOPersistAnchorEntity_AsyncAction), 3636554434U) },
		{ Z_Construct_UClass_UPICOUnpersistAnchorEntity_AsyncAction, UPICOUnpersistAnchorEntity_AsyncAction::StaticClass, TEXT("UPICOUnpersistAnchorEntity_AsyncAction"), &Z_Registration_Info_UClass_UPICOUnpersistAnchorEntity_AsyncAction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPICOUnpersistAnchorEntity_AsyncAction), 275831662U) },
		{ Z_Construct_UClass_UPICOClearAnchorEntity_AsyncAction, UPICOClearAnchorEntity_AsyncAction::StaticClass, TEXT("UPICOClearAnchorEntity_AsyncAction"), &Z_Registration_Info_UClass_UPICOClearAnchorEntity_AsyncAction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPICOClearAnchorEntity_AsyncAction), 2930829271U) },
		{ Z_Construct_UClass_UPICOLoadAnchorEntity_AsyncAction, UPICOLoadAnchorEntity_AsyncAction::StaticClass, TEXT("UPICOLoadAnchorEntity_AsyncAction"), &Z_Registration_Info_UClass_UPICOLoadAnchorEntity_AsyncAction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPICOLoadAnchorEntity_AsyncAction), 3199363579U) },
		{ Z_Construct_UClass_UPICOStartSpatialSceneCapture_AsyncAction, UPICOStartSpatialSceneCapture_AsyncAction::StaticClass, TEXT("UPICOStartSpatialSceneCapture_AsyncAction"), &Z_Registration_Info_UClass_UPICOStartSpatialSceneCapture_AsyncAction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPICOStartSpatialSceneCapture_AsyncAction), 639115623U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_VR_VrVideoUpdateWS_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_1116846829(TEXT("/Script/PICOXRMR"),
		Z_CompiledInDeferFile_FID_VR_VrVideoUpdateWS_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_VR_VrVideoUpdateWS_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
