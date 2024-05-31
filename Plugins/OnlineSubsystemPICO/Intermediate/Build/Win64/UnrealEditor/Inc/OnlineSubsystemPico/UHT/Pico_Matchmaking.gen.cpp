// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlineSubsystemPico/Public/Pico_Matchmaking.h"
#include "OnlineSubsystemPico/Public/OnlineSubsystemPicoNames.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePico_Matchmaking() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ONLINESUBSYSTEMPICO_API UClass* Z_Construct_UClass_UOnlinePicoMatchmakingFunction();
	ONLINESUBSYSTEMPICO_API UClass* Z_Construct_UClass_UOnlinePicoMatchmakingFunction_NoRegister();
	ONLINESUBSYSTEMPICO_API UClass* Z_Construct_UClass_UPico_MatchmakingAdminSnapshot();
	ONLINESUBSYSTEMPICO_API UClass* Z_Construct_UClass_UPico_MatchmakingAdminSnapshot_NoRegister();
	ONLINESUBSYSTEMPICO_API UClass* Z_Construct_UClass_UPico_MatchmakingAdminSnapshotCandidate();
	ONLINESUBSYSTEMPICO_API UClass* Z_Construct_UClass_UPico_MatchmakingAdminSnapshotCandidate_NoRegister();
	ONLINESUBSYSTEMPICO_API UClass* Z_Construct_UClass_UPico_MatchmakingAdminSnapshotCandidateList();
	ONLINESUBSYSTEMPICO_API UClass* Z_Construct_UClass_UPico_MatchmakingAdminSnapshotCandidateList_NoRegister();
	ONLINESUBSYSTEMPICO_API UClass* Z_Construct_UClass_UPico_MatchmakingBrowseResult();
	ONLINESUBSYSTEMPICO_API UClass* Z_Construct_UClass_UPico_MatchmakingBrowseResult_NoRegister();
	ONLINESUBSYSTEMPICO_API UClass* Z_Construct_UClass_UPico_MatchmakingEnqueueResult();
	ONLINESUBSYSTEMPICO_API UClass* Z_Construct_UClass_UPico_MatchmakingEnqueueResult_NoRegister();
	ONLINESUBSYSTEMPICO_API UClass* Z_Construct_UClass_UPico_MatchmakingEnqueueResultAndRoom();
	ONLINESUBSYSTEMPICO_API UClass* Z_Construct_UClass_UPico_MatchmakingEnqueueResultAndRoom_NoRegister();
	ONLINESUBSYSTEMPICO_API UClass* Z_Construct_UClass_UPico_MatchmakingRoom();
	ONLINESUBSYSTEMPICO_API UClass* Z_Construct_UClass_UPico_MatchmakingRoom_NoRegister();
	ONLINESUBSYSTEMPICO_API UClass* Z_Construct_UClass_UPico_MatchmakingRoomList();
	ONLINESUBSYSTEMPICO_API UClass* Z_Construct_UClass_UPico_MatchmakingRoomList_NoRegister();
	ONLINESUBSYSTEMPICO_API UClass* Z_Construct_UClass_UPico_MatchmakingStats();
	ONLINESUBSYSTEMPICO_API UClass* Z_Construct_UClass_UPico_MatchmakingStats_NoRegister();
	ONLINESUBSYSTEMPICO_API UClass* Z_Construct_UClass_UPico_Room_NoRegister();
	ONLINESUBSYSTEMPICO_API UEnum* Z_Construct_UEnum_OnlineSubsystemPico_EMatchmakingStatApproach();
	ONLINESUBSYSTEMPICO_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemPico_MatchmakingBrowse2__DelegateSignature();
	ONLINESUBSYSTEMPICO_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemPico_MatchmakingBrowse2CustomPage__DelegateSignature();
	ONLINESUBSYSTEMPICO_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemPico_MatchmakingCancel__DelegateSignature();
	ONLINESUBSYSTEMPICO_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemPico_MatchmakingCreateAndEnqueueRoom2__DelegateSignature();
	ONLINESUBSYSTEMPICO_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemPico_MatchmakingEnqueue2__DelegateSignature();
	ONLINESUBSYSTEMPICO_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemPico_MatchmakingGetAdminSnapshot__DelegateSignature();
	ONLINESUBSYSTEMPICO_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemPico_MatchmakingGetStats__DelegateSignature();
	ONLINESUBSYSTEMPICO_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemPico_MatchmakingReportResultsInsecure__DelegateSignature();
	ONLINESUBSYSTEMPICO_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemPico_MatchmakingStartMatch__DelegateSignature();
	ONLINESUBSYSTEMPICO_API UScriptStruct* Z_Construct_UScriptStruct_FPicoMatchmakingOptions();
	UPackage* Z_Construct_UPackage__Script_OnlineSubsystemPico();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_OnlineSubsystemPico_MatchmakingReportResultsInsecure__DelegateSignature_Statics
	{
		struct _Script_OnlineSubsystemPico_eventMatchmakingReportResultsInsecure_Parms
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
	void Z_Construct_UDelegateFunction_OnlineSubsystemPico_MatchmakingReportResultsInsecure__DelegateSignature_Statics::NewProp_bIsError_SetBit(void* Obj)
	{
		((_Script_OnlineSubsystemPico_eventMatchmakingReportResultsInsecure_Parms*)Obj)->bIsError = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemPico_MatchmakingReportResultsInsecure__DelegateSignature_Statics::NewProp_bIsError = { "bIsError", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(_Script_OnlineSubsystemPico_eventMatchmakingReportResultsInsecure_Parms), &Z_Construct_UDelegateFunction_OnlineSubsystemPico_MatchmakingReportResultsInsecure__DelegateSignature_Statics::NewProp_bIsError_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemPico_MatchmakingReportResultsInsecure__DelegateSignature_Statics::NewProp_ErrorCode = { "ErrorCode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_OnlineSubsystemPico_eventMatchmakingReportResultsInsecure_Parms, ErrorCode), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemPico_MatchmakingReportResultsInsecure__DelegateSignature_Statics::NewProp_ErrorMessage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemPico_MatchmakingReportResultsInsecure__DelegateSignature_Statics::NewProp_ErrorMessage = { "ErrorMessage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_OnlineSubsystemPico_eventMatchmakingReportResultsInsecure_Parms, ErrorMessage), METADATA_PARAMS(Z_Construct_UDelegateFunction_OnlineSubsystemPico_MatchmakingReportResultsInsecure__DelegateSignature_Statics::NewProp_ErrorMessage_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemPico_MatchmakingReportResultsInsecure__DelegateSignature_Statics::NewProp_ErrorMessage_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemPico_MatchmakingReportResultsInsecure__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemPico_MatchmakingReportResultsInsecure__DelegateSignature_Statics::NewProp_bIsError,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemPico_MatchmakingReportResultsInsecure__DelegateSignature_Statics::NewProp_ErrorCode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemPico_MatchmakingReportResultsInsecure__DelegateSignature_Statics::NewProp_ErrorMessage,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemPico_MatchmakingReportResultsInsecure__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Pico_Matchmaking.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemPico_MatchmakingReportResultsInsecure__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemPico, nullptr, "MatchmakingReportResultsInsecure__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemPico_MatchmakingReportResultsInsecure__DelegateSignature_Statics::_Script_OnlineSubsystemPico_eventMatchmakingReportResultsInsecure_Parms), Z_Construct_UDelegateFunction_OnlineSubsystemPico_MatchmakingReportResultsInsecure__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemPico_MatchmakingReportResultsInsecure__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_OnlineSubsystemPico_MatchmakingReportResultsInsecure__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemPico_MatchmakingReportResultsInsecure__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemPico_MatchmakingReportResultsInsecure__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemPico_MatchmakingReportResultsInsecure__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_OnlineSubsystemPico_MatchmakingGetStats__DelegateSignature_Statics
	{
		struct _Script_OnlineSubsystemPico_eventMatchmakingGetStats_Parms
		{
			bool bIsError;
			int32 ErrorCode;
			FString ErrorMessage;
			UPico_MatchmakingStats* MatchmakingStats;
		};
		static void NewProp_bIsError_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsError;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_ErrorCode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ErrorMessage_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ErrorMessage;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MatchmakingStats;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_OnlineSubsystemPico_MatchmakingGetStats__DelegateSignature_Statics::NewProp_bIsError_SetBit(void* Obj)
	{
		((_Script_OnlineSubsystemPico_eventMatchmakingGetStats_Parms*)Obj)->bIsError = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemPico_MatchmakingGetStats__DelegateSignature_Statics::NewProp_bIsError = { "bIsError", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(_Script_OnlineSubsystemPico_eventMatchmakingGetStats_Parms), &Z_Construct_UDelegateFunction_OnlineSubsystemPico_MatchmakingGetStats__DelegateSignature_Statics::NewProp_bIsError_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemPico_MatchmakingGetStats__DelegateSignature_Statics::NewProp_ErrorCode = { "ErrorCode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_OnlineSubsystemPico_eventMatchmakingGetStats_Parms, ErrorCode), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemPico_MatchmakingGetStats__DelegateSignature_Statics::NewProp_ErrorMessage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemPico_MatchmakingGetStats__DelegateSignature_Statics::NewProp_ErrorMessage = { "ErrorMessage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_OnlineSubsystemPico_eventMatchmakingGetStats_Parms, ErrorMessage), METADATA_PARAMS(Z_Construct_UDelegateFunction_OnlineSubsystemPico_MatchmakingGetStats__DelegateSignature_Statics::NewProp_ErrorMessage_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemPico_MatchmakingGetStats__DelegateSignature_Statics::NewProp_ErrorMessage_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemPico_MatchmakingGetStats__DelegateSignature_Statics::NewProp_MatchmakingStats = { "MatchmakingStats", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_OnlineSubsystemPico_eventMatchmakingGetStats_Parms, MatchmakingStats), Z_Construct_UClass_UPico_MatchmakingStats_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemPico_MatchmakingGetStats__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemPico_MatchmakingGetStats__DelegateSignature_Statics::NewProp_bIsError,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemPico_MatchmakingGetStats__DelegateSignature_Statics::NewProp_ErrorCode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemPico_MatchmakingGetStats__DelegateSignature_Statics::NewProp_ErrorMessage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemPico_MatchmakingGetStats__DelegateSignature_Statics::NewProp_MatchmakingStats,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemPico_MatchmakingGetStats__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Pico_Matchmaking.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemPico_MatchmakingGetStats__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemPico, nullptr, "MatchmakingGetStats__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemPico_MatchmakingGetStats__DelegateSignature_Statics::_Script_OnlineSubsystemPico_eventMatchmakingGetStats_Parms), Z_Construct_UDelegateFunction_OnlineSubsystemPico_MatchmakingGetStats__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemPico_MatchmakingGetStats__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_OnlineSubsystemPico_MatchmakingGetStats__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemPico_MatchmakingGetStats__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemPico_MatchmakingGetStats__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemPico_MatchmakingGetStats__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_OnlineSubsystemPico_MatchmakingBrowse2__DelegateSignature_Statics
	{
		struct _Script_OnlineSubsystemPico_eventMatchmakingBrowse2_Parms
		{
			bool bIsError;
			int32 ErrorCode;
			FString ErrorMessage;
			UPico_MatchmakingBrowseResult* MatchmakingBrowseResult;
		};
		static void NewProp_bIsError_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsError;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_ErrorCode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ErrorMessage_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ErrorMessage;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MatchmakingBrowseResult;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_OnlineSubsystemPico_MatchmakingBrowse2__DelegateSignature_Statics::NewProp_bIsError_SetBit(void* Obj)
	{
		((_Script_OnlineSubsystemPico_eventMatchmakingBrowse2_Parms*)Obj)->bIsError = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemPico_MatchmakingBrowse2__DelegateSignature_Statics::NewProp_bIsError = { "bIsError", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(_Script_OnlineSubsystemPico_eventMatchmakingBrowse2_Parms), &Z_Construct_UDelegateFunction_OnlineSubsystemPico_MatchmakingBrowse2__DelegateSignature_Statics::NewProp_bIsError_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemPico_MatchmakingBrowse2__DelegateSignature_Statics::NewProp_ErrorCode = { "ErrorCode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_OnlineSubsystemPico_eventMatchmakingBrowse2_Parms, ErrorCode), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemPico_MatchmakingBrowse2__DelegateSignature_Statics::NewProp_ErrorMessage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemPico_MatchmakingBrowse2__DelegateSignature_Statics::NewProp_ErrorMessage = { "ErrorMessage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_OnlineSubsystemPico_eventMatchmakingBrowse2_Parms, ErrorMessage), METADATA_PARAMS(Z_Construct_UDelegateFunction_OnlineSubsystemPico_MatchmakingBrowse2__DelegateSignature_Statics::NewProp_ErrorMessage_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemPico_MatchmakingBrowse2__DelegateSignature_Statics::NewProp_ErrorMessage_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemPico_MatchmakingBrowse2__DelegateSignature_Statics::NewProp_MatchmakingBrowseResult = { "MatchmakingBrowseResult", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_OnlineSubsystemPico_eventMatchmakingBrowse2_Parms, MatchmakingBrowseResult), Z_Construct_UClass_UPico_MatchmakingBrowseResult_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemPico_MatchmakingBrowse2__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemPico_MatchmakingBrowse2__DelegateSignature_Statics::NewProp_bIsError,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemPico_MatchmakingBrowse2__DelegateSignature_Statics::NewProp_ErrorCode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemPico_MatchmakingBrowse2__DelegateSignature_Statics::NewProp_ErrorMessage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemPico_MatchmakingBrowse2__DelegateSignature_Statics::NewProp_MatchmakingBrowseResult,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemPico_MatchmakingBrowse2__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Pico_Matchmaking.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemPico_MatchmakingBrowse2__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemPico, nullptr, "MatchmakingBrowse2__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemPico_MatchmakingBrowse2__DelegateSignature_Statics::_Script_OnlineSubsystemPico_eventMatchmakingBrowse2_Parms), Z_Construct_UDelegateFunction_OnlineSubsystemPico_MatchmakingBrowse2__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemPico_MatchmakingBrowse2__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_OnlineSubsystemPico_MatchmakingBrowse2__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemPico_MatchmakingBrowse2__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemPico_MatchmakingBrowse2__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemPico_MatchmakingBrowse2__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_OnlineSubsystemPico_MatchmakingBrowse2CustomPage__DelegateSignature_Statics
	{
		struct _Script_OnlineSubsystemPico_eventMatchmakingBrowse2CustomPage_Parms
		{
			bool bIsError;
			int32 ErrorCode;
			FString ErrorMessage;
			UPico_MatchmakingBrowseResult* MatchmakingBrowseResult;
		};
		static void NewProp_bIsError_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsError;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_ErrorCode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ErrorMessage_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ErrorMessage;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MatchmakingBrowseResult;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_OnlineSubsystemPico_MatchmakingBrowse2CustomPage__DelegateSignature_Statics::NewProp_bIsError_SetBit(void* Obj)
	{
		((_Script_OnlineSubsystemPico_eventMatchmakingBrowse2CustomPage_Parms*)Obj)->bIsError = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemPico_MatchmakingBrowse2CustomPage__DelegateSignature_Statics::NewProp_bIsError = { "bIsError", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(_Script_OnlineSubsystemPico_eventMatchmakingBrowse2CustomPage_Parms), &Z_Construct_UDelegateFunction_OnlineSubsystemPico_MatchmakingBrowse2CustomPage__DelegateSignature_Statics::NewProp_bIsError_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemPico_MatchmakingBrowse2CustomPage__DelegateSignature_Statics::NewProp_ErrorCode = { "ErrorCode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_OnlineSubsystemPico_eventMatchmakingBrowse2CustomPage_Parms, ErrorCode), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemPico_MatchmakingBrowse2CustomPage__DelegateSignature_Statics::NewProp_ErrorMessage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemPico_MatchmakingBrowse2CustomPage__DelegateSignature_Statics::NewProp_ErrorMessage = { "ErrorMessage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_OnlineSubsystemPico_eventMatchmakingBrowse2CustomPage_Parms, ErrorMessage), METADATA_PARAMS(Z_Construct_UDelegateFunction_OnlineSubsystemPico_MatchmakingBrowse2CustomPage__DelegateSignature_Statics::NewProp_ErrorMessage_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemPico_MatchmakingBrowse2CustomPage__DelegateSignature_Statics::NewProp_ErrorMessage_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemPico_MatchmakingBrowse2CustomPage__DelegateSignature_Statics::NewProp_MatchmakingBrowseResult = { "MatchmakingBrowseResult", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_OnlineSubsystemPico_eventMatchmakingBrowse2CustomPage_Parms, MatchmakingBrowseResult), Z_Construct_UClass_UPico_MatchmakingBrowseResult_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemPico_MatchmakingBrowse2CustomPage__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemPico_MatchmakingBrowse2CustomPage__DelegateSignature_Statics::NewProp_bIsError,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemPico_MatchmakingBrowse2CustomPage__DelegateSignature_Statics::NewProp_ErrorCode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemPico_MatchmakingBrowse2CustomPage__DelegateSignature_Statics::NewProp_ErrorMessage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemPico_MatchmakingBrowse2CustomPage__DelegateSignature_Statics::NewProp_MatchmakingBrowseResult,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemPico_MatchmakingBrowse2CustomPage__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Pico_Matchmaking.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemPico_MatchmakingBrowse2CustomPage__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemPico, nullptr, "MatchmakingBrowse2CustomPage__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemPico_MatchmakingBrowse2CustomPage__DelegateSignature_Statics::_Script_OnlineSubsystemPico_eventMatchmakingBrowse2CustomPage_Parms), Z_Construct_UDelegateFunction_OnlineSubsystemPico_MatchmakingBrowse2CustomPage__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemPico_MatchmakingBrowse2CustomPage__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_OnlineSubsystemPico_MatchmakingBrowse2CustomPage__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemPico_MatchmakingBrowse2CustomPage__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemPico_MatchmakingBrowse2CustomPage__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemPico_MatchmakingBrowse2CustomPage__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_OnlineSubsystemPico_MatchmakingCancel__DelegateSignature_Statics
	{
		struct _Script_OnlineSubsystemPico_eventMatchmakingCancel_Parms
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
	void Z_Construct_UDelegateFunction_OnlineSubsystemPico_MatchmakingCancel__DelegateSignature_Statics::NewProp_bIsError_SetBit(void* Obj)
	{
		((_Script_OnlineSubsystemPico_eventMatchmakingCancel_Parms*)Obj)->bIsError = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemPico_MatchmakingCancel__DelegateSignature_Statics::NewProp_bIsError = { "bIsError", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(_Script_OnlineSubsystemPico_eventMatchmakingCancel_Parms), &Z_Construct_UDelegateFunction_OnlineSubsystemPico_MatchmakingCancel__DelegateSignature_Statics::NewProp_bIsError_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemPico_MatchmakingCancel__DelegateSignature_Statics::NewProp_ErrorCode = { "ErrorCode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_OnlineSubsystemPico_eventMatchmakingCancel_Parms, ErrorCode), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemPico_MatchmakingCancel__DelegateSignature_Statics::NewProp_ErrorMessage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemPico_MatchmakingCancel__DelegateSignature_Statics::NewProp_ErrorMessage = { "ErrorMessage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_OnlineSubsystemPico_eventMatchmakingCancel_Parms, ErrorMessage), METADATA_PARAMS(Z_Construct_UDelegateFunction_OnlineSubsystemPico_MatchmakingCancel__DelegateSignature_Statics::NewProp_ErrorMessage_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemPico_MatchmakingCancel__DelegateSignature_Statics::NewProp_ErrorMessage_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemPico_MatchmakingCancel__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemPico_MatchmakingCancel__DelegateSignature_Statics::NewProp_bIsError,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemPico_MatchmakingCancel__DelegateSignature_Statics::NewProp_ErrorCode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemPico_MatchmakingCancel__DelegateSignature_Statics::NewProp_ErrorMessage,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemPico_MatchmakingCancel__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Pico_Matchmaking.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemPico_MatchmakingCancel__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemPico, nullptr, "MatchmakingCancel__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemPico_MatchmakingCancel__DelegateSignature_Statics::_Script_OnlineSubsystemPico_eventMatchmakingCancel_Parms), Z_Construct_UDelegateFunction_OnlineSubsystemPico_MatchmakingCancel__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemPico_MatchmakingCancel__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_OnlineSubsystemPico_MatchmakingCancel__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemPico_MatchmakingCancel__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemPico_MatchmakingCancel__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemPico_MatchmakingCancel__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_OnlineSubsystemPico_MatchmakingCreateAndEnqueueRoom2__DelegateSignature_Statics
	{
		struct _Script_OnlineSubsystemPico_eventMatchmakingCreateAndEnqueueRoom2_Parms
		{
			bool bIsError;
			int32 ErrorCode;
			FString ErrorMessage;
			UPico_MatchmakingEnqueueResultAndRoom* MatchmakingEnqueueResultAndRoom;
		};
		static void NewProp_bIsError_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsError;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_ErrorCode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ErrorMessage_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ErrorMessage;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MatchmakingEnqueueResultAndRoom;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_OnlineSubsystemPico_MatchmakingCreateAndEnqueueRoom2__DelegateSignature_Statics::NewProp_bIsError_SetBit(void* Obj)
	{
		((_Script_OnlineSubsystemPico_eventMatchmakingCreateAndEnqueueRoom2_Parms*)Obj)->bIsError = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemPico_MatchmakingCreateAndEnqueueRoom2__DelegateSignature_Statics::NewProp_bIsError = { "bIsError", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(_Script_OnlineSubsystemPico_eventMatchmakingCreateAndEnqueueRoom2_Parms), &Z_Construct_UDelegateFunction_OnlineSubsystemPico_MatchmakingCreateAndEnqueueRoom2__DelegateSignature_Statics::NewProp_bIsError_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemPico_MatchmakingCreateAndEnqueueRoom2__DelegateSignature_Statics::NewProp_ErrorCode = { "ErrorCode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_OnlineSubsystemPico_eventMatchmakingCreateAndEnqueueRoom2_Parms, ErrorCode), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemPico_MatchmakingCreateAndEnqueueRoom2__DelegateSignature_Statics::NewProp_ErrorMessage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemPico_MatchmakingCreateAndEnqueueRoom2__DelegateSignature_Statics::NewProp_ErrorMessage = { "ErrorMessage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_OnlineSubsystemPico_eventMatchmakingCreateAndEnqueueRoom2_Parms, ErrorMessage), METADATA_PARAMS(Z_Construct_UDelegateFunction_OnlineSubsystemPico_MatchmakingCreateAndEnqueueRoom2__DelegateSignature_Statics::NewProp_ErrorMessage_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemPico_MatchmakingCreateAndEnqueueRoom2__DelegateSignature_Statics::NewProp_ErrorMessage_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemPico_MatchmakingCreateAndEnqueueRoom2__DelegateSignature_Statics::NewProp_MatchmakingEnqueueResultAndRoom = { "MatchmakingEnqueueResultAndRoom", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_OnlineSubsystemPico_eventMatchmakingCreateAndEnqueueRoom2_Parms, MatchmakingEnqueueResultAndRoom), Z_Construct_UClass_UPico_MatchmakingEnqueueResultAndRoom_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemPico_MatchmakingCreateAndEnqueueRoom2__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemPico_MatchmakingCreateAndEnqueueRoom2__DelegateSignature_Statics::NewProp_bIsError,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemPico_MatchmakingCreateAndEnqueueRoom2__DelegateSignature_Statics::NewProp_ErrorCode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemPico_MatchmakingCreateAndEnqueueRoom2__DelegateSignature_Statics::NewProp_ErrorMessage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemPico_MatchmakingCreateAndEnqueueRoom2__DelegateSignature_Statics::NewProp_MatchmakingEnqueueResultAndRoom,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemPico_MatchmakingCreateAndEnqueueRoom2__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Pico_Matchmaking.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemPico_MatchmakingCreateAndEnqueueRoom2__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemPico, nullptr, "MatchmakingCreateAndEnqueueRoom2__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemPico_MatchmakingCreateAndEnqueueRoom2__DelegateSignature_Statics::_Script_OnlineSubsystemPico_eventMatchmakingCreateAndEnqueueRoom2_Parms), Z_Construct_UDelegateFunction_OnlineSubsystemPico_MatchmakingCreateAndEnqueueRoom2__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemPico_MatchmakingCreateAndEnqueueRoom2__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_OnlineSubsystemPico_MatchmakingCreateAndEnqueueRoom2__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemPico_MatchmakingCreateAndEnqueueRoom2__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemPico_MatchmakingCreateAndEnqueueRoom2__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemPico_MatchmakingCreateAndEnqueueRoom2__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_OnlineSubsystemPico_MatchmakingEnqueue2__DelegateSignature_Statics
	{
		struct _Script_OnlineSubsystemPico_eventMatchmakingEnqueue2_Parms
		{
			bool bIsError;
			int32 ErrorCode;
			FString ErrorMessage;
			UPico_MatchmakingEnqueueResult* MatchmakingEnqueueResult;
		};
		static void NewProp_bIsError_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsError;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_ErrorCode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ErrorMessage_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ErrorMessage;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MatchmakingEnqueueResult;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_OnlineSubsystemPico_MatchmakingEnqueue2__DelegateSignature_Statics::NewProp_bIsError_SetBit(void* Obj)
	{
		((_Script_OnlineSubsystemPico_eventMatchmakingEnqueue2_Parms*)Obj)->bIsError = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemPico_MatchmakingEnqueue2__DelegateSignature_Statics::NewProp_bIsError = { "bIsError", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(_Script_OnlineSubsystemPico_eventMatchmakingEnqueue2_Parms), &Z_Construct_UDelegateFunction_OnlineSubsystemPico_MatchmakingEnqueue2__DelegateSignature_Statics::NewProp_bIsError_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemPico_MatchmakingEnqueue2__DelegateSignature_Statics::NewProp_ErrorCode = { "ErrorCode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_OnlineSubsystemPico_eventMatchmakingEnqueue2_Parms, ErrorCode), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemPico_MatchmakingEnqueue2__DelegateSignature_Statics::NewProp_ErrorMessage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemPico_MatchmakingEnqueue2__DelegateSignature_Statics::NewProp_ErrorMessage = { "ErrorMessage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_OnlineSubsystemPico_eventMatchmakingEnqueue2_Parms, ErrorMessage), METADATA_PARAMS(Z_Construct_UDelegateFunction_OnlineSubsystemPico_MatchmakingEnqueue2__DelegateSignature_Statics::NewProp_ErrorMessage_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemPico_MatchmakingEnqueue2__DelegateSignature_Statics::NewProp_ErrorMessage_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemPico_MatchmakingEnqueue2__DelegateSignature_Statics::NewProp_MatchmakingEnqueueResult = { "MatchmakingEnqueueResult", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_OnlineSubsystemPico_eventMatchmakingEnqueue2_Parms, MatchmakingEnqueueResult), Z_Construct_UClass_UPico_MatchmakingEnqueueResult_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemPico_MatchmakingEnqueue2__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemPico_MatchmakingEnqueue2__DelegateSignature_Statics::NewProp_bIsError,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemPico_MatchmakingEnqueue2__DelegateSignature_Statics::NewProp_ErrorCode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemPico_MatchmakingEnqueue2__DelegateSignature_Statics::NewProp_ErrorMessage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemPico_MatchmakingEnqueue2__DelegateSignature_Statics::NewProp_MatchmakingEnqueueResult,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemPico_MatchmakingEnqueue2__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Pico_Matchmaking.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemPico_MatchmakingEnqueue2__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemPico, nullptr, "MatchmakingEnqueue2__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemPico_MatchmakingEnqueue2__DelegateSignature_Statics::_Script_OnlineSubsystemPico_eventMatchmakingEnqueue2_Parms), Z_Construct_UDelegateFunction_OnlineSubsystemPico_MatchmakingEnqueue2__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemPico_MatchmakingEnqueue2__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_OnlineSubsystemPico_MatchmakingEnqueue2__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemPico_MatchmakingEnqueue2__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemPico_MatchmakingEnqueue2__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemPico_MatchmakingEnqueue2__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_OnlineSubsystemPico_MatchmakingGetAdminSnapshot__DelegateSignature_Statics
	{
		struct _Script_OnlineSubsystemPico_eventMatchmakingGetAdminSnapshot_Parms
		{
			bool bIsError;
			int32 ErrorCode;
			FString ErrorMessage;
			UPico_MatchmakingAdminSnapshot* MatchmakingAdminSnapshot;
		};
		static void NewProp_bIsError_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsError;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_ErrorCode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ErrorMessage_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ErrorMessage;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MatchmakingAdminSnapshot;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_OnlineSubsystemPico_MatchmakingGetAdminSnapshot__DelegateSignature_Statics::NewProp_bIsError_SetBit(void* Obj)
	{
		((_Script_OnlineSubsystemPico_eventMatchmakingGetAdminSnapshot_Parms*)Obj)->bIsError = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemPico_MatchmakingGetAdminSnapshot__DelegateSignature_Statics::NewProp_bIsError = { "bIsError", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(_Script_OnlineSubsystemPico_eventMatchmakingGetAdminSnapshot_Parms), &Z_Construct_UDelegateFunction_OnlineSubsystemPico_MatchmakingGetAdminSnapshot__DelegateSignature_Statics::NewProp_bIsError_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemPico_MatchmakingGetAdminSnapshot__DelegateSignature_Statics::NewProp_ErrorCode = { "ErrorCode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_OnlineSubsystemPico_eventMatchmakingGetAdminSnapshot_Parms, ErrorCode), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemPico_MatchmakingGetAdminSnapshot__DelegateSignature_Statics::NewProp_ErrorMessage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemPico_MatchmakingGetAdminSnapshot__DelegateSignature_Statics::NewProp_ErrorMessage = { "ErrorMessage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_OnlineSubsystemPico_eventMatchmakingGetAdminSnapshot_Parms, ErrorMessage), METADATA_PARAMS(Z_Construct_UDelegateFunction_OnlineSubsystemPico_MatchmakingGetAdminSnapshot__DelegateSignature_Statics::NewProp_ErrorMessage_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemPico_MatchmakingGetAdminSnapshot__DelegateSignature_Statics::NewProp_ErrorMessage_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemPico_MatchmakingGetAdminSnapshot__DelegateSignature_Statics::NewProp_MatchmakingAdminSnapshot = { "MatchmakingAdminSnapshot", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_OnlineSubsystemPico_eventMatchmakingGetAdminSnapshot_Parms, MatchmakingAdminSnapshot), Z_Construct_UClass_UPico_MatchmakingAdminSnapshot_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemPico_MatchmakingGetAdminSnapshot__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemPico_MatchmakingGetAdminSnapshot__DelegateSignature_Statics::NewProp_bIsError,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemPico_MatchmakingGetAdminSnapshot__DelegateSignature_Statics::NewProp_ErrorCode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemPico_MatchmakingGetAdminSnapshot__DelegateSignature_Statics::NewProp_ErrorMessage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemPico_MatchmakingGetAdminSnapshot__DelegateSignature_Statics::NewProp_MatchmakingAdminSnapshot,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemPico_MatchmakingGetAdminSnapshot__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Pico_Matchmaking.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemPico_MatchmakingGetAdminSnapshot__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemPico, nullptr, "MatchmakingGetAdminSnapshot__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemPico_MatchmakingGetAdminSnapshot__DelegateSignature_Statics::_Script_OnlineSubsystemPico_eventMatchmakingGetAdminSnapshot_Parms), Z_Construct_UDelegateFunction_OnlineSubsystemPico_MatchmakingGetAdminSnapshot__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemPico_MatchmakingGetAdminSnapshot__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_OnlineSubsystemPico_MatchmakingGetAdminSnapshot__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemPico_MatchmakingGetAdminSnapshot__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemPico_MatchmakingGetAdminSnapshot__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemPico_MatchmakingGetAdminSnapshot__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_OnlineSubsystemPico_MatchmakingStartMatch__DelegateSignature_Statics
	{
		struct _Script_OnlineSubsystemPico_eventMatchmakingStartMatch_Parms
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
	void Z_Construct_UDelegateFunction_OnlineSubsystemPico_MatchmakingStartMatch__DelegateSignature_Statics::NewProp_bIsError_SetBit(void* Obj)
	{
		((_Script_OnlineSubsystemPico_eventMatchmakingStartMatch_Parms*)Obj)->bIsError = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemPico_MatchmakingStartMatch__DelegateSignature_Statics::NewProp_bIsError = { "bIsError", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(_Script_OnlineSubsystemPico_eventMatchmakingStartMatch_Parms), &Z_Construct_UDelegateFunction_OnlineSubsystemPico_MatchmakingStartMatch__DelegateSignature_Statics::NewProp_bIsError_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemPico_MatchmakingStartMatch__DelegateSignature_Statics::NewProp_ErrorCode = { "ErrorCode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_OnlineSubsystemPico_eventMatchmakingStartMatch_Parms, ErrorCode), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemPico_MatchmakingStartMatch__DelegateSignature_Statics::NewProp_ErrorMessage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemPico_MatchmakingStartMatch__DelegateSignature_Statics::NewProp_ErrorMessage = { "ErrorMessage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_OnlineSubsystemPico_eventMatchmakingStartMatch_Parms, ErrorMessage), METADATA_PARAMS(Z_Construct_UDelegateFunction_OnlineSubsystemPico_MatchmakingStartMatch__DelegateSignature_Statics::NewProp_ErrorMessage_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemPico_MatchmakingStartMatch__DelegateSignature_Statics::NewProp_ErrorMessage_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemPico_MatchmakingStartMatch__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemPico_MatchmakingStartMatch__DelegateSignature_Statics::NewProp_bIsError,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemPico_MatchmakingStartMatch__DelegateSignature_Statics::NewProp_ErrorCode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemPico_MatchmakingStartMatch__DelegateSignature_Statics::NewProp_ErrorMessage,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemPico_MatchmakingStartMatch__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Pico_Matchmaking.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemPico_MatchmakingStartMatch__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemPico, nullptr, "MatchmakingStartMatch__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemPico_MatchmakingStartMatch__DelegateSignature_Statics::_Script_OnlineSubsystemPico_eventMatchmakingStartMatch_Parms), Z_Construct_UDelegateFunction_OnlineSubsystemPico_MatchmakingStartMatch__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemPico_MatchmakingStartMatch__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_OnlineSubsystemPico_MatchmakingStartMatch__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemPico_MatchmakingStartMatch__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemPico_MatchmakingStartMatch__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemPico_MatchmakingStartMatch__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UOnlinePicoMatchmakingFunction::execStartMatch)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_RoomId);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_InDelegate);
		P_FINISH;
		P_NATIVE_BEGIN;
		UOnlinePicoMatchmakingFunction::StartMatch(Z_Param_WorldContextObject,Z_Param_RoomId,FMatchmakingStartMatch(Z_Param_InDelegate));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlinePicoMatchmakingFunction::execGetAdminSnapshot)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_InDelegate);
		P_FINISH;
		P_NATIVE_BEGIN;
		UOnlinePicoMatchmakingFunction::GetAdminSnapshot(Z_Param_WorldContextObject,FMatchmakingGetAdminSnapshot(Z_Param_InDelegate));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlinePicoMatchmakingFunction::execEnqueue2)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_Pool);
		P_GET_STRUCT(FPicoMatchmakingOptions,Z_Param_MatchmakingOptions);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_InDelegate);
		P_FINISH;
		P_NATIVE_BEGIN;
		UOnlinePicoMatchmakingFunction::Enqueue2(Z_Param_WorldContextObject,Z_Param_Pool,Z_Param_MatchmakingOptions,FMatchmakingEnqueue2(Z_Param_InDelegate));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlinePicoMatchmakingFunction::execCreateAndEnqueueRoom2)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_Pool);
		P_GET_STRUCT(FPicoMatchmakingOptions,Z_Param_MatchmakingOptions);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_InDelegate);
		P_FINISH;
		P_NATIVE_BEGIN;
		UOnlinePicoMatchmakingFunction::CreateAndEnqueueRoom2(Z_Param_WorldContextObject,Z_Param_Pool,Z_Param_MatchmakingOptions,FMatchmakingCreateAndEnqueueRoom2(Z_Param_InDelegate));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlinePicoMatchmakingFunction::execCancel)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_InDelegate);
		P_FINISH;
		P_NATIVE_BEGIN;
		UOnlinePicoMatchmakingFunction::Cancel(Z_Param_WorldContextObject,FMatchmakingCancel(Z_Param_InDelegate));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlinePicoMatchmakingFunction::execBrowse2CustomPage)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_Pool);
		P_GET_STRUCT(FPicoMatchmakingOptions,Z_Param_MatchmakingOptions);
		P_GET_PROPERTY(FIntProperty,Z_Param_PageIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param_PageSize);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_InDelegate);
		P_FINISH;
		P_NATIVE_BEGIN;
		UOnlinePicoMatchmakingFunction::Browse2CustomPage(Z_Param_WorldContextObject,Z_Param_Pool,Z_Param_MatchmakingOptions,Z_Param_PageIndex,Z_Param_PageSize,FMatchmakingBrowse2CustomPage(Z_Param_InDelegate));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlinePicoMatchmakingFunction::execBrowse2)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_Pool);
		P_GET_STRUCT(FPicoMatchmakingOptions,Z_Param_MatchmakingOptions);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_InDelegate);
		P_FINISH;
		P_NATIVE_BEGIN;
		UOnlinePicoMatchmakingFunction::Browse2(Z_Param_WorldContextObject,Z_Param_Pool,Z_Param_MatchmakingOptions,FMatchmakingBrowse2(Z_Param_InDelegate));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlinePicoMatchmakingFunction::execGetStats)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_Pool);
		P_GET_PROPERTY(FIntProperty,Z_Param_MaxLevel);
		P_GET_ENUM(EMatchmakingStatApproach,Z_Param_approach);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_InDelegate);
		P_FINISH;
		P_NATIVE_BEGIN;
		UOnlinePicoMatchmakingFunction::GetStats(Z_Param_WorldContextObject,Z_Param_Pool,Z_Param_MaxLevel,EMatchmakingStatApproach(Z_Param_approach),FMatchmakingGetStats(Z_Param_InDelegate));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlinePicoMatchmakingFunction::execReportResultsInsecure)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_RoomID);
		P_GET_TMAP_REF(FString,int32,Z_Param_Out_Data);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_InDelegate);
		P_FINISH;
		P_NATIVE_BEGIN;
		UOnlinePicoMatchmakingFunction::ReportResultsInsecure(Z_Param_WorldContextObject,Z_Param_RoomID,Z_Param_Out_Data,FMatchmakingReportResultsInsecure(Z_Param_InDelegate));
		P_NATIVE_END;
	}
	void UOnlinePicoMatchmakingFunction::StaticRegisterNativesUOnlinePicoMatchmakingFunction()
	{
		UClass* Class = UOnlinePicoMatchmakingFunction::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Browse2", &UOnlinePicoMatchmakingFunction::execBrowse2 },
			{ "Browse2CustomPage", &UOnlinePicoMatchmakingFunction::execBrowse2CustomPage },
			{ "Cancel", &UOnlinePicoMatchmakingFunction::execCancel },
			{ "CreateAndEnqueueRoom2", &UOnlinePicoMatchmakingFunction::execCreateAndEnqueueRoom2 },
			{ "Enqueue2", &UOnlinePicoMatchmakingFunction::execEnqueue2 },
			{ "GetAdminSnapshot", &UOnlinePicoMatchmakingFunction::execGetAdminSnapshot },
			{ "GetStats", &UOnlinePicoMatchmakingFunction::execGetStats },
			{ "ReportResultsInsecure", &UOnlinePicoMatchmakingFunction::execReportResultsInsecure },
			{ "StartMatch", &UOnlinePicoMatchmakingFunction::execStartMatch },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOnlinePicoMatchmakingFunction_Browse2_Statics
	{
		struct OnlinePicoMatchmakingFunction_eventBrowse2_Parms
		{
			UObject* WorldContextObject;
			FString Pool;
			FPicoMatchmakingOptions MatchmakingOptions;
			FScriptDelegate InDelegate;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Pool_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Pool;
		static const UECodeGen_Private::FStructPropertyParams NewProp_MatchmakingOptions;
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_InDelegate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlinePicoMatchmakingFunction_Browse2_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlinePicoMatchmakingFunction_eventBrowse2_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlinePicoMatchmakingFunction_Browse2_Statics::NewProp_Pool_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOnlinePicoMatchmakingFunction_Browse2_Statics::NewProp_Pool = { "Pool", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlinePicoMatchmakingFunction_eventBrowse2_Parms, Pool), METADATA_PARAMS(Z_Construct_UFunction_UOnlinePicoMatchmakingFunction_Browse2_Statics::NewProp_Pool_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePicoMatchmakingFunction_Browse2_Statics::NewProp_Pool_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOnlinePicoMatchmakingFunction_Browse2_Statics::NewProp_MatchmakingOptions = { "MatchmakingOptions", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlinePicoMatchmakingFunction_eventBrowse2_Parms, MatchmakingOptions), Z_Construct_UScriptStruct_FPicoMatchmakingOptions, METADATA_PARAMS(nullptr, 0) }; // 1492018140
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UOnlinePicoMatchmakingFunction_Browse2_Statics::NewProp_InDelegate = { "InDelegate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlinePicoMatchmakingFunction_eventBrowse2_Parms, InDelegate), Z_Construct_UDelegateFunction_OnlineSubsystemPico_MatchmakingBrowse2__DelegateSignature, METADATA_PARAMS(nullptr, 0) }; // 669617976
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlinePicoMatchmakingFunction_Browse2_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoMatchmakingFunction_Browse2_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoMatchmakingFunction_Browse2_Statics::NewProp_Pool,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoMatchmakingFunction_Browse2_Statics::NewProp_MatchmakingOptions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoMatchmakingFunction_Browse2_Statics::NewProp_InDelegate,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlinePicoMatchmakingFunction_Browse2_Statics::Function_MetaDataParams[] = {
		{ "Category", "OnlinePico|Matchmaking" },
		{ "Comment", "/// <summary>Gets rooms by matchmakinging pool name.\n/// The user can join the room with `RoomService.Join2 to`or cancel the retrieval with `MatchmakingService.Cancel`.\n/// @note  Applicable to the following matchmaking mode: Browse</summary>\n///\n/// <param name=\"WorldContextObject\">Used to get the information about the current world.</param>\n/// <param name=\"Pool\">The matchmaking pool name you want to browse.</param>\n/// <param name=\"MatchmakingOptions\">(Optional) The matchmaking configuration of the browse request.</param>\n/// <param name=\"InDelegate\">Will be executed when the request has been completed.\n/// Delegate will contain the requested object class (bool, bIsError, int, ErrorCode, const FString&, ErrorMessage, UPico_MatchmakingBrowseResult *, MatchmakingBrowseResult).</param>\n" },
		{ "ModuleRelativePath", "Public/Pico_Matchmaking.h" },
		{ "ToolTip", "<summary>Gets rooms by matchmakinging pool name.\nThe user can join the room with `RoomService.Join2 to`or cancel the retrieval with `MatchmakingService.Cancel`.\n@note  Applicable to the following matchmaking mode: Browse</summary>\n\n<param name=\"WorldContextObject\">Used to get the information about the current world.</param>\n<param name=\"Pool\">The matchmaking pool name you want to browse.</param>\n<param name=\"MatchmakingOptions\">(Optional) The matchmaking configuration of the browse request.</param>\n<param name=\"InDelegate\">Will be executed when the request has been completed.\nDelegate will contain the requested object class (bool, bIsError, int, ErrorCode, const FString&, ErrorMessage, UPico_MatchmakingBrowseResult *, MatchmakingBrowseResult).</param>" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlinePicoMatchmakingFunction_Browse2_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlinePicoMatchmakingFunction, nullptr, "Browse2", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOnlinePicoMatchmakingFunction_Browse2_Statics::OnlinePicoMatchmakingFunction_eventBrowse2_Parms), Z_Construct_UFunction_UOnlinePicoMatchmakingFunction_Browse2_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePicoMatchmakingFunction_Browse2_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlinePicoMatchmakingFunction_Browse2_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePicoMatchmakingFunction_Browse2_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlinePicoMatchmakingFunction_Browse2()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlinePicoMatchmakingFunction_Browse2_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlinePicoMatchmakingFunction_Browse2CustomPage_Statics
	{
		struct OnlinePicoMatchmakingFunction_eventBrowse2CustomPage_Parms
		{
			UObject* WorldContextObject;
			FString Pool;
			FPicoMatchmakingOptions MatchmakingOptions;
			int32 PageIndex;
			int32 PageSize;
			FScriptDelegate InDelegate;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Pool_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Pool;
		static const UECodeGen_Private::FStructPropertyParams NewProp_MatchmakingOptions;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_PageIndex;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_PageSize;
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_InDelegate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlinePicoMatchmakingFunction_Browse2CustomPage_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlinePicoMatchmakingFunction_eventBrowse2CustomPage_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlinePicoMatchmakingFunction_Browse2CustomPage_Statics::NewProp_Pool_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOnlinePicoMatchmakingFunction_Browse2CustomPage_Statics::NewProp_Pool = { "Pool", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlinePicoMatchmakingFunction_eventBrowse2CustomPage_Parms, Pool), METADATA_PARAMS(Z_Construct_UFunction_UOnlinePicoMatchmakingFunction_Browse2CustomPage_Statics::NewProp_Pool_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePicoMatchmakingFunction_Browse2CustomPage_Statics::NewProp_Pool_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOnlinePicoMatchmakingFunction_Browse2CustomPage_Statics::NewProp_MatchmakingOptions = { "MatchmakingOptions", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlinePicoMatchmakingFunction_eventBrowse2CustomPage_Parms, MatchmakingOptions), Z_Construct_UScriptStruct_FPicoMatchmakingOptions, METADATA_PARAMS(nullptr, 0) }; // 1492018140
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UOnlinePicoMatchmakingFunction_Browse2CustomPage_Statics::NewProp_PageIndex = { "PageIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlinePicoMatchmakingFunction_eventBrowse2CustomPage_Parms, PageIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UOnlinePicoMatchmakingFunction_Browse2CustomPage_Statics::NewProp_PageSize = { "PageSize", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlinePicoMatchmakingFunction_eventBrowse2CustomPage_Parms, PageSize), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UOnlinePicoMatchmakingFunction_Browse2CustomPage_Statics::NewProp_InDelegate = { "InDelegate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlinePicoMatchmakingFunction_eventBrowse2CustomPage_Parms, InDelegate), Z_Construct_UDelegateFunction_OnlineSubsystemPico_MatchmakingBrowse2CustomPage__DelegateSignature, METADATA_PARAMS(nullptr, 0) }; // 657432254
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlinePicoMatchmakingFunction_Browse2CustomPage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoMatchmakingFunction_Browse2CustomPage_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoMatchmakingFunction_Browse2CustomPage_Statics::NewProp_Pool,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoMatchmakingFunction_Browse2CustomPage_Statics::NewProp_MatchmakingOptions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoMatchmakingFunction_Browse2CustomPage_Statics::NewProp_PageIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoMatchmakingFunction_Browse2CustomPage_Statics::NewProp_PageSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoMatchmakingFunction_Browse2CustomPage_Statics::NewProp_InDelegate,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlinePicoMatchmakingFunction_Browse2CustomPage_Statics::Function_MetaDataParams[] = {
		{ "Category", "OnlinePico|Matchmaking" },
		{ "Comment", "/// <summary>Gets rooms by matchmakinging pool name and specify the page number and the number of entries to return on each page.</summary>\n///\n/// <param name=\"WorldContextObject\">Used to get the information about the current world.</param>\n/// <param name=\"Pool\">The matchmaking pool name you want to browse.</param>\n/// <param name=\"MatchmakingOptions\">The matchmaking configuration of the browse request.</param>\n/// <param name=\"PageIndex\">Start page index.</param>\n/// <param name=\"PageSize\">The number of entries to return on each page.</param>\n/// <param name=\"InDelegate\">Will be executed when the request has been completed. \n/// Delegate will contain the requested object class (bool, bIsError, int, ErrorCode, const FString&, ErrorMessage, UPico_MatchmakingBrowseResult *, MatchmakingBrowseResult).</param> \n" },
		{ "ModuleRelativePath", "Public/Pico_Matchmaking.h" },
		{ "ToolTip", "<summary>Gets rooms by matchmakinging pool name and specify the page number and the number of entries to return on each page.</summary>\n\n<param name=\"WorldContextObject\">Used to get the information about the current world.</param>\n<param name=\"Pool\">The matchmaking pool name you want to browse.</param>\n<param name=\"MatchmakingOptions\">The matchmaking configuration of the browse request.</param>\n<param name=\"PageIndex\">Start page index.</param>\n<param name=\"PageSize\">The number of entries to return on each page.</param>\n<param name=\"InDelegate\">Will be executed when the request has been completed.\nDelegate will contain the requested object class (bool, bIsError, int, ErrorCode, const FString&, ErrorMessage, UPico_MatchmakingBrowseResult *, MatchmakingBrowseResult).</param>" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlinePicoMatchmakingFunction_Browse2CustomPage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlinePicoMatchmakingFunction, nullptr, "Browse2CustomPage", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOnlinePicoMatchmakingFunction_Browse2CustomPage_Statics::OnlinePicoMatchmakingFunction_eventBrowse2CustomPage_Parms), Z_Construct_UFunction_UOnlinePicoMatchmakingFunction_Browse2CustomPage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePicoMatchmakingFunction_Browse2CustomPage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlinePicoMatchmakingFunction_Browse2CustomPage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePicoMatchmakingFunction_Browse2CustomPage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlinePicoMatchmakingFunction_Browse2CustomPage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlinePicoMatchmakingFunction_Browse2CustomPage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlinePicoMatchmakingFunction_Cancel_Statics
	{
		struct OnlinePicoMatchmakingFunction_eventCancel_Parms
		{
			UObject* WorldContextObject;
			FScriptDelegate InDelegate;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_InDelegate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlinePicoMatchmakingFunction_Cancel_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlinePicoMatchmakingFunction_eventCancel_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UOnlinePicoMatchmakingFunction_Cancel_Statics::NewProp_InDelegate = { "InDelegate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlinePicoMatchmakingFunction_eventCancel_Parms, InDelegate), Z_Construct_UDelegateFunction_OnlineSubsystemPico_MatchmakingCancel__DelegateSignature, METADATA_PARAMS(nullptr, 0) }; // 810512213
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlinePicoMatchmakingFunction_Cancel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoMatchmakingFunction_Cancel_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoMatchmakingFunction_Cancel_Statics::NewProp_InDelegate,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlinePicoMatchmakingFunction_Cancel_Statics::Function_MetaDataParams[] = {
		{ "Category", "OnlinePico|Matchmaking" },
		{ "Comment", "/// <summary>Cancels a matchmaking request. Call this function\n/// to cancel an enqueue request before a match\n/// is made. This is typically triggered when a user gives up waiting.\n/// If you do not cancel the request but the user goes offline, the user/room\n/// will be timed out according to the setting of reserved period on the PICO Developer Platform.\n/// @note  Applicable to the following matchmaking modes: Quickmatch, Browse</summary>\n/// \n/// <param name=\"WorldContextObject\">Used to get the information about the current world.</param>\n/// <param name=\"InDelegate\">Will be executed when the request has been completed. \n/// Delegate will contain the requested object class (bool, bIsError, int, ErrorCode, const FString&, ErrorMessage).</param>\n" },
		{ "ModuleRelativePath", "Public/Pico_Matchmaking.h" },
		{ "ToolTip", "<summary>Cancels a matchmaking request. Call this function\nto cancel an enqueue request before a match\nis made. This is typically triggered when a user gives up waiting.\nIf you do not cancel the request but the user goes offline, the user/room\nwill be timed out according to the setting of reserved period on the PICO Developer Platform.\n@note  Applicable to the following matchmaking modes: Quickmatch, Browse</summary>\n\n<param name=\"WorldContextObject\">Used to get the information about the current world.</param>\n<param name=\"InDelegate\">Will be executed when the request has been completed.\nDelegate will contain the requested object class (bool, bIsError, int, ErrorCode, const FString&, ErrorMessage).</param>" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlinePicoMatchmakingFunction_Cancel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlinePicoMatchmakingFunction, nullptr, "Cancel", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOnlinePicoMatchmakingFunction_Cancel_Statics::OnlinePicoMatchmakingFunction_eventCancel_Parms), Z_Construct_UFunction_UOnlinePicoMatchmakingFunction_Cancel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePicoMatchmakingFunction_Cancel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlinePicoMatchmakingFunction_Cancel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePicoMatchmakingFunction_Cancel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlinePicoMatchmakingFunction_Cancel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlinePicoMatchmakingFunction_Cancel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlinePicoMatchmakingFunction_CreateAndEnqueueRoom2_Statics
	{
		struct OnlinePicoMatchmakingFunction_eventCreateAndEnqueueRoom2_Parms
		{
			UObject* WorldContextObject;
			FString Pool;
			FPicoMatchmakingOptions MatchmakingOptions;
			FScriptDelegate InDelegate;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Pool_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Pool;
		static const UECodeGen_Private::FStructPropertyParams NewProp_MatchmakingOptions;
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_InDelegate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlinePicoMatchmakingFunction_CreateAndEnqueueRoom2_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlinePicoMatchmakingFunction_eventCreateAndEnqueueRoom2_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlinePicoMatchmakingFunction_CreateAndEnqueueRoom2_Statics::NewProp_Pool_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOnlinePicoMatchmakingFunction_CreateAndEnqueueRoom2_Statics::NewProp_Pool = { "Pool", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlinePicoMatchmakingFunction_eventCreateAndEnqueueRoom2_Parms, Pool), METADATA_PARAMS(Z_Construct_UFunction_UOnlinePicoMatchmakingFunction_CreateAndEnqueueRoom2_Statics::NewProp_Pool_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePicoMatchmakingFunction_CreateAndEnqueueRoom2_Statics::NewProp_Pool_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOnlinePicoMatchmakingFunction_CreateAndEnqueueRoom2_Statics::NewProp_MatchmakingOptions = { "MatchmakingOptions", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlinePicoMatchmakingFunction_eventCreateAndEnqueueRoom2_Parms, MatchmakingOptions), Z_Construct_UScriptStruct_FPicoMatchmakingOptions, METADATA_PARAMS(nullptr, 0) }; // 1492018140
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UOnlinePicoMatchmakingFunction_CreateAndEnqueueRoom2_Statics::NewProp_InDelegate = { "InDelegate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlinePicoMatchmakingFunction_eventCreateAndEnqueueRoom2_Parms, InDelegate), Z_Construct_UDelegateFunction_OnlineSubsystemPico_MatchmakingCreateAndEnqueueRoom2__DelegateSignature, METADATA_PARAMS(nullptr, 0) }; // 1554344166
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlinePicoMatchmakingFunction_CreateAndEnqueueRoom2_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoMatchmakingFunction_CreateAndEnqueueRoom2_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoMatchmakingFunction_CreateAndEnqueueRoom2_Statics::NewProp_Pool,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoMatchmakingFunction_CreateAndEnqueueRoom2_Statics::NewProp_MatchmakingOptions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoMatchmakingFunction_CreateAndEnqueueRoom2_Statics::NewProp_InDelegate,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlinePicoMatchmakingFunction_CreateAndEnqueueRoom2_Statics::Function_MetaDataParams[] = {
		{ "Category", "OnlinePico|Matchmaking" },
		{ "Comment", "/// <summary>Creates a matchmaking room, then enqueues and joins it.\n/// @note  Applicable to the following matchmaking modes: Quickmatch, Browse, Advanced (Can Users Create Rooms=`true`)</summary>\n/// \n/// <param name=\"WorldContextObject\">Used to get the information about the current world.</param>\n/// <param name=\"Pool\">The matchmaking pool to use, which is created on the PICO Developer Platform.</param>\n/// <param name=\"MatchmakingOptions\">(Optional) Additional matchmaking configuration for this request.</param>\n/// <param name=\"InDelegate\">Will be executed when the request has been completed. \n/// Delegate will contain the requested object class (bool, bIsError, int, ErrorCode, const FString&, ErrorMessage, UPico_MatchmakingEnqueueResultAndRoom *, MatchmakingEnqueueResultAndRoom).</param>\n" },
		{ "ModuleRelativePath", "Public/Pico_Matchmaking.h" },
		{ "ToolTip", "<summary>Creates a matchmaking room, then enqueues and joins it.\n@note  Applicable to the following matchmaking modes: Quickmatch, Browse, Advanced (Can Users Create Rooms=`true`)</summary>\n\n<param name=\"WorldContextObject\">Used to get the information about the current world.</param>\n<param name=\"Pool\">The matchmaking pool to use, which is created on the PICO Developer Platform.</param>\n<param name=\"MatchmakingOptions\">(Optional) Additional matchmaking configuration for this request.</param>\n<param name=\"InDelegate\">Will be executed when the request has been completed.\nDelegate will contain the requested object class (bool, bIsError, int, ErrorCode, const FString&, ErrorMessage, UPico_MatchmakingEnqueueResultAndRoom *, MatchmakingEnqueueResultAndRoom).</param>" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlinePicoMatchmakingFunction_CreateAndEnqueueRoom2_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlinePicoMatchmakingFunction, nullptr, "CreateAndEnqueueRoom2", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOnlinePicoMatchmakingFunction_CreateAndEnqueueRoom2_Statics::OnlinePicoMatchmakingFunction_eventCreateAndEnqueueRoom2_Parms), Z_Construct_UFunction_UOnlinePicoMatchmakingFunction_CreateAndEnqueueRoom2_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePicoMatchmakingFunction_CreateAndEnqueueRoom2_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlinePicoMatchmakingFunction_CreateAndEnqueueRoom2_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePicoMatchmakingFunction_CreateAndEnqueueRoom2_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlinePicoMatchmakingFunction_CreateAndEnqueueRoom2()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlinePicoMatchmakingFunction_CreateAndEnqueueRoom2_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlinePicoMatchmakingFunction_Enqueue2_Statics
	{
		struct OnlinePicoMatchmakingFunction_eventEnqueue2_Parms
		{
			UObject* WorldContextObject;
			FString Pool;
			FPicoMatchmakingOptions MatchmakingOptions;
			FScriptDelegate InDelegate;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Pool_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Pool;
		static const UECodeGen_Private::FStructPropertyParams NewProp_MatchmakingOptions;
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_InDelegate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlinePicoMatchmakingFunction_Enqueue2_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlinePicoMatchmakingFunction_eventEnqueue2_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlinePicoMatchmakingFunction_Enqueue2_Statics::NewProp_Pool_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOnlinePicoMatchmakingFunction_Enqueue2_Statics::NewProp_Pool = { "Pool", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlinePicoMatchmakingFunction_eventEnqueue2_Parms, Pool), METADATA_PARAMS(Z_Construct_UFunction_UOnlinePicoMatchmakingFunction_Enqueue2_Statics::NewProp_Pool_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePicoMatchmakingFunction_Enqueue2_Statics::NewProp_Pool_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOnlinePicoMatchmakingFunction_Enqueue2_Statics::NewProp_MatchmakingOptions = { "MatchmakingOptions", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlinePicoMatchmakingFunction_eventEnqueue2_Parms, MatchmakingOptions), Z_Construct_UScriptStruct_FPicoMatchmakingOptions, METADATA_PARAMS(nullptr, 0) }; // 1492018140
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UOnlinePicoMatchmakingFunction_Enqueue2_Statics::NewProp_InDelegate = { "InDelegate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlinePicoMatchmakingFunction_eventEnqueue2_Parms, InDelegate), Z_Construct_UDelegateFunction_OnlineSubsystemPico_MatchmakingEnqueue2__DelegateSignature, METADATA_PARAMS(nullptr, 0) }; // 1428518274
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlinePicoMatchmakingFunction_Enqueue2_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoMatchmakingFunction_Enqueue2_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoMatchmakingFunction_Enqueue2_Statics::NewProp_Pool,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoMatchmakingFunction_Enqueue2_Statics::NewProp_MatchmakingOptions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoMatchmakingFunction_Enqueue2_Statics::NewProp_InDelegate,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlinePicoMatchmakingFunction_Enqueue2_Statics::Function_MetaDataParams[] = {
		{ "Category", "OnlinePico|Matchmaking" },
		{ "Comment", "/// <summary>Enqueues for an available matchmaking room to join.\n/// When the server finds a match, it will return a message of\n/// type `MessageType.Notification_Matchmaking_MatchFound`. You\n/// can join found matching rooms by calling `RoomService.Join2`. \n/// If you want to cancel the match early, you can use `MatchmakingService.Cancel`.\n/// @note  Applicable to the following matchmaking mode: Quickmatch</summary>\n/// \n/// <param name=\"WorldContextObject\">Used to get the information about the current world.</param>\n/// <param name=\"Pool\">The matchmaking pool to use, which is defined on the PICO Developer Platform.</param>\n/// <param name=\"MatchmakingOptions\">(Optional) Match configuration for Enqueue.</param>\n/// <param name=\"InDelegate\">Will be executed when the request has been completed. \n/// Delegate will contain the requested object class (bool, bIsError, int, ErrorCode, const FString&, ErrorMessage, UPico_MatchmakingEnqueueResult *, MatchmakingEnqueueResult).</param>\n" },
		{ "ModuleRelativePath", "Public/Pico_Matchmaking.h" },
		{ "ToolTip", "<summary>Enqueues for an available matchmaking room to join.\nWhen the server finds a match, it will return a message of\ntype `MessageType.Notification_Matchmaking_MatchFound`. You\ncan join found matching rooms by calling `RoomService.Join2`.\nIf you want to cancel the match early, you can use `MatchmakingService.Cancel`.\n@note  Applicable to the following matchmaking mode: Quickmatch</summary>\n\n<param name=\"WorldContextObject\">Used to get the information about the current world.</param>\n<param name=\"Pool\">The matchmaking pool to use, which is defined on the PICO Developer Platform.</param>\n<param name=\"MatchmakingOptions\">(Optional) Match configuration for Enqueue.</param>\n<param name=\"InDelegate\">Will be executed when the request has been completed.\nDelegate will contain the requested object class (bool, bIsError, int, ErrorCode, const FString&, ErrorMessage, UPico_MatchmakingEnqueueResult *, MatchmakingEnqueueResult).</param>" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlinePicoMatchmakingFunction_Enqueue2_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlinePicoMatchmakingFunction, nullptr, "Enqueue2", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOnlinePicoMatchmakingFunction_Enqueue2_Statics::OnlinePicoMatchmakingFunction_eventEnqueue2_Parms), Z_Construct_UFunction_UOnlinePicoMatchmakingFunction_Enqueue2_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePicoMatchmakingFunction_Enqueue2_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlinePicoMatchmakingFunction_Enqueue2_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePicoMatchmakingFunction_Enqueue2_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlinePicoMatchmakingFunction_Enqueue2()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlinePicoMatchmakingFunction_Enqueue2_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlinePicoMatchmakingFunction_GetAdminSnapshot_Statics
	{
		struct OnlinePicoMatchmakingFunction_eventGetAdminSnapshot_Parms
		{
			UObject* WorldContextObject;
			FScriptDelegate InDelegate;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_InDelegate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlinePicoMatchmakingFunction_GetAdminSnapshot_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlinePicoMatchmakingFunction_eventGetAdminSnapshot_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UOnlinePicoMatchmakingFunction_GetAdminSnapshot_Statics::NewProp_InDelegate = { "InDelegate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlinePicoMatchmakingFunction_eventGetAdminSnapshot_Parms, InDelegate), Z_Construct_UDelegateFunction_OnlineSubsystemPico_MatchmakingGetAdminSnapshot__DelegateSignature, METADATA_PARAMS(nullptr, 0) }; // 180538906
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlinePicoMatchmakingFunction_GetAdminSnapshot_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoMatchmakingFunction_GetAdminSnapshot_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoMatchmakingFunction_GetAdminSnapshot_Statics::NewProp_InDelegate,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlinePicoMatchmakingFunction_GetAdminSnapshot_Statics::Function_MetaDataParams[] = {
		{ "Category", "OnlinePico|Matchmaking" },
		{ "Comment", "/// <summary>Debugs the state of the current matchmaking pool queue.\n/// @note \n/// * This function should not be used in production.\n/// * Applicable to the following matchmaking modes: Quickmatch, Browse\n///\n/// </summary>\n/// \n/// <param name=\"WorldContextObject\">Used to get the information about the current world.</param>\n/// <param name=\"InDelegate\">Will be executed when the request has been completed. \n/// Delegate will contain the requested object class (bool, bIsError, int, ErrorCode, const FString&, ErrorMessage, UPico_MatchmakingAdminSnapshot *, MatchmakingAdminSnapshot).</param>\n" },
		{ "ModuleRelativePath", "Public/Pico_Matchmaking.h" },
		{ "ToolTip", "<summary>Debugs the state of the current matchmaking pool queue.\n@note\n* This function should not be used in production.\n* Applicable to the following matchmaking modes: Quickmatch, Browse\n\n</summary>\n\n<param name=\"WorldContextObject\">Used to get the information about the current world.</param>\n<param name=\"InDelegate\">Will be executed when the request has been completed.\nDelegate will contain the requested object class (bool, bIsError, int, ErrorCode, const FString&, ErrorMessage, UPico_MatchmakingAdminSnapshot *, MatchmakingAdminSnapshot).</param>" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlinePicoMatchmakingFunction_GetAdminSnapshot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlinePicoMatchmakingFunction, nullptr, "GetAdminSnapshot", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOnlinePicoMatchmakingFunction_GetAdminSnapshot_Statics::OnlinePicoMatchmakingFunction_eventGetAdminSnapshot_Parms), Z_Construct_UFunction_UOnlinePicoMatchmakingFunction_GetAdminSnapshot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePicoMatchmakingFunction_GetAdminSnapshot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlinePicoMatchmakingFunction_GetAdminSnapshot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePicoMatchmakingFunction_GetAdminSnapshot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlinePicoMatchmakingFunction_GetAdminSnapshot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlinePicoMatchmakingFunction_GetAdminSnapshot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlinePicoMatchmakingFunction_GetStats_Statics
	{
		struct OnlinePicoMatchmakingFunction_eventGetStats_Parms
		{
			UObject* WorldContextObject;
			FString Pool;
			int32 MaxLevel;
			EMatchmakingStatApproach approach;
			FScriptDelegate InDelegate;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Pool_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Pool;
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxLevel;
		static const UECodeGen_Private::FBytePropertyParams NewProp_approach_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_approach;
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_InDelegate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlinePicoMatchmakingFunction_GetStats_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlinePicoMatchmakingFunction_eventGetStats_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlinePicoMatchmakingFunction_GetStats_Statics::NewProp_Pool_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOnlinePicoMatchmakingFunction_GetStats_Statics::NewProp_Pool = { "Pool", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlinePicoMatchmakingFunction_eventGetStats_Parms, Pool), METADATA_PARAMS(Z_Construct_UFunction_UOnlinePicoMatchmakingFunction_GetStats_Statics::NewProp_Pool_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePicoMatchmakingFunction_GetStats_Statics::NewProp_Pool_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOnlinePicoMatchmakingFunction_GetStats_Statics::NewProp_MaxLevel = { "MaxLevel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlinePicoMatchmakingFunction_eventGetStats_Parms, MaxLevel), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOnlinePicoMatchmakingFunction_GetStats_Statics::NewProp_approach_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOnlinePicoMatchmakingFunction_GetStats_Statics::NewProp_approach = { "approach", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlinePicoMatchmakingFunction_eventGetStats_Parms, approach), Z_Construct_UEnum_OnlineSubsystemPico_EMatchmakingStatApproach, METADATA_PARAMS(nullptr, 0) }; // 3637336318
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UOnlinePicoMatchmakingFunction_GetStats_Statics::NewProp_InDelegate = { "InDelegate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlinePicoMatchmakingFunction_eventGetStats_Parms, InDelegate), Z_Construct_UDelegateFunction_OnlineSubsystemPico_MatchmakingGetStats__DelegateSignature, METADATA_PARAMS(nullptr, 0) }; // 3958362825
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlinePicoMatchmakingFunction_GetStats_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoMatchmakingFunction_GetStats_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoMatchmakingFunction_GetStats_Statics::NewProp_Pool,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoMatchmakingFunction_GetStats_Statics::NewProp_MaxLevel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoMatchmakingFunction_GetStats_Statics::NewProp_approach_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoMatchmakingFunction_GetStats_Statics::NewProp_approach,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoMatchmakingFunction_GetStats_Statics::NewProp_InDelegate,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlinePicoMatchmakingFunction_GetStats_Statics::Function_MetaDataParams[] = {
		{ "Category", "OnlinePico|Matchmaking" },
		{ "Comment", "/// <summary>Gets the matchmaking statistics for the current user.\n/// @note  Applicable to the following matchmaking modes: Quickmatch, Browse</summary>\n/// \n/// <param name=\"WorldContextObject\">Used to get the information about the current world.</param>\n/// <param name=\"Pool\">The pool to look in.</param>\n/// <param name=\"MaxLevel\">(beta feature, don't use it)</param>\n/// <param name=\"approach\">(beta feature, don't use it)</param>\n/// <param name=\"InDelegate\">Will be executed when the request has been completed.\n/// Delegate will contain the requested object class (bool, bIsError, int, ErrorCode, const FString&, ErrorMessage, UPico_MatchmakingStats *, MatchmakingStats).</param>\n// static void GetStats(UObject* WorldContextObject, const FString& Pool, int32 MaxLevel, EMatchmakingStatApproach approach = EMatchmakingStatApproach::Trailing, const FMatchmakingGetStats& InDelegate = FMatchmakingGetStats());\n" },
		{ "ModuleRelativePath", "Public/Pico_Matchmaking.h" },
		{ "ToolTip", "<summary>Gets the matchmaking statistics for the current user.\n@note  Applicable to the following matchmaking modes: Quickmatch, Browse</summary>\n\n<param name=\"WorldContextObject\">Used to get the information about the current world.</param>\n<param name=\"Pool\">The pool to look in.</param>\n<param name=\"MaxLevel\">(beta feature, don't use it)</param>\n<param name=\"approach\">(beta feature, don't use it)</param>\n<param name=\"InDelegate\">Will be executed when the request has been completed.\nDelegate will contain the requested object class (bool, bIsError, int, ErrorCode, const FString&, ErrorMessage, UPico_MatchmakingStats *, MatchmakingStats).</param>\nstatic void GetStats(UObject* WorldContextObject, const FString& Pool, int32 MaxLevel, EMatchmakingStatApproach approach = EMatchmakingStatApproach::Trailing, const FMatchmakingGetStats& InDelegate = FMatchmakingGetStats());" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlinePicoMatchmakingFunction_GetStats_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlinePicoMatchmakingFunction, nullptr, "GetStats", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOnlinePicoMatchmakingFunction_GetStats_Statics::OnlinePicoMatchmakingFunction_eventGetStats_Parms), Z_Construct_UFunction_UOnlinePicoMatchmakingFunction_GetStats_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePicoMatchmakingFunction_GetStats_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlinePicoMatchmakingFunction_GetStats_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePicoMatchmakingFunction_GetStats_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlinePicoMatchmakingFunction_GetStats()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlinePicoMatchmakingFunction_GetStats_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlinePicoMatchmakingFunction_ReportResultsInsecure_Statics
	{
		struct OnlinePicoMatchmakingFunction_eventReportResultsInsecure_Parms
		{
			UObject* WorldContextObject;
			FString RoomID;
			TMap<FString,int32> Data;
			FScriptDelegate InDelegate;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RoomID_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_RoomID;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_Data_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Data_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_Data;
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_InDelegate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlinePicoMatchmakingFunction_ReportResultsInsecure_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlinePicoMatchmakingFunction_eventReportResultsInsecure_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlinePicoMatchmakingFunction_ReportResultsInsecure_Statics::NewProp_RoomID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOnlinePicoMatchmakingFunction_ReportResultsInsecure_Statics::NewProp_RoomID = { "RoomID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlinePicoMatchmakingFunction_eventReportResultsInsecure_Parms, RoomID), METADATA_PARAMS(Z_Construct_UFunction_UOnlinePicoMatchmakingFunction_ReportResultsInsecure_Statics::NewProp_RoomID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePicoMatchmakingFunction_ReportResultsInsecure_Statics::NewProp_RoomID_MetaData)) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UOnlinePicoMatchmakingFunction_ReportResultsInsecure_Statics::NewProp_Data_ValueProp = { "Data", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOnlinePicoMatchmakingFunction_ReportResultsInsecure_Statics::NewProp_Data_Key_KeyProp = { "Data_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlinePicoMatchmakingFunction_ReportResultsInsecure_Statics::NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UOnlinePicoMatchmakingFunction_ReportResultsInsecure_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlinePicoMatchmakingFunction_eventReportResultsInsecure_Parms, Data), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UOnlinePicoMatchmakingFunction_ReportResultsInsecure_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePicoMatchmakingFunction_ReportResultsInsecure_Statics::NewProp_Data_MetaData)) };
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UOnlinePicoMatchmakingFunction_ReportResultsInsecure_Statics::NewProp_InDelegate = { "InDelegate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlinePicoMatchmakingFunction_eventReportResultsInsecure_Parms, InDelegate), Z_Construct_UDelegateFunction_OnlineSubsystemPico_MatchmakingReportResultsInsecure__DelegateSignature, METADATA_PARAMS(nullptr, 0) }; // 3870447429
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlinePicoMatchmakingFunction_ReportResultsInsecure_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoMatchmakingFunction_ReportResultsInsecure_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoMatchmakingFunction_ReportResultsInsecure_Statics::NewProp_RoomID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoMatchmakingFunction_ReportResultsInsecure_Statics::NewProp_Data_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoMatchmakingFunction_ReportResultsInsecure_Statics::NewProp_Data_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoMatchmakingFunction_ReportResultsInsecure_Statics::NewProp_Data,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoMatchmakingFunction_ReportResultsInsecure_Statics::NewProp_InDelegate,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlinePicoMatchmakingFunction_ReportResultsInsecure_Statics::Function_MetaDataParams[] = {
		{ "Category", "OnlinePico|Matchmaking" },
		{ "Comment", "/// <summary>Reports the result of a skill-rating match.\n/// @note  Applicable to the following matchmaking modes: Quickmatch, Browse (+ Skill Pool)</summary>\n/// <param name=\"WorldContextObject\">Used to get the information about the current world.</param>\n/// <param name=\"RoomID\">The ID of the room.</param>\n/// <param name=\"Data\">The key-value pairs.</param>\n/// <param name=\"InDelegate\">Will be executed when the request has been completed.  \n/// Delegate will contain the requested object class (bool, bIsError, int, ErrorCode, const FString&, ErrorMessage).</param>\n" },
		{ "ModuleRelativePath", "Public/Pico_Matchmaking.h" },
		{ "ToolTip", "<summary>Reports the result of a skill-rating match.\n@note  Applicable to the following matchmaking modes: Quickmatch, Browse (+ Skill Pool)</summary>\n<param name=\"WorldContextObject\">Used to get the information about the current world.</param>\n<param name=\"RoomID\">The ID of the room.</param>\n<param name=\"Data\">The key-value pairs.</param>\n<param name=\"InDelegate\">Will be executed when the request has been completed.\nDelegate will contain the requested object class (bool, bIsError, int, ErrorCode, const FString&, ErrorMessage).</param>" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlinePicoMatchmakingFunction_ReportResultsInsecure_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlinePicoMatchmakingFunction, nullptr, "ReportResultsInsecure", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOnlinePicoMatchmakingFunction_ReportResultsInsecure_Statics::OnlinePicoMatchmakingFunction_eventReportResultsInsecure_Parms), Z_Construct_UFunction_UOnlinePicoMatchmakingFunction_ReportResultsInsecure_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePicoMatchmakingFunction_ReportResultsInsecure_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlinePicoMatchmakingFunction_ReportResultsInsecure_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePicoMatchmakingFunction_ReportResultsInsecure_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlinePicoMatchmakingFunction_ReportResultsInsecure()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlinePicoMatchmakingFunction_ReportResultsInsecure_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlinePicoMatchmakingFunction_StartMatch_Statics
	{
		struct OnlinePicoMatchmakingFunction_eventStartMatch_Parms
		{
			UObject* WorldContextObject;
			FString RoomId;
			FScriptDelegate InDelegate;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RoomId_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_RoomId;
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_InDelegate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlinePicoMatchmakingFunction_StartMatch_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlinePicoMatchmakingFunction_eventStartMatch_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlinePicoMatchmakingFunction_StartMatch_Statics::NewProp_RoomId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOnlinePicoMatchmakingFunction_StartMatch_Statics::NewProp_RoomId = { "RoomId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlinePicoMatchmakingFunction_eventStartMatch_Parms, RoomId), METADATA_PARAMS(Z_Construct_UFunction_UOnlinePicoMatchmakingFunction_StartMatch_Statics::NewProp_RoomId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePicoMatchmakingFunction_StartMatch_Statics::NewProp_RoomId_MetaData)) };
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UOnlinePicoMatchmakingFunction_StartMatch_Statics::NewProp_InDelegate = { "InDelegate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlinePicoMatchmakingFunction_eventStartMatch_Parms, InDelegate), Z_Construct_UDelegateFunction_OnlineSubsystemPico_MatchmakingStartMatch__DelegateSignature, METADATA_PARAMS(nullptr, 0) }; // 3421388580
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlinePicoMatchmakingFunction_StartMatch_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoMatchmakingFunction_StartMatch_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoMatchmakingFunction_StartMatch_Statics::NewProp_RoomId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoMatchmakingFunction_StartMatch_Statics::NewProp_InDelegate,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlinePicoMatchmakingFunction_StartMatch_Statics::Function_MetaDataParams[] = {
		{ "Category", "OnlinePico|Matchmaking" },
		{ "Comment", "/// <summary>Reports that a skill-rating match has started.\n/// You can use this method after joining the room.\n/// @note \n/// * This function is only for pools with skill-based matching.\n/// * Applicable to the following matchmaking modes: Quickmatch, Browse (+ Skill Pool)\n/// </summary>\n///\n/// <param name=\"WorldContextObject\">Used to get the information about the current world.</param>\n/// <param name=\"RoomId\">The ID of the room you want to match.</param>\n/// <param name=\"InDelegate\">Will be executed when the request has been completed.\n/// Delegate will contain the requested object class (bool, bIsError, int, ErrorCode, const FString&, ErrorMessage).</param>\n" },
		{ "ModuleRelativePath", "Public/Pico_Matchmaking.h" },
		{ "ToolTip", "<summary>Reports that a skill-rating match has started.\nYou can use this method after joining the room.\n@note\n* This function is only for pools with skill-based matching.\n* Applicable to the following matchmaking modes: Quickmatch, Browse (+ Skill Pool)\n</summary>\n\n<param name=\"WorldContextObject\">Used to get the information about the current world.</param>\n<param name=\"RoomId\">The ID of the room you want to match.</param>\n<param name=\"InDelegate\">Will be executed when the request has been completed.\nDelegate will contain the requested object class (bool, bIsError, int, ErrorCode, const FString&, ErrorMessage).</param>" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlinePicoMatchmakingFunction_StartMatch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlinePicoMatchmakingFunction, nullptr, "StartMatch", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOnlinePicoMatchmakingFunction_StartMatch_Statics::OnlinePicoMatchmakingFunction_eventStartMatch_Parms), Z_Construct_UFunction_UOnlinePicoMatchmakingFunction_StartMatch_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePicoMatchmakingFunction_StartMatch_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlinePicoMatchmakingFunction_StartMatch_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePicoMatchmakingFunction_StartMatch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlinePicoMatchmakingFunction_StartMatch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlinePicoMatchmakingFunction_StartMatch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOnlinePicoMatchmakingFunction);
	UClass* Z_Construct_UClass_UOnlinePicoMatchmakingFunction_NoRegister()
	{
		return UOnlinePicoMatchmakingFunction::StaticClass();
	}
	struct Z_Construct_UClass_UOnlinePicoMatchmakingFunction_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOnlinePicoMatchmakingFunction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemPico,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UOnlinePicoMatchmakingFunction_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOnlinePicoMatchmakingFunction_Browse2, "Browse2" }, // 2613824042
		{ &Z_Construct_UFunction_UOnlinePicoMatchmakingFunction_Browse2CustomPage, "Browse2CustomPage" }, // 3564157704
		{ &Z_Construct_UFunction_UOnlinePicoMatchmakingFunction_Cancel, "Cancel" }, // 2529694575
		{ &Z_Construct_UFunction_UOnlinePicoMatchmakingFunction_CreateAndEnqueueRoom2, "CreateAndEnqueueRoom2" }, // 2374999807
		{ &Z_Construct_UFunction_UOnlinePicoMatchmakingFunction_Enqueue2, "Enqueue2" }, // 1599857921
		{ &Z_Construct_UFunction_UOnlinePicoMatchmakingFunction_GetAdminSnapshot, "GetAdminSnapshot" }, // 2531328588
		{ &Z_Construct_UFunction_UOnlinePicoMatchmakingFunction_GetStats, "GetStats" }, // 3130104212
		{ &Z_Construct_UFunction_UOnlinePicoMatchmakingFunction_ReportResultsInsecure, "ReportResultsInsecure" }, // 4079158620
		{ &Z_Construct_UFunction_UOnlinePicoMatchmakingFunction_StartMatch, "StartMatch" }, // 2464521190
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlinePicoMatchmakingFunction_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** @defgroup BP_Matchmaking BP_Matchmaking\n *  This is the BP_Matchmaking group\n *  @{\n *//// @brief OnlinePicoMatchmaking Blueprint Function class.\n" },
		{ "IncludePath", "Pico_Matchmaking.h" },
		{ "ModuleRelativePath", "Public/Pico_Matchmaking.h" },
		{ "ToolTip", "@defgroup BP_Matchmaking BP_Matchmaking\nThis is the BP_Matchmaking group\n@{\n/// @brief OnlinePicoMatchmaking Blueprint Function class." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOnlinePicoMatchmakingFunction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOnlinePicoMatchmakingFunction>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOnlinePicoMatchmakingFunction_Statics::ClassParams = {
		&UOnlinePicoMatchmakingFunction::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UOnlinePicoMatchmakingFunction_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlinePicoMatchmakingFunction_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOnlinePicoMatchmakingFunction()
	{
		if (!Z_Registration_Info_UClass_UOnlinePicoMatchmakingFunction.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOnlinePicoMatchmakingFunction.OuterSingleton, Z_Construct_UClass_UOnlinePicoMatchmakingFunction_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOnlinePicoMatchmakingFunction.OuterSingleton;
	}
	template<> ONLINESUBSYSTEMPICO_API UClass* StaticClass<UOnlinePicoMatchmakingFunction>()
	{
		return UOnlinePicoMatchmakingFunction::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOnlinePicoMatchmakingFunction);
	UOnlinePicoMatchmakingFunction::~UOnlinePicoMatchmakingFunction() {}
	DEFINE_FUNCTION(UPico_MatchmakingStats::execGetDebugString)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetDebugString();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPico_MatchmakingStats::execGetWinCount)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetWinCount();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPico_MatchmakingStats::execGetSkillStandardDeviation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetSkillStandardDeviation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPico_MatchmakingStats::execGetSkillMean)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetSkillMean();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPico_MatchmakingStats::execGetSkillLevel)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetSkillLevel();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPico_MatchmakingStats::execGetLossCount)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetLossCount();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPico_MatchmakingStats::execGetDrawCount)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetDrawCount();
		P_NATIVE_END;
	}
	void UPico_MatchmakingStats::StaticRegisterNativesUPico_MatchmakingStats()
	{
		UClass* Class = UPico_MatchmakingStats::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetDebugString", &UPico_MatchmakingStats::execGetDebugString },
			{ "GetDrawCount", &UPico_MatchmakingStats::execGetDrawCount },
			{ "GetLossCount", &UPico_MatchmakingStats::execGetLossCount },
			{ "GetSkillLevel", &UPico_MatchmakingStats::execGetSkillLevel },
			{ "GetSkillMean", &UPico_MatchmakingStats::execGetSkillMean },
			{ "GetSkillStandardDeviation", &UPico_MatchmakingStats::execGetSkillStandardDeviation },
			{ "GetWinCount", &UPico_MatchmakingStats::execGetWinCount },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPico_MatchmakingStats_GetDebugString_Statics
	{
		struct Pico_MatchmakingStats_eventGetDebugString_Parms
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
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPico_MatchmakingStats_GetDebugString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Pico_MatchmakingStats_eventGetDebugString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPico_MatchmakingStats_GetDebugString_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPico_MatchmakingStats_GetDebugString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPico_MatchmakingStats_GetDebugString_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pico Platform|Matchmaking|Matchmaking Stats" },
		{ "ModuleRelativePath", "Public/Pico_Matchmaking.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPico_MatchmakingStats_GetDebugString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPico_MatchmakingStats, nullptr, "GetDebugString", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPico_MatchmakingStats_GetDebugString_Statics::Pico_MatchmakingStats_eventGetDebugString_Parms), Z_Construct_UFunction_UPico_MatchmakingStats_GetDebugString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_MatchmakingStats_GetDebugString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPico_MatchmakingStats_GetDebugString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_MatchmakingStats_GetDebugString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPico_MatchmakingStats_GetDebugString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPico_MatchmakingStats_GetDebugString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPico_MatchmakingStats_GetDrawCount_Statics
	{
		struct Pico_MatchmakingStats_eventGetDrawCount_Parms
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
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPico_MatchmakingStats_GetDrawCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Pico_MatchmakingStats_eventGetDrawCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPico_MatchmakingStats_GetDrawCount_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPico_MatchmakingStats_GetDrawCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPico_MatchmakingStats_GetDrawCount_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pico Platform|Matchmaking|Matchmaking Stats" },
		{ "Comment", "/** @brief The current user's number of draws. */" },
		{ "ModuleRelativePath", "Public/Pico_Matchmaking.h" },
		{ "ToolTip", "@brief The current user's number of draws." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPico_MatchmakingStats_GetDrawCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPico_MatchmakingStats, nullptr, "GetDrawCount", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPico_MatchmakingStats_GetDrawCount_Statics::Pico_MatchmakingStats_eventGetDrawCount_Parms), Z_Construct_UFunction_UPico_MatchmakingStats_GetDrawCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_MatchmakingStats_GetDrawCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPico_MatchmakingStats_GetDrawCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_MatchmakingStats_GetDrawCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPico_MatchmakingStats_GetDrawCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPico_MatchmakingStats_GetDrawCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPico_MatchmakingStats_GetLossCount_Statics
	{
		struct Pico_MatchmakingStats_eventGetLossCount_Parms
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
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPico_MatchmakingStats_GetLossCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Pico_MatchmakingStats_eventGetLossCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPico_MatchmakingStats_GetLossCount_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPico_MatchmakingStats_GetLossCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPico_MatchmakingStats_GetLossCount_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pico Platform|Matchmaking|Matchmaking Stats" },
		{ "Comment", "/** @brief The current user's number of losses. */" },
		{ "ModuleRelativePath", "Public/Pico_Matchmaking.h" },
		{ "ToolTip", "@brief The current user's number of losses." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPico_MatchmakingStats_GetLossCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPico_MatchmakingStats, nullptr, "GetLossCount", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPico_MatchmakingStats_GetLossCount_Statics::Pico_MatchmakingStats_eventGetLossCount_Parms), Z_Construct_UFunction_UPico_MatchmakingStats_GetLossCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_MatchmakingStats_GetLossCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPico_MatchmakingStats_GetLossCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_MatchmakingStats_GetLossCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPico_MatchmakingStats_GetLossCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPico_MatchmakingStats_GetLossCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPico_MatchmakingStats_GetSkillLevel_Statics
	{
		struct Pico_MatchmakingStats_eventGetSkillLevel_Parms
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
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPico_MatchmakingStats_GetSkillLevel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Pico_MatchmakingStats_eventGetSkillLevel_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPico_MatchmakingStats_GetSkillLevel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPico_MatchmakingStats_GetSkillLevel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPico_MatchmakingStats_GetSkillLevel_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pico Platform|Matchmaking|Matchmaking Stats" },
		{ "Comment", "/** @brief The current user's skill level for the current matchmaking pool. */" },
		{ "ModuleRelativePath", "Public/Pico_Matchmaking.h" },
		{ "ToolTip", "@brief The current user's skill level for the current matchmaking pool." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPico_MatchmakingStats_GetSkillLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPico_MatchmakingStats, nullptr, "GetSkillLevel", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPico_MatchmakingStats_GetSkillLevel_Statics::Pico_MatchmakingStats_eventGetSkillLevel_Parms), Z_Construct_UFunction_UPico_MatchmakingStats_GetSkillLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_MatchmakingStats_GetSkillLevel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPico_MatchmakingStats_GetSkillLevel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_MatchmakingStats_GetSkillLevel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPico_MatchmakingStats_GetSkillLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPico_MatchmakingStats_GetSkillLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPico_MatchmakingStats_GetSkillMean_Statics
	{
		struct Pico_MatchmakingStats_eventGetSkillMean_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPico_MatchmakingStats_GetSkillMean_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Pico_MatchmakingStats_eventGetSkillMean_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPico_MatchmakingStats_GetSkillMean_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPico_MatchmakingStats_GetSkillMean_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPico_MatchmakingStats_GetSkillMean_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pico Platform|Matchmaking|Matchmaking Stats" },
		{ "Comment", "/** @brief The average of all skill levels for the current matchmaking pool. */" },
		{ "ModuleRelativePath", "Public/Pico_Matchmaking.h" },
		{ "ToolTip", "@brief The average of all skill levels for the current matchmaking pool." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPico_MatchmakingStats_GetSkillMean_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPico_MatchmakingStats, nullptr, "GetSkillMean", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPico_MatchmakingStats_GetSkillMean_Statics::Pico_MatchmakingStats_eventGetSkillMean_Parms), Z_Construct_UFunction_UPico_MatchmakingStats_GetSkillMean_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_MatchmakingStats_GetSkillMean_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPico_MatchmakingStats_GetSkillMean_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_MatchmakingStats_GetSkillMean_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPico_MatchmakingStats_GetSkillMean()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPico_MatchmakingStats_GetSkillMean_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPico_MatchmakingStats_GetSkillStandardDeviation_Statics
	{
		struct Pico_MatchmakingStats_eventGetSkillStandardDeviation_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPico_MatchmakingStats_GetSkillStandardDeviation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Pico_MatchmakingStats_eventGetSkillStandardDeviation_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPico_MatchmakingStats_GetSkillStandardDeviation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPico_MatchmakingStats_GetSkillStandardDeviation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPico_MatchmakingStats_GetSkillStandardDeviation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pico Platform|Matchmaking|Matchmaking Stats" },
		{ "Comment", "/** @brief The standard deviation of all skill levels for the current matchmaking pool */" },
		{ "ModuleRelativePath", "Public/Pico_Matchmaking.h" },
		{ "ToolTip", "@brief The standard deviation of all skill levels for the current matchmaking pool" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPico_MatchmakingStats_GetSkillStandardDeviation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPico_MatchmakingStats, nullptr, "GetSkillStandardDeviation", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPico_MatchmakingStats_GetSkillStandardDeviation_Statics::Pico_MatchmakingStats_eventGetSkillStandardDeviation_Parms), Z_Construct_UFunction_UPico_MatchmakingStats_GetSkillStandardDeviation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_MatchmakingStats_GetSkillStandardDeviation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPico_MatchmakingStats_GetSkillStandardDeviation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_MatchmakingStats_GetSkillStandardDeviation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPico_MatchmakingStats_GetSkillStandardDeviation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPico_MatchmakingStats_GetSkillStandardDeviation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPico_MatchmakingStats_GetWinCount_Statics
	{
		struct Pico_MatchmakingStats_eventGetWinCount_Parms
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
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPico_MatchmakingStats_GetWinCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Pico_MatchmakingStats_eventGetWinCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPico_MatchmakingStats_GetWinCount_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPico_MatchmakingStats_GetWinCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPico_MatchmakingStats_GetWinCount_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pico Platform|Matchmaking|Matchmaking Stats" },
		{ "Comment", "/** @brief The current user's number of wins. */" },
		{ "ModuleRelativePath", "Public/Pico_Matchmaking.h" },
		{ "ToolTip", "@brief The current user's number of wins." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPico_MatchmakingStats_GetWinCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPico_MatchmakingStats, nullptr, "GetWinCount", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPico_MatchmakingStats_GetWinCount_Statics::Pico_MatchmakingStats_eventGetWinCount_Parms), Z_Construct_UFunction_UPico_MatchmakingStats_GetWinCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_MatchmakingStats_GetWinCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPico_MatchmakingStats_GetWinCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_MatchmakingStats_GetWinCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPico_MatchmakingStats_GetWinCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPico_MatchmakingStats_GetWinCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPico_MatchmakingStats);
	UClass* Z_Construct_UClass_UPico_MatchmakingStats_NoRegister()
	{
		return UPico_MatchmakingStats::StaticClass();
	}
	struct Z_Construct_UClass_UPico_MatchmakingStats_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPico_MatchmakingStats_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemPico,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPico_MatchmakingStats_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPico_MatchmakingStats_GetDebugString, "GetDebugString" }, // 3656576474
		{ &Z_Construct_UFunction_UPico_MatchmakingStats_GetDrawCount, "GetDrawCount" }, // 154834988
		{ &Z_Construct_UFunction_UPico_MatchmakingStats_GetLossCount, "GetLossCount" }, // 2517897064
		{ &Z_Construct_UFunction_UPico_MatchmakingStats_GetSkillLevel, "GetSkillLevel" }, // 2600634380
		{ &Z_Construct_UFunction_UPico_MatchmakingStats_GetSkillMean, "GetSkillMean" }, // 1337045397
		{ &Z_Construct_UFunction_UPico_MatchmakingStats_GetSkillStandardDeviation, "GetSkillStandardDeviation" }, // 2168244987
		{ &Z_Construct_UFunction_UPico_MatchmakingStats_GetWinCount, "GetWinCount" }, // 477871899
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPico_MatchmakingStats_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** @} *//// @brief UPico_MatchmakingStats class.\n" },
		{ "IncludePath", "Pico_Matchmaking.h" },
		{ "ModuleRelativePath", "Public/Pico_Matchmaking.h" },
		{ "ToolTip", "@} /// @brief UPico_MatchmakingStats class." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPico_MatchmakingStats_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPico_MatchmakingStats>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPico_MatchmakingStats_Statics::ClassParams = {
		&UPico_MatchmakingStats::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UPico_MatchmakingStats_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPico_MatchmakingStats_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPico_MatchmakingStats()
	{
		if (!Z_Registration_Info_UClass_UPico_MatchmakingStats.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPico_MatchmakingStats.OuterSingleton, Z_Construct_UClass_UPico_MatchmakingStats_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPico_MatchmakingStats.OuterSingleton;
	}
	template<> ONLINESUBSYSTEMPICO_API UClass* StaticClass<UPico_MatchmakingStats>()
	{
		return UPico_MatchmakingStats::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPico_MatchmakingStats);
	UPico_MatchmakingStats::~UPico_MatchmakingStats() {}
	DEFINE_FUNCTION(UPico_MatchmakingBrowseResult::execGetDebugString)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetDebugString();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPico_MatchmakingBrowseResult::execGetMatchmakingRooms)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UPico_MatchmakingRoomList**)Z_Param__Result=P_THIS->GetMatchmakingRooms();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPico_MatchmakingBrowseResult::execGetMatchmakingEnqueueResult)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UPico_MatchmakingEnqueueResult**)Z_Param__Result=P_THIS->GetMatchmakingEnqueueResult();
		P_NATIVE_END;
	}
	void UPico_MatchmakingBrowseResult::StaticRegisterNativesUPico_MatchmakingBrowseResult()
	{
		UClass* Class = UPico_MatchmakingBrowseResult::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetDebugString", &UPico_MatchmakingBrowseResult::execGetDebugString },
			{ "GetMatchmakingEnqueueResult", &UPico_MatchmakingBrowseResult::execGetMatchmakingEnqueueResult },
			{ "GetMatchmakingRooms", &UPico_MatchmakingBrowseResult::execGetMatchmakingRooms },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPico_MatchmakingBrowseResult_GetDebugString_Statics
	{
		struct Pico_MatchmakingBrowseResult_eventGetDebugString_Parms
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
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPico_MatchmakingBrowseResult_GetDebugString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Pico_MatchmakingBrowseResult_eventGetDebugString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPico_MatchmakingBrowseResult_GetDebugString_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPico_MatchmakingBrowseResult_GetDebugString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPico_MatchmakingBrowseResult_GetDebugString_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pico Platform|Matchmaking|Matchmaking Browse Result" },
		{ "ModuleRelativePath", "Public/Pico_Matchmaking.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPico_MatchmakingBrowseResult_GetDebugString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPico_MatchmakingBrowseResult, nullptr, "GetDebugString", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPico_MatchmakingBrowseResult_GetDebugString_Statics::Pico_MatchmakingBrowseResult_eventGetDebugString_Parms), Z_Construct_UFunction_UPico_MatchmakingBrowseResult_GetDebugString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_MatchmakingBrowseResult_GetDebugString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPico_MatchmakingBrowseResult_GetDebugString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_MatchmakingBrowseResult_GetDebugString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPico_MatchmakingBrowseResult_GetDebugString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPico_MatchmakingBrowseResult_GetDebugString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPico_MatchmakingBrowseResult_GetMatchmakingEnqueueResult_Statics
	{
		struct Pico_MatchmakingBrowseResult_eventGetMatchmakingEnqueueResult_Parms
		{
			UPico_MatchmakingEnqueueResult* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPico_MatchmakingBrowseResult_GetMatchmakingEnqueueResult_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Pico_MatchmakingBrowseResult_eventGetMatchmakingEnqueueResult_Parms, ReturnValue), Z_Construct_UClass_UPico_MatchmakingEnqueueResult_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPico_MatchmakingBrowseResult_GetMatchmakingEnqueueResult_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPico_MatchmakingBrowseResult_GetMatchmakingEnqueueResult_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPico_MatchmakingBrowseResult_GetMatchmakingEnqueueResult_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pico Platform|Matchmaking|Matchmaking Browse Result" },
		{ "Comment", "/** @brief Matchmaking enqueue result. */" },
		{ "ModuleRelativePath", "Public/Pico_Matchmaking.h" },
		{ "ToolTip", "@brief Matchmaking enqueue result." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPico_MatchmakingBrowseResult_GetMatchmakingEnqueueResult_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPico_MatchmakingBrowseResult, nullptr, "GetMatchmakingEnqueueResult", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPico_MatchmakingBrowseResult_GetMatchmakingEnqueueResult_Statics::Pico_MatchmakingBrowseResult_eventGetMatchmakingEnqueueResult_Parms), Z_Construct_UFunction_UPico_MatchmakingBrowseResult_GetMatchmakingEnqueueResult_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_MatchmakingBrowseResult_GetMatchmakingEnqueueResult_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPico_MatchmakingBrowseResult_GetMatchmakingEnqueueResult_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_MatchmakingBrowseResult_GetMatchmakingEnqueueResult_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPico_MatchmakingBrowseResult_GetMatchmakingEnqueueResult()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPico_MatchmakingBrowseResult_GetMatchmakingEnqueueResult_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPico_MatchmakingBrowseResult_GetMatchmakingRooms_Statics
	{
		struct Pico_MatchmakingBrowseResult_eventGetMatchmakingRooms_Parms
		{
			UPico_MatchmakingRoomList* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPico_MatchmakingBrowseResult_GetMatchmakingRooms_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Pico_MatchmakingBrowseResult_eventGetMatchmakingRooms_Parms, ReturnValue), Z_Construct_UClass_UPico_MatchmakingRoomList_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPico_MatchmakingBrowseResult_GetMatchmakingRooms_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPico_MatchmakingBrowseResult_GetMatchmakingRooms_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPico_MatchmakingBrowseResult_GetMatchmakingRooms_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pico Platform|Matchmaking|Matchmaking Browse Result" },
		{ "Comment", "/** @brief The list of matchmaking rooms. */" },
		{ "ModuleRelativePath", "Public/Pico_Matchmaking.h" },
		{ "ToolTip", "@brief The list of matchmaking rooms." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPico_MatchmakingBrowseResult_GetMatchmakingRooms_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPico_MatchmakingBrowseResult, nullptr, "GetMatchmakingRooms", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPico_MatchmakingBrowseResult_GetMatchmakingRooms_Statics::Pico_MatchmakingBrowseResult_eventGetMatchmakingRooms_Parms), Z_Construct_UFunction_UPico_MatchmakingBrowseResult_GetMatchmakingRooms_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_MatchmakingBrowseResult_GetMatchmakingRooms_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPico_MatchmakingBrowseResult_GetMatchmakingRooms_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_MatchmakingBrowseResult_GetMatchmakingRooms_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPico_MatchmakingBrowseResult_GetMatchmakingRooms()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPico_MatchmakingBrowseResult_GetMatchmakingRooms_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPico_MatchmakingBrowseResult);
	UClass* Z_Construct_UClass_UPico_MatchmakingBrowseResult_NoRegister()
	{
		return UPico_MatchmakingBrowseResult::StaticClass();
	}
	struct Z_Construct_UClass_UPico_MatchmakingBrowseResult_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EnqueueResult_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_EnqueueResult;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MatchmakingRooms_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MatchmakingRooms;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPico_MatchmakingBrowseResult_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemPico,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPico_MatchmakingBrowseResult_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPico_MatchmakingBrowseResult_GetDebugString, "GetDebugString" }, // 3467809065
		{ &Z_Construct_UFunction_UPico_MatchmakingBrowseResult_GetMatchmakingEnqueueResult, "GetMatchmakingEnqueueResult" }, // 3107303889
		{ &Z_Construct_UFunction_UPico_MatchmakingBrowseResult_GetMatchmakingRooms, "GetMatchmakingRooms" }, // 2117560800
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPico_MatchmakingBrowseResult_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/// @brief UPico_MatchmakingBrowseResult class.\n" },
		{ "IncludePath", "Pico_Matchmaking.h" },
		{ "ModuleRelativePath", "Public/Pico_Matchmaking.h" },
		{ "ToolTip", "@brief UPico_MatchmakingBrowseResult class." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPico_MatchmakingBrowseResult_Statics::NewProp_EnqueueResult_MetaData[] = {
		{ "ModuleRelativePath", "Public/Pico_Matchmaking.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPico_MatchmakingBrowseResult_Statics::NewProp_EnqueueResult = { "EnqueueResult", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPico_MatchmakingBrowseResult, EnqueueResult), Z_Construct_UClass_UPico_MatchmakingEnqueueResult_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPico_MatchmakingBrowseResult_Statics::NewProp_EnqueueResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPico_MatchmakingBrowseResult_Statics::NewProp_EnqueueResult_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPico_MatchmakingBrowseResult_Statics::NewProp_MatchmakingRooms_MetaData[] = {
		{ "ModuleRelativePath", "Public/Pico_Matchmaking.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPico_MatchmakingBrowseResult_Statics::NewProp_MatchmakingRooms = { "MatchmakingRooms", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPico_MatchmakingBrowseResult, MatchmakingRooms), Z_Construct_UClass_UPico_MatchmakingRoomList_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPico_MatchmakingBrowseResult_Statics::NewProp_MatchmakingRooms_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPico_MatchmakingBrowseResult_Statics::NewProp_MatchmakingRooms_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPico_MatchmakingBrowseResult_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPico_MatchmakingBrowseResult_Statics::NewProp_EnqueueResult,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPico_MatchmakingBrowseResult_Statics::NewProp_MatchmakingRooms,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPico_MatchmakingBrowseResult_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPico_MatchmakingBrowseResult>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPico_MatchmakingBrowseResult_Statics::ClassParams = {
		&UPico_MatchmakingBrowseResult::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPico_MatchmakingBrowseResult_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPico_MatchmakingBrowseResult_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPico_MatchmakingBrowseResult_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPico_MatchmakingBrowseResult_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPico_MatchmakingBrowseResult()
	{
		if (!Z_Registration_Info_UClass_UPico_MatchmakingBrowseResult.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPico_MatchmakingBrowseResult.OuterSingleton, Z_Construct_UClass_UPico_MatchmakingBrowseResult_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPico_MatchmakingBrowseResult.OuterSingleton;
	}
	template<> ONLINESUBSYSTEMPICO_API UClass* StaticClass<UPico_MatchmakingBrowseResult>()
	{
		return UPico_MatchmakingBrowseResult::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPico_MatchmakingBrowseResult);
	UPico_MatchmakingBrowseResult::~UPico_MatchmakingBrowseResult() {}
	DEFINE_FUNCTION(UPico_MatchmakingRoomList::execGetDebugString)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetDebugString();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPico_MatchmakingRoomList::execGetTotalSize)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetTotalSize();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPico_MatchmakingRoomList::execGetSize)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetSize();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPico_MatchmakingRoomList::execGetElement)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UPico_MatchmakingRoom**)Z_Param__Result=P_THIS->GetElement(Z_Param_Index);
		P_NATIVE_END;
	}
	void UPico_MatchmakingRoomList::StaticRegisterNativesUPico_MatchmakingRoomList()
	{
		UClass* Class = UPico_MatchmakingRoomList::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetDebugString", &UPico_MatchmakingRoomList::execGetDebugString },
			{ "GetElement", &UPico_MatchmakingRoomList::execGetElement },
			{ "GetSize", &UPico_MatchmakingRoomList::execGetSize },
			{ "GetTotalSize", &UPico_MatchmakingRoomList::execGetTotalSize },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPico_MatchmakingRoomList_GetDebugString_Statics
	{
		struct Pico_MatchmakingRoomList_eventGetDebugString_Parms
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
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPico_MatchmakingRoomList_GetDebugString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Pico_MatchmakingRoomList_eventGetDebugString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPico_MatchmakingRoomList_GetDebugString_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPico_MatchmakingRoomList_GetDebugString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPico_MatchmakingRoomList_GetDebugString_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pico Platform|Matchmaking|Matchmaking Room Array" },
		{ "ModuleRelativePath", "Public/Pico_Matchmaking.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPico_MatchmakingRoomList_GetDebugString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPico_MatchmakingRoomList, nullptr, "GetDebugString", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPico_MatchmakingRoomList_GetDebugString_Statics::Pico_MatchmakingRoomList_eventGetDebugString_Parms), Z_Construct_UFunction_UPico_MatchmakingRoomList_GetDebugString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_MatchmakingRoomList_GetDebugString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPico_MatchmakingRoomList_GetDebugString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_MatchmakingRoomList_GetDebugString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPico_MatchmakingRoomList_GetDebugString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPico_MatchmakingRoomList_GetDebugString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPico_MatchmakingRoomList_GetElement_Statics
	{
		struct Pico_MatchmakingRoomList_eventGetElement_Parms
		{
			int32 Index;
			UPico_MatchmakingRoom* ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPico_MatchmakingRoomList_GetElement_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Pico_MatchmakingRoomList_eventGetElement_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPico_MatchmakingRoomList_GetElement_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Pico_MatchmakingRoomList_eventGetElement_Parms, ReturnValue), Z_Construct_UClass_UPico_MatchmakingRoom_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPico_MatchmakingRoomList_GetElement_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPico_MatchmakingRoomList_GetElement_Statics::NewProp_Index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPico_MatchmakingRoomList_GetElement_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPico_MatchmakingRoomList_GetElement_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pico Platform|Matchmaking|Matchmaking Room Array" },
		{ "Comment", "/** @brief Get MatchmakingRoomArray element form Index.*/" },
		{ "ModuleRelativePath", "Public/Pico_Matchmaking.h" },
		{ "ToolTip", "@brief Get MatchmakingRoomArray element form Index." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPico_MatchmakingRoomList_GetElement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPico_MatchmakingRoomList, nullptr, "GetElement", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPico_MatchmakingRoomList_GetElement_Statics::Pico_MatchmakingRoomList_eventGetElement_Parms), Z_Construct_UFunction_UPico_MatchmakingRoomList_GetElement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_MatchmakingRoomList_GetElement_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPico_MatchmakingRoomList_GetElement_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_MatchmakingRoomList_GetElement_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPico_MatchmakingRoomList_GetElement()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPico_MatchmakingRoomList_GetElement_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPico_MatchmakingRoomList_GetSize_Statics
	{
		struct Pico_MatchmakingRoomList_eventGetSize_Parms
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
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPico_MatchmakingRoomList_GetSize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Pico_MatchmakingRoomList_eventGetSize_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPico_MatchmakingRoomList_GetSize_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPico_MatchmakingRoomList_GetSize_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPico_MatchmakingRoomList_GetSize_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pico Platform|Matchmaking|Matchmaking Room Array" },
		{ "Comment", "/** @brief Get the size of MatchmakingRoomArray .*/" },
		{ "ModuleRelativePath", "Public/Pico_Matchmaking.h" },
		{ "ToolTip", "@brief Get the size of MatchmakingRoomArray ." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPico_MatchmakingRoomList_GetSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPico_MatchmakingRoomList, nullptr, "GetSize", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPico_MatchmakingRoomList_GetSize_Statics::Pico_MatchmakingRoomList_eventGetSize_Parms), Z_Construct_UFunction_UPico_MatchmakingRoomList_GetSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_MatchmakingRoomList_GetSize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPico_MatchmakingRoomList_GetSize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_MatchmakingRoomList_GetSize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPico_MatchmakingRoomList_GetSize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPico_MatchmakingRoomList_GetSize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPico_MatchmakingRoomList_GetTotalSize_Statics
	{
		struct Pico_MatchmakingRoomList_eventGetTotalSize_Parms
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
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPico_MatchmakingRoomList_GetTotalSize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Pico_MatchmakingRoomList_eventGetTotalSize_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPico_MatchmakingRoomList_GetTotalSize_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPico_MatchmakingRoomList_GetTotalSize_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPico_MatchmakingRoomList_GetTotalSize_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pico Platform|Matchmaking|Matchmaking Room Array" },
		{ "ModuleRelativePath", "Public/Pico_Matchmaking.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPico_MatchmakingRoomList_GetTotalSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPico_MatchmakingRoomList, nullptr, "GetTotalSize", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPico_MatchmakingRoomList_GetTotalSize_Statics::Pico_MatchmakingRoomList_eventGetTotalSize_Parms), Z_Construct_UFunction_UPico_MatchmakingRoomList_GetTotalSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_MatchmakingRoomList_GetTotalSize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPico_MatchmakingRoomList_GetTotalSize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_MatchmakingRoomList_GetTotalSize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPico_MatchmakingRoomList_GetTotalSize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPico_MatchmakingRoomList_GetTotalSize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPico_MatchmakingRoomList);
	UClass* Z_Construct_UClass_UPico_MatchmakingRoomList_NoRegister()
	{
		return UPico_MatchmakingRoomList::StaticClass();
	}
	struct Z_Construct_UClass_UPico_MatchmakingRoomList_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MatchmakingRoomArray_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MatchmakingRoomArray_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_MatchmakingRoomArray;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPico_MatchmakingRoomList_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemPico,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPico_MatchmakingRoomList_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPico_MatchmakingRoomList_GetDebugString, "GetDebugString" }, // 650471644
		{ &Z_Construct_UFunction_UPico_MatchmakingRoomList_GetElement, "GetElement" }, // 2518562462
		{ &Z_Construct_UFunction_UPico_MatchmakingRoomList_GetSize, "GetSize" }, // 1563821074
		{ &Z_Construct_UFunction_UPico_MatchmakingRoomList_GetTotalSize, "GetTotalSize" }, // 877507016
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPico_MatchmakingRoomList_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/// @brief UPico_MatchmakingRoomList class.\n" },
		{ "IncludePath", "Pico_Matchmaking.h" },
		{ "ModuleRelativePath", "Public/Pico_Matchmaking.h" },
		{ "ToolTip", "@brief UPico_MatchmakingRoomList class." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPico_MatchmakingRoomList_Statics::NewProp_MatchmakingRoomArray_Inner = { "MatchmakingRoomArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UPico_MatchmakingRoom_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPico_MatchmakingRoomList_Statics::NewProp_MatchmakingRoomArray_MetaData[] = {
		{ "ModuleRelativePath", "Public/Pico_Matchmaking.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPico_MatchmakingRoomList_Statics::NewProp_MatchmakingRoomArray = { "MatchmakingRoomArray", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPico_MatchmakingRoomList, MatchmakingRoomArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UPico_MatchmakingRoomList_Statics::NewProp_MatchmakingRoomArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPico_MatchmakingRoomList_Statics::NewProp_MatchmakingRoomArray_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPico_MatchmakingRoomList_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPico_MatchmakingRoomList_Statics::NewProp_MatchmakingRoomArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPico_MatchmakingRoomList_Statics::NewProp_MatchmakingRoomArray,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPico_MatchmakingRoomList_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPico_MatchmakingRoomList>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPico_MatchmakingRoomList_Statics::ClassParams = {
		&UPico_MatchmakingRoomList::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPico_MatchmakingRoomList_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPico_MatchmakingRoomList_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPico_MatchmakingRoomList_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPico_MatchmakingRoomList_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPico_MatchmakingRoomList()
	{
		if (!Z_Registration_Info_UClass_UPico_MatchmakingRoomList.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPico_MatchmakingRoomList.OuterSingleton, Z_Construct_UClass_UPico_MatchmakingRoomList_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPico_MatchmakingRoomList.OuterSingleton;
	}
	template<> ONLINESUBSYSTEMPICO_API UClass* StaticClass<UPico_MatchmakingRoomList>()
	{
		return UPico_MatchmakingRoomList::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPico_MatchmakingRoomList);
	UPico_MatchmakingRoomList::~UPico_MatchmakingRoomList() {}
	DEFINE_FUNCTION(UPico_MatchmakingRoom::execGetDebugString)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetDebugString();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPico_MatchmakingRoom::execGetHasPingTime)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetHasPingTime();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPico_MatchmakingRoom::execGetPingTime)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetPingTime();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPico_MatchmakingRoom::execGetRoom)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UPico_Room**)Z_Param__Result=P_THIS->GetRoom();
		P_NATIVE_END;
	}
	void UPico_MatchmakingRoom::StaticRegisterNativesUPico_MatchmakingRoom()
	{
		UClass* Class = UPico_MatchmakingRoom::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetDebugString", &UPico_MatchmakingRoom::execGetDebugString },
			{ "GetHasPingTime", &UPico_MatchmakingRoom::execGetHasPingTime },
			{ "GetPingTime", &UPico_MatchmakingRoom::execGetPingTime },
			{ "GetRoom", &UPico_MatchmakingRoom::execGetRoom },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPico_MatchmakingRoom_GetDebugString_Statics
	{
		struct Pico_MatchmakingRoom_eventGetDebugString_Parms
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
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPico_MatchmakingRoom_GetDebugString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Pico_MatchmakingRoom_eventGetDebugString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPico_MatchmakingRoom_GetDebugString_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPico_MatchmakingRoom_GetDebugString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPico_MatchmakingRoom_GetDebugString_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pico Platform|Matchmaking|Matchmaking Room" },
		{ "ModuleRelativePath", "Public/Pico_Matchmaking.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPico_MatchmakingRoom_GetDebugString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPico_MatchmakingRoom, nullptr, "GetDebugString", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPico_MatchmakingRoom_GetDebugString_Statics::Pico_MatchmakingRoom_eventGetDebugString_Parms), Z_Construct_UFunction_UPico_MatchmakingRoom_GetDebugString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_MatchmakingRoom_GetDebugString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPico_MatchmakingRoom_GetDebugString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_MatchmakingRoom_GetDebugString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPico_MatchmakingRoom_GetDebugString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPico_MatchmakingRoom_GetDebugString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPico_MatchmakingRoom_GetHasPingTime_Statics
	{
		struct Pico_MatchmakingRoom_eventGetHasPingTime_Parms
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
	void Z_Construct_UFunction_UPico_MatchmakingRoom_GetHasPingTime_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Pico_MatchmakingRoom_eventGetHasPingTime_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPico_MatchmakingRoom_GetHasPingTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(Pico_MatchmakingRoom_eventGetHasPingTime_Parms), &Z_Construct_UFunction_UPico_MatchmakingRoom_GetHasPingTime_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPico_MatchmakingRoom_GetHasPingTime_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPico_MatchmakingRoom_GetHasPingTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPico_MatchmakingRoom_GetHasPingTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pico Platform|Matchmaking|Matchmaking Room" },
		{ "Comment", "/** @brief Currently, always `false`. */" },
		{ "ModuleRelativePath", "Public/Pico_Matchmaking.h" },
		{ "ToolTip", "@brief Currently, always `false`." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPico_MatchmakingRoom_GetHasPingTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPico_MatchmakingRoom, nullptr, "GetHasPingTime", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPico_MatchmakingRoom_GetHasPingTime_Statics::Pico_MatchmakingRoom_eventGetHasPingTime_Parms), Z_Construct_UFunction_UPico_MatchmakingRoom_GetHasPingTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_MatchmakingRoom_GetHasPingTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPico_MatchmakingRoom_GetHasPingTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_MatchmakingRoom_GetHasPingTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPico_MatchmakingRoom_GetHasPingTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPico_MatchmakingRoom_GetHasPingTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPico_MatchmakingRoom_GetPingTime_Statics
	{
		struct Pico_MatchmakingRoom_eventGetPingTime_Parms
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
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPico_MatchmakingRoom_GetPingTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Pico_MatchmakingRoom_eventGetPingTime_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPico_MatchmakingRoom_GetPingTime_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPico_MatchmakingRoom_GetPingTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPico_MatchmakingRoom_GetPingTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pico Platform|Matchmaking|Matchmaking Room" },
		{ "Comment", "/** @brief Currently, always `0`. */" },
		{ "ModuleRelativePath", "Public/Pico_Matchmaking.h" },
		{ "ToolTip", "@brief Currently, always `0`." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPico_MatchmakingRoom_GetPingTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPico_MatchmakingRoom, nullptr, "GetPingTime", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPico_MatchmakingRoom_GetPingTime_Statics::Pico_MatchmakingRoom_eventGetPingTime_Parms), Z_Construct_UFunction_UPico_MatchmakingRoom_GetPingTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_MatchmakingRoom_GetPingTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPico_MatchmakingRoom_GetPingTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_MatchmakingRoom_GetPingTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPico_MatchmakingRoom_GetPingTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPico_MatchmakingRoom_GetPingTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPico_MatchmakingRoom_GetRoom_Statics
	{
		struct Pico_MatchmakingRoom_eventGetRoom_Parms
		{
			UPico_Room* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPico_MatchmakingRoom_GetRoom_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Pico_MatchmakingRoom_eventGetRoom_Parms, ReturnValue), Z_Construct_UClass_UPico_Room_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPico_MatchmakingRoom_GetRoom_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPico_MatchmakingRoom_GetRoom_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPico_MatchmakingRoom_GetRoom_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pico Platform|Matchmaking|Matchmaking Room" },
		{ "Comment", "/** @brief Room info. */" },
		{ "ModuleRelativePath", "Public/Pico_Matchmaking.h" },
		{ "ToolTip", "@brief Room info." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPico_MatchmakingRoom_GetRoom_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPico_MatchmakingRoom, nullptr, "GetRoom", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPico_MatchmakingRoom_GetRoom_Statics::Pico_MatchmakingRoom_eventGetRoom_Parms), Z_Construct_UFunction_UPico_MatchmakingRoom_GetRoom_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_MatchmakingRoom_GetRoom_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPico_MatchmakingRoom_GetRoom_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_MatchmakingRoom_GetRoom_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPico_MatchmakingRoom_GetRoom()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPico_MatchmakingRoom_GetRoom_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPico_MatchmakingRoom);
	UClass* Z_Construct_UClass_UPico_MatchmakingRoom_NoRegister()
	{
		return UPico_MatchmakingRoom::StaticClass();
	}
	struct Z_Construct_UClass_UPico_MatchmakingRoom_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Room_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Room;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPico_MatchmakingRoom_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemPico,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPico_MatchmakingRoom_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPico_MatchmakingRoom_GetDebugString, "GetDebugString" }, // 3138531874
		{ &Z_Construct_UFunction_UPico_MatchmakingRoom_GetHasPingTime, "GetHasPingTime" }, // 329448935
		{ &Z_Construct_UFunction_UPico_MatchmakingRoom_GetPingTime, "GetPingTime" }, // 271515016
		{ &Z_Construct_UFunction_UPico_MatchmakingRoom_GetRoom, "GetRoom" }, // 3033842298
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPico_MatchmakingRoom_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/// @brief UPico_MatchmakingRoom class.\n" },
		{ "IncludePath", "Pico_Matchmaking.h" },
		{ "ModuleRelativePath", "Public/Pico_Matchmaking.h" },
		{ "ToolTip", "@brief UPico_MatchmakingRoom class." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPico_MatchmakingRoom_Statics::NewProp_Room_MetaData[] = {
		{ "ModuleRelativePath", "Public/Pico_Matchmaking.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPico_MatchmakingRoom_Statics::NewProp_Room = { "Room", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPico_MatchmakingRoom, Room), Z_Construct_UClass_UPico_Room_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPico_MatchmakingRoom_Statics::NewProp_Room_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPico_MatchmakingRoom_Statics::NewProp_Room_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPico_MatchmakingRoom_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPico_MatchmakingRoom_Statics::NewProp_Room,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPico_MatchmakingRoom_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPico_MatchmakingRoom>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPico_MatchmakingRoom_Statics::ClassParams = {
		&UPico_MatchmakingRoom::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPico_MatchmakingRoom_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPico_MatchmakingRoom_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPico_MatchmakingRoom_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPico_MatchmakingRoom_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPico_MatchmakingRoom()
	{
		if (!Z_Registration_Info_UClass_UPico_MatchmakingRoom.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPico_MatchmakingRoom.OuterSingleton, Z_Construct_UClass_UPico_MatchmakingRoom_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPico_MatchmakingRoom.OuterSingleton;
	}
	template<> ONLINESUBSYSTEMPICO_API UClass* StaticClass<UPico_MatchmakingRoom>()
	{
		return UPico_MatchmakingRoom::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPico_MatchmakingRoom);
	UPico_MatchmakingRoom::~UPico_MatchmakingRoom() {}
	DEFINE_FUNCTION(UPico_MatchmakingEnqueueResultAndRoom::execGetDebugString)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetDebugString();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPico_MatchmakingEnqueueResultAndRoom::execGetRoom)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UPico_Room**)Z_Param__Result=P_THIS->GetRoom();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPico_MatchmakingEnqueueResultAndRoom::execGetMatchmakingEnqueueResult)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UPico_MatchmakingEnqueueResult**)Z_Param__Result=P_THIS->GetMatchmakingEnqueueResult();
		P_NATIVE_END;
	}
	void UPico_MatchmakingEnqueueResultAndRoom::StaticRegisterNativesUPico_MatchmakingEnqueueResultAndRoom()
	{
		UClass* Class = UPico_MatchmakingEnqueueResultAndRoom::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetDebugString", &UPico_MatchmakingEnqueueResultAndRoom::execGetDebugString },
			{ "GetMatchmakingEnqueueResult", &UPico_MatchmakingEnqueueResultAndRoom::execGetMatchmakingEnqueueResult },
			{ "GetRoom", &UPico_MatchmakingEnqueueResultAndRoom::execGetRoom },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPico_MatchmakingEnqueueResultAndRoom_GetDebugString_Statics
	{
		struct Pico_MatchmakingEnqueueResultAndRoom_eventGetDebugString_Parms
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
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPico_MatchmakingEnqueueResultAndRoom_GetDebugString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Pico_MatchmakingEnqueueResultAndRoom_eventGetDebugString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPico_MatchmakingEnqueueResultAndRoom_GetDebugString_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPico_MatchmakingEnqueueResultAndRoom_GetDebugString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPico_MatchmakingEnqueueResultAndRoom_GetDebugString_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pico Platform|Matchmaking|Matchmaking Enqueue Result And Room" },
		{ "ModuleRelativePath", "Public/Pico_Matchmaking.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPico_MatchmakingEnqueueResultAndRoom_GetDebugString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPico_MatchmakingEnqueueResultAndRoom, nullptr, "GetDebugString", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPico_MatchmakingEnqueueResultAndRoom_GetDebugString_Statics::Pico_MatchmakingEnqueueResultAndRoom_eventGetDebugString_Parms), Z_Construct_UFunction_UPico_MatchmakingEnqueueResultAndRoom_GetDebugString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_MatchmakingEnqueueResultAndRoom_GetDebugString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPico_MatchmakingEnqueueResultAndRoom_GetDebugString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_MatchmakingEnqueueResultAndRoom_GetDebugString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPico_MatchmakingEnqueueResultAndRoom_GetDebugString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPico_MatchmakingEnqueueResultAndRoom_GetDebugString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPico_MatchmakingEnqueueResultAndRoom_GetMatchmakingEnqueueResult_Statics
	{
		struct Pico_MatchmakingEnqueueResultAndRoom_eventGetMatchmakingEnqueueResult_Parms
		{
			UPico_MatchmakingEnqueueResult* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPico_MatchmakingEnqueueResultAndRoom_GetMatchmakingEnqueueResult_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Pico_MatchmakingEnqueueResultAndRoom_eventGetMatchmakingEnqueueResult_Parms, ReturnValue), Z_Construct_UClass_UPico_MatchmakingEnqueueResult_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPico_MatchmakingEnqueueResultAndRoom_GetMatchmakingEnqueueResult_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPico_MatchmakingEnqueueResultAndRoom_GetMatchmakingEnqueueResult_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPico_MatchmakingEnqueueResultAndRoom_GetMatchmakingEnqueueResult_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pico Platform|Matchmaking|Matchmaking Enqueue Result And Room" },
		{ "Comment", "/** @brief Matchmaking enqueue result. */" },
		{ "ModuleRelativePath", "Public/Pico_Matchmaking.h" },
		{ "ToolTip", "@brief Matchmaking enqueue result." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPico_MatchmakingEnqueueResultAndRoom_GetMatchmakingEnqueueResult_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPico_MatchmakingEnqueueResultAndRoom, nullptr, "GetMatchmakingEnqueueResult", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPico_MatchmakingEnqueueResultAndRoom_GetMatchmakingEnqueueResult_Statics::Pico_MatchmakingEnqueueResultAndRoom_eventGetMatchmakingEnqueueResult_Parms), Z_Construct_UFunction_UPico_MatchmakingEnqueueResultAndRoom_GetMatchmakingEnqueueResult_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_MatchmakingEnqueueResultAndRoom_GetMatchmakingEnqueueResult_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPico_MatchmakingEnqueueResultAndRoom_GetMatchmakingEnqueueResult_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_MatchmakingEnqueueResultAndRoom_GetMatchmakingEnqueueResult_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPico_MatchmakingEnqueueResultAndRoom_GetMatchmakingEnqueueResult()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPico_MatchmakingEnqueueResultAndRoom_GetMatchmakingEnqueueResult_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPico_MatchmakingEnqueueResultAndRoom_GetRoom_Statics
	{
		struct Pico_MatchmakingEnqueueResultAndRoom_eventGetRoom_Parms
		{
			UPico_Room* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPico_MatchmakingEnqueueResultAndRoom_GetRoom_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Pico_MatchmakingEnqueueResultAndRoom_eventGetRoom_Parms, ReturnValue), Z_Construct_UClass_UPico_Room_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPico_MatchmakingEnqueueResultAndRoom_GetRoom_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPico_MatchmakingEnqueueResultAndRoom_GetRoom_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPico_MatchmakingEnqueueResultAndRoom_GetRoom_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pico Platform|Matchmaking|Matchmaking Enqueue Result And Room" },
		{ "Comment", "/** @brief Matchmaking room info. */" },
		{ "ModuleRelativePath", "Public/Pico_Matchmaking.h" },
		{ "ToolTip", "@brief Matchmaking room info." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPico_MatchmakingEnqueueResultAndRoom_GetRoom_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPico_MatchmakingEnqueueResultAndRoom, nullptr, "GetRoom", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPico_MatchmakingEnqueueResultAndRoom_GetRoom_Statics::Pico_MatchmakingEnqueueResultAndRoom_eventGetRoom_Parms), Z_Construct_UFunction_UPico_MatchmakingEnqueueResultAndRoom_GetRoom_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_MatchmakingEnqueueResultAndRoom_GetRoom_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPico_MatchmakingEnqueueResultAndRoom_GetRoom_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_MatchmakingEnqueueResultAndRoom_GetRoom_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPico_MatchmakingEnqueueResultAndRoom_GetRoom()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPico_MatchmakingEnqueueResultAndRoom_GetRoom_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPico_MatchmakingEnqueueResultAndRoom);
	UClass* Z_Construct_UClass_UPico_MatchmakingEnqueueResultAndRoom_NoRegister()
	{
		return UPico_MatchmakingEnqueueResultAndRoom::StaticClass();
	}
	struct Z_Construct_UClass_UPico_MatchmakingEnqueueResultAndRoom_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MatchmakingEnqueueResult_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MatchmakingEnqueueResult;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Room_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Room;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPico_MatchmakingEnqueueResultAndRoom_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemPico,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPico_MatchmakingEnqueueResultAndRoom_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPico_MatchmakingEnqueueResultAndRoom_GetDebugString, "GetDebugString" }, // 585283161
		{ &Z_Construct_UFunction_UPico_MatchmakingEnqueueResultAndRoom_GetMatchmakingEnqueueResult, "GetMatchmakingEnqueueResult" }, // 3539150582
		{ &Z_Construct_UFunction_UPico_MatchmakingEnqueueResultAndRoom_GetRoom, "GetRoom" }, // 2018357035
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPico_MatchmakingEnqueueResultAndRoom_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/// @brief UPico_MatchmakingEnqueueResultAndRoom class.\n" },
		{ "IncludePath", "Pico_Matchmaking.h" },
		{ "ModuleRelativePath", "Public/Pico_Matchmaking.h" },
		{ "ToolTip", "@brief UPico_MatchmakingEnqueueResultAndRoom class." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPico_MatchmakingEnqueueResultAndRoom_Statics::NewProp_MatchmakingEnqueueResult_MetaData[] = {
		{ "ModuleRelativePath", "Public/Pico_Matchmaking.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPico_MatchmakingEnqueueResultAndRoom_Statics::NewProp_MatchmakingEnqueueResult = { "MatchmakingEnqueueResult", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPico_MatchmakingEnqueueResultAndRoom, MatchmakingEnqueueResult), Z_Construct_UClass_UPico_MatchmakingEnqueueResult_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPico_MatchmakingEnqueueResultAndRoom_Statics::NewProp_MatchmakingEnqueueResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPico_MatchmakingEnqueueResultAndRoom_Statics::NewProp_MatchmakingEnqueueResult_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPico_MatchmakingEnqueueResultAndRoom_Statics::NewProp_Room_MetaData[] = {
		{ "ModuleRelativePath", "Public/Pico_Matchmaking.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPico_MatchmakingEnqueueResultAndRoom_Statics::NewProp_Room = { "Room", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPico_MatchmakingEnqueueResultAndRoom, Room), Z_Construct_UClass_UPico_Room_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPico_MatchmakingEnqueueResultAndRoom_Statics::NewProp_Room_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPico_MatchmakingEnqueueResultAndRoom_Statics::NewProp_Room_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPico_MatchmakingEnqueueResultAndRoom_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPico_MatchmakingEnqueueResultAndRoom_Statics::NewProp_MatchmakingEnqueueResult,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPico_MatchmakingEnqueueResultAndRoom_Statics::NewProp_Room,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPico_MatchmakingEnqueueResultAndRoom_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPico_MatchmakingEnqueueResultAndRoom>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPico_MatchmakingEnqueueResultAndRoom_Statics::ClassParams = {
		&UPico_MatchmakingEnqueueResultAndRoom::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPico_MatchmakingEnqueueResultAndRoom_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPico_MatchmakingEnqueueResultAndRoom_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPico_MatchmakingEnqueueResultAndRoom_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPico_MatchmakingEnqueueResultAndRoom_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPico_MatchmakingEnqueueResultAndRoom()
	{
		if (!Z_Registration_Info_UClass_UPico_MatchmakingEnqueueResultAndRoom.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPico_MatchmakingEnqueueResultAndRoom.OuterSingleton, Z_Construct_UClass_UPico_MatchmakingEnqueueResultAndRoom_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPico_MatchmakingEnqueueResultAndRoom.OuterSingleton;
	}
	template<> ONLINESUBSYSTEMPICO_API UClass* StaticClass<UPico_MatchmakingEnqueueResultAndRoom>()
	{
		return UPico_MatchmakingEnqueueResultAndRoom::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPico_MatchmakingEnqueueResultAndRoom);
	UPico_MatchmakingEnqueueResultAndRoom::~UPico_MatchmakingEnqueueResultAndRoom() {}
	DEFINE_FUNCTION(UPico_MatchmakingEnqueueResult::execGetDebugString)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetDebugString();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPico_MatchmakingEnqueueResult::execGetRecentMatchPercentage)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetRecentMatchPercentage();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPico_MatchmakingEnqueueResult::execGetPool)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetPool();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPico_MatchmakingEnqueueResult::execGetMaxExpectedWait)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetMaxExpectedWait();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPico_MatchmakingEnqueueResult::execGetMatchesInLastHourCount)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetMatchesInLastHourCount();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPico_MatchmakingEnqueueResult::execGetAverageWait)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetAverageWait();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPico_MatchmakingEnqueueResult::execGetAdminSnapshotOptional)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UPico_MatchmakingAdminSnapshot**)Z_Param__Result=P_THIS->GetAdminSnapshotOptional();
		P_NATIVE_END;
	}
	void UPico_MatchmakingEnqueueResult::StaticRegisterNativesUPico_MatchmakingEnqueueResult()
	{
		UClass* Class = UPico_MatchmakingEnqueueResult::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAdminSnapshotOptional", &UPico_MatchmakingEnqueueResult::execGetAdminSnapshotOptional },
			{ "GetAverageWait", &UPico_MatchmakingEnqueueResult::execGetAverageWait },
			{ "GetDebugString", &UPico_MatchmakingEnqueueResult::execGetDebugString },
			{ "GetMatchesInLastHourCount", &UPico_MatchmakingEnqueueResult::execGetMatchesInLastHourCount },
			{ "GetMaxExpectedWait", &UPico_MatchmakingEnqueueResult::execGetMaxExpectedWait },
			{ "GetPool", &UPico_MatchmakingEnqueueResult::execGetPool },
			{ "GetRecentMatchPercentage", &UPico_MatchmakingEnqueueResult::execGetRecentMatchPercentage },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPico_MatchmakingEnqueueResult_GetAdminSnapshotOptional_Statics
	{
		struct Pico_MatchmakingEnqueueResult_eventGetAdminSnapshotOptional_Parms
		{
			UPico_MatchmakingAdminSnapshot* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPico_MatchmakingEnqueueResult_GetAdminSnapshotOptional_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Pico_MatchmakingEnqueueResult_eventGetAdminSnapshotOptional_Parms, ReturnValue), Z_Construct_UClass_UPico_MatchmakingAdminSnapshot_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPico_MatchmakingEnqueueResult_GetAdminSnapshotOptional_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPico_MatchmakingEnqueueResult_GetAdminSnapshotOptional_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPico_MatchmakingEnqueueResult_GetAdminSnapshotOptional_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pico Platform|Matchmaking|Matchmaking Enqueue Result" },
		{ "Comment", "/** @brief Matchmaking snapshot options. Used for debugging only. */" },
		{ "ModuleRelativePath", "Public/Pico_Matchmaking.h" },
		{ "ToolTip", "@brief Matchmaking snapshot options. Used for debugging only." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPico_MatchmakingEnqueueResult_GetAdminSnapshotOptional_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPico_MatchmakingEnqueueResult, nullptr, "GetAdminSnapshotOptional", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPico_MatchmakingEnqueueResult_GetAdminSnapshotOptional_Statics::Pico_MatchmakingEnqueueResult_eventGetAdminSnapshotOptional_Parms), Z_Construct_UFunction_UPico_MatchmakingEnqueueResult_GetAdminSnapshotOptional_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_MatchmakingEnqueueResult_GetAdminSnapshotOptional_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPico_MatchmakingEnqueueResult_GetAdminSnapshotOptional_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_MatchmakingEnqueueResult_GetAdminSnapshotOptional_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPico_MatchmakingEnqueueResult_GetAdminSnapshotOptional()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPico_MatchmakingEnqueueResult_GetAdminSnapshotOptional_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPico_MatchmakingEnqueueResult_GetAverageWait_Statics
	{
		struct Pico_MatchmakingEnqueueResult_eventGetAverageWait_Parms
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
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPico_MatchmakingEnqueueResult_GetAverageWait_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Pico_MatchmakingEnqueueResult_eventGetAverageWait_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPico_MatchmakingEnqueueResult_GetAverageWait_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPico_MatchmakingEnqueueResult_GetAverageWait_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPico_MatchmakingEnqueueResult_GetAverageWait_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pico Platform|Matchmaking|Matchmaking Enqueue Result" },
		{ "Comment", "/** @brief The average waiting time. */" },
		{ "ModuleRelativePath", "Public/Pico_Matchmaking.h" },
		{ "ToolTip", "@brief The average waiting time." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPico_MatchmakingEnqueueResult_GetAverageWait_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPico_MatchmakingEnqueueResult, nullptr, "GetAverageWait", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPico_MatchmakingEnqueueResult_GetAverageWait_Statics::Pico_MatchmakingEnqueueResult_eventGetAverageWait_Parms), Z_Construct_UFunction_UPico_MatchmakingEnqueueResult_GetAverageWait_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_MatchmakingEnqueueResult_GetAverageWait_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPico_MatchmakingEnqueueResult_GetAverageWait_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_MatchmakingEnqueueResult_GetAverageWait_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPico_MatchmakingEnqueueResult_GetAverageWait()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPico_MatchmakingEnqueueResult_GetAverageWait_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPico_MatchmakingEnqueueResult_GetDebugString_Statics
	{
		struct Pico_MatchmakingEnqueueResult_eventGetDebugString_Parms
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
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPico_MatchmakingEnqueueResult_GetDebugString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Pico_MatchmakingEnqueueResult_eventGetDebugString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPico_MatchmakingEnqueueResult_GetDebugString_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPico_MatchmakingEnqueueResult_GetDebugString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPico_MatchmakingEnqueueResult_GetDebugString_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pico Platform|Matchmaking|Matchmaking Enqueue Result" },
		{ "ModuleRelativePath", "Public/Pico_Matchmaking.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPico_MatchmakingEnqueueResult_GetDebugString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPico_MatchmakingEnqueueResult, nullptr, "GetDebugString", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPico_MatchmakingEnqueueResult_GetDebugString_Statics::Pico_MatchmakingEnqueueResult_eventGetDebugString_Parms), Z_Construct_UFunction_UPico_MatchmakingEnqueueResult_GetDebugString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_MatchmakingEnqueueResult_GetDebugString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPico_MatchmakingEnqueueResult_GetDebugString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_MatchmakingEnqueueResult_GetDebugString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPico_MatchmakingEnqueueResult_GetDebugString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPico_MatchmakingEnqueueResult_GetDebugString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPico_MatchmakingEnqueueResult_GetMatchesInLastHourCount_Statics
	{
		struct Pico_MatchmakingEnqueueResult_eventGetMatchesInLastHourCount_Parms
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
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPico_MatchmakingEnqueueResult_GetMatchesInLastHourCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Pico_MatchmakingEnqueueResult_eventGetMatchesInLastHourCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPico_MatchmakingEnqueueResult_GetMatchesInLastHourCount_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPico_MatchmakingEnqueueResult_GetMatchesInLastHourCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPico_MatchmakingEnqueueResult_GetMatchesInLastHourCount_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pico Platform|Matchmaking|Matchmaking Enqueue Result" },
		{ "Comment", "/** @brief The number of matches made in the last hour. */" },
		{ "ModuleRelativePath", "Public/Pico_Matchmaking.h" },
		{ "ToolTip", "@brief The number of matches made in the last hour." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPico_MatchmakingEnqueueResult_GetMatchesInLastHourCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPico_MatchmakingEnqueueResult, nullptr, "GetMatchesInLastHourCount", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPico_MatchmakingEnqueueResult_GetMatchesInLastHourCount_Statics::Pico_MatchmakingEnqueueResult_eventGetMatchesInLastHourCount_Parms), Z_Construct_UFunction_UPico_MatchmakingEnqueueResult_GetMatchesInLastHourCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_MatchmakingEnqueueResult_GetMatchesInLastHourCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPico_MatchmakingEnqueueResult_GetMatchesInLastHourCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_MatchmakingEnqueueResult_GetMatchesInLastHourCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPico_MatchmakingEnqueueResult_GetMatchesInLastHourCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPico_MatchmakingEnqueueResult_GetMatchesInLastHourCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPico_MatchmakingEnqueueResult_GetMaxExpectedWait_Statics
	{
		struct Pico_MatchmakingEnqueueResult_eventGetMaxExpectedWait_Parms
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
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPico_MatchmakingEnqueueResult_GetMaxExpectedWait_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Pico_MatchmakingEnqueueResult_eventGetMaxExpectedWait_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPico_MatchmakingEnqueueResult_GetMaxExpectedWait_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPico_MatchmakingEnqueueResult_GetMaxExpectedWait_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPico_MatchmakingEnqueueResult_GetMaxExpectedWait_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pico Platform|Matchmaking|Matchmaking Enqueue Result" },
		{ "Comment", "/** @brief The expected longest waiting time. */" },
		{ "ModuleRelativePath", "Public/Pico_Matchmaking.h" },
		{ "ToolTip", "@brief The expected longest waiting time." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPico_MatchmakingEnqueueResult_GetMaxExpectedWait_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPico_MatchmakingEnqueueResult, nullptr, "GetMaxExpectedWait", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPico_MatchmakingEnqueueResult_GetMaxExpectedWait_Statics::Pico_MatchmakingEnqueueResult_eventGetMaxExpectedWait_Parms), Z_Construct_UFunction_UPico_MatchmakingEnqueueResult_GetMaxExpectedWait_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_MatchmakingEnqueueResult_GetMaxExpectedWait_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPico_MatchmakingEnqueueResult_GetMaxExpectedWait_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_MatchmakingEnqueueResult_GetMaxExpectedWait_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPico_MatchmakingEnqueueResult_GetMaxExpectedWait()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPico_MatchmakingEnqueueResult_GetMaxExpectedWait_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPico_MatchmakingEnqueueResult_GetPool_Statics
	{
		struct Pico_MatchmakingEnqueueResult_eventGetPool_Parms
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
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPico_MatchmakingEnqueueResult_GetPool_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Pico_MatchmakingEnqueueResult_eventGetPool_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPico_MatchmakingEnqueueResult_GetPool_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPico_MatchmakingEnqueueResult_GetPool_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPico_MatchmakingEnqueueResult_GetPool_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pico Platform|Matchmaking|Matchmaking Enqueue Result" },
		{ "Comment", "/** @brief Matchmaking pool name. */" },
		{ "ModuleRelativePath", "Public/Pico_Matchmaking.h" },
		{ "ToolTip", "@brief Matchmaking pool name." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPico_MatchmakingEnqueueResult_GetPool_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPico_MatchmakingEnqueueResult, nullptr, "GetPool", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPico_MatchmakingEnqueueResult_GetPool_Statics::Pico_MatchmakingEnqueueResult_eventGetPool_Parms), Z_Construct_UFunction_UPico_MatchmakingEnqueueResult_GetPool_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_MatchmakingEnqueueResult_GetPool_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPico_MatchmakingEnqueueResult_GetPool_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_MatchmakingEnqueueResult_GetPool_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPico_MatchmakingEnqueueResult_GetPool()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPico_MatchmakingEnqueueResult_GetPool_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPico_MatchmakingEnqueueResult_GetRecentMatchPercentage_Statics
	{
		struct Pico_MatchmakingEnqueueResult_eventGetRecentMatchPercentage_Parms
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
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPico_MatchmakingEnqueueResult_GetRecentMatchPercentage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Pico_MatchmakingEnqueueResult_eventGetRecentMatchPercentage_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPico_MatchmakingEnqueueResult_GetRecentMatchPercentage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPico_MatchmakingEnqueueResult_GetRecentMatchPercentage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPico_MatchmakingEnqueueResult_GetRecentMatchPercentage_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pico Platform|Matchmaking|Matchmaking Enqueue Result" },
		{ "Comment", "/** @brief Match rate. */" },
		{ "ModuleRelativePath", "Public/Pico_Matchmaking.h" },
		{ "ToolTip", "@brief Match rate." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPico_MatchmakingEnqueueResult_GetRecentMatchPercentage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPico_MatchmakingEnqueueResult, nullptr, "GetRecentMatchPercentage", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPico_MatchmakingEnqueueResult_GetRecentMatchPercentage_Statics::Pico_MatchmakingEnqueueResult_eventGetRecentMatchPercentage_Parms), Z_Construct_UFunction_UPico_MatchmakingEnqueueResult_GetRecentMatchPercentage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_MatchmakingEnqueueResult_GetRecentMatchPercentage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPico_MatchmakingEnqueueResult_GetRecentMatchPercentage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_MatchmakingEnqueueResult_GetRecentMatchPercentage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPico_MatchmakingEnqueueResult_GetRecentMatchPercentage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPico_MatchmakingEnqueueResult_GetRecentMatchPercentage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPico_MatchmakingEnqueueResult);
	UClass* Z_Construct_UClass_UPico_MatchmakingEnqueueResult_NoRegister()
	{
		return UPico_MatchmakingEnqueueResult::StaticClass();
	}
	struct Z_Construct_UClass_UPico_MatchmakingEnqueueResult_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AdminSnapshotOptional_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AdminSnapshotOptional;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPico_MatchmakingEnqueueResult_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemPico,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPico_MatchmakingEnqueueResult_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPico_MatchmakingEnqueueResult_GetAdminSnapshotOptional, "GetAdminSnapshotOptional" }, // 1275124101
		{ &Z_Construct_UFunction_UPico_MatchmakingEnqueueResult_GetAverageWait, "GetAverageWait" }, // 1645412119
		{ &Z_Construct_UFunction_UPico_MatchmakingEnqueueResult_GetDebugString, "GetDebugString" }, // 1048313208
		{ &Z_Construct_UFunction_UPico_MatchmakingEnqueueResult_GetMatchesInLastHourCount, "GetMatchesInLastHourCount" }, // 3058082691
		{ &Z_Construct_UFunction_UPico_MatchmakingEnqueueResult_GetMaxExpectedWait, "GetMaxExpectedWait" }, // 2569968536
		{ &Z_Construct_UFunction_UPico_MatchmakingEnqueueResult_GetPool, "GetPool" }, // 263347822
		{ &Z_Construct_UFunction_UPico_MatchmakingEnqueueResult_GetRecentMatchPercentage, "GetRecentMatchPercentage" }, // 826643814
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPico_MatchmakingEnqueueResult_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/// @brief UPico_MatchmakingEnqueueResult class.\n" },
		{ "IncludePath", "Pico_Matchmaking.h" },
		{ "ModuleRelativePath", "Public/Pico_Matchmaking.h" },
		{ "ToolTip", "@brief UPico_MatchmakingEnqueueResult class." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPico_MatchmakingEnqueueResult_Statics::NewProp_AdminSnapshotOptional_MetaData[] = {
		{ "ModuleRelativePath", "Public/Pico_Matchmaking.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPico_MatchmakingEnqueueResult_Statics::NewProp_AdminSnapshotOptional = { "AdminSnapshotOptional", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPico_MatchmakingEnqueueResult, AdminSnapshotOptional), Z_Construct_UClass_UPico_MatchmakingAdminSnapshot_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPico_MatchmakingEnqueueResult_Statics::NewProp_AdminSnapshotOptional_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPico_MatchmakingEnqueueResult_Statics::NewProp_AdminSnapshotOptional_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPico_MatchmakingEnqueueResult_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPico_MatchmakingEnqueueResult_Statics::NewProp_AdminSnapshotOptional,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPico_MatchmakingEnqueueResult_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPico_MatchmakingEnqueueResult>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPico_MatchmakingEnqueueResult_Statics::ClassParams = {
		&UPico_MatchmakingEnqueueResult::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPico_MatchmakingEnqueueResult_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPico_MatchmakingEnqueueResult_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPico_MatchmakingEnqueueResult_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPico_MatchmakingEnqueueResult_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPico_MatchmakingEnqueueResult()
	{
		if (!Z_Registration_Info_UClass_UPico_MatchmakingEnqueueResult.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPico_MatchmakingEnqueueResult.OuterSingleton, Z_Construct_UClass_UPico_MatchmakingEnqueueResult_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPico_MatchmakingEnqueueResult.OuterSingleton;
	}
	template<> ONLINESUBSYSTEMPICO_API UClass* StaticClass<UPico_MatchmakingEnqueueResult>()
	{
		return UPico_MatchmakingEnqueueResult::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPico_MatchmakingEnqueueResult);
	UPico_MatchmakingEnqueueResult::~UPico_MatchmakingEnqueueResult() {}
	DEFINE_FUNCTION(UPico_MatchmakingAdminSnapshot::execGetDebugString)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetDebugString();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPico_MatchmakingAdminSnapshot::execGetMyCurrentThreshold)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetMyCurrentThreshold();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPico_MatchmakingAdminSnapshot::execGetCandidateList)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UPico_MatchmakingAdminSnapshotCandidateList**)Z_Param__Result=P_THIS->GetCandidateList();
		P_NATIVE_END;
	}
	void UPico_MatchmakingAdminSnapshot::StaticRegisterNativesUPico_MatchmakingAdminSnapshot()
	{
		UClass* Class = UPico_MatchmakingAdminSnapshot::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCandidateList", &UPico_MatchmakingAdminSnapshot::execGetCandidateList },
			{ "GetDebugString", &UPico_MatchmakingAdminSnapshot::execGetDebugString },
			{ "GetMyCurrentThreshold", &UPico_MatchmakingAdminSnapshot::execGetMyCurrentThreshold },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPico_MatchmakingAdminSnapshot_GetCandidateList_Statics
	{
		struct Pico_MatchmakingAdminSnapshot_eventGetCandidateList_Parms
		{
			UPico_MatchmakingAdminSnapshotCandidateList* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPico_MatchmakingAdminSnapshot_GetCandidateList_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Pico_MatchmakingAdminSnapshot_eventGetCandidateList_Parms, ReturnValue), Z_Construct_UClass_UPico_MatchmakingAdminSnapshotCandidateList_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPico_MatchmakingAdminSnapshot_GetCandidateList_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPico_MatchmakingAdminSnapshot_GetCandidateList_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPico_MatchmakingAdminSnapshot_GetCandidateList_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pico Platform|Matchmaking|Matchmaking Admin Snapshot" },
		{ "Comment", "/** @brief List of matchmaking candidates */" },
		{ "ModuleRelativePath", "Public/Pico_Matchmaking.h" },
		{ "ToolTip", "@brief List of matchmaking candidates" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPico_MatchmakingAdminSnapshot_GetCandidateList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPico_MatchmakingAdminSnapshot, nullptr, "GetCandidateList", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPico_MatchmakingAdminSnapshot_GetCandidateList_Statics::Pico_MatchmakingAdminSnapshot_eventGetCandidateList_Parms), Z_Construct_UFunction_UPico_MatchmakingAdminSnapshot_GetCandidateList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_MatchmakingAdminSnapshot_GetCandidateList_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPico_MatchmakingAdminSnapshot_GetCandidateList_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_MatchmakingAdminSnapshot_GetCandidateList_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPico_MatchmakingAdminSnapshot_GetCandidateList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPico_MatchmakingAdminSnapshot_GetCandidateList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPico_MatchmakingAdminSnapshot_GetDebugString_Statics
	{
		struct Pico_MatchmakingAdminSnapshot_eventGetDebugString_Parms
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
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPico_MatchmakingAdminSnapshot_GetDebugString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Pico_MatchmakingAdminSnapshot_eventGetDebugString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPico_MatchmakingAdminSnapshot_GetDebugString_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPico_MatchmakingAdminSnapshot_GetDebugString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPico_MatchmakingAdminSnapshot_GetDebugString_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pico Platform|Matchmaking|Matchmaking Admin Snapshot" },
		{ "Comment", "/** @brief The current matching threshold. */" },
		{ "ModuleRelativePath", "Public/Pico_Matchmaking.h" },
		{ "ToolTip", "@brief The current matching threshold." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPico_MatchmakingAdminSnapshot_GetDebugString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPico_MatchmakingAdminSnapshot, nullptr, "GetDebugString", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPico_MatchmakingAdminSnapshot_GetDebugString_Statics::Pico_MatchmakingAdminSnapshot_eventGetDebugString_Parms), Z_Construct_UFunction_UPico_MatchmakingAdminSnapshot_GetDebugString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_MatchmakingAdminSnapshot_GetDebugString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPico_MatchmakingAdminSnapshot_GetDebugString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_MatchmakingAdminSnapshot_GetDebugString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPico_MatchmakingAdminSnapshot_GetDebugString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPico_MatchmakingAdminSnapshot_GetDebugString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPico_MatchmakingAdminSnapshot_GetMyCurrentThreshold_Statics
	{
		struct Pico_MatchmakingAdminSnapshot_eventGetMyCurrentThreshold_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPico_MatchmakingAdminSnapshot_GetMyCurrentThreshold_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Pico_MatchmakingAdminSnapshot_eventGetMyCurrentThreshold_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPico_MatchmakingAdminSnapshot_GetMyCurrentThreshold_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPico_MatchmakingAdminSnapshot_GetMyCurrentThreshold_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPico_MatchmakingAdminSnapshot_GetMyCurrentThreshold_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pico Platform|Matchmaking|Matchmaking Admin Snapshot" },
		{ "ModuleRelativePath", "Public/Pico_Matchmaking.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPico_MatchmakingAdminSnapshot_GetMyCurrentThreshold_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPico_MatchmakingAdminSnapshot, nullptr, "GetMyCurrentThreshold", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPico_MatchmakingAdminSnapshot_GetMyCurrentThreshold_Statics::Pico_MatchmakingAdminSnapshot_eventGetMyCurrentThreshold_Parms), Z_Construct_UFunction_UPico_MatchmakingAdminSnapshot_GetMyCurrentThreshold_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_MatchmakingAdminSnapshot_GetMyCurrentThreshold_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPico_MatchmakingAdminSnapshot_GetMyCurrentThreshold_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_MatchmakingAdminSnapshot_GetMyCurrentThreshold_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPico_MatchmakingAdminSnapshot_GetMyCurrentThreshold()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPico_MatchmakingAdminSnapshot_GetMyCurrentThreshold_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPico_MatchmakingAdminSnapshot);
	UClass* Z_Construct_UClass_UPico_MatchmakingAdminSnapshot_NoRegister()
	{
		return UPico_MatchmakingAdminSnapshot::StaticClass();
	}
	struct Z_Construct_UClass_UPico_MatchmakingAdminSnapshot_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CandidateList_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CandidateList;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPico_MatchmakingAdminSnapshot_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemPico,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPico_MatchmakingAdminSnapshot_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPico_MatchmakingAdminSnapshot_GetCandidateList, "GetCandidateList" }, // 1128012059
		{ &Z_Construct_UFunction_UPico_MatchmakingAdminSnapshot_GetDebugString, "GetDebugString" }, // 2927154978
		{ &Z_Construct_UFunction_UPico_MatchmakingAdminSnapshot_GetMyCurrentThreshold, "GetMyCurrentThreshold" }, // 4176923973
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPico_MatchmakingAdminSnapshot_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/// @brief UPico_MatchmakingAdminSnapshot class.\n" },
		{ "IncludePath", "Pico_Matchmaking.h" },
		{ "ModuleRelativePath", "Public/Pico_Matchmaking.h" },
		{ "ToolTip", "@brief UPico_MatchmakingAdminSnapshot class." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPico_MatchmakingAdminSnapshot_Statics::NewProp_CandidateList_MetaData[] = {
		{ "ModuleRelativePath", "Public/Pico_Matchmaking.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPico_MatchmakingAdminSnapshot_Statics::NewProp_CandidateList = { "CandidateList", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPico_MatchmakingAdminSnapshot, CandidateList), Z_Construct_UClass_UPico_MatchmakingAdminSnapshotCandidateList_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPico_MatchmakingAdminSnapshot_Statics::NewProp_CandidateList_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPico_MatchmakingAdminSnapshot_Statics::NewProp_CandidateList_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPico_MatchmakingAdminSnapshot_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPico_MatchmakingAdminSnapshot_Statics::NewProp_CandidateList,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPico_MatchmakingAdminSnapshot_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPico_MatchmakingAdminSnapshot>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPico_MatchmakingAdminSnapshot_Statics::ClassParams = {
		&UPico_MatchmakingAdminSnapshot::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPico_MatchmakingAdminSnapshot_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPico_MatchmakingAdminSnapshot_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPico_MatchmakingAdminSnapshot_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPico_MatchmakingAdminSnapshot_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPico_MatchmakingAdminSnapshot()
	{
		if (!Z_Registration_Info_UClass_UPico_MatchmakingAdminSnapshot.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPico_MatchmakingAdminSnapshot.OuterSingleton, Z_Construct_UClass_UPico_MatchmakingAdminSnapshot_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPico_MatchmakingAdminSnapshot.OuterSingleton;
	}
	template<> ONLINESUBSYSTEMPICO_API UClass* StaticClass<UPico_MatchmakingAdminSnapshot>()
	{
		return UPico_MatchmakingAdminSnapshot::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPico_MatchmakingAdminSnapshot);
	UPico_MatchmakingAdminSnapshot::~UPico_MatchmakingAdminSnapshot() {}
	DEFINE_FUNCTION(UPico_MatchmakingAdminSnapshotCandidateList::execGetDebugString)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetDebugString();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPico_MatchmakingAdminSnapshotCandidateList::execGetSize)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetSize();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPico_MatchmakingAdminSnapshotCandidateList::execGetTotalSize)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetTotalSize();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPico_MatchmakingAdminSnapshotCandidateList::execGetElement)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UPico_MatchmakingAdminSnapshotCandidate**)Z_Param__Result=P_THIS->GetElement(Z_Param_Index);
		P_NATIVE_END;
	}
	void UPico_MatchmakingAdminSnapshotCandidateList::StaticRegisterNativesUPico_MatchmakingAdminSnapshotCandidateList()
	{
		UClass* Class = UPico_MatchmakingAdminSnapshotCandidateList::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetDebugString", &UPico_MatchmakingAdminSnapshotCandidateList::execGetDebugString },
			{ "GetElement", &UPico_MatchmakingAdminSnapshotCandidateList::execGetElement },
			{ "GetSize", &UPico_MatchmakingAdminSnapshotCandidateList::execGetSize },
			{ "GetTotalSize", &UPico_MatchmakingAdminSnapshotCandidateList::execGetTotalSize },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPico_MatchmakingAdminSnapshotCandidateList_GetDebugString_Statics
	{
		struct Pico_MatchmakingAdminSnapshotCandidateList_eventGetDebugString_Parms
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
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPico_MatchmakingAdminSnapshotCandidateList_GetDebugString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Pico_MatchmakingAdminSnapshotCandidateList_eventGetDebugString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPico_MatchmakingAdminSnapshotCandidateList_GetDebugString_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPico_MatchmakingAdminSnapshotCandidateList_GetDebugString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPico_MatchmakingAdminSnapshotCandidateList_GetDebugString_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pico Platform|Matchmaking|Matchmaking AdminSnapshot Candidate Array" },
		{ "ModuleRelativePath", "Public/Pico_Matchmaking.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPico_MatchmakingAdminSnapshotCandidateList_GetDebugString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPico_MatchmakingAdminSnapshotCandidateList, nullptr, "GetDebugString", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPico_MatchmakingAdminSnapshotCandidateList_GetDebugString_Statics::Pico_MatchmakingAdminSnapshotCandidateList_eventGetDebugString_Parms), Z_Construct_UFunction_UPico_MatchmakingAdminSnapshotCandidateList_GetDebugString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_MatchmakingAdminSnapshotCandidateList_GetDebugString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPico_MatchmakingAdminSnapshotCandidateList_GetDebugString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_MatchmakingAdminSnapshotCandidateList_GetDebugString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPico_MatchmakingAdminSnapshotCandidateList_GetDebugString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPico_MatchmakingAdminSnapshotCandidateList_GetDebugString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPico_MatchmakingAdminSnapshotCandidateList_GetElement_Statics
	{
		struct Pico_MatchmakingAdminSnapshotCandidateList_eventGetElement_Parms
		{
			int32 Index;
			UPico_MatchmakingAdminSnapshotCandidate* ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPico_MatchmakingAdminSnapshotCandidateList_GetElement_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Pico_MatchmakingAdminSnapshotCandidateList_eventGetElement_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPico_MatchmakingAdminSnapshotCandidateList_GetElement_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Pico_MatchmakingAdminSnapshotCandidateList_eventGetElement_Parms, ReturnValue), Z_Construct_UClass_UPico_MatchmakingAdminSnapshotCandidate_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPico_MatchmakingAdminSnapshotCandidateList_GetElement_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPico_MatchmakingAdminSnapshotCandidateList_GetElement_Statics::NewProp_Index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPico_MatchmakingAdminSnapshotCandidateList_GetElement_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPico_MatchmakingAdminSnapshotCandidateList_GetElement_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pico Platform|Matchmaking|Matchmaking AdminSnapshot Candidate Array" },
		{ "Comment", "/** @brief Get MatchmakingAdminSnapshotCandidateArray element form Index.*/" },
		{ "ModuleRelativePath", "Public/Pico_Matchmaking.h" },
		{ "ToolTip", "@brief Get MatchmakingAdminSnapshotCandidateArray element form Index." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPico_MatchmakingAdminSnapshotCandidateList_GetElement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPico_MatchmakingAdminSnapshotCandidateList, nullptr, "GetElement", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPico_MatchmakingAdminSnapshotCandidateList_GetElement_Statics::Pico_MatchmakingAdminSnapshotCandidateList_eventGetElement_Parms), Z_Construct_UFunction_UPico_MatchmakingAdminSnapshotCandidateList_GetElement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_MatchmakingAdminSnapshotCandidateList_GetElement_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPico_MatchmakingAdminSnapshotCandidateList_GetElement_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_MatchmakingAdminSnapshotCandidateList_GetElement_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPico_MatchmakingAdminSnapshotCandidateList_GetElement()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPico_MatchmakingAdminSnapshotCandidateList_GetElement_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPico_MatchmakingAdminSnapshotCandidateList_GetSize_Statics
	{
		struct Pico_MatchmakingAdminSnapshotCandidateList_eventGetSize_Parms
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
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPico_MatchmakingAdminSnapshotCandidateList_GetSize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Pico_MatchmakingAdminSnapshotCandidateList_eventGetSize_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPico_MatchmakingAdminSnapshotCandidateList_GetSize_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPico_MatchmakingAdminSnapshotCandidateList_GetSize_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPico_MatchmakingAdminSnapshotCandidateList_GetSize_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pico Platform|Matchmaking|Matchmaking AdminSnapshot Candidate Array" },
		{ "Comment", "/** @brief Get the size of MatchmakingAdminSnapshotCandidateArray .*/" },
		{ "ModuleRelativePath", "Public/Pico_Matchmaking.h" },
		{ "ToolTip", "@brief Get the size of MatchmakingAdminSnapshotCandidateArray ." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPico_MatchmakingAdminSnapshotCandidateList_GetSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPico_MatchmakingAdminSnapshotCandidateList, nullptr, "GetSize", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPico_MatchmakingAdminSnapshotCandidateList_GetSize_Statics::Pico_MatchmakingAdminSnapshotCandidateList_eventGetSize_Parms), Z_Construct_UFunction_UPico_MatchmakingAdminSnapshotCandidateList_GetSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_MatchmakingAdminSnapshotCandidateList_GetSize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPico_MatchmakingAdminSnapshotCandidateList_GetSize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_MatchmakingAdminSnapshotCandidateList_GetSize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPico_MatchmakingAdminSnapshotCandidateList_GetSize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPico_MatchmakingAdminSnapshotCandidateList_GetSize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPico_MatchmakingAdminSnapshotCandidateList_GetTotalSize_Statics
	{
		struct Pico_MatchmakingAdminSnapshotCandidateList_eventGetTotalSize_Parms
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
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPico_MatchmakingAdminSnapshotCandidateList_GetTotalSize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Pico_MatchmakingAdminSnapshotCandidateList_eventGetTotalSize_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPico_MatchmakingAdminSnapshotCandidateList_GetTotalSize_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPico_MatchmakingAdminSnapshotCandidateList_GetTotalSize_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPico_MatchmakingAdminSnapshotCandidateList_GetTotalSize_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pico Platform|Matchmaking|Matchmaking AdminSnapshot Candidate Array" },
		{ "ModuleRelativePath", "Public/Pico_Matchmaking.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPico_MatchmakingAdminSnapshotCandidateList_GetTotalSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPico_MatchmakingAdminSnapshotCandidateList, nullptr, "GetTotalSize", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPico_MatchmakingAdminSnapshotCandidateList_GetTotalSize_Statics::Pico_MatchmakingAdminSnapshotCandidateList_eventGetTotalSize_Parms), Z_Construct_UFunction_UPico_MatchmakingAdminSnapshotCandidateList_GetTotalSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_MatchmakingAdminSnapshotCandidateList_GetTotalSize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPico_MatchmakingAdminSnapshotCandidateList_GetTotalSize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_MatchmakingAdminSnapshotCandidateList_GetTotalSize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPico_MatchmakingAdminSnapshotCandidateList_GetTotalSize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPico_MatchmakingAdminSnapshotCandidateList_GetTotalSize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPico_MatchmakingAdminSnapshotCandidateList);
	UClass* Z_Construct_UClass_UPico_MatchmakingAdminSnapshotCandidateList_NoRegister()
	{
		return UPico_MatchmakingAdminSnapshotCandidateList::StaticClass();
	}
	struct Z_Construct_UClass_UPico_MatchmakingAdminSnapshotCandidateList_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MatchmakingAdminSnapshotCandidateArray_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MatchmakingAdminSnapshotCandidateArray_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_MatchmakingAdminSnapshotCandidateArray;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPico_MatchmakingAdminSnapshotCandidateList_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemPico,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPico_MatchmakingAdminSnapshotCandidateList_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPico_MatchmakingAdminSnapshotCandidateList_GetDebugString, "GetDebugString" }, // 1460695702
		{ &Z_Construct_UFunction_UPico_MatchmakingAdminSnapshotCandidateList_GetElement, "GetElement" }, // 36362528
		{ &Z_Construct_UFunction_UPico_MatchmakingAdminSnapshotCandidateList_GetSize, "GetSize" }, // 3883062528
		{ &Z_Construct_UFunction_UPico_MatchmakingAdminSnapshotCandidateList_GetTotalSize, "GetTotalSize" }, // 733209677
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPico_MatchmakingAdminSnapshotCandidateList_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/// @brief UPico_MatchmakingAdminSnapshotCandidateList class.\n" },
		{ "IncludePath", "Pico_Matchmaking.h" },
		{ "ModuleRelativePath", "Public/Pico_Matchmaking.h" },
		{ "ToolTip", "@brief UPico_MatchmakingAdminSnapshotCandidateList class." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPico_MatchmakingAdminSnapshotCandidateList_Statics::NewProp_MatchmakingAdminSnapshotCandidateArray_Inner = { "MatchmakingAdminSnapshotCandidateArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UPico_MatchmakingAdminSnapshotCandidate_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPico_MatchmakingAdminSnapshotCandidateList_Statics::NewProp_MatchmakingAdminSnapshotCandidateArray_MetaData[] = {
		{ "ModuleRelativePath", "Public/Pico_Matchmaking.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPico_MatchmakingAdminSnapshotCandidateList_Statics::NewProp_MatchmakingAdminSnapshotCandidateArray = { "MatchmakingAdminSnapshotCandidateArray", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPico_MatchmakingAdminSnapshotCandidateList, MatchmakingAdminSnapshotCandidateArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UPico_MatchmakingAdminSnapshotCandidateList_Statics::NewProp_MatchmakingAdminSnapshotCandidateArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPico_MatchmakingAdminSnapshotCandidateList_Statics::NewProp_MatchmakingAdminSnapshotCandidateArray_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPico_MatchmakingAdminSnapshotCandidateList_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPico_MatchmakingAdminSnapshotCandidateList_Statics::NewProp_MatchmakingAdminSnapshotCandidateArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPico_MatchmakingAdminSnapshotCandidateList_Statics::NewProp_MatchmakingAdminSnapshotCandidateArray,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPico_MatchmakingAdminSnapshotCandidateList_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPico_MatchmakingAdminSnapshotCandidateList>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPico_MatchmakingAdminSnapshotCandidateList_Statics::ClassParams = {
		&UPico_MatchmakingAdminSnapshotCandidateList::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPico_MatchmakingAdminSnapshotCandidateList_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPico_MatchmakingAdminSnapshotCandidateList_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPico_MatchmakingAdminSnapshotCandidateList_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPico_MatchmakingAdminSnapshotCandidateList_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPico_MatchmakingAdminSnapshotCandidateList()
	{
		if (!Z_Registration_Info_UClass_UPico_MatchmakingAdminSnapshotCandidateList.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPico_MatchmakingAdminSnapshotCandidateList.OuterSingleton, Z_Construct_UClass_UPico_MatchmakingAdminSnapshotCandidateList_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPico_MatchmakingAdminSnapshotCandidateList.OuterSingleton;
	}
	template<> ONLINESUBSYSTEMPICO_API UClass* StaticClass<UPico_MatchmakingAdminSnapshotCandidateList>()
	{
		return UPico_MatchmakingAdminSnapshotCandidateList::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPico_MatchmakingAdminSnapshotCandidateList);
	UPico_MatchmakingAdminSnapshotCandidateList::~UPico_MatchmakingAdminSnapshotCandidateList() {}
	DEFINE_FUNCTION(UPico_MatchmakingAdminSnapshotCandidate::execGetDebugString)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetDebugString();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPico_MatchmakingAdminSnapshotCandidate::execGetTheirCurrentThreshold)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetTheirCurrentThreshold();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPico_MatchmakingAdminSnapshotCandidate::execGetMyTotalScore)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetMyTotalScore();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPico_MatchmakingAdminSnapshotCandidate::execGetCanMatch)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetCanMatch();
		P_NATIVE_END;
	}
	void UPico_MatchmakingAdminSnapshotCandidate::StaticRegisterNativesUPico_MatchmakingAdminSnapshotCandidate()
	{
		UClass* Class = UPico_MatchmakingAdminSnapshotCandidate::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCanMatch", &UPico_MatchmakingAdminSnapshotCandidate::execGetCanMatch },
			{ "GetDebugString", &UPico_MatchmakingAdminSnapshotCandidate::execGetDebugString },
			{ "GetMyTotalScore", &UPico_MatchmakingAdminSnapshotCandidate::execGetMyTotalScore },
			{ "GetTheirCurrentThreshold", &UPico_MatchmakingAdminSnapshotCandidate::execGetTheirCurrentThreshold },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPico_MatchmakingAdminSnapshotCandidate_GetCanMatch_Statics
	{
		struct Pico_MatchmakingAdminSnapshotCandidate_eventGetCanMatch_Parms
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
	void Z_Construct_UFunction_UPico_MatchmakingAdminSnapshotCandidate_GetCanMatch_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Pico_MatchmakingAdminSnapshotCandidate_eventGetCanMatch_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPico_MatchmakingAdminSnapshotCandidate_GetCanMatch_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(Pico_MatchmakingAdminSnapshotCandidate_eventGetCanMatch_Parms), &Z_Construct_UFunction_UPico_MatchmakingAdminSnapshotCandidate_GetCanMatch_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPico_MatchmakingAdminSnapshotCandidate_GetCanMatch_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPico_MatchmakingAdminSnapshotCandidate_GetCanMatch_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPico_MatchmakingAdminSnapshotCandidate_GetCanMatch_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pico Platform|Matchmaking|Matchmaking Admin Snapshot Candidate" },
		{ "Comment", "/** @brief Whether me and the other user can be matched. */" },
		{ "ModuleRelativePath", "Public/Pico_Matchmaking.h" },
		{ "ToolTip", "@brief Whether me and the other user can be matched." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPico_MatchmakingAdminSnapshotCandidate_GetCanMatch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPico_MatchmakingAdminSnapshotCandidate, nullptr, "GetCanMatch", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPico_MatchmakingAdminSnapshotCandidate_GetCanMatch_Statics::Pico_MatchmakingAdminSnapshotCandidate_eventGetCanMatch_Parms), Z_Construct_UFunction_UPico_MatchmakingAdminSnapshotCandidate_GetCanMatch_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_MatchmakingAdminSnapshotCandidate_GetCanMatch_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPico_MatchmakingAdminSnapshotCandidate_GetCanMatch_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_MatchmakingAdminSnapshotCandidate_GetCanMatch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPico_MatchmakingAdminSnapshotCandidate_GetCanMatch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPico_MatchmakingAdminSnapshotCandidate_GetCanMatch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPico_MatchmakingAdminSnapshotCandidate_GetDebugString_Statics
	{
		struct Pico_MatchmakingAdminSnapshotCandidate_eventGetDebugString_Parms
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
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPico_MatchmakingAdminSnapshotCandidate_GetDebugString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Pico_MatchmakingAdminSnapshotCandidate_eventGetDebugString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPico_MatchmakingAdminSnapshotCandidate_GetDebugString_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPico_MatchmakingAdminSnapshotCandidate_GetDebugString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPico_MatchmakingAdminSnapshotCandidate_GetDebugString_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pico Platform|Matchmaking|Matchmaking Admin Snapshot Candidate" },
		{ "ModuleRelativePath", "Public/Pico_Matchmaking.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPico_MatchmakingAdminSnapshotCandidate_GetDebugString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPico_MatchmakingAdminSnapshotCandidate, nullptr, "GetDebugString", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPico_MatchmakingAdminSnapshotCandidate_GetDebugString_Statics::Pico_MatchmakingAdminSnapshotCandidate_eventGetDebugString_Parms), Z_Construct_UFunction_UPico_MatchmakingAdminSnapshotCandidate_GetDebugString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_MatchmakingAdminSnapshotCandidate_GetDebugString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPico_MatchmakingAdminSnapshotCandidate_GetDebugString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_MatchmakingAdminSnapshotCandidate_GetDebugString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPico_MatchmakingAdminSnapshotCandidate_GetDebugString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPico_MatchmakingAdminSnapshotCandidate_GetDebugString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPico_MatchmakingAdminSnapshotCandidate_GetMyTotalScore_Statics
	{
		struct Pico_MatchmakingAdminSnapshotCandidate_eventGetMyTotalScore_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPico_MatchmakingAdminSnapshotCandidate_GetMyTotalScore_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Pico_MatchmakingAdminSnapshotCandidate_eventGetMyTotalScore_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPico_MatchmakingAdminSnapshotCandidate_GetMyTotalScore_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPico_MatchmakingAdminSnapshotCandidate_GetMyTotalScore_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPico_MatchmakingAdminSnapshotCandidate_GetMyTotalScore_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pico Platform|Matchmaking|Matchmaking Admin Snapshot Candidate" },
		{ "Comment", "/** @brief My matching threshold. */" },
		{ "ModuleRelativePath", "Public/Pico_Matchmaking.h" },
		{ "ToolTip", "@brief My matching threshold." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPico_MatchmakingAdminSnapshotCandidate_GetMyTotalScore_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPico_MatchmakingAdminSnapshotCandidate, nullptr, "GetMyTotalScore", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPico_MatchmakingAdminSnapshotCandidate_GetMyTotalScore_Statics::Pico_MatchmakingAdminSnapshotCandidate_eventGetMyTotalScore_Parms), Z_Construct_UFunction_UPico_MatchmakingAdminSnapshotCandidate_GetMyTotalScore_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_MatchmakingAdminSnapshotCandidate_GetMyTotalScore_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPico_MatchmakingAdminSnapshotCandidate_GetMyTotalScore_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_MatchmakingAdminSnapshotCandidate_GetMyTotalScore_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPico_MatchmakingAdminSnapshotCandidate_GetMyTotalScore()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPico_MatchmakingAdminSnapshotCandidate_GetMyTotalScore_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPico_MatchmakingAdminSnapshotCandidate_GetTheirCurrentThreshold_Statics
	{
		struct Pico_MatchmakingAdminSnapshotCandidate_eventGetTheirCurrentThreshold_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPico_MatchmakingAdminSnapshotCandidate_GetTheirCurrentThreshold_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Pico_MatchmakingAdminSnapshotCandidate_eventGetTheirCurrentThreshold_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPico_MatchmakingAdminSnapshotCandidate_GetTheirCurrentThreshold_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPico_MatchmakingAdminSnapshotCandidate_GetTheirCurrentThreshold_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPico_MatchmakingAdminSnapshotCandidate_GetTheirCurrentThreshold_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pico Platform|Matchmaking|Matchmaking Admin Snapshot Candidate" },
		{ "Comment", "/** @brief The other user's matching threshold. */" },
		{ "ModuleRelativePath", "Public/Pico_Matchmaking.h" },
		{ "ToolTip", "@brief The other user's matching threshold." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPico_MatchmakingAdminSnapshotCandidate_GetTheirCurrentThreshold_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPico_MatchmakingAdminSnapshotCandidate, nullptr, "GetTheirCurrentThreshold", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPico_MatchmakingAdminSnapshotCandidate_GetTheirCurrentThreshold_Statics::Pico_MatchmakingAdminSnapshotCandidate_eventGetTheirCurrentThreshold_Parms), Z_Construct_UFunction_UPico_MatchmakingAdminSnapshotCandidate_GetTheirCurrentThreshold_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_MatchmakingAdminSnapshotCandidate_GetTheirCurrentThreshold_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPico_MatchmakingAdminSnapshotCandidate_GetTheirCurrentThreshold_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_MatchmakingAdminSnapshotCandidate_GetTheirCurrentThreshold_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPico_MatchmakingAdminSnapshotCandidate_GetTheirCurrentThreshold()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPico_MatchmakingAdminSnapshotCandidate_GetTheirCurrentThreshold_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPico_MatchmakingAdminSnapshotCandidate);
	UClass* Z_Construct_UClass_UPico_MatchmakingAdminSnapshotCandidate_NoRegister()
	{
		return UPico_MatchmakingAdminSnapshotCandidate::StaticClass();
	}
	struct Z_Construct_UClass_UPico_MatchmakingAdminSnapshotCandidate_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPico_MatchmakingAdminSnapshotCandidate_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemPico,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPico_MatchmakingAdminSnapshotCandidate_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPico_MatchmakingAdminSnapshotCandidate_GetCanMatch, "GetCanMatch" }, // 2272994881
		{ &Z_Construct_UFunction_UPico_MatchmakingAdminSnapshotCandidate_GetDebugString, "GetDebugString" }, // 3719045381
		{ &Z_Construct_UFunction_UPico_MatchmakingAdminSnapshotCandidate_GetMyTotalScore, "GetMyTotalScore" }, // 3645655291
		{ &Z_Construct_UFunction_UPico_MatchmakingAdminSnapshotCandidate_GetTheirCurrentThreshold, "GetTheirCurrentThreshold" }, // 4091084828
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPico_MatchmakingAdminSnapshotCandidate_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/// @brief UPico_MatchmakingAdminSnapshotCandidate class.\n" },
		{ "IncludePath", "Pico_Matchmaking.h" },
		{ "ModuleRelativePath", "Public/Pico_Matchmaking.h" },
		{ "ToolTip", "@brief UPico_MatchmakingAdminSnapshotCandidate class." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPico_MatchmakingAdminSnapshotCandidate_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPico_MatchmakingAdminSnapshotCandidate>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPico_MatchmakingAdminSnapshotCandidate_Statics::ClassParams = {
		&UPico_MatchmakingAdminSnapshotCandidate::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UPico_MatchmakingAdminSnapshotCandidate_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPico_MatchmakingAdminSnapshotCandidate_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPico_MatchmakingAdminSnapshotCandidate()
	{
		if (!Z_Registration_Info_UClass_UPico_MatchmakingAdminSnapshotCandidate.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPico_MatchmakingAdminSnapshotCandidate.OuterSingleton, Z_Construct_UClass_UPico_MatchmakingAdminSnapshotCandidate_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPico_MatchmakingAdminSnapshotCandidate.OuterSingleton;
	}
	template<> ONLINESUBSYSTEMPICO_API UClass* StaticClass<UPico_MatchmakingAdminSnapshotCandidate>()
	{
		return UPico_MatchmakingAdminSnapshotCandidate::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPico_MatchmakingAdminSnapshotCandidate);
	UPico_MatchmakingAdminSnapshotCandidate::~UPico_MatchmakingAdminSnapshotCandidate() {}
	struct Z_CompiledInDeferFile_FID_VR_VrVideoUpdateWS_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Matchmaking_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_VR_VrVideoUpdateWS_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Matchmaking_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UOnlinePicoMatchmakingFunction, UOnlinePicoMatchmakingFunction::StaticClass, TEXT("UOnlinePicoMatchmakingFunction"), &Z_Registration_Info_UClass_UOnlinePicoMatchmakingFunction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOnlinePicoMatchmakingFunction), 269464450U) },
		{ Z_Construct_UClass_UPico_MatchmakingStats, UPico_MatchmakingStats::StaticClass, TEXT("UPico_MatchmakingStats"), &Z_Registration_Info_UClass_UPico_MatchmakingStats, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPico_MatchmakingStats), 4105407764U) },
		{ Z_Construct_UClass_UPico_MatchmakingBrowseResult, UPico_MatchmakingBrowseResult::StaticClass, TEXT("UPico_MatchmakingBrowseResult"), &Z_Registration_Info_UClass_UPico_MatchmakingBrowseResult, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPico_MatchmakingBrowseResult), 4043465949U) },
		{ Z_Construct_UClass_UPico_MatchmakingRoomList, UPico_MatchmakingRoomList::StaticClass, TEXT("UPico_MatchmakingRoomList"), &Z_Registration_Info_UClass_UPico_MatchmakingRoomList, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPico_MatchmakingRoomList), 1723232650U) },
		{ Z_Construct_UClass_UPico_MatchmakingRoom, UPico_MatchmakingRoom::StaticClass, TEXT("UPico_MatchmakingRoom"), &Z_Registration_Info_UClass_UPico_MatchmakingRoom, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPico_MatchmakingRoom), 2190470693U) },
		{ Z_Construct_UClass_UPico_MatchmakingEnqueueResultAndRoom, UPico_MatchmakingEnqueueResultAndRoom::StaticClass, TEXT("UPico_MatchmakingEnqueueResultAndRoom"), &Z_Registration_Info_UClass_UPico_MatchmakingEnqueueResultAndRoom, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPico_MatchmakingEnqueueResultAndRoom), 239376797U) },
		{ Z_Construct_UClass_UPico_MatchmakingEnqueueResult, UPico_MatchmakingEnqueueResult::StaticClass, TEXT("UPico_MatchmakingEnqueueResult"), &Z_Registration_Info_UClass_UPico_MatchmakingEnqueueResult, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPico_MatchmakingEnqueueResult), 187313798U) },
		{ Z_Construct_UClass_UPico_MatchmakingAdminSnapshot, UPico_MatchmakingAdminSnapshot::StaticClass, TEXT("UPico_MatchmakingAdminSnapshot"), &Z_Registration_Info_UClass_UPico_MatchmakingAdminSnapshot, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPico_MatchmakingAdminSnapshot), 703705695U) },
		{ Z_Construct_UClass_UPico_MatchmakingAdminSnapshotCandidateList, UPico_MatchmakingAdminSnapshotCandidateList::StaticClass, TEXT("UPico_MatchmakingAdminSnapshotCandidateList"), &Z_Registration_Info_UClass_UPico_MatchmakingAdminSnapshotCandidateList, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPico_MatchmakingAdminSnapshotCandidateList), 1374105236U) },
		{ Z_Construct_UClass_UPico_MatchmakingAdminSnapshotCandidate, UPico_MatchmakingAdminSnapshotCandidate::StaticClass, TEXT("UPico_MatchmakingAdminSnapshotCandidate"), &Z_Registration_Info_UClass_UPico_MatchmakingAdminSnapshotCandidate, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPico_MatchmakingAdminSnapshotCandidate), 2760542440U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_VR_VrVideoUpdateWS_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Matchmaking_h_345234288(TEXT("/Script/OnlineSubsystemPico"),
		Z_CompiledInDeferFile_FID_VR_VrVideoUpdateWS_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Matchmaking_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_VR_VrVideoUpdateWS_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Matchmaking_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
