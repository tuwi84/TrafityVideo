// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PICOXRMRC/Public/PXR_MRCFunctionLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePXR_MRCFunctionLibrary() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
	PICOXRMRC_API UClass* Z_Construct_UClass_UPICOXRMRCFunctionLibrary();
	PICOXRMRC_API UClass* Z_Construct_UClass_UPICOXRMRCFunctionLibrary_NoRegister();
	UPackage* Z_Construct_UPackage__Script_PICOXRMRC();
// End Cross Module References
	DEFINE_FUNCTION(UPICOXRMRCFunctionLibrary::execUpdateMRCCameraZ)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		UPICOXRMRCFunctionLibrary::UpdateMRCCameraZ();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPICOXRMRCFunctionLibrary::execGetMRCRelativePose)
	{
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_CustomTrans);
		P_FINISH;
		P_NATIVE_BEGIN;
		UPICOXRMRCFunctionLibrary::GetMRCRelativePose(Z_Param_Out_CustomTrans);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPICOXRMRCFunctionLibrary::execSetMRCUseCustomTrans)
	{
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_CustomTrans);
		P_GET_UBOOL(Z_Param_UseCutomTrans);
		P_FINISH;
		P_NATIVE_BEGIN;
		UPICOXRMRCFunctionLibrary::SetMRCUseCustomTrans(Z_Param_Out_CustomTrans,Z_Param_UseCutomTrans);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPICOXRMRCFunctionLibrary::execSetMRCTrackingReference)
	{
		P_GET_OBJECT(USceneComponent,Z_Param_TrackingReference);
		P_FINISH;
		P_NATIVE_BEGIN;
		UPICOXRMRCFunctionLibrary::SetMRCTrackingReference(Z_Param_TrackingReference);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPICOXRMRCFunctionLibrary::execEnableForegroundMRC)
	{
		P_GET_UBOOL(Z_Param_enable);
		P_FINISH;
		P_NATIVE_BEGIN;
		UPICOXRMRCFunctionLibrary::EnableForegroundMRC(Z_Param_enable);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPICOXRMRCFunctionLibrary::execGetInGameThirdCameraRT)
	{
		P_GET_OBJECT_REF(UTextureRenderTarget2D,Z_Param_Out_Background_RT);
		P_GET_OBJECT_REF(UTextureRenderTarget2D,Z_Param_Out_Forgound_RT);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UPICOXRMRCFunctionLibrary::GetInGameThirdCameraRT(Z_Param_Out_Background_RT,Z_Param_Out_Forgound_RT);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPICOXRMRCFunctionLibrary::execIsMrcActivated)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UPICOXRMRCFunctionLibrary::IsMrcActivated();
		P_NATIVE_END;
	}
	void UPICOXRMRCFunctionLibrary::StaticRegisterNativesUPICOXRMRCFunctionLibrary()
	{
		UClass* Class = UPICOXRMRCFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EnableForegroundMRC", &UPICOXRMRCFunctionLibrary::execEnableForegroundMRC },
			{ "GetInGameThirdCameraRT", &UPICOXRMRCFunctionLibrary::execGetInGameThirdCameraRT },
			{ "GetMRCRelativePose", &UPICOXRMRCFunctionLibrary::execGetMRCRelativePose },
			{ "IsMrcActivated", &UPICOXRMRCFunctionLibrary::execIsMrcActivated },
			{ "SetMRCTrackingReference", &UPICOXRMRCFunctionLibrary::execSetMRCTrackingReference },
			{ "SetMRCUseCustomTrans", &UPICOXRMRCFunctionLibrary::execSetMRCUseCustomTrans },
			{ "UpdateMRCCameraZ", &UPICOXRMRCFunctionLibrary::execUpdateMRCCameraZ },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPICOXRMRCFunctionLibrary_EnableForegroundMRC_Statics
	{
		struct PICOXRMRCFunctionLibrary_eventEnableForegroundMRC_Parms
		{
			bool enable;
		};
		static void NewProp_enable_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_enable;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UPICOXRMRCFunctionLibrary_EnableForegroundMRC_Statics::NewProp_enable_SetBit(void* Obj)
	{
		((PICOXRMRCFunctionLibrary_eventEnableForegroundMRC_Parms*)Obj)->enable = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPICOXRMRCFunctionLibrary_EnableForegroundMRC_Statics::NewProp_enable = { "enable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PICOXRMRCFunctionLibrary_eventEnableForegroundMRC_Parms), &Z_Construct_UFunction_UPICOXRMRCFunctionLibrary_EnableForegroundMRC_Statics::NewProp_enable_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPICOXRMRCFunctionLibrary_EnableForegroundMRC_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRMRCFunctionLibrary_EnableForegroundMRC_Statics::NewProp_enable,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPICOXRMRCFunctionLibrary_EnableForegroundMRC_Statics::Function_MetaDataParams[] = {
		{ "Category", "PXR|PXRMRC" },
		{ "ModuleRelativePath", "Public/PXR_MRCFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPICOXRMRCFunctionLibrary_EnableForegroundMRC_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPICOXRMRCFunctionLibrary, nullptr, "EnableForegroundMRC", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPICOXRMRCFunctionLibrary_EnableForegroundMRC_Statics::PICOXRMRCFunctionLibrary_eventEnableForegroundMRC_Parms), Z_Construct_UFunction_UPICOXRMRCFunctionLibrary_EnableForegroundMRC_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRMRCFunctionLibrary_EnableForegroundMRC_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPICOXRMRCFunctionLibrary_EnableForegroundMRC_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRMRCFunctionLibrary_EnableForegroundMRC_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPICOXRMRCFunctionLibrary_EnableForegroundMRC()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPICOXRMRCFunctionLibrary_EnableForegroundMRC_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPICOXRMRCFunctionLibrary_GetInGameThirdCameraRT_Statics
	{
		struct PICOXRMRCFunctionLibrary_eventGetInGameThirdCameraRT_Parms
		{
			UTextureRenderTarget2D* Background_RT;
			UTextureRenderTarget2D* Forgound_RT;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Background_RT;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Forgound_RT;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPICOXRMRCFunctionLibrary_GetInGameThirdCameraRT_Statics::NewProp_Background_RT = { "Background_RT", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PICOXRMRCFunctionLibrary_eventGetInGameThirdCameraRT_Parms, Background_RT), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPICOXRMRCFunctionLibrary_GetInGameThirdCameraRT_Statics::NewProp_Forgound_RT = { "Forgound_RT", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PICOXRMRCFunctionLibrary_eventGetInGameThirdCameraRT_Parms, Forgound_RT), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPICOXRMRCFunctionLibrary_GetInGameThirdCameraRT_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PICOXRMRCFunctionLibrary_eventGetInGameThirdCameraRT_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPICOXRMRCFunctionLibrary_GetInGameThirdCameraRT_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PICOXRMRCFunctionLibrary_eventGetInGameThirdCameraRT_Parms), &Z_Construct_UFunction_UPICOXRMRCFunctionLibrary_GetInGameThirdCameraRT_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPICOXRMRCFunctionLibrary_GetInGameThirdCameraRT_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRMRCFunctionLibrary_GetInGameThirdCameraRT_Statics::NewProp_Background_RT,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRMRCFunctionLibrary_GetInGameThirdCameraRT_Statics::NewProp_Forgound_RT,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRMRCFunctionLibrary_GetInGameThirdCameraRT_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPICOXRMRCFunctionLibrary_GetInGameThirdCameraRT_Statics::Function_MetaDataParams[] = {
		{ "Category", "PXR|PXRMRC" },
		{ "ModuleRelativePath", "Public/PXR_MRCFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPICOXRMRCFunctionLibrary_GetInGameThirdCameraRT_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPICOXRMRCFunctionLibrary, nullptr, "GetInGameThirdCameraRT", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPICOXRMRCFunctionLibrary_GetInGameThirdCameraRT_Statics::PICOXRMRCFunctionLibrary_eventGetInGameThirdCameraRT_Parms), Z_Construct_UFunction_UPICOXRMRCFunctionLibrary_GetInGameThirdCameraRT_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRMRCFunctionLibrary_GetInGameThirdCameraRT_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPICOXRMRCFunctionLibrary_GetInGameThirdCameraRT_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRMRCFunctionLibrary_GetInGameThirdCameraRT_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPICOXRMRCFunctionLibrary_GetInGameThirdCameraRT()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPICOXRMRCFunctionLibrary_GetInGameThirdCameraRT_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPICOXRMRCFunctionLibrary_GetMRCRelativePose_Statics
	{
		struct PICOXRMRCFunctionLibrary_eventGetMRCRelativePose_Parms
		{
			FTransform CustomTrans;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_CustomTrans;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPICOXRMRCFunctionLibrary_GetMRCRelativePose_Statics::NewProp_CustomTrans = { "CustomTrans", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PICOXRMRCFunctionLibrary_eventGetMRCRelativePose_Parms, CustomTrans), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPICOXRMRCFunctionLibrary_GetMRCRelativePose_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRMRCFunctionLibrary_GetMRCRelativePose_Statics::NewProp_CustomTrans,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPICOXRMRCFunctionLibrary_GetMRCRelativePose_Statics::Function_MetaDataParams[] = {
		{ "Category", "PXR|PXRMRC" },
		{ "ModuleRelativePath", "Public/PXR_MRCFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPICOXRMRCFunctionLibrary_GetMRCRelativePose_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPICOXRMRCFunctionLibrary, nullptr, "GetMRCRelativePose", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPICOXRMRCFunctionLibrary_GetMRCRelativePose_Statics::PICOXRMRCFunctionLibrary_eventGetMRCRelativePose_Parms), Z_Construct_UFunction_UPICOXRMRCFunctionLibrary_GetMRCRelativePose_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRMRCFunctionLibrary_GetMRCRelativePose_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPICOXRMRCFunctionLibrary_GetMRCRelativePose_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRMRCFunctionLibrary_GetMRCRelativePose_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPICOXRMRCFunctionLibrary_GetMRCRelativePose()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPICOXRMRCFunctionLibrary_GetMRCRelativePose_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPICOXRMRCFunctionLibrary_IsMrcActivated_Statics
	{
		struct PICOXRMRCFunctionLibrary_eventIsMrcActivated_Parms
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
	void Z_Construct_UFunction_UPICOXRMRCFunctionLibrary_IsMrcActivated_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PICOXRMRCFunctionLibrary_eventIsMrcActivated_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPICOXRMRCFunctionLibrary_IsMrcActivated_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PICOXRMRCFunctionLibrary_eventIsMrcActivated_Parms), &Z_Construct_UFunction_UPICOXRMRCFunctionLibrary_IsMrcActivated_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPICOXRMRCFunctionLibrary_IsMrcActivated_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRMRCFunctionLibrary_IsMrcActivated_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPICOXRMRCFunctionLibrary_IsMrcActivated_Statics::Function_MetaDataParams[] = {
		{ "Category", "PXR|PXRMRC" },
		{ "ModuleRelativePath", "Public/PXR_MRCFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPICOXRMRCFunctionLibrary_IsMrcActivated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPICOXRMRCFunctionLibrary, nullptr, "IsMrcActivated", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPICOXRMRCFunctionLibrary_IsMrcActivated_Statics::PICOXRMRCFunctionLibrary_eventIsMrcActivated_Parms), Z_Construct_UFunction_UPICOXRMRCFunctionLibrary_IsMrcActivated_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRMRCFunctionLibrary_IsMrcActivated_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPICOXRMRCFunctionLibrary_IsMrcActivated_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRMRCFunctionLibrary_IsMrcActivated_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPICOXRMRCFunctionLibrary_IsMrcActivated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPICOXRMRCFunctionLibrary_IsMrcActivated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPICOXRMRCFunctionLibrary_SetMRCTrackingReference_Statics
	{
		struct PICOXRMRCFunctionLibrary_eventSetMRCTrackingReference_Parms
		{
			USceneComponent* TrackingReference;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TrackingReference_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TrackingReference;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPICOXRMRCFunctionLibrary_SetMRCTrackingReference_Statics::NewProp_TrackingReference_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPICOXRMRCFunctionLibrary_SetMRCTrackingReference_Statics::NewProp_TrackingReference = { "TrackingReference", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PICOXRMRCFunctionLibrary_eventSetMRCTrackingReference_Parms, TrackingReference), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UPICOXRMRCFunctionLibrary_SetMRCTrackingReference_Statics::NewProp_TrackingReference_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRMRCFunctionLibrary_SetMRCTrackingReference_Statics::NewProp_TrackingReference_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPICOXRMRCFunctionLibrary_SetMRCTrackingReference_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRMRCFunctionLibrary_SetMRCTrackingReference_Statics::NewProp_TrackingReference,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPICOXRMRCFunctionLibrary_SetMRCTrackingReference_Statics::Function_MetaDataParams[] = {
		{ "Category", "PXR|PXRMRC" },
		{ "ModuleRelativePath", "Public/PXR_MRCFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPICOXRMRCFunctionLibrary_SetMRCTrackingReference_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPICOXRMRCFunctionLibrary, nullptr, "SetMRCTrackingReference", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPICOXRMRCFunctionLibrary_SetMRCTrackingReference_Statics::PICOXRMRCFunctionLibrary_eventSetMRCTrackingReference_Parms), Z_Construct_UFunction_UPICOXRMRCFunctionLibrary_SetMRCTrackingReference_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRMRCFunctionLibrary_SetMRCTrackingReference_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPICOXRMRCFunctionLibrary_SetMRCTrackingReference_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRMRCFunctionLibrary_SetMRCTrackingReference_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPICOXRMRCFunctionLibrary_SetMRCTrackingReference()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPICOXRMRCFunctionLibrary_SetMRCTrackingReference_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPICOXRMRCFunctionLibrary_SetMRCUseCustomTrans_Statics
	{
		struct PICOXRMRCFunctionLibrary_eventSetMRCUseCustomTrans_Parms
		{
			FTransform CustomTrans;
			bool UseCutomTrans;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CustomTrans_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CustomTrans;
		static void NewProp_UseCutomTrans_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_UseCutomTrans;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPICOXRMRCFunctionLibrary_SetMRCUseCustomTrans_Statics::NewProp_CustomTrans_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPICOXRMRCFunctionLibrary_SetMRCUseCustomTrans_Statics::NewProp_CustomTrans = { "CustomTrans", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PICOXRMRCFunctionLibrary_eventSetMRCUseCustomTrans_Parms, CustomTrans), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UFunction_UPICOXRMRCFunctionLibrary_SetMRCUseCustomTrans_Statics::NewProp_CustomTrans_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRMRCFunctionLibrary_SetMRCUseCustomTrans_Statics::NewProp_CustomTrans_MetaData)) };
	void Z_Construct_UFunction_UPICOXRMRCFunctionLibrary_SetMRCUseCustomTrans_Statics::NewProp_UseCutomTrans_SetBit(void* Obj)
	{
		((PICOXRMRCFunctionLibrary_eventSetMRCUseCustomTrans_Parms*)Obj)->UseCutomTrans = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPICOXRMRCFunctionLibrary_SetMRCUseCustomTrans_Statics::NewProp_UseCutomTrans = { "UseCutomTrans", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PICOXRMRCFunctionLibrary_eventSetMRCUseCustomTrans_Parms), &Z_Construct_UFunction_UPICOXRMRCFunctionLibrary_SetMRCUseCustomTrans_Statics::NewProp_UseCutomTrans_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPICOXRMRCFunctionLibrary_SetMRCUseCustomTrans_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRMRCFunctionLibrary_SetMRCUseCustomTrans_Statics::NewProp_CustomTrans,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRMRCFunctionLibrary_SetMRCUseCustomTrans_Statics::NewProp_UseCutomTrans,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPICOXRMRCFunctionLibrary_SetMRCUseCustomTrans_Statics::Function_MetaDataParams[] = {
		{ "Category", "PXR|PXRMRC" },
		{ "ModuleRelativePath", "Public/PXR_MRCFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPICOXRMRCFunctionLibrary_SetMRCUseCustomTrans_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPICOXRMRCFunctionLibrary, nullptr, "SetMRCUseCustomTrans", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPICOXRMRCFunctionLibrary_SetMRCUseCustomTrans_Statics::PICOXRMRCFunctionLibrary_eventSetMRCUseCustomTrans_Parms), Z_Construct_UFunction_UPICOXRMRCFunctionLibrary_SetMRCUseCustomTrans_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRMRCFunctionLibrary_SetMRCUseCustomTrans_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPICOXRMRCFunctionLibrary_SetMRCUseCustomTrans_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRMRCFunctionLibrary_SetMRCUseCustomTrans_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPICOXRMRCFunctionLibrary_SetMRCUseCustomTrans()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPICOXRMRCFunctionLibrary_SetMRCUseCustomTrans_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPICOXRMRCFunctionLibrary_UpdateMRCCameraZ_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPICOXRMRCFunctionLibrary_UpdateMRCCameraZ_Statics::Function_MetaDataParams[] = {
		{ "Category", "PXR|PXRMRC" },
		{ "ModuleRelativePath", "Public/PXR_MRCFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPICOXRMRCFunctionLibrary_UpdateMRCCameraZ_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPICOXRMRCFunctionLibrary, nullptr, "UpdateMRCCameraZ", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPICOXRMRCFunctionLibrary_UpdateMRCCameraZ_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRMRCFunctionLibrary_UpdateMRCCameraZ_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPICOXRMRCFunctionLibrary_UpdateMRCCameraZ()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPICOXRMRCFunctionLibrary_UpdateMRCCameraZ_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPICOXRMRCFunctionLibrary);
	UClass* Z_Construct_UClass_UPICOXRMRCFunctionLibrary_NoRegister()
	{
		return UPICOXRMRCFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UPICOXRMRCFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPICOXRMRCFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_PICOXRMRC,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPICOXRMRCFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPICOXRMRCFunctionLibrary_EnableForegroundMRC, "EnableForegroundMRC" }, // 3306081115
		{ &Z_Construct_UFunction_UPICOXRMRCFunctionLibrary_GetInGameThirdCameraRT, "GetInGameThirdCameraRT" }, // 2112222667
		{ &Z_Construct_UFunction_UPICOXRMRCFunctionLibrary_GetMRCRelativePose, "GetMRCRelativePose" }, // 792275226
		{ &Z_Construct_UFunction_UPICOXRMRCFunctionLibrary_IsMrcActivated, "IsMrcActivated" }, // 794686545
		{ &Z_Construct_UFunction_UPICOXRMRCFunctionLibrary_SetMRCTrackingReference, "SetMRCTrackingReference" }, // 1668619103
		{ &Z_Construct_UFunction_UPICOXRMRCFunctionLibrary_SetMRCUseCustomTrans, "SetMRCUseCustomTrans" }, // 746402969
		{ &Z_Construct_UFunction_UPICOXRMRCFunctionLibrary_UpdateMRCCameraZ, "UpdateMRCCameraZ" }, // 3785014053
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPICOXRMRCFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PXR_MRCFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/PXR_MRCFunctionLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPICOXRMRCFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPICOXRMRCFunctionLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPICOXRMRCFunctionLibrary_Statics::ClassParams = {
		&UPICOXRMRCFunctionLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPICOXRMRCFunctionLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPICOXRMRCFunctionLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPICOXRMRCFunctionLibrary()
	{
		if (!Z_Registration_Info_UClass_UPICOXRMRCFunctionLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPICOXRMRCFunctionLibrary.OuterSingleton, Z_Construct_UClass_UPICOXRMRCFunctionLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPICOXRMRCFunctionLibrary.OuterSingleton;
	}
	template<> PICOXRMRC_API UClass* StaticClass<UPICOXRMRCFunctionLibrary>()
	{
		return UPICOXRMRCFunctionLibrary::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPICOXRMRCFunctionLibrary);
	UPICOXRMRCFunctionLibrary::~UPICOXRMRCFunctionLibrary() {}
	struct Z_CompiledInDeferFile_FID_VR_VrVideoUpdateWS_Plugins_PICOXR_Source_PICOXRMRC_Public_PXR_MRCFunctionLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_VR_VrVideoUpdateWS_Plugins_PICOXR_Source_PICOXRMRC_Public_PXR_MRCFunctionLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPICOXRMRCFunctionLibrary, UPICOXRMRCFunctionLibrary::StaticClass, TEXT("UPICOXRMRCFunctionLibrary"), &Z_Registration_Info_UClass_UPICOXRMRCFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPICOXRMRCFunctionLibrary), 3469780165U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_VR_VrVideoUpdateWS_Plugins_PICOXR_Source_PICOXRMRC_Public_PXR_MRCFunctionLibrary_h_1859658753(TEXT("/Script/PICOXRMRC"),
		Z_CompiledInDeferFile_FID_VR_VrVideoUpdateWS_Plugins_PICOXR_Source_PICOXRMRC_Public_PXR_MRCFunctionLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_VR_VrVideoUpdateWS_Plugins_PICOXR_Source_PICOXRMRC_Public_PXR_MRCFunctionLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
