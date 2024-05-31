// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlineSubsystemPico/Classes/PicoUpdateSessionCallbackProxy.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePicoUpdateSessionCallbackProxy() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UOnlineBlueprintCallProxyBase();
	ENGINE_API UFunction* Z_Construct_UDelegateFunction_Engine_EmptyOnlineDelegate__DelegateSignature();
	ONLINESUBSYSTEMPICO_API UClass* Z_Construct_UClass_UPicoUpdateSessionCallbackProxy();
	ONLINESUBSYSTEMPICO_API UClass* Z_Construct_UClass_UPicoUpdateSessionCallbackProxy_NoRegister();
	UPackage* Z_Construct_UPackage__Script_OnlineSubsystemPico();
// End Cross Module References
	DEFINE_FUNCTION(UPicoUpdateSessionCallbackProxy::execSetSessionEnqueue)
	{
		P_GET_UBOOL(Z_Param_bShouldEnqueueInMatchmakingPool);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UPicoUpdateSessionCallbackProxy**)Z_Param__Result=UPicoUpdateSessionCallbackProxy::SetSessionEnqueue(Z_Param_bShouldEnqueueInMatchmakingPool);
		P_NATIVE_END;
	}
	void UPicoUpdateSessionCallbackProxy::StaticRegisterNativesUPicoUpdateSessionCallbackProxy()
	{
		UClass* Class = UPicoUpdateSessionCallbackProxy::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetSessionEnqueue", &UPicoUpdateSessionCallbackProxy::execSetSessionEnqueue },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPicoUpdateSessionCallbackProxy_SetSessionEnqueue_Statics
	{
		struct PicoUpdateSessionCallbackProxy_eventSetSessionEnqueue_Parms
		{
			bool bShouldEnqueueInMatchmakingPool;
			UPicoUpdateSessionCallbackProxy* ReturnValue;
		};
		static void NewProp_bShouldEnqueueInMatchmakingPool_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldEnqueueInMatchmakingPool;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UPicoUpdateSessionCallbackProxy_SetSessionEnqueue_Statics::NewProp_bShouldEnqueueInMatchmakingPool_SetBit(void* Obj)
	{
		((PicoUpdateSessionCallbackProxy_eventSetSessionEnqueue_Parms*)Obj)->bShouldEnqueueInMatchmakingPool = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPicoUpdateSessionCallbackProxy_SetSessionEnqueue_Statics::NewProp_bShouldEnqueueInMatchmakingPool = { "bShouldEnqueueInMatchmakingPool", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PicoUpdateSessionCallbackProxy_eventSetSessionEnqueue_Parms), &Z_Construct_UFunction_UPicoUpdateSessionCallbackProxy_SetSessionEnqueue_Statics::NewProp_bShouldEnqueueInMatchmakingPool_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPicoUpdateSessionCallbackProxy_SetSessionEnqueue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PicoUpdateSessionCallbackProxy_eventSetSessionEnqueue_Parms, ReturnValue), Z_Construct_UClass_UPicoUpdateSessionCallbackProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPicoUpdateSessionCallbackProxy_SetSessionEnqueue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPicoUpdateSessionCallbackProxy_SetSessionEnqueue_Statics::NewProp_bShouldEnqueueInMatchmakingPool,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPicoUpdateSessionCallbackProxy_SetSessionEnqueue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPicoUpdateSessionCallbackProxy_SetSessionEnqueue_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Pico|Session" },
		{ "Comment", "// Kick off UpdateSession check. Asynchronous-- see OnUpdateCompleteDelegate for results.\n" },
		{ "ModuleRelativePath", "Classes/PicoUpdateSessionCallbackProxy.h" },
		{ "ToolTip", "Kick off UpdateSession check. Asynchronous-- see OnUpdateCompleteDelegate for results." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPicoUpdateSessionCallbackProxy_SetSessionEnqueue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPicoUpdateSessionCallbackProxy, nullptr, "SetSessionEnqueue", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPicoUpdateSessionCallbackProxy_SetSessionEnqueue_Statics::PicoUpdateSessionCallbackProxy_eventSetSessionEnqueue_Parms), Z_Construct_UFunction_UPicoUpdateSessionCallbackProxy_SetSessionEnqueue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPicoUpdateSessionCallbackProxy_SetSessionEnqueue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPicoUpdateSessionCallbackProxy_SetSessionEnqueue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPicoUpdateSessionCallbackProxy_SetSessionEnqueue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPicoUpdateSessionCallbackProxy_SetSessionEnqueue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPicoUpdateSessionCallbackProxy_SetSessionEnqueue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPicoUpdateSessionCallbackProxy);
	UClass* Z_Construct_UClass_UPicoUpdateSessionCallbackProxy_NoRegister()
	{
		return UPicoUpdateSessionCallbackProxy::StaticClass();
	}
	struct Z_Construct_UClass_UPicoUpdateSessionCallbackProxy_Statics
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
	UObject* (*const Z_Construct_UClass_UPicoUpdateSessionCallbackProxy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UOnlineBlueprintCallProxyBase,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemPico,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPicoUpdateSessionCallbackProxy_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPicoUpdateSessionCallbackProxy_SetSessionEnqueue, "SetSessionEnqueue" }, // 2740922159
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPicoUpdateSessionCallbackProxy_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Exposes UpdateSession of the Platform SDK for blueprint use.\n */" },
		{ "IncludePath", "PicoUpdateSessionCallbackProxy.h" },
		{ "ModuleRelativePath", "Classes/PicoUpdateSessionCallbackProxy.h" },
		{ "ToolTip", "Exposes UpdateSession of the Platform SDK for blueprint use." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPicoUpdateSessionCallbackProxy_Statics::NewProp_OnSuccess_MetaData[] = {
		{ "Comment", "// Called when the session was updated successfully\n" },
		{ "ModuleRelativePath", "Classes/PicoUpdateSessionCallbackProxy.h" },
		{ "ToolTip", "Called when the session was updated successfully" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UPicoUpdateSessionCallbackProxy_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPicoUpdateSessionCallbackProxy, OnSuccess), Z_Construct_UDelegateFunction_Engine_EmptyOnlineDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UPicoUpdateSessionCallbackProxy_Statics::NewProp_OnSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPicoUpdateSessionCallbackProxy_Statics::NewProp_OnSuccess_MetaData)) }; // 2258189322
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPicoUpdateSessionCallbackProxy_Statics::NewProp_OnFailure_MetaData[] = {
		{ "Comment", "// Called when there was an error updating the session\n" },
		{ "ModuleRelativePath", "Classes/PicoUpdateSessionCallbackProxy.h" },
		{ "ToolTip", "Called when there was an error updating the session" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UPicoUpdateSessionCallbackProxy_Statics::NewProp_OnFailure = { "OnFailure", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPicoUpdateSessionCallbackProxy, OnFailure), Z_Construct_UDelegateFunction_Engine_EmptyOnlineDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UPicoUpdateSessionCallbackProxy_Statics::NewProp_OnFailure_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPicoUpdateSessionCallbackProxy_Statics::NewProp_OnFailure_MetaData)) }; // 2258189322
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPicoUpdateSessionCallbackProxy_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPicoUpdateSessionCallbackProxy_Statics::NewProp_OnSuccess,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPicoUpdateSessionCallbackProxy_Statics::NewProp_OnFailure,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPicoUpdateSessionCallbackProxy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPicoUpdateSessionCallbackProxy>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPicoUpdateSessionCallbackProxy_Statics::ClassParams = {
		&UPicoUpdateSessionCallbackProxy::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPicoUpdateSessionCallbackProxy_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPicoUpdateSessionCallbackProxy_Statics::PropPointers),
		0,
		0x008800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPicoUpdateSessionCallbackProxy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPicoUpdateSessionCallbackProxy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPicoUpdateSessionCallbackProxy()
	{
		if (!Z_Registration_Info_UClass_UPicoUpdateSessionCallbackProxy.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPicoUpdateSessionCallbackProxy.OuterSingleton, Z_Construct_UClass_UPicoUpdateSessionCallbackProxy_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPicoUpdateSessionCallbackProxy.OuterSingleton;
	}
	template<> ONLINESUBSYSTEMPICO_API UClass* StaticClass<UPicoUpdateSessionCallbackProxy>()
	{
		return UPicoUpdateSessionCallbackProxy::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPicoUpdateSessionCallbackProxy);
	UPicoUpdateSessionCallbackProxy::~UPicoUpdateSessionCallbackProxy() {}
	struct Z_CompiledInDeferFile_FID_VR_VrVideoUpdateWS_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Classes_PicoUpdateSessionCallbackProxy_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_VR_VrVideoUpdateWS_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Classes_PicoUpdateSessionCallbackProxy_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPicoUpdateSessionCallbackProxy, UPicoUpdateSessionCallbackProxy::StaticClass, TEXT("UPicoUpdateSessionCallbackProxy"), &Z_Registration_Info_UClass_UPicoUpdateSessionCallbackProxy, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPicoUpdateSessionCallbackProxy), 2126719699U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_VR_VrVideoUpdateWS_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Classes_PicoUpdateSessionCallbackProxy_h_718215874(TEXT("/Script/OnlineSubsystemPico"),
		Z_CompiledInDeferFile_FID_VR_VrVideoUpdateWS_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Classes_PicoUpdateSessionCallbackProxy_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_VR_VrVideoUpdateWS_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Classes_PicoUpdateSessionCallbackProxy_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
