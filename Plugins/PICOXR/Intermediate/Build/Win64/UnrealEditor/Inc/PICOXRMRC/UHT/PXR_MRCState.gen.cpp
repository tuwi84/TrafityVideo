// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PICOXRMRC/Private/PXR_MRCState.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePXR_MRCState() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	PICOXRMRC_API UClass* Z_Construct_UClass_UPXRInGameThirdCamState();
	PICOXRMRC_API UClass* Z_Construct_UClass_UPXRInGameThirdCamState_NoRegister();
	UPackage* Z_Construct_UPackage__Script_PICOXRMRC();
// End Cross Module References
	void UPXRInGameThirdCamState::StaticRegisterNativesUPXRInGameThirdCamState()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPXRInGameThirdCamState);
	UClass* Z_Construct_UClass_UPXRInGameThirdCamState_NoRegister()
	{
		return UPXRInGameThirdCamState::StaticClass();
	}
	struct Z_Construct_UClass_UPXRInGameThirdCamState_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPXRInGameThirdCamState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_PICOXRMRC,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPXRInGameThirdCamState_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PXR_MRCState.h" },
		{ "ModuleRelativePath", "Private/PXR_MRCState.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPXRInGameThirdCamState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPXRInGameThirdCamState>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPXRInGameThirdCamState_Statics::ClassParams = {
		&UPXRInGameThirdCamState::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPXRInGameThirdCamState_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPXRInGameThirdCamState_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPXRInGameThirdCamState()
	{
		if (!Z_Registration_Info_UClass_UPXRInGameThirdCamState.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPXRInGameThirdCamState.OuterSingleton, Z_Construct_UClass_UPXRInGameThirdCamState_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPXRInGameThirdCamState.OuterSingleton;
	}
	template<> PICOXRMRC_API UClass* StaticClass<UPXRInGameThirdCamState>()
	{
		return UPXRInGameThirdCamState::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPXRInGameThirdCamState);
	UPXRInGameThirdCamState::~UPXRInGameThirdCamState() {}
	struct Z_CompiledInDeferFile_FID_VR_VrVideoUpdateWS_Plugins_PICOXR_Source_PICOXRMRC_Private_PXR_MRCState_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_VR_VrVideoUpdateWS_Plugins_PICOXR_Source_PICOXRMRC_Private_PXR_MRCState_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPXRInGameThirdCamState, UPXRInGameThirdCamState::StaticClass, TEXT("UPXRInGameThirdCamState"), &Z_Registration_Info_UClass_UPXRInGameThirdCamState, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPXRInGameThirdCamState), 2872319704U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_VR_VrVideoUpdateWS_Plugins_PICOXR_Source_PICOXRMRC_Private_PXR_MRCState_h_2448217995(TEXT("/Script/PICOXRMRC"),
		Z_CompiledInDeferFile_FID_VR_VrVideoUpdateWS_Plugins_PICOXR_Source_PICOXRMRC_Private_PXR_MRCState_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_VR_VrVideoUpdateWS_Plugins_PICOXR_Source_PICOXRMRC_Private_PXR_MRCState_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
