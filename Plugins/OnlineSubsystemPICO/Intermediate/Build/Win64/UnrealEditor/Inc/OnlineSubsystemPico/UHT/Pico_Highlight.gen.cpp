// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlineSubsystemPico/Public/Pico_Highlight.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePico_Highlight() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ONLINESUBSYSTEMPICO_API UClass* Z_Construct_UClass_UOnlinePicoHighlightFunction();
	ONLINESUBSYSTEMPICO_API UClass* Z_Construct_UClass_UOnlinePicoHighlightFunction_NoRegister();
	ONLINESUBSYSTEMPICO_API UClass* Z_Construct_UClass_UPico_CaptureInfo();
	ONLINESUBSYSTEMPICO_API UClass* Z_Construct_UClass_UPico_CaptureInfo_NoRegister();
	ONLINESUBSYSTEMPICO_API UClass* Z_Construct_UClass_UPico_RecordInfo();
	ONLINESUBSYSTEMPICO_API UClass* Z_Construct_UClass_UPico_RecordInfo_NoRegister();
	ONLINESUBSYSTEMPICO_API UClass* Z_Construct_UClass_UPico_SessionMedia();
	ONLINESUBSYSTEMPICO_API UClass* Z_Construct_UClass_UPico_SessionMedia_NoRegister();
	ONLINESUBSYSTEMPICO_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemPico_CaptureScreenResult__DelegateSignature();
	ONLINESUBSYSTEMPICO_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemPico_ListMediaResult__DelegateSignature();
	ONLINESUBSYSTEMPICO_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemPico_SaveMediaResult__DelegateSignature();
	ONLINESUBSYSTEMPICO_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemPico_ShareMediaResult__DelegateSignature();
	ONLINESUBSYSTEMPICO_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemPico_StartRecordResult__DelegateSignature();
	ONLINESUBSYSTEMPICO_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemPico_StartSessionResult__DelegateSignature();
	ONLINESUBSYSTEMPICO_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemPico_StopRecordResult__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_OnlineSubsystemPico();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_OnlineSubsystemPico_CaptureScreenResult__DelegateSignature_Statics
	{
		struct _Script_OnlineSubsystemPico_eventCaptureScreenResult_Parms
		{
			bool bIsError;
			int32 ErrorCode;
			FString ErrorMessage;
			UPico_CaptureInfo* CaptureInfo;
		};
		static void NewProp_bIsError_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsError;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_ErrorCode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ErrorMessage_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ErrorMessage;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CaptureInfo;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_OnlineSubsystemPico_CaptureScreenResult__DelegateSignature_Statics::NewProp_bIsError_SetBit(void* Obj)
	{
		((_Script_OnlineSubsystemPico_eventCaptureScreenResult_Parms*)Obj)->bIsError = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemPico_CaptureScreenResult__DelegateSignature_Statics::NewProp_bIsError = { "bIsError", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(_Script_OnlineSubsystemPico_eventCaptureScreenResult_Parms), &Z_Construct_UDelegateFunction_OnlineSubsystemPico_CaptureScreenResult__DelegateSignature_Statics::NewProp_bIsError_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemPico_CaptureScreenResult__DelegateSignature_Statics::NewProp_ErrorCode = { "ErrorCode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_OnlineSubsystemPico_eventCaptureScreenResult_Parms, ErrorCode), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemPico_CaptureScreenResult__DelegateSignature_Statics::NewProp_ErrorMessage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemPico_CaptureScreenResult__DelegateSignature_Statics::NewProp_ErrorMessage = { "ErrorMessage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_OnlineSubsystemPico_eventCaptureScreenResult_Parms, ErrorMessage), METADATA_PARAMS(Z_Construct_UDelegateFunction_OnlineSubsystemPico_CaptureScreenResult__DelegateSignature_Statics::NewProp_ErrorMessage_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemPico_CaptureScreenResult__DelegateSignature_Statics::NewProp_ErrorMessage_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemPico_CaptureScreenResult__DelegateSignature_Statics::NewProp_CaptureInfo = { "CaptureInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_OnlineSubsystemPico_eventCaptureScreenResult_Parms, CaptureInfo), Z_Construct_UClass_UPico_CaptureInfo_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemPico_CaptureScreenResult__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemPico_CaptureScreenResult__DelegateSignature_Statics::NewProp_bIsError,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemPico_CaptureScreenResult__DelegateSignature_Statics::NewProp_ErrorCode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemPico_CaptureScreenResult__DelegateSignature_Statics::NewProp_ErrorMessage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemPico_CaptureScreenResult__DelegateSignature_Statics::NewProp_CaptureInfo,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemPico_CaptureScreenResult__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Pico_Highlight.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemPico_CaptureScreenResult__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemPico, nullptr, "CaptureScreenResult__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemPico_CaptureScreenResult__DelegateSignature_Statics::_Script_OnlineSubsystemPico_eventCaptureScreenResult_Parms), Z_Construct_UDelegateFunction_OnlineSubsystemPico_CaptureScreenResult__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemPico_CaptureScreenResult__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_OnlineSubsystemPico_CaptureScreenResult__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemPico_CaptureScreenResult__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemPico_CaptureScreenResult__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemPico_CaptureScreenResult__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_OnlineSubsystemPico_ListMediaResult__DelegateSignature_Statics
	{
		struct _Script_OnlineSubsystemPico_eventListMediaResult_Parms
		{
			bool bIsError;
			int32 ErrorCode;
			FString ErrorMessage;
			UPico_SessionMedia* SessionMedia;
		};
		static void NewProp_bIsError_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsError;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_ErrorCode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ErrorMessage_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ErrorMessage;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SessionMedia;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_OnlineSubsystemPico_ListMediaResult__DelegateSignature_Statics::NewProp_bIsError_SetBit(void* Obj)
	{
		((_Script_OnlineSubsystemPico_eventListMediaResult_Parms*)Obj)->bIsError = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemPico_ListMediaResult__DelegateSignature_Statics::NewProp_bIsError = { "bIsError", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(_Script_OnlineSubsystemPico_eventListMediaResult_Parms), &Z_Construct_UDelegateFunction_OnlineSubsystemPico_ListMediaResult__DelegateSignature_Statics::NewProp_bIsError_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemPico_ListMediaResult__DelegateSignature_Statics::NewProp_ErrorCode = { "ErrorCode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_OnlineSubsystemPico_eventListMediaResult_Parms, ErrorCode), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemPico_ListMediaResult__DelegateSignature_Statics::NewProp_ErrorMessage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemPico_ListMediaResult__DelegateSignature_Statics::NewProp_ErrorMessage = { "ErrorMessage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_OnlineSubsystemPico_eventListMediaResult_Parms, ErrorMessage), METADATA_PARAMS(Z_Construct_UDelegateFunction_OnlineSubsystemPico_ListMediaResult__DelegateSignature_Statics::NewProp_ErrorMessage_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemPico_ListMediaResult__DelegateSignature_Statics::NewProp_ErrorMessage_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemPico_ListMediaResult__DelegateSignature_Statics::NewProp_SessionMedia = { "SessionMedia", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_OnlineSubsystemPico_eventListMediaResult_Parms, SessionMedia), Z_Construct_UClass_UPico_SessionMedia_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemPico_ListMediaResult__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemPico_ListMediaResult__DelegateSignature_Statics::NewProp_bIsError,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemPico_ListMediaResult__DelegateSignature_Statics::NewProp_ErrorCode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemPico_ListMediaResult__DelegateSignature_Statics::NewProp_ErrorMessage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemPico_ListMediaResult__DelegateSignature_Statics::NewProp_SessionMedia,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemPico_ListMediaResult__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Pico_Highlight.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemPico_ListMediaResult__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemPico, nullptr, "ListMediaResult__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemPico_ListMediaResult__DelegateSignature_Statics::_Script_OnlineSubsystemPico_eventListMediaResult_Parms), Z_Construct_UDelegateFunction_OnlineSubsystemPico_ListMediaResult__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemPico_ListMediaResult__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_OnlineSubsystemPico_ListMediaResult__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemPico_ListMediaResult__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemPico_ListMediaResult__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemPico_ListMediaResult__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_OnlineSubsystemPico_SaveMediaResult__DelegateSignature_Statics
	{
		struct _Script_OnlineSubsystemPico_eventSaveMediaResult_Parms
		{
			bool bIsError;
			int32 ErrorCode;
			FString ErrorMessage;
		};
		static void NewProp_bIsError_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsError;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_ErrorCode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ErrorMessage_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ErrorMessage;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_OnlineSubsystemPico_SaveMediaResult__DelegateSignature_Statics::NewProp_bIsError_SetBit(void* Obj)
	{
		((_Script_OnlineSubsystemPico_eventSaveMediaResult_Parms*)Obj)->bIsError = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemPico_SaveMediaResult__DelegateSignature_Statics::NewProp_bIsError = { "bIsError", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(_Script_OnlineSubsystemPico_eventSaveMediaResult_Parms), &Z_Construct_UDelegateFunction_OnlineSubsystemPico_SaveMediaResult__DelegateSignature_Statics::NewProp_bIsError_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemPico_SaveMediaResult__DelegateSignature_Statics::NewProp_ErrorCode = { "ErrorCode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_OnlineSubsystemPico_eventSaveMediaResult_Parms, ErrorCode), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemPico_SaveMediaResult__DelegateSignature_Statics::NewProp_ErrorMessage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemPico_SaveMediaResult__DelegateSignature_Statics::NewProp_ErrorMessage = { "ErrorMessage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_OnlineSubsystemPico_eventSaveMediaResult_Parms, ErrorMessage), METADATA_PARAMS(Z_Construct_UDelegateFunction_OnlineSubsystemPico_SaveMediaResult__DelegateSignature_Statics::NewProp_ErrorMessage_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemPico_SaveMediaResult__DelegateSignature_Statics::NewProp_ErrorMessage_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemPico_SaveMediaResult__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemPico_SaveMediaResult__DelegateSignature_Statics::NewProp_bIsError,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemPico_SaveMediaResult__DelegateSignature_Statics::NewProp_ErrorCode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemPico_SaveMediaResult__DelegateSignature_Statics::NewProp_ErrorMessage,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemPico_SaveMediaResult__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Pico_Highlight.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemPico_SaveMediaResult__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemPico, nullptr, "SaveMediaResult__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemPico_SaveMediaResult__DelegateSignature_Statics::_Script_OnlineSubsystemPico_eventSaveMediaResult_Parms), Z_Construct_UDelegateFunction_OnlineSubsystemPico_SaveMediaResult__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemPico_SaveMediaResult__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_OnlineSubsystemPico_SaveMediaResult__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemPico_SaveMediaResult__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemPico_SaveMediaResult__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemPico_SaveMediaResult__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_OnlineSubsystemPico_ShareMediaResult__DelegateSignature_Statics
	{
		struct _Script_OnlineSubsystemPico_eventShareMediaResult_Parms
		{
			bool bIsError;
			int32 ErrorCode;
			FString ErrorMessage;
		};
		static void NewProp_bIsError_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsError;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_ErrorCode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ErrorMessage_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ErrorMessage;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_OnlineSubsystemPico_ShareMediaResult__DelegateSignature_Statics::NewProp_bIsError_SetBit(void* Obj)
	{
		((_Script_OnlineSubsystemPico_eventShareMediaResult_Parms*)Obj)->bIsError = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemPico_ShareMediaResult__DelegateSignature_Statics::NewProp_bIsError = { "bIsError", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(_Script_OnlineSubsystemPico_eventShareMediaResult_Parms), &Z_Construct_UDelegateFunction_OnlineSubsystemPico_ShareMediaResult__DelegateSignature_Statics::NewProp_bIsError_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemPico_ShareMediaResult__DelegateSignature_Statics::NewProp_ErrorCode = { "ErrorCode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_OnlineSubsystemPico_eventShareMediaResult_Parms, ErrorCode), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemPico_ShareMediaResult__DelegateSignature_Statics::NewProp_ErrorMessage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemPico_ShareMediaResult__DelegateSignature_Statics::NewProp_ErrorMessage = { "ErrorMessage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_OnlineSubsystemPico_eventShareMediaResult_Parms, ErrorMessage), METADATA_PARAMS(Z_Construct_UDelegateFunction_OnlineSubsystemPico_ShareMediaResult__DelegateSignature_Statics::NewProp_ErrorMessage_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemPico_ShareMediaResult__DelegateSignature_Statics::NewProp_ErrorMessage_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemPico_ShareMediaResult__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemPico_ShareMediaResult__DelegateSignature_Statics::NewProp_bIsError,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemPico_ShareMediaResult__DelegateSignature_Statics::NewProp_ErrorCode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemPico_ShareMediaResult__DelegateSignature_Statics::NewProp_ErrorMessage,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemPico_ShareMediaResult__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Pico_Highlight.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemPico_ShareMediaResult__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemPico, nullptr, "ShareMediaResult__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemPico_ShareMediaResult__DelegateSignature_Statics::_Script_OnlineSubsystemPico_eventShareMediaResult_Parms), Z_Construct_UDelegateFunction_OnlineSubsystemPico_ShareMediaResult__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemPico_ShareMediaResult__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_OnlineSubsystemPico_ShareMediaResult__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemPico_ShareMediaResult__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemPico_ShareMediaResult__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemPico_ShareMediaResult__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_OnlineSubsystemPico_StartRecordResult__DelegateSignature_Statics
	{
		struct _Script_OnlineSubsystemPico_eventStartRecordResult_Parms
		{
			bool bIsError;
			int32 ErrorCode;
			FString ErrorMessage;
		};
		static void NewProp_bIsError_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsError;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_ErrorCode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ErrorMessage_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ErrorMessage;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_OnlineSubsystemPico_StartRecordResult__DelegateSignature_Statics::NewProp_bIsError_SetBit(void* Obj)
	{
		((_Script_OnlineSubsystemPico_eventStartRecordResult_Parms*)Obj)->bIsError = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemPico_StartRecordResult__DelegateSignature_Statics::NewProp_bIsError = { "bIsError", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(_Script_OnlineSubsystemPico_eventStartRecordResult_Parms), &Z_Construct_UDelegateFunction_OnlineSubsystemPico_StartRecordResult__DelegateSignature_Statics::NewProp_bIsError_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemPico_StartRecordResult__DelegateSignature_Statics::NewProp_ErrorCode = { "ErrorCode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_OnlineSubsystemPico_eventStartRecordResult_Parms, ErrorCode), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemPico_StartRecordResult__DelegateSignature_Statics::NewProp_ErrorMessage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemPico_StartRecordResult__DelegateSignature_Statics::NewProp_ErrorMessage = { "ErrorMessage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_OnlineSubsystemPico_eventStartRecordResult_Parms, ErrorMessage), METADATA_PARAMS(Z_Construct_UDelegateFunction_OnlineSubsystemPico_StartRecordResult__DelegateSignature_Statics::NewProp_ErrorMessage_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemPico_StartRecordResult__DelegateSignature_Statics::NewProp_ErrorMessage_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemPico_StartRecordResult__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemPico_StartRecordResult__DelegateSignature_Statics::NewProp_bIsError,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemPico_StartRecordResult__DelegateSignature_Statics::NewProp_ErrorCode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemPico_StartRecordResult__DelegateSignature_Statics::NewProp_ErrorMessage,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemPico_StartRecordResult__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Pico_Highlight.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemPico_StartRecordResult__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemPico, nullptr, "StartRecordResult__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemPico_StartRecordResult__DelegateSignature_Statics::_Script_OnlineSubsystemPico_eventStartRecordResult_Parms), Z_Construct_UDelegateFunction_OnlineSubsystemPico_StartRecordResult__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemPico_StartRecordResult__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_OnlineSubsystemPico_StartRecordResult__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemPico_StartRecordResult__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemPico_StartRecordResult__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemPico_StartRecordResult__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_OnlineSubsystemPico_StartSessionResult__DelegateSignature_Statics
	{
		struct _Script_OnlineSubsystemPico_eventStartSessionResult_Parms
		{
			bool bIsError;
			int32 ErrorCode;
			FString ErrorMessage;
			FString SessionId;
		};
		static void NewProp_bIsError_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsError;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_ErrorCode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ErrorMessage_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ErrorMessage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SessionId_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SessionId;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_OnlineSubsystemPico_StartSessionResult__DelegateSignature_Statics::NewProp_bIsError_SetBit(void* Obj)
	{
		((_Script_OnlineSubsystemPico_eventStartSessionResult_Parms*)Obj)->bIsError = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemPico_StartSessionResult__DelegateSignature_Statics::NewProp_bIsError = { "bIsError", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(_Script_OnlineSubsystemPico_eventStartSessionResult_Parms), &Z_Construct_UDelegateFunction_OnlineSubsystemPico_StartSessionResult__DelegateSignature_Statics::NewProp_bIsError_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemPico_StartSessionResult__DelegateSignature_Statics::NewProp_ErrorCode = { "ErrorCode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_OnlineSubsystemPico_eventStartSessionResult_Parms, ErrorCode), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemPico_StartSessionResult__DelegateSignature_Statics::NewProp_ErrorMessage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemPico_StartSessionResult__DelegateSignature_Statics::NewProp_ErrorMessage = { "ErrorMessage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_OnlineSubsystemPico_eventStartSessionResult_Parms, ErrorMessage), METADATA_PARAMS(Z_Construct_UDelegateFunction_OnlineSubsystemPico_StartSessionResult__DelegateSignature_Statics::NewProp_ErrorMessage_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemPico_StartSessionResult__DelegateSignature_Statics::NewProp_ErrorMessage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemPico_StartSessionResult__DelegateSignature_Statics::NewProp_SessionId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemPico_StartSessionResult__DelegateSignature_Statics::NewProp_SessionId = { "SessionId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_OnlineSubsystemPico_eventStartSessionResult_Parms, SessionId), METADATA_PARAMS(Z_Construct_UDelegateFunction_OnlineSubsystemPico_StartSessionResult__DelegateSignature_Statics::NewProp_SessionId_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemPico_StartSessionResult__DelegateSignature_Statics::NewProp_SessionId_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemPico_StartSessionResult__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemPico_StartSessionResult__DelegateSignature_Statics::NewProp_bIsError,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemPico_StartSessionResult__DelegateSignature_Statics::NewProp_ErrorCode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemPico_StartSessionResult__DelegateSignature_Statics::NewProp_ErrorMessage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemPico_StartSessionResult__DelegateSignature_Statics::NewProp_SessionId,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemPico_StartSessionResult__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Pico_Highlight.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemPico_StartSessionResult__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemPico, nullptr, "StartSessionResult__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemPico_StartSessionResult__DelegateSignature_Statics::_Script_OnlineSubsystemPico_eventStartSessionResult_Parms), Z_Construct_UDelegateFunction_OnlineSubsystemPico_StartSessionResult__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemPico_StartSessionResult__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_OnlineSubsystemPico_StartSessionResult__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemPico_StartSessionResult__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemPico_StartSessionResult__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemPico_StartSessionResult__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_OnlineSubsystemPico_StopRecordResult__DelegateSignature_Statics
	{
		struct _Script_OnlineSubsystemPico_eventStopRecordResult_Parms
		{
			bool bIsError;
			int32 ErrorCode;
			FString ErrorMessage;
			UPico_RecordInfo* RecordInfo;
		};
		static void NewProp_bIsError_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsError;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_ErrorCode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ErrorMessage_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ErrorMessage;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RecordInfo;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_OnlineSubsystemPico_StopRecordResult__DelegateSignature_Statics::NewProp_bIsError_SetBit(void* Obj)
	{
		((_Script_OnlineSubsystemPico_eventStopRecordResult_Parms*)Obj)->bIsError = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemPico_StopRecordResult__DelegateSignature_Statics::NewProp_bIsError = { "bIsError", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(_Script_OnlineSubsystemPico_eventStopRecordResult_Parms), &Z_Construct_UDelegateFunction_OnlineSubsystemPico_StopRecordResult__DelegateSignature_Statics::NewProp_bIsError_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemPico_StopRecordResult__DelegateSignature_Statics::NewProp_ErrorCode = { "ErrorCode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_OnlineSubsystemPico_eventStopRecordResult_Parms, ErrorCode), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemPico_StopRecordResult__DelegateSignature_Statics::NewProp_ErrorMessage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemPico_StopRecordResult__DelegateSignature_Statics::NewProp_ErrorMessage = { "ErrorMessage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_OnlineSubsystemPico_eventStopRecordResult_Parms, ErrorMessage), METADATA_PARAMS(Z_Construct_UDelegateFunction_OnlineSubsystemPico_StopRecordResult__DelegateSignature_Statics::NewProp_ErrorMessage_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemPico_StopRecordResult__DelegateSignature_Statics::NewProp_ErrorMessage_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemPico_StopRecordResult__DelegateSignature_Statics::NewProp_RecordInfo = { "RecordInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_OnlineSubsystemPico_eventStopRecordResult_Parms, RecordInfo), Z_Construct_UClass_UPico_RecordInfo_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemPico_StopRecordResult__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemPico_StopRecordResult__DelegateSignature_Statics::NewProp_bIsError,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemPico_StopRecordResult__DelegateSignature_Statics::NewProp_ErrorCode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemPico_StopRecordResult__DelegateSignature_Statics::NewProp_ErrorMessage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemPico_StopRecordResult__DelegateSignature_Statics::NewProp_RecordInfo,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemPico_StopRecordResult__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Pico_Highlight.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemPico_StopRecordResult__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemPico, nullptr, "StopRecordResult__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemPico_StopRecordResult__DelegateSignature_Statics::_Script_OnlineSubsystemPico_eventStopRecordResult_Parms), Z_Construct_UDelegateFunction_OnlineSubsystemPico_StopRecordResult__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemPico_StopRecordResult__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_OnlineSubsystemPico_StopRecordResult__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemPico_StopRecordResult__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemPico_StopRecordResult__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemPico_StopRecordResult__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UOnlinePicoHighlightFunction::execStartSession)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_InStartSessionResultDelegate);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UOnlinePicoHighlightFunction::StartSession(Z_Param_WorldContextObject,FStartSessionResult(Z_Param_InStartSessionResultDelegate));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlinePicoHighlightFunction::execStopRecord)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_InStopRecordResultDelegate);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UOnlinePicoHighlightFunction::StopRecord(Z_Param_WorldContextObject,FStopRecordResult(Z_Param_InStopRecordResultDelegate));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlinePicoHighlightFunction::execStartRecord)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_InStartRecordResultDelegate);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UOnlinePicoHighlightFunction::StartRecord(Z_Param_WorldContextObject,FStartRecordResult(Z_Param_InStartRecordResultDelegate));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlinePicoHighlightFunction::execShareMedia)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_JobId);
		P_GET_PROPERTY(FStrProperty,Z_Param_SessionId);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_InShareMediaResultDelegate);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UOnlinePicoHighlightFunction::ShareMedia(Z_Param_WorldContextObject,Z_Param_JobId,Z_Param_SessionId,FShareMediaResult(Z_Param_InShareMediaResultDelegate));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlinePicoHighlightFunction::execSaveMedia)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_JobId);
		P_GET_PROPERTY(FStrProperty,Z_Param_SessionId);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_InSaveMediaResultDelegate);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UOnlinePicoHighlightFunction::SaveMedia(Z_Param_WorldContextObject,Z_Param_JobId,Z_Param_SessionId,FSaveMediaResult(Z_Param_InSaveMediaResultDelegate));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlinePicoHighlightFunction::execListMedia)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_SessionId);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_InListMediaResultDelegate);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UOnlinePicoHighlightFunction::ListMedia(Z_Param_WorldContextObject,Z_Param_SessionId,FListMediaResult(Z_Param_InListMediaResultDelegate));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlinePicoHighlightFunction::execCaptureScreen)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_InCaptureScreenResultDelegate);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UOnlinePicoHighlightFunction::CaptureScreen(Z_Param_WorldContextObject,FCaptureScreenResult(Z_Param_InCaptureScreenResultDelegate));
		P_NATIVE_END;
	}
	void UOnlinePicoHighlightFunction::StaticRegisterNativesUOnlinePicoHighlightFunction()
	{
		UClass* Class = UOnlinePicoHighlightFunction::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CaptureScreen", &UOnlinePicoHighlightFunction::execCaptureScreen },
			{ "ListMedia", &UOnlinePicoHighlightFunction::execListMedia },
			{ "SaveMedia", &UOnlinePicoHighlightFunction::execSaveMedia },
			{ "ShareMedia", &UOnlinePicoHighlightFunction::execShareMedia },
			{ "StartRecord", &UOnlinePicoHighlightFunction::execStartRecord },
			{ "StartSession", &UOnlinePicoHighlightFunction::execStartSession },
			{ "StopRecord", &UOnlinePicoHighlightFunction::execStopRecord },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOnlinePicoHighlightFunction_CaptureScreen_Statics
	{
		struct OnlinePicoHighlightFunction_eventCaptureScreen_Parms
		{
			UObject* WorldContextObject;
			FScriptDelegate InCaptureScreenResultDelegate;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_InCaptureScreenResultDelegate;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlinePicoHighlightFunction_CaptureScreen_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlinePicoHighlightFunction_eventCaptureScreen_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UOnlinePicoHighlightFunction_CaptureScreen_Statics::NewProp_InCaptureScreenResultDelegate = { "InCaptureScreenResultDelegate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlinePicoHighlightFunction_eventCaptureScreen_Parms, InCaptureScreenResultDelegate), Z_Construct_UDelegateFunction_OnlineSubsystemPico_CaptureScreenResult__DelegateSignature, METADATA_PARAMS(nullptr, 0) }; // 2932556788
	void Z_Construct_UFunction_UOnlinePicoHighlightFunction_CaptureScreen_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OnlinePicoHighlightFunction_eventCaptureScreen_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOnlinePicoHighlightFunction_CaptureScreen_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(OnlinePicoHighlightFunction_eventCaptureScreen_Parms), &Z_Construct_UFunction_UOnlinePicoHighlightFunction_CaptureScreen_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlinePicoHighlightFunction_CaptureScreen_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoHighlightFunction_CaptureScreen_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoHighlightFunction_CaptureScreen_Statics::NewProp_InCaptureScreenResultDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoHighlightFunction_CaptureScreen_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlinePicoHighlightFunction_CaptureScreen_Statics::Function_MetaDataParams[] = {
		{ "Category", "OnlinePico|Highlight" },
		{ "Comment", "/** @defgroup BP_Highlight BP_Highlight\n*  This is the BP_Highlight group\n*  @{\n*//// <summary> Captures the current screen contents. </summary>\n/// <param name =\"WorldContextObject\">Used to get the information about the current world.</param>\n/// <param name=\"InCaptureScreenResultDelegate\"> Will be executed when the request has been completed.\n/// Delegate will contain the requested object class (bool, bIsError, int, ErrorCode, const FString&, ErrorMessage, UPico_CaptureInfo *, CaptureInfo).</param>\n/// <returns>Bool:\n/// <ul>\n/// <li>`true`: Sending request succeeded</li>\n/// <li>`false`: Sending request failed</li>\n/// </ul>\n/// </returns>\n" },
		{ "ModuleRelativePath", "Public/Pico_Highlight.h" },
		{ "ToolTip", "@defgroup BP_Highlight BP_Highlight\nThis is the BP_Highlight group\n@{\n/// <summary> Captures the current screen contents. </summary>\n/// <param name =\"WorldContextObject\">Used to get the information about the current world.</param>\n/// <param name=\"InCaptureScreenResultDelegate\"> Will be executed when the request has been completed.\n/// Delegate will contain the requested object class (bool, bIsError, int, ErrorCode, const FString&, ErrorMessage, UPico_CaptureInfo *, CaptureInfo).</param>\n/// <returns>Bool:\n/// <ul>\n/// <li>`true`: Sending request succeeded</li>\n/// <li>`false`: Sending request failed</li>\n/// </ul>\n/// </returns>" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlinePicoHighlightFunction_CaptureScreen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlinePicoHighlightFunction, nullptr, "CaptureScreen", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOnlinePicoHighlightFunction_CaptureScreen_Statics::OnlinePicoHighlightFunction_eventCaptureScreen_Parms), Z_Construct_UFunction_UOnlinePicoHighlightFunction_CaptureScreen_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePicoHighlightFunction_CaptureScreen_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlinePicoHighlightFunction_CaptureScreen_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePicoHighlightFunction_CaptureScreen_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlinePicoHighlightFunction_CaptureScreen()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlinePicoHighlightFunction_CaptureScreen_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlinePicoHighlightFunction_ListMedia_Statics
	{
		struct OnlinePicoHighlightFunction_eventListMedia_Parms
		{
			UObject* WorldContextObject;
			FString SessionId;
			FScriptDelegate InListMediaResultDelegate;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SessionId_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SessionId;
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_InListMediaResultDelegate;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlinePicoHighlightFunction_ListMedia_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlinePicoHighlightFunction_eventListMedia_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlinePicoHighlightFunction_ListMedia_Statics::NewProp_SessionId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOnlinePicoHighlightFunction_ListMedia_Statics::NewProp_SessionId = { "SessionId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlinePicoHighlightFunction_eventListMedia_Parms, SessionId), METADATA_PARAMS(Z_Construct_UFunction_UOnlinePicoHighlightFunction_ListMedia_Statics::NewProp_SessionId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePicoHighlightFunction_ListMedia_Statics::NewProp_SessionId_MetaData)) };
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UOnlinePicoHighlightFunction_ListMedia_Statics::NewProp_InListMediaResultDelegate = { "InListMediaResultDelegate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlinePicoHighlightFunction_eventListMedia_Parms, InListMediaResultDelegate), Z_Construct_UDelegateFunction_OnlineSubsystemPico_ListMediaResult__DelegateSignature, METADATA_PARAMS(nullptr, 0) }; // 2797660180
	void Z_Construct_UFunction_UOnlinePicoHighlightFunction_ListMedia_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OnlinePicoHighlightFunction_eventListMedia_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOnlinePicoHighlightFunction_ListMedia_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(OnlinePicoHighlightFunction_eventListMedia_Parms), &Z_Construct_UFunction_UOnlinePicoHighlightFunction_ListMedia_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlinePicoHighlightFunction_ListMedia_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoHighlightFunction_ListMedia_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoHighlightFunction_ListMedia_Statics::NewProp_SessionId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoHighlightFunction_ListMedia_Statics::NewProp_InListMediaResultDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoHighlightFunction_ListMedia_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlinePicoHighlightFunction_ListMedia_Statics::Function_MetaDataParams[] = {
		{ "Category", "OnlinePico|Highlight" },
		{ "Comment", "/// <summary>Lists screenshots or videos associated with the specified session ID.</summary>\n/// <param name =\"WorldContextObject\">Used to get the information about the current world.</param>\n/// <param name =\"SessionId\">The ID of the session for which media will be listed.</param>\n/// <param name=\"InListMediaResultDelegate\">Will be executed when the request has been completed. \n/// Delegate will contain the requested object class (bool, bIsError, int, ErrorCode, const FString&, ErrorMessage, UPico_SessionMedia *, SessionMedia).</param>\n/// <returns>Bool:\n/// <ul>\n/// <li>`true`: Sending request succeeded</li>\n/// <li>`false`: Sending request failed</li>\n/// </ul>\n/// </returns> \n" },
		{ "ModuleRelativePath", "Public/Pico_Highlight.h" },
		{ "ToolTip", "<summary>Lists screenshots or videos associated with the specified session ID.</summary>\n<param name =\"WorldContextObject\">Used to get the information about the current world.</param>\n<param name =\"SessionId\">The ID of the session for which media will be listed.</param>\n<param name=\"InListMediaResultDelegate\">Will be executed when the request has been completed.\nDelegate will contain the requested object class (bool, bIsError, int, ErrorCode, const FString&, ErrorMessage, UPico_SessionMedia *, SessionMedia).</param>\n<returns>Bool:\n<ul>\n<li>`true`: Sending request succeeded</li>\n<li>`false`: Sending request failed</li>\n</ul>\n</returns>" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlinePicoHighlightFunction_ListMedia_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlinePicoHighlightFunction, nullptr, "ListMedia", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOnlinePicoHighlightFunction_ListMedia_Statics::OnlinePicoHighlightFunction_eventListMedia_Parms), Z_Construct_UFunction_UOnlinePicoHighlightFunction_ListMedia_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePicoHighlightFunction_ListMedia_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlinePicoHighlightFunction_ListMedia_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePicoHighlightFunction_ListMedia_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlinePicoHighlightFunction_ListMedia()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlinePicoHighlightFunction_ListMedia_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlinePicoHighlightFunction_SaveMedia_Statics
	{
		struct OnlinePicoHighlightFunction_eventSaveMedia_Parms
		{
			UObject* WorldContextObject;
			FString JobId;
			FString SessionId;
			FScriptDelegate InSaveMediaResultDelegate;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JobId_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_JobId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SessionId_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SessionId;
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_InSaveMediaResultDelegate;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlinePicoHighlightFunction_SaveMedia_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlinePicoHighlightFunction_eventSaveMedia_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlinePicoHighlightFunction_SaveMedia_Statics::NewProp_JobId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOnlinePicoHighlightFunction_SaveMedia_Statics::NewProp_JobId = { "JobId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlinePicoHighlightFunction_eventSaveMedia_Parms, JobId), METADATA_PARAMS(Z_Construct_UFunction_UOnlinePicoHighlightFunction_SaveMedia_Statics::NewProp_JobId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePicoHighlightFunction_SaveMedia_Statics::NewProp_JobId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlinePicoHighlightFunction_SaveMedia_Statics::NewProp_SessionId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOnlinePicoHighlightFunction_SaveMedia_Statics::NewProp_SessionId = { "SessionId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlinePicoHighlightFunction_eventSaveMedia_Parms, SessionId), METADATA_PARAMS(Z_Construct_UFunction_UOnlinePicoHighlightFunction_SaveMedia_Statics::NewProp_SessionId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePicoHighlightFunction_SaveMedia_Statics::NewProp_SessionId_MetaData)) };
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UOnlinePicoHighlightFunction_SaveMedia_Statics::NewProp_InSaveMediaResultDelegate = { "InSaveMediaResultDelegate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlinePicoHighlightFunction_eventSaveMedia_Parms, InSaveMediaResultDelegate), Z_Construct_UDelegateFunction_OnlineSubsystemPico_SaveMediaResult__DelegateSignature, METADATA_PARAMS(nullptr, 0) }; // 1807783703
	void Z_Construct_UFunction_UOnlinePicoHighlightFunction_SaveMedia_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OnlinePicoHighlightFunction_eventSaveMedia_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOnlinePicoHighlightFunction_SaveMedia_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(OnlinePicoHighlightFunction_eventSaveMedia_Parms), &Z_Construct_UFunction_UOnlinePicoHighlightFunction_SaveMedia_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlinePicoHighlightFunction_SaveMedia_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoHighlightFunction_SaveMedia_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoHighlightFunction_SaveMedia_Statics::NewProp_JobId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoHighlightFunction_SaveMedia_Statics::NewProp_SessionId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoHighlightFunction_SaveMedia_Statics::NewProp_InSaveMediaResultDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoHighlightFunction_SaveMedia_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlinePicoHighlightFunction_SaveMedia_Statics::Function_MetaDataParams[] = {
		{ "Category", "OnlinePico|Highlight" },
		{ "Comment", "/// <summary>Saves a screenshot or a video associated with a specified job ID and session ID.</summary>\n/// <param name =\"WorldContextObject\">Used to get the information about the current world.</param>\n/// <param name =\"JobId\">The job ID of the screenshot or video to be saved.</param>\n/// <param name =\"SessionId\">The session ID of the screenshot or video to be saved.</param>\n/// <param name=\"InSaveMediaResultDelegate\">Will be executed when the request has been completed. \n/// Delegate will contain the requested object class (bool, bIsError, int, ErrorCode, const FString&, ErrorMessage).</param>\n/// <returns>Bool:\n/// <ul>\n/// <li>`true`: Sending request succeeded</li>\n/// <li>`false`: Sending request failed</li>\n/// </ul>\n/// </returns> \n" },
		{ "ModuleRelativePath", "Public/Pico_Highlight.h" },
		{ "ToolTip", "<summary>Saves a screenshot or a video associated with a specified job ID and session ID.</summary>\n<param name =\"WorldContextObject\">Used to get the information about the current world.</param>\n<param name =\"JobId\">The job ID of the screenshot or video to be saved.</param>\n<param name =\"SessionId\">The session ID of the screenshot or video to be saved.</param>\n<param name=\"InSaveMediaResultDelegate\">Will be executed when the request has been completed.\nDelegate will contain the requested object class (bool, bIsError, int, ErrorCode, const FString&, ErrorMessage).</param>\n<returns>Bool:\n<ul>\n<li>`true`: Sending request succeeded</li>\n<li>`false`: Sending request failed</li>\n</ul>\n</returns>" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlinePicoHighlightFunction_SaveMedia_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlinePicoHighlightFunction, nullptr, "SaveMedia", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOnlinePicoHighlightFunction_SaveMedia_Statics::OnlinePicoHighlightFunction_eventSaveMedia_Parms), Z_Construct_UFunction_UOnlinePicoHighlightFunction_SaveMedia_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePicoHighlightFunction_SaveMedia_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlinePicoHighlightFunction_SaveMedia_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePicoHighlightFunction_SaveMedia_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlinePicoHighlightFunction_SaveMedia()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlinePicoHighlightFunction_SaveMedia_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlinePicoHighlightFunction_ShareMedia_Statics
	{
		struct OnlinePicoHighlightFunction_eventShareMedia_Parms
		{
			UObject* WorldContextObject;
			FString JobId;
			FString SessionId;
			FScriptDelegate InShareMediaResultDelegate;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JobId_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_JobId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SessionId_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SessionId;
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_InShareMediaResultDelegate;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlinePicoHighlightFunction_ShareMedia_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlinePicoHighlightFunction_eventShareMedia_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlinePicoHighlightFunction_ShareMedia_Statics::NewProp_JobId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOnlinePicoHighlightFunction_ShareMedia_Statics::NewProp_JobId = { "JobId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlinePicoHighlightFunction_eventShareMedia_Parms, JobId), METADATA_PARAMS(Z_Construct_UFunction_UOnlinePicoHighlightFunction_ShareMedia_Statics::NewProp_JobId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePicoHighlightFunction_ShareMedia_Statics::NewProp_JobId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlinePicoHighlightFunction_ShareMedia_Statics::NewProp_SessionId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOnlinePicoHighlightFunction_ShareMedia_Statics::NewProp_SessionId = { "SessionId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlinePicoHighlightFunction_eventShareMedia_Parms, SessionId), METADATA_PARAMS(Z_Construct_UFunction_UOnlinePicoHighlightFunction_ShareMedia_Statics::NewProp_SessionId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePicoHighlightFunction_ShareMedia_Statics::NewProp_SessionId_MetaData)) };
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UOnlinePicoHighlightFunction_ShareMedia_Statics::NewProp_InShareMediaResultDelegate = { "InShareMediaResultDelegate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlinePicoHighlightFunction_eventShareMedia_Parms, InShareMediaResultDelegate), Z_Construct_UDelegateFunction_OnlineSubsystemPico_ShareMediaResult__DelegateSignature, METADATA_PARAMS(nullptr, 0) }; // 1219191442
	void Z_Construct_UFunction_UOnlinePicoHighlightFunction_ShareMedia_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OnlinePicoHighlightFunction_eventShareMedia_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOnlinePicoHighlightFunction_ShareMedia_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(OnlinePicoHighlightFunction_eventShareMedia_Parms), &Z_Construct_UFunction_UOnlinePicoHighlightFunction_ShareMedia_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlinePicoHighlightFunction_ShareMedia_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoHighlightFunction_ShareMedia_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoHighlightFunction_ShareMedia_Statics::NewProp_JobId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoHighlightFunction_ShareMedia_Statics::NewProp_SessionId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoHighlightFunction_ShareMedia_Statics::NewProp_InShareMediaResultDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoHighlightFunction_ShareMedia_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlinePicoHighlightFunction_ShareMedia_Statics::Function_MetaDataParams[] = {
		{ "Category", "OnlinePico|Highlight" },
		{ "Comment", "/// <summary>Shares a screenshot or a video associated with a specified job ID and session ID.</summary>\n/// <param name =\"WorldContextObject\">Used to get the information about the current world.</param>\n/// <param name =\"JobId\">The job ID of the screenshot or video to be saved.</param>\n/// <param name =\"SessionId\">The session ID of the screenshot or video to be saved.</param>\n/// <param name=\"InShareMediaResultDelegate\">Will be executed when the request has been completed. \n/// Delegate will contain the requested object class (bIsError, int, ErrorCode, const FString&, ErrorMessage).</param>\n/// <returns>Bool:\n/// <ul>\n/// <li>`true`: Sending request succeeded</li>\n/// <li>`false`: Sending request failed</li>\n/// </ul>\n/// </returns> \n" },
		{ "ModuleRelativePath", "Public/Pico_Highlight.h" },
		{ "ToolTip", "<summary>Shares a screenshot or a video associated with a specified job ID and session ID.</summary>\n<param name =\"WorldContextObject\">Used to get the information about the current world.</param>\n<param name =\"JobId\">The job ID of the screenshot or video to be saved.</param>\n<param name =\"SessionId\">The session ID of the screenshot or video to be saved.</param>\n<param name=\"InShareMediaResultDelegate\">Will be executed when the request has been completed.\nDelegate will contain the requested object class (bIsError, int, ErrorCode, const FString&, ErrorMessage).</param>\n<returns>Bool:\n<ul>\n<li>`true`: Sending request succeeded</li>\n<li>`false`: Sending request failed</li>\n</ul>\n</returns>" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlinePicoHighlightFunction_ShareMedia_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlinePicoHighlightFunction, nullptr, "ShareMedia", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOnlinePicoHighlightFunction_ShareMedia_Statics::OnlinePicoHighlightFunction_eventShareMedia_Parms), Z_Construct_UFunction_UOnlinePicoHighlightFunction_ShareMedia_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePicoHighlightFunction_ShareMedia_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlinePicoHighlightFunction_ShareMedia_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePicoHighlightFunction_ShareMedia_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlinePicoHighlightFunction_ShareMedia()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlinePicoHighlightFunction_ShareMedia_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlinePicoHighlightFunction_StartRecord_Statics
	{
		struct OnlinePicoHighlightFunction_eventStartRecord_Parms
		{
			UObject* WorldContextObject;
			FScriptDelegate InStartRecordResultDelegate;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_InStartRecordResultDelegate;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlinePicoHighlightFunction_StartRecord_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlinePicoHighlightFunction_eventStartRecord_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UOnlinePicoHighlightFunction_StartRecord_Statics::NewProp_InStartRecordResultDelegate = { "InStartRecordResultDelegate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlinePicoHighlightFunction_eventStartRecord_Parms, InStartRecordResultDelegate), Z_Construct_UDelegateFunction_OnlineSubsystemPico_StartRecordResult__DelegateSignature, METADATA_PARAMS(nullptr, 0) }; // 3348371977
	void Z_Construct_UFunction_UOnlinePicoHighlightFunction_StartRecord_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OnlinePicoHighlightFunction_eventStartRecord_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOnlinePicoHighlightFunction_StartRecord_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(OnlinePicoHighlightFunction_eventStartRecord_Parms), &Z_Construct_UFunction_UOnlinePicoHighlightFunction_StartRecord_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlinePicoHighlightFunction_StartRecord_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoHighlightFunction_StartRecord_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoHighlightFunction_StartRecord_Statics::NewProp_InStartRecordResultDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoHighlightFunction_StartRecord_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlinePicoHighlightFunction_StartRecord_Statics::Function_MetaDataParams[] = {
		{ "Category", "OnlinePico|Highlight" },
		{ "Comment", "/// <summary>Starts recording the current screen. </summary>\n/// <param name =\"WorldContextObject\">Used to get the information about the current world.</param>\n/// <param name=\"InStartRecordResultDelegate\">Will be executed when the request has been completed.\n/// Delegate will contain the requested object class (bool, bIsError, int, ErrorCode, const FString&, ErrorMessage) </param>\n/// <returns>Bool:\n/// <ul>\n/// <li>`true`: Sending request succeeded</li>\n/// <li>`false`: Sending request failed</li>\n/// </ul>\n/// </returns>\n" },
		{ "ModuleRelativePath", "Public/Pico_Highlight.h" },
		{ "ToolTip", "<summary>Starts recording the current screen. </summary>\n<param name =\"WorldContextObject\">Used to get the information about the current world.</param>\n<param name=\"InStartRecordResultDelegate\">Will be executed when the request has been completed.\nDelegate will contain the requested object class (bool, bIsError, int, ErrorCode, const FString&, ErrorMessage) </param>\n<returns>Bool:\n<ul>\n<li>`true`: Sending request succeeded</li>\n<li>`false`: Sending request failed</li>\n</ul>\n</returns>" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlinePicoHighlightFunction_StartRecord_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlinePicoHighlightFunction, nullptr, "StartRecord", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOnlinePicoHighlightFunction_StartRecord_Statics::OnlinePicoHighlightFunction_eventStartRecord_Parms), Z_Construct_UFunction_UOnlinePicoHighlightFunction_StartRecord_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePicoHighlightFunction_StartRecord_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlinePicoHighlightFunction_StartRecord_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePicoHighlightFunction_StartRecord_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlinePicoHighlightFunction_StartRecord()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlinePicoHighlightFunction_StartRecord_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlinePicoHighlightFunction_StartSession_Statics
	{
		struct OnlinePicoHighlightFunction_eventStartSession_Parms
		{
			UObject* WorldContextObject;
			FScriptDelegate InStartSessionResultDelegate;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_InStartSessionResultDelegate;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlinePicoHighlightFunction_StartSession_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlinePicoHighlightFunction_eventStartSession_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UOnlinePicoHighlightFunction_StartSession_Statics::NewProp_InStartSessionResultDelegate = { "InStartSessionResultDelegate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlinePicoHighlightFunction_eventStartSession_Parms, InStartSessionResultDelegate), Z_Construct_UDelegateFunction_OnlineSubsystemPico_StartSessionResult__DelegateSignature, METADATA_PARAMS(nullptr, 0) }; // 1164838893
	void Z_Construct_UFunction_UOnlinePicoHighlightFunction_StartSession_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OnlinePicoHighlightFunction_eventStartSession_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOnlinePicoHighlightFunction_StartSession_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(OnlinePicoHighlightFunction_eventStartSession_Parms), &Z_Construct_UFunction_UOnlinePicoHighlightFunction_StartSession_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlinePicoHighlightFunction_StartSession_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoHighlightFunction_StartSession_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoHighlightFunction_StartSession_Statics::NewProp_InStartSessionResultDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoHighlightFunction_StartSession_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlinePicoHighlightFunction_StartSession_Statics::Function_MetaDataParams[] = {
		{ "Category", "OnlinePico|Highlight" },
		{ "Comment", "/// <summary>Starts a session to prepare for capturing or recording a screen. </summary>\n/// <param name =\"WorldContextObject\">Used to get the information about the current world.</param>\n/// <param name=\"InStartSessionResultDelegate\">Will be executed when the request has been completed.\n/// Delegate will contain the requested object class (bool, bIsError, int, ErrorCode, const FString&, ErrorMessage, const FString&, SessionId) </param>\n/// <returns>Bool:\n/// <ul>\n/// <li>`true`: Sending request succeeded</li>\n/// <li>`false`: Sending request failed</li>\n/// </ul>\n/// </returns>\n" },
		{ "ModuleRelativePath", "Public/Pico_Highlight.h" },
		{ "ToolTip", "<summary>Starts a session to prepare for capturing or recording a screen. </summary>\n<param name =\"WorldContextObject\">Used to get the information about the current world.</param>\n<param name=\"InStartSessionResultDelegate\">Will be executed when the request has been completed.\nDelegate will contain the requested object class (bool, bIsError, int, ErrorCode, const FString&, ErrorMessage, const FString&, SessionId) </param>\n<returns>Bool:\n<ul>\n<li>`true`: Sending request succeeded</li>\n<li>`false`: Sending request failed</li>\n</ul>\n</returns>" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlinePicoHighlightFunction_StartSession_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlinePicoHighlightFunction, nullptr, "StartSession", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOnlinePicoHighlightFunction_StartSession_Statics::OnlinePicoHighlightFunction_eventStartSession_Parms), Z_Construct_UFunction_UOnlinePicoHighlightFunction_StartSession_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePicoHighlightFunction_StartSession_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlinePicoHighlightFunction_StartSession_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePicoHighlightFunction_StartSession_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlinePicoHighlightFunction_StartSession()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlinePicoHighlightFunction_StartSession_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlinePicoHighlightFunction_StopRecord_Statics
	{
		struct OnlinePicoHighlightFunction_eventStopRecord_Parms
		{
			UObject* WorldContextObject;
			FScriptDelegate InStopRecordResultDelegate;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_InStopRecordResultDelegate;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlinePicoHighlightFunction_StopRecord_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlinePicoHighlightFunction_eventStopRecord_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UOnlinePicoHighlightFunction_StopRecord_Statics::NewProp_InStopRecordResultDelegate = { "InStopRecordResultDelegate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlinePicoHighlightFunction_eventStopRecord_Parms, InStopRecordResultDelegate), Z_Construct_UDelegateFunction_OnlineSubsystemPico_StopRecordResult__DelegateSignature, METADATA_PARAMS(nullptr, 0) }; // 488855913
	void Z_Construct_UFunction_UOnlinePicoHighlightFunction_StopRecord_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OnlinePicoHighlightFunction_eventStopRecord_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOnlinePicoHighlightFunction_StopRecord_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(OnlinePicoHighlightFunction_eventStopRecord_Parms), &Z_Construct_UFunction_UOnlinePicoHighlightFunction_StopRecord_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlinePicoHighlightFunction_StopRecord_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoHighlightFunction_StopRecord_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoHighlightFunction_StopRecord_Statics::NewProp_InStopRecordResultDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoHighlightFunction_StopRecord_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlinePicoHighlightFunction_StopRecord_Statics::Function_MetaDataParams[] = {
		{ "Category", "OnlinePico|Highlight" },
		{ "Comment", "/// <summary>Stops recording the current screen. </summary>\n/// <param name =\"WorldContextObject\">Used to get the information about the current world.</param>\n/// <param name=\"InStopRecordResultDelegate\">Will be executed when the request has been completed.\n/// Delegate will contain the requested object class (bool, bIsError, int, ErrorCode, const FString&, ErrorMessage, UPico_RecordInfo *, RecordInfo) </param>\n/// <returns>Bool:\n/// <ul>\n/// <li>`true`: Sending request succeeded</li>\n/// <li>`false`: Sending request failed</li>\n/// </ul>\n/// </returns>\n" },
		{ "ModuleRelativePath", "Public/Pico_Highlight.h" },
		{ "ToolTip", "<summary>Stops recording the current screen. </summary>\n<param name =\"WorldContextObject\">Used to get the information about the current world.</param>\n<param name=\"InStopRecordResultDelegate\">Will be executed when the request has been completed.\nDelegate will contain the requested object class (bool, bIsError, int, ErrorCode, const FString&, ErrorMessage, UPico_RecordInfo *, RecordInfo) </param>\n<returns>Bool:\n<ul>\n<li>`true`: Sending request succeeded</li>\n<li>`false`: Sending request failed</li>\n</ul>\n</returns>" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlinePicoHighlightFunction_StopRecord_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlinePicoHighlightFunction, nullptr, "StopRecord", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOnlinePicoHighlightFunction_StopRecord_Statics::OnlinePicoHighlightFunction_eventStopRecord_Parms), Z_Construct_UFunction_UOnlinePicoHighlightFunction_StopRecord_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePicoHighlightFunction_StopRecord_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlinePicoHighlightFunction_StopRecord_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePicoHighlightFunction_StopRecord_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlinePicoHighlightFunction_StopRecord()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlinePicoHighlightFunction_StopRecord_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOnlinePicoHighlightFunction);
	UClass* Z_Construct_UClass_UOnlinePicoHighlightFunction_NoRegister()
	{
		return UOnlinePicoHighlightFunction::StaticClass();
	}
	struct Z_Construct_UClass_UOnlinePicoHighlightFunction_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOnlinePicoHighlightFunction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemPico,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UOnlinePicoHighlightFunction_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOnlinePicoHighlightFunction_CaptureScreen, "CaptureScreen" }, // 1139050907
		{ &Z_Construct_UFunction_UOnlinePicoHighlightFunction_ListMedia, "ListMedia" }, // 3393797320
		{ &Z_Construct_UFunction_UOnlinePicoHighlightFunction_SaveMedia, "SaveMedia" }, // 281092245
		{ &Z_Construct_UFunction_UOnlinePicoHighlightFunction_ShareMedia, "ShareMedia" }, // 936023165
		{ &Z_Construct_UFunction_UOnlinePicoHighlightFunction_StartRecord, "StartRecord" }, // 755849748
		{ &Z_Construct_UFunction_UOnlinePicoHighlightFunction_StartSession, "StartSession" }, // 1936969065
		{ &Z_Construct_UFunction_UOnlinePicoHighlightFunction_StopRecord, "StopRecord" }, // 1428408749
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlinePicoHighlightFunction_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** @} *//// @brief OnlinePicoHighlight Blueprint Function class.\n" },
		{ "IncludePath", "Pico_Highlight.h" },
		{ "ModuleRelativePath", "Public/Pico_Highlight.h" },
		{ "ToolTip", "@} /// @brief OnlinePicoHighlight Blueprint Function class." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOnlinePicoHighlightFunction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOnlinePicoHighlightFunction>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOnlinePicoHighlightFunction_Statics::ClassParams = {
		&UOnlinePicoHighlightFunction::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UOnlinePicoHighlightFunction_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlinePicoHighlightFunction_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOnlinePicoHighlightFunction()
	{
		if (!Z_Registration_Info_UClass_UOnlinePicoHighlightFunction.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOnlinePicoHighlightFunction.OuterSingleton, Z_Construct_UClass_UOnlinePicoHighlightFunction_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOnlinePicoHighlightFunction.OuterSingleton;
	}
	template<> ONLINESUBSYSTEMPICO_API UClass* StaticClass<UOnlinePicoHighlightFunction>()
	{
		return UOnlinePicoHighlightFunction::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOnlinePicoHighlightFunction);
	UOnlinePicoHighlightFunction::~UOnlinePicoHighlightFunction() {}
	DEFINE_FUNCTION(UPico_CaptureInfo::execGetJobId)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetJobId();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPico_CaptureInfo::execGetImagePath)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetImagePath();
		P_NATIVE_END;
	}
	void UPico_CaptureInfo::StaticRegisterNativesUPico_CaptureInfo()
	{
		UClass* Class = UPico_CaptureInfo::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetImagePath", &UPico_CaptureInfo::execGetImagePath },
			{ "GetJobId", &UPico_CaptureInfo::execGetJobId },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPico_CaptureInfo_GetImagePath_Statics
	{
		struct Pico_CaptureInfo_eventGetImagePath_Parms
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
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPico_CaptureInfo_GetImagePath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Pico_CaptureInfo_eventGetImagePath_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPico_CaptureInfo_GetImagePath_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPico_CaptureInfo_GetImagePath_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPico_CaptureInfo_GetImagePath_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pico Platform|Highlight|Capture Info" },
		{ "Comment", "/** @brief The image's path.*/" },
		{ "ModuleRelativePath", "Public/Pico_Highlight.h" },
		{ "ToolTip", "@brief The image's path." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPico_CaptureInfo_GetImagePath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPico_CaptureInfo, nullptr, "GetImagePath", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPico_CaptureInfo_GetImagePath_Statics::Pico_CaptureInfo_eventGetImagePath_Parms), Z_Construct_UFunction_UPico_CaptureInfo_GetImagePath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_CaptureInfo_GetImagePath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPico_CaptureInfo_GetImagePath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_CaptureInfo_GetImagePath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPico_CaptureInfo_GetImagePath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPico_CaptureInfo_GetImagePath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPico_CaptureInfo_GetJobId_Statics
	{
		struct Pico_CaptureInfo_eventGetJobId_Parms
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
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPico_CaptureInfo_GetJobId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Pico_CaptureInfo_eventGetJobId_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPico_CaptureInfo_GetJobId_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPico_CaptureInfo_GetJobId_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPico_CaptureInfo_GetJobId_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pico Platform|Highlight|Capture Info" },
		{ "Comment", "/** @brief The job ID of a screenshot.*/" },
		{ "ModuleRelativePath", "Public/Pico_Highlight.h" },
		{ "ToolTip", "@brief The job ID of a screenshot." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPico_CaptureInfo_GetJobId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPico_CaptureInfo, nullptr, "GetJobId", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPico_CaptureInfo_GetJobId_Statics::Pico_CaptureInfo_eventGetJobId_Parms), Z_Construct_UFunction_UPico_CaptureInfo_GetJobId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_CaptureInfo_GetJobId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPico_CaptureInfo_GetJobId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_CaptureInfo_GetJobId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPico_CaptureInfo_GetJobId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPico_CaptureInfo_GetJobId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPico_CaptureInfo);
	UClass* Z_Construct_UClass_UPico_CaptureInfo_NoRegister()
	{
		return UPico_CaptureInfo::StaticClass();
	}
	struct Z_Construct_UClass_UPico_CaptureInfo_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPico_CaptureInfo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemPico,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPico_CaptureInfo_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPico_CaptureInfo_GetImagePath, "GetImagePath" }, // 2640508321
		{ &Z_Construct_UFunction_UPico_CaptureInfo_GetJobId, "GetJobId" }, // 2314658151
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPico_CaptureInfo_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/// @brief UPico_CaptureInfo class.\n" },
		{ "IncludePath", "Pico_Highlight.h" },
		{ "ModuleRelativePath", "Public/Pico_Highlight.h" },
		{ "ToolTip", "@brief UPico_CaptureInfo class." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPico_CaptureInfo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPico_CaptureInfo>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPico_CaptureInfo_Statics::ClassParams = {
		&UPico_CaptureInfo::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UPico_CaptureInfo_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPico_CaptureInfo_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPico_CaptureInfo()
	{
		if (!Z_Registration_Info_UClass_UPico_CaptureInfo.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPico_CaptureInfo.OuterSingleton, Z_Construct_UClass_UPico_CaptureInfo_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPico_CaptureInfo.OuterSingleton;
	}
	template<> ONLINESUBSYSTEMPICO_API UClass* StaticClass<UPico_CaptureInfo>()
	{
		return UPico_CaptureInfo::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPico_CaptureInfo);
	UPico_CaptureInfo::~UPico_CaptureInfo() {}
	DEFINE_FUNCTION(UPico_RecordInfo::execGetHeight)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetHeight();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPico_RecordInfo::execGetWidth)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetWidth();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPico_RecordInfo::execGetDurationInMilliSeconds)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetDurationInMilliSeconds();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPico_RecordInfo::execGetJobId)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetJobId();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPico_RecordInfo::execGetVideoPath)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetVideoPath();
		P_NATIVE_END;
	}
	void UPico_RecordInfo::StaticRegisterNativesUPico_RecordInfo()
	{
		UClass* Class = UPico_RecordInfo::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetDurationInMilliSeconds", &UPico_RecordInfo::execGetDurationInMilliSeconds },
			{ "GetHeight", &UPico_RecordInfo::execGetHeight },
			{ "GetJobId", &UPico_RecordInfo::execGetJobId },
			{ "GetVideoPath", &UPico_RecordInfo::execGetVideoPath },
			{ "GetWidth", &UPico_RecordInfo::execGetWidth },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPico_RecordInfo_GetDurationInMilliSeconds_Statics
	{
		struct Pico_RecordInfo_eventGetDurationInMilliSeconds_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPico_RecordInfo_GetDurationInMilliSeconds_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Pico_RecordInfo_eventGetDurationInMilliSeconds_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPico_RecordInfo_GetDurationInMilliSeconds_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPico_RecordInfo_GetDurationInMilliSeconds_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPico_RecordInfo_GetDurationInMilliSeconds_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pico Platform|Highlight|Record Info" },
		{ "Comment", "/** @brief The duration time of a video. The units are in milliseconds.*/" },
		{ "ModuleRelativePath", "Public/Pico_Highlight.h" },
		{ "ToolTip", "@brief The duration time of a video. The units are in milliseconds." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPico_RecordInfo_GetDurationInMilliSeconds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPico_RecordInfo, nullptr, "GetDurationInMilliSeconds", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPico_RecordInfo_GetDurationInMilliSeconds_Statics::Pico_RecordInfo_eventGetDurationInMilliSeconds_Parms), Z_Construct_UFunction_UPico_RecordInfo_GetDurationInMilliSeconds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_RecordInfo_GetDurationInMilliSeconds_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPico_RecordInfo_GetDurationInMilliSeconds_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_RecordInfo_GetDurationInMilliSeconds_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPico_RecordInfo_GetDurationInMilliSeconds()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPico_RecordInfo_GetDurationInMilliSeconds_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPico_RecordInfo_GetHeight_Statics
	{
		struct Pico_RecordInfo_eventGetHeight_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPico_RecordInfo_GetHeight_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Pico_RecordInfo_eventGetHeight_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPico_RecordInfo_GetHeight_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPico_RecordInfo_GetHeight_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPico_RecordInfo_GetHeight_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pico Platform|Highlight|Record Info" },
		{ "Comment", "/** @brief The height of a video. The units are in pixels. */" },
		{ "ModuleRelativePath", "Public/Pico_Highlight.h" },
		{ "ToolTip", "@brief The height of a video. The units are in pixels." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPico_RecordInfo_GetHeight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPico_RecordInfo, nullptr, "GetHeight", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPico_RecordInfo_GetHeight_Statics::Pico_RecordInfo_eventGetHeight_Parms), Z_Construct_UFunction_UPico_RecordInfo_GetHeight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_RecordInfo_GetHeight_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPico_RecordInfo_GetHeight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_RecordInfo_GetHeight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPico_RecordInfo_GetHeight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPico_RecordInfo_GetHeight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPico_RecordInfo_GetJobId_Statics
	{
		struct Pico_RecordInfo_eventGetJobId_Parms
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
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPico_RecordInfo_GetJobId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Pico_RecordInfo_eventGetJobId_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPico_RecordInfo_GetJobId_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPico_RecordInfo_GetJobId_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPico_RecordInfo_GetJobId_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pico Platform|Highlight|Record Info" },
		{ "Comment", "/** @brief The job ID of a video.*/" },
		{ "ModuleRelativePath", "Public/Pico_Highlight.h" },
		{ "ToolTip", "@brief The job ID of a video." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPico_RecordInfo_GetJobId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPico_RecordInfo, nullptr, "GetJobId", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPico_RecordInfo_GetJobId_Statics::Pico_RecordInfo_eventGetJobId_Parms), Z_Construct_UFunction_UPico_RecordInfo_GetJobId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_RecordInfo_GetJobId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPico_RecordInfo_GetJobId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_RecordInfo_GetJobId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPico_RecordInfo_GetJobId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPico_RecordInfo_GetJobId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPico_RecordInfo_GetVideoPath_Statics
	{
		struct Pico_RecordInfo_eventGetVideoPath_Parms
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
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPico_RecordInfo_GetVideoPath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Pico_RecordInfo_eventGetVideoPath_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPico_RecordInfo_GetVideoPath_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPico_RecordInfo_GetVideoPath_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPico_RecordInfo_GetVideoPath_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pico Platform|Highlight|Record Info" },
		{ "Comment", "/** @brief The video's path.*/" },
		{ "ModuleRelativePath", "Public/Pico_Highlight.h" },
		{ "ToolTip", "@brief The video's path." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPico_RecordInfo_GetVideoPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPico_RecordInfo, nullptr, "GetVideoPath", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPico_RecordInfo_GetVideoPath_Statics::Pico_RecordInfo_eventGetVideoPath_Parms), Z_Construct_UFunction_UPico_RecordInfo_GetVideoPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_RecordInfo_GetVideoPath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPico_RecordInfo_GetVideoPath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_RecordInfo_GetVideoPath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPico_RecordInfo_GetVideoPath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPico_RecordInfo_GetVideoPath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPico_RecordInfo_GetWidth_Statics
	{
		struct Pico_RecordInfo_eventGetWidth_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPico_RecordInfo_GetWidth_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Pico_RecordInfo_eventGetWidth_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPico_RecordInfo_GetWidth_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPico_RecordInfo_GetWidth_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPico_RecordInfo_GetWidth_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pico Platform|Highlight|Record Info" },
		{ "Comment", "/** @brief The width of a video. The units are in pixels.*/" },
		{ "ModuleRelativePath", "Public/Pico_Highlight.h" },
		{ "ToolTip", "@brief The width of a video. The units are in pixels." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPico_RecordInfo_GetWidth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPico_RecordInfo, nullptr, "GetWidth", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPico_RecordInfo_GetWidth_Statics::Pico_RecordInfo_eventGetWidth_Parms), Z_Construct_UFunction_UPico_RecordInfo_GetWidth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_RecordInfo_GetWidth_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPico_RecordInfo_GetWidth_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_RecordInfo_GetWidth_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPico_RecordInfo_GetWidth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPico_RecordInfo_GetWidth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPico_RecordInfo);
	UClass* Z_Construct_UClass_UPico_RecordInfo_NoRegister()
	{
		return UPico_RecordInfo::StaticClass();
	}
	struct Z_Construct_UClass_UPico_RecordInfo_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPico_RecordInfo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemPico,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPico_RecordInfo_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPico_RecordInfo_GetDurationInMilliSeconds, "GetDurationInMilliSeconds" }, // 1455288092
		{ &Z_Construct_UFunction_UPico_RecordInfo_GetHeight, "GetHeight" }, // 3214079805
		{ &Z_Construct_UFunction_UPico_RecordInfo_GetJobId, "GetJobId" }, // 1496057071
		{ &Z_Construct_UFunction_UPico_RecordInfo_GetVideoPath, "GetVideoPath" }, // 4206814163
		{ &Z_Construct_UFunction_UPico_RecordInfo_GetWidth, "GetWidth" }, // 1104050543
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPico_RecordInfo_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/// @brief UPico_RecordInfo class.\n" },
		{ "IncludePath", "Pico_Highlight.h" },
		{ "ModuleRelativePath", "Public/Pico_Highlight.h" },
		{ "ToolTip", "@brief UPico_RecordInfo class." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPico_RecordInfo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPico_RecordInfo>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPico_RecordInfo_Statics::ClassParams = {
		&UPico_RecordInfo::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UPico_RecordInfo_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPico_RecordInfo_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPico_RecordInfo()
	{
		if (!Z_Registration_Info_UClass_UPico_RecordInfo.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPico_RecordInfo.OuterSingleton, Z_Construct_UClass_UPico_RecordInfo_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPico_RecordInfo.OuterSingleton;
	}
	template<> ONLINESUBSYSTEMPICO_API UClass* StaticClass<UPico_RecordInfo>()
	{
		return UPico_RecordInfo::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPico_RecordInfo);
	UPico_RecordInfo::~UPico_RecordInfo() {}
	DEFINE_FUNCTION(UPico_SessionMedia::execGetVideosElement)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UPico_RecordInfo**)Z_Param__Result=P_THIS->GetVideosElement(Z_Param_Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPico_SessionMedia::execGetVideosSize)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetVideosSize();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPico_SessionMedia::execGetImagesElement)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UPico_CaptureInfo**)Z_Param__Result=P_THIS->GetImagesElement(Z_Param_Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPico_SessionMedia::execGetImagesSize)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetImagesSize();
		P_NATIVE_END;
	}
	void UPico_SessionMedia::StaticRegisterNativesUPico_SessionMedia()
	{
		UClass* Class = UPico_SessionMedia::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetImagesElement", &UPico_SessionMedia::execGetImagesElement },
			{ "GetImagesSize", &UPico_SessionMedia::execGetImagesSize },
			{ "GetVideosElement", &UPico_SessionMedia::execGetVideosElement },
			{ "GetVideosSize", &UPico_SessionMedia::execGetVideosSize },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPico_SessionMedia_GetImagesElement_Statics
	{
		struct Pico_SessionMedia_eventGetImagesElement_Parms
		{
			int32 Index;
			UPico_CaptureInfo* ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPico_SessionMedia_GetImagesElement_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Pico_SessionMedia_eventGetImagesElement_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPico_SessionMedia_GetImagesElement_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Pico_SessionMedia_eventGetImagesElement_Parms, ReturnValue), Z_Construct_UClass_UPico_CaptureInfo_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPico_SessionMedia_GetImagesElement_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPico_SessionMedia_GetImagesElement_Statics::NewProp_Index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPico_SessionMedia_GetImagesElement_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPico_SessionMedia_GetImagesElement_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pico Platform|Highlight|Capture Info" },
		{ "Comment", "/** @brief The element of an image array.*/" },
		{ "ModuleRelativePath", "Public/Pico_Highlight.h" },
		{ "ToolTip", "@brief The element of an image array." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPico_SessionMedia_GetImagesElement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPico_SessionMedia, nullptr, "GetImagesElement", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPico_SessionMedia_GetImagesElement_Statics::Pico_SessionMedia_eventGetImagesElement_Parms), Z_Construct_UFunction_UPico_SessionMedia_GetImagesElement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_SessionMedia_GetImagesElement_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPico_SessionMedia_GetImagesElement_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_SessionMedia_GetImagesElement_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPico_SessionMedia_GetImagesElement()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPico_SessionMedia_GetImagesElement_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPico_SessionMedia_GetImagesSize_Statics
	{
		struct Pico_SessionMedia_eventGetImagesSize_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPico_SessionMedia_GetImagesSize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Pico_SessionMedia_eventGetImagesSize_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPico_SessionMedia_GetImagesSize_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPico_SessionMedia_GetImagesSize_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPico_SessionMedia_GetImagesSize_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pico Platform|Highlight|Capture Info" },
		{ "Comment", "/** @brief The number of images in the image array.*/" },
		{ "ModuleRelativePath", "Public/Pico_Highlight.h" },
		{ "ToolTip", "@brief The number of images in the image array." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPico_SessionMedia_GetImagesSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPico_SessionMedia, nullptr, "GetImagesSize", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPico_SessionMedia_GetImagesSize_Statics::Pico_SessionMedia_eventGetImagesSize_Parms), Z_Construct_UFunction_UPico_SessionMedia_GetImagesSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_SessionMedia_GetImagesSize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPico_SessionMedia_GetImagesSize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_SessionMedia_GetImagesSize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPico_SessionMedia_GetImagesSize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPico_SessionMedia_GetImagesSize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPico_SessionMedia_GetVideosElement_Statics
	{
		struct Pico_SessionMedia_eventGetVideosElement_Parms
		{
			int32 Index;
			UPico_RecordInfo* ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPico_SessionMedia_GetVideosElement_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Pico_SessionMedia_eventGetVideosElement_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPico_SessionMedia_GetVideosElement_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Pico_SessionMedia_eventGetVideosElement_Parms, ReturnValue), Z_Construct_UClass_UPico_RecordInfo_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPico_SessionMedia_GetVideosElement_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPico_SessionMedia_GetVideosElement_Statics::NewProp_Index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPico_SessionMedia_GetVideosElement_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPico_SessionMedia_GetVideosElement_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pico Platform|Highlight|Record Info" },
		{ "Comment", "/** @brief The element of a video array.*/" },
		{ "ModuleRelativePath", "Public/Pico_Highlight.h" },
		{ "ToolTip", "@brief The element of a video array." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPico_SessionMedia_GetVideosElement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPico_SessionMedia, nullptr, "GetVideosElement", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPico_SessionMedia_GetVideosElement_Statics::Pico_SessionMedia_eventGetVideosElement_Parms), Z_Construct_UFunction_UPico_SessionMedia_GetVideosElement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_SessionMedia_GetVideosElement_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPico_SessionMedia_GetVideosElement_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_SessionMedia_GetVideosElement_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPico_SessionMedia_GetVideosElement()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPico_SessionMedia_GetVideosElement_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPico_SessionMedia_GetVideosSize_Statics
	{
		struct Pico_SessionMedia_eventGetVideosSize_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPico_SessionMedia_GetVideosSize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Pico_SessionMedia_eventGetVideosSize_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPico_SessionMedia_GetVideosSize_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPico_SessionMedia_GetVideosSize_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPico_SessionMedia_GetVideosSize_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pico Platform|Highlight|Record Info" },
		{ "Comment", "/** @brief The number of videos in the video array.*/" },
		{ "ModuleRelativePath", "Public/Pico_Highlight.h" },
		{ "ToolTip", "@brief The number of videos in the video array." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPico_SessionMedia_GetVideosSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPico_SessionMedia, nullptr, "GetVideosSize", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPico_SessionMedia_GetVideosSize_Statics::Pico_SessionMedia_eventGetVideosSize_Parms), Z_Construct_UFunction_UPico_SessionMedia_GetVideosSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_SessionMedia_GetVideosSize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPico_SessionMedia_GetVideosSize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_SessionMedia_GetVideosSize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPico_SessionMedia_GetVideosSize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPico_SessionMedia_GetVideosSize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPico_SessionMedia);
	UClass* Z_Construct_UClass_UPico_SessionMedia_NoRegister()
	{
		return UPico_SessionMedia::StaticClass();
	}
	struct Z_Construct_UClass_UPico_SessionMedia_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPico_SessionMedia_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemPico,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPico_SessionMedia_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPico_SessionMedia_GetImagesElement, "GetImagesElement" }, // 2328857939
		{ &Z_Construct_UFunction_UPico_SessionMedia_GetImagesSize, "GetImagesSize" }, // 213787743
		{ &Z_Construct_UFunction_UPico_SessionMedia_GetVideosElement, "GetVideosElement" }, // 4038303393
		{ &Z_Construct_UFunction_UPico_SessionMedia_GetVideosSize, "GetVideosSize" }, // 2901202429
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPico_SessionMedia_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/// @brief UPico_SessionMedia class.\n" },
		{ "IncludePath", "Pico_Highlight.h" },
		{ "ModuleRelativePath", "Public/Pico_Highlight.h" },
		{ "ToolTip", "@brief UPico_SessionMedia class." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPico_SessionMedia_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPico_SessionMedia>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPico_SessionMedia_Statics::ClassParams = {
		&UPico_SessionMedia::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UPico_SessionMedia_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPico_SessionMedia_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPico_SessionMedia()
	{
		if (!Z_Registration_Info_UClass_UPico_SessionMedia.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPico_SessionMedia.OuterSingleton, Z_Construct_UClass_UPico_SessionMedia_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPico_SessionMedia.OuterSingleton;
	}
	template<> ONLINESUBSYSTEMPICO_API UClass* StaticClass<UPico_SessionMedia>()
	{
		return UPico_SessionMedia::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPico_SessionMedia);
	UPico_SessionMedia::~UPico_SessionMedia() {}
	struct Z_CompiledInDeferFile_FID_VR_VrVideoUpdateWS_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Highlight_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_VR_VrVideoUpdateWS_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Highlight_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UOnlinePicoHighlightFunction, UOnlinePicoHighlightFunction::StaticClass, TEXT("UOnlinePicoHighlightFunction"), &Z_Registration_Info_UClass_UOnlinePicoHighlightFunction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOnlinePicoHighlightFunction), 1124007969U) },
		{ Z_Construct_UClass_UPico_CaptureInfo, UPico_CaptureInfo::StaticClass, TEXT("UPico_CaptureInfo"), &Z_Registration_Info_UClass_UPico_CaptureInfo, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPico_CaptureInfo), 1760964092U) },
		{ Z_Construct_UClass_UPico_RecordInfo, UPico_RecordInfo::StaticClass, TEXT("UPico_RecordInfo"), &Z_Registration_Info_UClass_UPico_RecordInfo, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPico_RecordInfo), 3669534109U) },
		{ Z_Construct_UClass_UPico_SessionMedia, UPico_SessionMedia::StaticClass, TEXT("UPico_SessionMedia"), &Z_Registration_Info_UClass_UPico_SessionMedia, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPico_SessionMedia), 4220598052U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_VR_VrVideoUpdateWS_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Highlight_h_3652774428(TEXT("/Script/OnlineSubsystemPico"),
		Z_CompiledInDeferFile_FID_VR_VrVideoUpdateWS_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Highlight_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_VR_VrVideoUpdateWS_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Highlight_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
