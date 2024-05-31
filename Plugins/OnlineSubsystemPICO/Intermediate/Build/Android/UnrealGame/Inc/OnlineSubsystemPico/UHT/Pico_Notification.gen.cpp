// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlineSubsystemPico/Public/Pico_Notification.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePico_Notification() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ONLINESUBSYSTEMPICO_API UClass* Z_Construct_UClass_UOnlinePicoNotificationFunction();
	ONLINESUBSYSTEMPICO_API UClass* Z_Construct_UClass_UOnlinePicoNotificationFunction_NoRegister();
	ONLINESUBSYSTEMPICO_API UClass* Z_Construct_UClass_UPico_RoomInviteNotification();
	ONLINESUBSYSTEMPICO_API UClass* Z_Construct_UClass_UPico_RoomInviteNotification_NoRegister();
	ONLINESUBSYSTEMPICO_API UClass* Z_Construct_UClass_UPico_RoomInviteNotificationArray();
	ONLINESUBSYSTEMPICO_API UClass* Z_Construct_UClass_UPico_RoomInviteNotificationArray_NoRegister();
	ONLINESUBSYSTEMPICO_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemPico_NotificationMarkAsRead__DelegateSignature();
	ONLINESUBSYSTEMPICO_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemPico_NotificationRoomInviteNotifications__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_OnlineSubsystemPico();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_OnlineSubsystemPico_NotificationRoomInviteNotifications__DelegateSignature_Statics
	{
		struct _Script_OnlineSubsystemPico_eventNotificationRoomInviteNotifications_Parms
		{
			bool bIsError;
			int32 ErrorCode;
			FString ErrorMessage;
			UPico_RoomInviteNotificationArray* RoomInviteNotificationArray;
		};
		static void NewProp_bIsError_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsError;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_ErrorCode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ErrorMessage_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ErrorMessage;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RoomInviteNotificationArray;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_OnlineSubsystemPico_NotificationRoomInviteNotifications__DelegateSignature_Statics::NewProp_bIsError_SetBit(void* Obj)
	{
		((_Script_OnlineSubsystemPico_eventNotificationRoomInviteNotifications_Parms*)Obj)->bIsError = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemPico_NotificationRoomInviteNotifications__DelegateSignature_Statics::NewProp_bIsError = { "bIsError", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(_Script_OnlineSubsystemPico_eventNotificationRoomInviteNotifications_Parms), &Z_Construct_UDelegateFunction_OnlineSubsystemPico_NotificationRoomInviteNotifications__DelegateSignature_Statics::NewProp_bIsError_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemPico_NotificationRoomInviteNotifications__DelegateSignature_Statics::NewProp_ErrorCode = { "ErrorCode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_OnlineSubsystemPico_eventNotificationRoomInviteNotifications_Parms, ErrorCode), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemPico_NotificationRoomInviteNotifications__DelegateSignature_Statics::NewProp_ErrorMessage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemPico_NotificationRoomInviteNotifications__DelegateSignature_Statics::NewProp_ErrorMessage = { "ErrorMessage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_OnlineSubsystemPico_eventNotificationRoomInviteNotifications_Parms, ErrorMessage), METADATA_PARAMS(Z_Construct_UDelegateFunction_OnlineSubsystemPico_NotificationRoomInviteNotifications__DelegateSignature_Statics::NewProp_ErrorMessage_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemPico_NotificationRoomInviteNotifications__DelegateSignature_Statics::NewProp_ErrorMessage_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemPico_NotificationRoomInviteNotifications__DelegateSignature_Statics::NewProp_RoomInviteNotificationArray = { "RoomInviteNotificationArray", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_OnlineSubsystemPico_eventNotificationRoomInviteNotifications_Parms, RoomInviteNotificationArray), Z_Construct_UClass_UPico_RoomInviteNotificationArray_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemPico_NotificationRoomInviteNotifications__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemPico_NotificationRoomInviteNotifications__DelegateSignature_Statics::NewProp_bIsError,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemPico_NotificationRoomInviteNotifications__DelegateSignature_Statics::NewProp_ErrorCode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemPico_NotificationRoomInviteNotifications__DelegateSignature_Statics::NewProp_ErrorMessage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemPico_NotificationRoomInviteNotifications__DelegateSignature_Statics::NewProp_RoomInviteNotificationArray,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemPico_NotificationRoomInviteNotifications__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n * \n*/// DECLARE_MULTICAST_DELEGATE_FourParams(FRoomUpdateNotify, bool, /*bIsError*/ int, /*ErrorCode*/ const FString&, /*ErrorMessage*/ UPico_Room* /*Room*/);\n//\n// FRoom_GetNextRoomArrayPage\n" },
		{ "ModuleRelativePath", "Public/Pico_Notification.h" },
		{ "ToolTip", "// DECLARE_MULTICAST_DELEGATE_FourParams(FRoomUpdateNotify, bool, bIsError int, ErrorCode const FString&, ErrorMessage UPico_Room* Room);\n//\n// FRoom_GetNextRoomArrayPage" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemPico_NotificationRoomInviteNotifications__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemPico, nullptr, "NotificationRoomInviteNotifications__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemPico_NotificationRoomInviteNotifications__DelegateSignature_Statics::_Script_OnlineSubsystemPico_eventNotificationRoomInviteNotifications_Parms), Z_Construct_UDelegateFunction_OnlineSubsystemPico_NotificationRoomInviteNotifications__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemPico_NotificationRoomInviteNotifications__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_OnlineSubsystemPico_NotificationRoomInviteNotifications__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemPico_NotificationRoomInviteNotifications__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemPico_NotificationRoomInviteNotifications__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemPico_NotificationRoomInviteNotifications__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_OnlineSubsystemPico_NotificationMarkAsRead__DelegateSignature_Statics
	{
		struct _Script_OnlineSubsystemPico_eventNotificationMarkAsRead_Parms
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
	void Z_Construct_UDelegateFunction_OnlineSubsystemPico_NotificationMarkAsRead__DelegateSignature_Statics::NewProp_bIsError_SetBit(void* Obj)
	{
		((_Script_OnlineSubsystemPico_eventNotificationMarkAsRead_Parms*)Obj)->bIsError = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemPico_NotificationMarkAsRead__DelegateSignature_Statics::NewProp_bIsError = { "bIsError", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(_Script_OnlineSubsystemPico_eventNotificationMarkAsRead_Parms), &Z_Construct_UDelegateFunction_OnlineSubsystemPico_NotificationMarkAsRead__DelegateSignature_Statics::NewProp_bIsError_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemPico_NotificationMarkAsRead__DelegateSignature_Statics::NewProp_ErrorCode = { "ErrorCode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_OnlineSubsystemPico_eventNotificationMarkAsRead_Parms, ErrorCode), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemPico_NotificationMarkAsRead__DelegateSignature_Statics::NewProp_ErrorMessage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemPico_NotificationMarkAsRead__DelegateSignature_Statics::NewProp_ErrorMessage = { "ErrorMessage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_OnlineSubsystemPico_eventNotificationMarkAsRead_Parms, ErrorMessage), METADATA_PARAMS(Z_Construct_UDelegateFunction_OnlineSubsystemPico_NotificationMarkAsRead__DelegateSignature_Statics::NewProp_ErrorMessage_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemPico_NotificationMarkAsRead__DelegateSignature_Statics::NewProp_ErrorMessage_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemPico_NotificationMarkAsRead__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemPico_NotificationMarkAsRead__DelegateSignature_Statics::NewProp_bIsError,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemPico_NotificationMarkAsRead__DelegateSignature_Statics::NewProp_ErrorCode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemPico_NotificationMarkAsRead__DelegateSignature_Statics::NewProp_ErrorMessage,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemPico_NotificationMarkAsRead__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Pico_Notification.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemPico_NotificationMarkAsRead__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemPico, nullptr, "NotificationMarkAsRead__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemPico_NotificationMarkAsRead__DelegateSignature_Statics::_Script_OnlineSubsystemPico_eventNotificationMarkAsRead_Parms), Z_Construct_UDelegateFunction_OnlineSubsystemPico_NotificationMarkAsRead__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemPico_NotificationMarkAsRead__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_OnlineSubsystemPico_NotificationMarkAsRead__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemPico_NotificationMarkAsRead__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemPico_NotificationMarkAsRead__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemPico_NotificationMarkAsRead__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UOnlinePicoNotificationFunction::execMarkAsRead)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_NotificationID);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnMarkAsReadCallback);
		P_FINISH;
		P_NATIVE_BEGIN;
		UOnlinePicoNotificationFunction::MarkAsRead(Z_Param_WorldContextObject,Z_Param_NotificationID,FNotificationMarkAsRead(Z_Param_OnMarkAsReadCallback));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlinePicoNotificationFunction::execGetRoomInviteNotifications)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FIntProperty,Z_Param_PageIdx);
		P_GET_PROPERTY(FIntProperty,Z_Param_PageSize);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnRoomInviteNotificationsCallback);
		P_FINISH;
		P_NATIVE_BEGIN;
		UOnlinePicoNotificationFunction::GetRoomInviteNotifications(Z_Param_WorldContextObject,Z_Param_PageIdx,Z_Param_PageSize,FNotificationRoomInviteNotifications(Z_Param_OnRoomInviteNotificationsCallback));
		P_NATIVE_END;
	}
	void UOnlinePicoNotificationFunction::StaticRegisterNativesUOnlinePicoNotificationFunction()
	{
		UClass* Class = UOnlinePicoNotificationFunction::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetRoomInviteNotifications", &UOnlinePicoNotificationFunction::execGetRoomInviteNotifications },
			{ "MarkAsRead", &UOnlinePicoNotificationFunction::execMarkAsRead },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOnlinePicoNotificationFunction_GetRoomInviteNotifications_Statics
	{
		struct OnlinePicoNotificationFunction_eventGetRoomInviteNotifications_Parms
		{
			UObject* WorldContextObject;
			int32 PageIdx;
			int32 PageSize;
			FScriptDelegate OnRoomInviteNotificationsCallback;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_PageIdx;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_PageSize;
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnRoomInviteNotificationsCallback;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlinePicoNotificationFunction_GetRoomInviteNotifications_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlinePicoNotificationFunction_eventGetRoomInviteNotifications_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UOnlinePicoNotificationFunction_GetRoomInviteNotifications_Statics::NewProp_PageIdx = { "PageIdx", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlinePicoNotificationFunction_eventGetRoomInviteNotifications_Parms, PageIdx), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UOnlinePicoNotificationFunction_GetRoomInviteNotifications_Statics::NewProp_PageSize = { "PageSize", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlinePicoNotificationFunction_eventGetRoomInviteNotifications_Parms, PageSize), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UOnlinePicoNotificationFunction_GetRoomInviteNotifications_Statics::NewProp_OnRoomInviteNotificationsCallback = { "OnRoomInviteNotificationsCallback", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlinePicoNotificationFunction_eventGetRoomInviteNotifications_Parms, OnRoomInviteNotificationsCallback), Z_Construct_UDelegateFunction_OnlineSubsystemPico_NotificationRoomInviteNotifications__DelegateSignature, METADATA_PARAMS(nullptr, 0) }; // 1445380548
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlinePicoNotificationFunction_GetRoomInviteNotifications_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoNotificationFunction_GetRoomInviteNotifications_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoNotificationFunction_GetRoomInviteNotifications_Statics::NewProp_PageIdx,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoNotificationFunction_GetRoomInviteNotifications_Statics::NewProp_PageSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoNotificationFunction_GetRoomInviteNotifications_Statics::NewProp_OnRoomInviteNotificationsCallback,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlinePicoNotificationFunction_GetRoomInviteNotifications_Statics::Function_MetaDataParams[] = {
		{ "Category", "OnlinePico|Notification" },
		{ "Comment", "/// <summary>Gets a list of all pending room invites for your app. For example, notifications that may have been sent before the user launches your app.</summary>\n/// <param name =\"WorldContextObject\">Used to get the information about the current world.</param>\n/// <param name=\"PageIdx\">Defines which page of pending room invites to return. The first page index is `0`.</param>\n/// <param name=\"PageSize\">Defines the number of pending room invites returned on each page.</param>\n/// <param name=\"OnRoomInviteNotificationsCallback\">Will be executed when the request has been completed.     \n/// Delegate will contain the requested object class (bool, bIsError, int, ErrorCode, const FString&, ErrorMessage, UPico_RoomInviteNotificationArray *, RoomInviteNotificationArray).</param>\n" },
		{ "ModuleRelativePath", "Public/Pico_Notification.h" },
		{ "ToolTip", "<summary>Gets a list of all pending room invites for your app. For example, notifications that may have been sent before the user launches your app.</summary>\n<param name =\"WorldContextObject\">Used to get the information about the current world.</param>\n<param name=\"PageIdx\">Defines which page of pending room invites to return. The first page index is `0`.</param>\n<param name=\"PageSize\">Defines the number of pending room invites returned on each page.</param>\n<param name=\"OnRoomInviteNotificationsCallback\">Will be executed when the request has been completed.\nDelegate will contain the requested object class (bool, bIsError, int, ErrorCode, const FString&, ErrorMessage, UPico_RoomInviteNotificationArray *, RoomInviteNotificationArray).</param>" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlinePicoNotificationFunction_GetRoomInviteNotifications_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlinePicoNotificationFunction, nullptr, "GetRoomInviteNotifications", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOnlinePicoNotificationFunction_GetRoomInviteNotifications_Statics::OnlinePicoNotificationFunction_eventGetRoomInviteNotifications_Parms), Z_Construct_UFunction_UOnlinePicoNotificationFunction_GetRoomInviteNotifications_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePicoNotificationFunction_GetRoomInviteNotifications_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlinePicoNotificationFunction_GetRoomInviteNotifications_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePicoNotificationFunction_GetRoomInviteNotifications_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlinePicoNotificationFunction_GetRoomInviteNotifications()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlinePicoNotificationFunction_GetRoomInviteNotifications_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlinePicoNotificationFunction_MarkAsRead_Statics
	{
		struct OnlinePicoNotificationFunction_eventMarkAsRead_Parms
		{
			UObject* WorldContextObject;
			FString NotificationID;
			FScriptDelegate OnMarkAsReadCallback;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NotificationID_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_NotificationID;
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnMarkAsReadCallback;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlinePicoNotificationFunction_MarkAsRead_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlinePicoNotificationFunction_eventMarkAsRead_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlinePicoNotificationFunction_MarkAsRead_Statics::NewProp_NotificationID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOnlinePicoNotificationFunction_MarkAsRead_Statics::NewProp_NotificationID = { "NotificationID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlinePicoNotificationFunction_eventMarkAsRead_Parms, NotificationID), METADATA_PARAMS(Z_Construct_UFunction_UOnlinePicoNotificationFunction_MarkAsRead_Statics::NewProp_NotificationID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePicoNotificationFunction_MarkAsRead_Statics::NewProp_NotificationID_MetaData)) };
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UOnlinePicoNotificationFunction_MarkAsRead_Statics::NewProp_OnMarkAsReadCallback = { "OnMarkAsReadCallback", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlinePicoNotificationFunction_eventMarkAsRead_Parms, OnMarkAsReadCallback), Z_Construct_UDelegateFunction_OnlineSubsystemPico_NotificationMarkAsRead__DelegateSignature, METADATA_PARAMS(nullptr, 0) }; // 1792114393
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlinePicoNotificationFunction_MarkAsRead_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoNotificationFunction_MarkAsRead_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoNotificationFunction_MarkAsRead_Statics::NewProp_NotificationID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoNotificationFunction_MarkAsRead_Statics::NewProp_OnMarkAsReadCallback,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlinePicoNotificationFunction_MarkAsRead_Statics::Function_MetaDataParams[] = {
		{ "Category", "OnlinePico|Notification" },
		{ "Comment", "/// <summary>Marks a notification as read.</summary>\n/// <param name =\"WorldContextObject\">Used to get the information about the current world.</param>\n/// <param name=\"NotificationID\">The ID of the notificaiton to mark.</param>\n/// <param name=\"OnMarkAsReadCallback\">Will be executed when the request has been completed.     \n/// Delegate will contain the requested object class (bool, bIsError, int, ErrorCode, const FString&, ErrorMessage).</param>\n" },
		{ "ModuleRelativePath", "Public/Pico_Notification.h" },
		{ "ToolTip", "<summary>Marks a notification as read.</summary>\n<param name =\"WorldContextObject\">Used to get the information about the current world.</param>\n<param name=\"NotificationID\">The ID of the notificaiton to mark.</param>\n<param name=\"OnMarkAsReadCallback\">Will be executed when the request has been completed.\nDelegate will contain the requested object class (bool, bIsError, int, ErrorCode, const FString&, ErrorMessage).</param>" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlinePicoNotificationFunction_MarkAsRead_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlinePicoNotificationFunction, nullptr, "MarkAsRead", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOnlinePicoNotificationFunction_MarkAsRead_Statics::OnlinePicoNotificationFunction_eventMarkAsRead_Parms), Z_Construct_UFunction_UOnlinePicoNotificationFunction_MarkAsRead_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePicoNotificationFunction_MarkAsRead_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlinePicoNotificationFunction_MarkAsRead_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePicoNotificationFunction_MarkAsRead_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlinePicoNotificationFunction_MarkAsRead()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlinePicoNotificationFunction_MarkAsRead_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOnlinePicoNotificationFunction);
	UClass* Z_Construct_UClass_UOnlinePicoNotificationFunction_NoRegister()
	{
		return UOnlinePicoNotificationFunction::StaticClass();
	}
	struct Z_Construct_UClass_UOnlinePicoNotificationFunction_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOnlinePicoNotificationFunction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemPico,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UOnlinePicoNotificationFunction_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOnlinePicoNotificationFunction_GetRoomInviteNotifications, "GetRoomInviteNotifications" }, // 3259188244
		{ &Z_Construct_UFunction_UOnlinePicoNotificationFunction_MarkAsRead, "MarkAsRead" }, // 3456501944
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlinePicoNotificationFunction_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** @defgroup BP_Room BP_Room\n *  This is the BP_Room group\n *  @{\n *//// @brief OnlinePicoRoom Blueprint Function class.\n" },
		{ "IncludePath", "Pico_Notification.h" },
		{ "ModuleRelativePath", "Public/Pico_Notification.h" },
		{ "ToolTip", "@defgroup BP_Room BP_Room\nThis is the BP_Room group\n@{\n/// @brief OnlinePicoRoom Blueprint Function class." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOnlinePicoNotificationFunction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOnlinePicoNotificationFunction>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOnlinePicoNotificationFunction_Statics::ClassParams = {
		&UOnlinePicoNotificationFunction::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UOnlinePicoNotificationFunction_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlinePicoNotificationFunction_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOnlinePicoNotificationFunction()
	{
		if (!Z_Registration_Info_UClass_UOnlinePicoNotificationFunction.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOnlinePicoNotificationFunction.OuterSingleton, Z_Construct_UClass_UOnlinePicoNotificationFunction_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOnlinePicoNotificationFunction.OuterSingleton;
	}
	template<> ONLINESUBSYSTEMPICO_API UClass* StaticClass<UOnlinePicoNotificationFunction>()
	{
		return UOnlinePicoNotificationFunction::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOnlinePicoNotificationFunction);
	UOnlinePicoNotificationFunction::~UOnlinePicoNotificationFunction() {}
	DEFINE_FUNCTION(UPico_RoomInviteNotification::execGetDebugString)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetDebugString();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPico_RoomInviteNotification::execGetSentDateTime)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FDateTime*)Z_Param__Result=P_THIS->GetSentDateTime();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPico_RoomInviteNotification::execGetSentTime)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetSentTime();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPico_RoomInviteNotification::execGetSenderID)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetSenderID();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPico_RoomInviteNotification::execGetRoomID)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetRoomID();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPico_RoomInviteNotification::execGetID)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetID();
		P_NATIVE_END;
	}
	void UPico_RoomInviteNotification::StaticRegisterNativesUPico_RoomInviteNotification()
	{
		UClass* Class = UPico_RoomInviteNotification::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetDebugString", &UPico_RoomInviteNotification::execGetDebugString },
			{ "GetID", &UPico_RoomInviteNotification::execGetID },
			{ "GetRoomID", &UPico_RoomInviteNotification::execGetRoomID },
			{ "GetSenderID", &UPico_RoomInviteNotification::execGetSenderID },
			{ "GetSentDateTime", &UPico_RoomInviteNotification::execGetSentDateTime },
			{ "GetSentTime", &UPico_RoomInviteNotification::execGetSentTime },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPico_RoomInviteNotification_GetDebugString_Statics
	{
		struct Pico_RoomInviteNotification_eventGetDebugString_Parms
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
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPico_RoomInviteNotification_GetDebugString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Pico_RoomInviteNotification_eventGetDebugString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPico_RoomInviteNotification_GetDebugString_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPico_RoomInviteNotification_GetDebugString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPico_RoomInviteNotification_GetDebugString_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pico Platform|Notification|Room Invite Notification" },
		{ "ModuleRelativePath", "Public/Pico_Notification.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPico_RoomInviteNotification_GetDebugString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPico_RoomInviteNotification, nullptr, "GetDebugString", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPico_RoomInviteNotification_GetDebugString_Statics::Pico_RoomInviteNotification_eventGetDebugString_Parms), Z_Construct_UFunction_UPico_RoomInviteNotification_GetDebugString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_RoomInviteNotification_GetDebugString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPico_RoomInviteNotification_GetDebugString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_RoomInviteNotification_GetDebugString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPico_RoomInviteNotification_GetDebugString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPico_RoomInviteNotification_GetDebugString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPico_RoomInviteNotification_GetID_Statics
	{
		struct Pico_RoomInviteNotification_eventGetID_Parms
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
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPico_RoomInviteNotification_GetID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Pico_RoomInviteNotification_eventGetID_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPico_RoomInviteNotification_GetID_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPico_RoomInviteNotification_GetID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPico_RoomInviteNotification_GetID_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pico Platform|Notification|Room Invite Notification" },
		{ "Comment", "/** @brief Invitation ID. */" },
		{ "ModuleRelativePath", "Public/Pico_Notification.h" },
		{ "ToolTip", "@brief Invitation ID." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPico_RoomInviteNotification_GetID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPico_RoomInviteNotification, nullptr, "GetID", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPico_RoomInviteNotification_GetID_Statics::Pico_RoomInviteNotification_eventGetID_Parms), Z_Construct_UFunction_UPico_RoomInviteNotification_GetID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_RoomInviteNotification_GetID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPico_RoomInviteNotification_GetID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_RoomInviteNotification_GetID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPico_RoomInviteNotification_GetID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPico_RoomInviteNotification_GetID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPico_RoomInviteNotification_GetRoomID_Statics
	{
		struct Pico_RoomInviteNotification_eventGetRoomID_Parms
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
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPico_RoomInviteNotification_GetRoomID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Pico_RoomInviteNotification_eventGetRoomID_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPico_RoomInviteNotification_GetRoomID_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPico_RoomInviteNotification_GetRoomID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPico_RoomInviteNotification_GetRoomID_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pico Platform|Notification|Room Invite Notification" },
		{ "Comment", "/** @brief Room ID. */" },
		{ "ModuleRelativePath", "Public/Pico_Notification.h" },
		{ "ToolTip", "@brief Room ID." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPico_RoomInviteNotification_GetRoomID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPico_RoomInviteNotification, nullptr, "GetRoomID", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPico_RoomInviteNotification_GetRoomID_Statics::Pico_RoomInviteNotification_eventGetRoomID_Parms), Z_Construct_UFunction_UPico_RoomInviteNotification_GetRoomID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_RoomInviteNotification_GetRoomID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPico_RoomInviteNotification_GetRoomID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_RoomInviteNotification_GetRoomID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPico_RoomInviteNotification_GetRoomID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPico_RoomInviteNotification_GetRoomID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPico_RoomInviteNotification_GetSenderID_Statics
	{
		struct Pico_RoomInviteNotification_eventGetSenderID_Parms
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
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPico_RoomInviteNotification_GetSenderID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Pico_RoomInviteNotification_eventGetSenderID_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPico_RoomInviteNotification_GetSenderID_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPico_RoomInviteNotification_GetSenderID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPico_RoomInviteNotification_GetSenderID_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pico Platform|Notification|Room Invite Notification" },
		{ "Comment", "/** @brief Inviter's user ID. */" },
		{ "ModuleRelativePath", "Public/Pico_Notification.h" },
		{ "ToolTip", "@brief Inviter's user ID." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPico_RoomInviteNotification_GetSenderID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPico_RoomInviteNotification, nullptr, "GetSenderID", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPico_RoomInviteNotification_GetSenderID_Statics::Pico_RoomInviteNotification_eventGetSenderID_Parms), Z_Construct_UFunction_UPico_RoomInviteNotification_GetSenderID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_RoomInviteNotification_GetSenderID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPico_RoomInviteNotification_GetSenderID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_RoomInviteNotification_GetSenderID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPico_RoomInviteNotification_GetSenderID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPico_RoomInviteNotification_GetSenderID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPico_RoomInviteNotification_GetSentDateTime_Statics
	{
		struct Pico_RoomInviteNotification_eventGetSentDateTime_Parms
		{
			FDateTime ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPico_RoomInviteNotification_GetSentDateTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Pico_RoomInviteNotification_eventGetSentDateTime_Parms, ReturnValue), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPico_RoomInviteNotification_GetSentDateTime_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPico_RoomInviteNotification_GetSentDateTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPico_RoomInviteNotification_GetSentDateTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pico Platform|Notification|Room Invite Notification" },
		{ "Comment", "/** @brief The time when the invitation is sent. */" },
		{ "ModuleRelativePath", "Public/Pico_Notification.h" },
		{ "ToolTip", "@brief The time when the invitation is sent." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPico_RoomInviteNotification_GetSentDateTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPico_RoomInviteNotification, nullptr, "GetSentDateTime", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPico_RoomInviteNotification_GetSentDateTime_Statics::Pico_RoomInviteNotification_eventGetSentDateTime_Parms), Z_Construct_UFunction_UPico_RoomInviteNotification_GetSentDateTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_RoomInviteNotification_GetSentDateTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPico_RoomInviteNotification_GetSentDateTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_RoomInviteNotification_GetSentDateTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPico_RoomInviteNotification_GetSentDateTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPico_RoomInviteNotification_GetSentDateTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPico_RoomInviteNotification_GetSentTime_Statics
	{
		struct Pico_RoomInviteNotification_eventGetSentTime_Parms
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
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPico_RoomInviteNotification_GetSentTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Pico_RoomInviteNotification_eventGetSentTime_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPico_RoomInviteNotification_GetSentTime_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPico_RoomInviteNotification_GetSentTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPico_RoomInviteNotification_GetSentTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pico Platform|Notification|Room Invite Notification" },
		{ "Comment", "/** @brief The time when the invitation is sent as string. */" },
		{ "ModuleRelativePath", "Public/Pico_Notification.h" },
		{ "ToolTip", "@brief The time when the invitation is sent as string." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPico_RoomInviteNotification_GetSentTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPico_RoomInviteNotification, nullptr, "GetSentTime", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPico_RoomInviteNotification_GetSentTime_Statics::Pico_RoomInviteNotification_eventGetSentTime_Parms), Z_Construct_UFunction_UPico_RoomInviteNotification_GetSentTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_RoomInviteNotification_GetSentTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPico_RoomInviteNotification_GetSentTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_RoomInviteNotification_GetSentTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPico_RoomInviteNotification_GetSentTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPico_RoomInviteNotification_GetSentTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPico_RoomInviteNotification);
	UClass* Z_Construct_UClass_UPico_RoomInviteNotification_NoRegister()
	{
		return UPico_RoomInviteNotification::StaticClass();
	}
	struct Z_Construct_UClass_UPico_RoomInviteNotification_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPico_RoomInviteNotification_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemPico,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPico_RoomInviteNotification_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPico_RoomInviteNotification_GetDebugString, "GetDebugString" }, // 3683261729
		{ &Z_Construct_UFunction_UPico_RoomInviteNotification_GetID, "GetID" }, // 3574251485
		{ &Z_Construct_UFunction_UPico_RoomInviteNotification_GetRoomID, "GetRoomID" }, // 3510260946
		{ &Z_Construct_UFunction_UPico_RoomInviteNotification_GetSenderID, "GetSenderID" }, // 2182704169
		{ &Z_Construct_UFunction_UPico_RoomInviteNotification_GetSentDateTime, "GetSentDateTime" }, // 283550710
		{ &Z_Construct_UFunction_UPico_RoomInviteNotification_GetSentTime, "GetSentTime" }, // 1805738989
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPico_RoomInviteNotification_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/// @brief UPico_RoomInviteNotification class.\n" },
		{ "IncludePath", "Pico_Notification.h" },
		{ "ModuleRelativePath", "Public/Pico_Notification.h" },
		{ "ToolTip", "@brief UPico_RoomInviteNotification class." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPico_RoomInviteNotification_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPico_RoomInviteNotification>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPico_RoomInviteNotification_Statics::ClassParams = {
		&UPico_RoomInviteNotification::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UPico_RoomInviteNotification_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPico_RoomInviteNotification_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPico_RoomInviteNotification()
	{
		if (!Z_Registration_Info_UClass_UPico_RoomInviteNotification.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPico_RoomInviteNotification.OuterSingleton, Z_Construct_UClass_UPico_RoomInviteNotification_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPico_RoomInviteNotification.OuterSingleton;
	}
	template<> ONLINESUBSYSTEMPICO_API UClass* StaticClass<UPico_RoomInviteNotification>()
	{
		return UPico_RoomInviteNotification::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPico_RoomInviteNotification);
	UPico_RoomInviteNotification::~UPico_RoomInviteNotification() {}
	DEFINE_FUNCTION(UPico_RoomInviteNotificationArray::execGetDebugString)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetDebugString();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPico_RoomInviteNotificationArray::execHasNextPage)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasNextPage();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPico_RoomInviteNotificationArray::execGetTotalSize)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetTotalSize();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPico_RoomInviteNotificationArray::execGetSize)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetSize();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPico_RoomInviteNotificationArray::execGetElement)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UPico_RoomInviteNotification**)Z_Param__Result=P_THIS->GetElement(Z_Param_Index);
		P_NATIVE_END;
	}
	void UPico_RoomInviteNotificationArray::StaticRegisterNativesUPico_RoomInviteNotificationArray()
	{
		UClass* Class = UPico_RoomInviteNotificationArray::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetDebugString", &UPico_RoomInviteNotificationArray::execGetDebugString },
			{ "GetElement", &UPico_RoomInviteNotificationArray::execGetElement },
			{ "GetSize", &UPico_RoomInviteNotificationArray::execGetSize },
			{ "GetTotalSize", &UPico_RoomInviteNotificationArray::execGetTotalSize },
			{ "HasNextPage", &UPico_RoomInviteNotificationArray::execHasNextPage },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPico_RoomInviteNotificationArray_GetDebugString_Statics
	{
		struct Pico_RoomInviteNotificationArray_eventGetDebugString_Parms
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
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPico_RoomInviteNotificationArray_GetDebugString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Pico_RoomInviteNotificationArray_eventGetDebugString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPico_RoomInviteNotificationArray_GetDebugString_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPico_RoomInviteNotificationArray_GetDebugString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPico_RoomInviteNotificationArray_GetDebugString_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pico Platform|Notification|Room Invite Notification Array" },
		{ "ModuleRelativePath", "Public/Pico_Notification.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPico_RoomInviteNotificationArray_GetDebugString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPico_RoomInviteNotificationArray, nullptr, "GetDebugString", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPico_RoomInviteNotificationArray_GetDebugString_Statics::Pico_RoomInviteNotificationArray_eventGetDebugString_Parms), Z_Construct_UFunction_UPico_RoomInviteNotificationArray_GetDebugString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_RoomInviteNotificationArray_GetDebugString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPico_RoomInviteNotificationArray_GetDebugString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_RoomInviteNotificationArray_GetDebugString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPico_RoomInviteNotificationArray_GetDebugString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPico_RoomInviteNotificationArray_GetDebugString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPico_RoomInviteNotificationArray_GetElement_Statics
	{
		struct Pico_RoomInviteNotificationArray_eventGetElement_Parms
		{
			int32 Index;
			UPico_RoomInviteNotification* ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPico_RoomInviteNotificationArray_GetElement_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Pico_RoomInviteNotificationArray_eventGetElement_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPico_RoomInviteNotificationArray_GetElement_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Pico_RoomInviteNotificationArray_eventGetElement_Parms, ReturnValue), Z_Construct_UClass_UPico_RoomInviteNotification_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPico_RoomInviteNotificationArray_GetElement_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPico_RoomInviteNotificationArray_GetElement_Statics::NewProp_Index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPico_RoomInviteNotificationArray_GetElement_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPico_RoomInviteNotificationArray_GetElement_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pico Platform|Notification|Room Invite Notification Array" },
		{ "Comment", "/** @brief Get RoomInviteNotificationArray element form Index.*/" },
		{ "ModuleRelativePath", "Public/Pico_Notification.h" },
		{ "ToolTip", "@brief Get RoomInviteNotificationArray element form Index." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPico_RoomInviteNotificationArray_GetElement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPico_RoomInviteNotificationArray, nullptr, "GetElement", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPico_RoomInviteNotificationArray_GetElement_Statics::Pico_RoomInviteNotificationArray_eventGetElement_Parms), Z_Construct_UFunction_UPico_RoomInviteNotificationArray_GetElement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_RoomInviteNotificationArray_GetElement_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPico_RoomInviteNotificationArray_GetElement_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_RoomInviteNotificationArray_GetElement_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPico_RoomInviteNotificationArray_GetElement()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPico_RoomInviteNotificationArray_GetElement_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPico_RoomInviteNotificationArray_GetSize_Statics
	{
		struct Pico_RoomInviteNotificationArray_eventGetSize_Parms
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
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPico_RoomInviteNotificationArray_GetSize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Pico_RoomInviteNotificationArray_eventGetSize_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPico_RoomInviteNotificationArray_GetSize_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPico_RoomInviteNotificationArray_GetSize_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPico_RoomInviteNotificationArray_GetSize_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pico Platform|Notification|Room Invite Notification Array" },
		{ "Comment", "/** @brief Get the size of RoomInviteNotificationArray .*/" },
		{ "ModuleRelativePath", "Public/Pico_Notification.h" },
		{ "ToolTip", "@brief Get the size of RoomInviteNotificationArray ." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPico_RoomInviteNotificationArray_GetSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPico_RoomInviteNotificationArray, nullptr, "GetSize", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPico_RoomInviteNotificationArray_GetSize_Statics::Pico_RoomInviteNotificationArray_eventGetSize_Parms), Z_Construct_UFunction_UPico_RoomInviteNotificationArray_GetSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_RoomInviteNotificationArray_GetSize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPico_RoomInviteNotificationArray_GetSize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_RoomInviteNotificationArray_GetSize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPico_RoomInviteNotificationArray_GetSize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPico_RoomInviteNotificationArray_GetSize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPico_RoomInviteNotificationArray_GetTotalSize_Statics
	{
		struct Pico_RoomInviteNotificationArray_eventGetTotalSize_Parms
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
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPico_RoomInviteNotificationArray_GetTotalSize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Pico_RoomInviteNotificationArray_eventGetTotalSize_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPico_RoomInviteNotificationArray_GetTotalSize_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPico_RoomInviteNotificationArray_GetTotalSize_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPico_RoomInviteNotificationArray_GetTotalSize_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pico Platform|Notification|Room Invite Notification Array" },
		{ "ModuleRelativePath", "Public/Pico_Notification.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPico_RoomInviteNotificationArray_GetTotalSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPico_RoomInviteNotificationArray, nullptr, "GetTotalSize", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPico_RoomInviteNotificationArray_GetTotalSize_Statics::Pico_RoomInviteNotificationArray_eventGetTotalSize_Parms), Z_Construct_UFunction_UPico_RoomInviteNotificationArray_GetTotalSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_RoomInviteNotificationArray_GetTotalSize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPico_RoomInviteNotificationArray_GetTotalSize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_RoomInviteNotificationArray_GetTotalSize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPico_RoomInviteNotificationArray_GetTotalSize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPico_RoomInviteNotificationArray_GetTotalSize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPico_RoomInviteNotificationArray_HasNextPage_Statics
	{
		struct Pico_RoomInviteNotificationArray_eventHasNextPage_Parms
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
	void Z_Construct_UFunction_UPico_RoomInviteNotificationArray_HasNextPage_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Pico_RoomInviteNotificationArray_eventHasNextPage_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPico_RoomInviteNotificationArray_HasNextPage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(Pico_RoomInviteNotificationArray_eventHasNextPage_Parms), &Z_Construct_UFunction_UPico_RoomInviteNotificationArray_HasNextPage_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPico_RoomInviteNotificationArray_HasNextPage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPico_RoomInviteNotificationArray_HasNextPage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPico_RoomInviteNotificationArray_HasNextPage_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pico Platform|Notification|Room Invite Notification Array" },
		{ "Comment", "/** @brief Get whether the list has the next page.*/" },
		{ "ModuleRelativePath", "Public/Pico_Notification.h" },
		{ "ToolTip", "@brief Get whether the list has the next page." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPico_RoomInviteNotificationArray_HasNextPage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPico_RoomInviteNotificationArray, nullptr, "HasNextPage", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPico_RoomInviteNotificationArray_HasNextPage_Statics::Pico_RoomInviteNotificationArray_eventHasNextPage_Parms), Z_Construct_UFunction_UPico_RoomInviteNotificationArray_HasNextPage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_RoomInviteNotificationArray_HasNextPage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPico_RoomInviteNotificationArray_HasNextPage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_RoomInviteNotificationArray_HasNextPage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPico_RoomInviteNotificationArray_HasNextPage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPico_RoomInviteNotificationArray_HasNextPage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPico_RoomInviteNotificationArray);
	UClass* Z_Construct_UClass_UPico_RoomInviteNotificationArray_NoRegister()
	{
		return UPico_RoomInviteNotificationArray::StaticClass();
	}
	struct Z_Construct_UClass_UPico_RoomInviteNotificationArray_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RoomInviteNotificationArray_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RoomInviteNotificationArray_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_RoomInviteNotificationArray;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPico_RoomInviteNotificationArray_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemPico,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPico_RoomInviteNotificationArray_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPico_RoomInviteNotificationArray_GetDebugString, "GetDebugString" }, // 2856023596
		{ &Z_Construct_UFunction_UPico_RoomInviteNotificationArray_GetElement, "GetElement" }, // 3682567010
		{ &Z_Construct_UFunction_UPico_RoomInviteNotificationArray_GetSize, "GetSize" }, // 1249198632
		{ &Z_Construct_UFunction_UPico_RoomInviteNotificationArray_GetTotalSize, "GetTotalSize" }, // 1920381460
		{ &Z_Construct_UFunction_UPico_RoomInviteNotificationArray_HasNextPage, "HasNextPage" }, // 1047022736
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPico_RoomInviteNotificationArray_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/// @brief UPico_RoomInviteNotificationArray class.\n" },
		{ "IncludePath", "Pico_Notification.h" },
		{ "ModuleRelativePath", "Public/Pico_Notification.h" },
		{ "ToolTip", "@brief UPico_RoomInviteNotificationArray class." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPico_RoomInviteNotificationArray_Statics::NewProp_RoomInviteNotificationArray_Inner = { "RoomInviteNotificationArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UPico_RoomInviteNotification_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPico_RoomInviteNotificationArray_Statics::NewProp_RoomInviteNotificationArray_MetaData[] = {
		{ "ModuleRelativePath", "Public/Pico_Notification.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPico_RoomInviteNotificationArray_Statics::NewProp_RoomInviteNotificationArray = { "RoomInviteNotificationArray", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPico_RoomInviteNotificationArray, RoomInviteNotificationArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UPico_RoomInviteNotificationArray_Statics::NewProp_RoomInviteNotificationArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPico_RoomInviteNotificationArray_Statics::NewProp_RoomInviteNotificationArray_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPico_RoomInviteNotificationArray_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPico_RoomInviteNotificationArray_Statics::NewProp_RoomInviteNotificationArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPico_RoomInviteNotificationArray_Statics::NewProp_RoomInviteNotificationArray,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPico_RoomInviteNotificationArray_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPico_RoomInviteNotificationArray>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPico_RoomInviteNotificationArray_Statics::ClassParams = {
		&UPico_RoomInviteNotificationArray::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPico_RoomInviteNotificationArray_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPico_RoomInviteNotificationArray_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPico_RoomInviteNotificationArray_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPico_RoomInviteNotificationArray_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPico_RoomInviteNotificationArray()
	{
		if (!Z_Registration_Info_UClass_UPico_RoomInviteNotificationArray.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPico_RoomInviteNotificationArray.OuterSingleton, Z_Construct_UClass_UPico_RoomInviteNotificationArray_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPico_RoomInviteNotificationArray.OuterSingleton;
	}
	template<> ONLINESUBSYSTEMPICO_API UClass* StaticClass<UPico_RoomInviteNotificationArray>()
	{
		return UPico_RoomInviteNotificationArray::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPico_RoomInviteNotificationArray);
	UPico_RoomInviteNotificationArray::~UPico_RoomInviteNotificationArray() {}
	struct Z_CompiledInDeferFile_FID_VR_VrVideoUpdateWS_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Notification_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_VR_VrVideoUpdateWS_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Notification_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UOnlinePicoNotificationFunction, UOnlinePicoNotificationFunction::StaticClass, TEXT("UOnlinePicoNotificationFunction"), &Z_Registration_Info_UClass_UOnlinePicoNotificationFunction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOnlinePicoNotificationFunction), 2338462484U) },
		{ Z_Construct_UClass_UPico_RoomInviteNotification, UPico_RoomInviteNotification::StaticClass, TEXT("UPico_RoomInviteNotification"), &Z_Registration_Info_UClass_UPico_RoomInviteNotification, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPico_RoomInviteNotification), 408847821U) },
		{ Z_Construct_UClass_UPico_RoomInviteNotificationArray, UPico_RoomInviteNotificationArray::StaticClass, TEXT("UPico_RoomInviteNotificationArray"), &Z_Registration_Info_UClass_UPico_RoomInviteNotificationArray, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPico_RoomInviteNotificationArray), 3345842238U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_VR_VrVideoUpdateWS_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Notification_h_887052689(TEXT("/Script/OnlineSubsystemPico"),
		Z_CompiledInDeferFile_FID_VR_VrVideoUpdateWS_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Notification_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_VR_VrVideoUpdateWS_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Notification_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
