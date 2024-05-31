// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PICOXRMRC/Private/PXR_MRCCastingCameraActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePXR_MRCCastingCameraActor() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_ASceneCapture2D();
	ENGINE_API UClass* Z_Construct_UClass_ASceneCapture2D_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterial_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
	PICOXRMRC_API UClass* Z_Construct_UClass_APICOXRMRC_CastingCameraActor();
	PICOXRMRC_API UClass* Z_Construct_UClass_APICOXRMRC_CastingCameraActor_NoRegister();
	PICOXRMRC_API UClass* Z_Construct_UClass_UPXRInGameThirdCamState_NoRegister();
	UPackage* Z_Construct_UPackage__Script_PICOXRMRC();
// End Cross Module References
	void APICOXRMRC_CastingCameraActor::StaticRegisterNativesAPICOXRMRC_CastingCameraActor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APICOXRMRC_CastingCameraActor);
	UClass* Z_Construct_UClass_APICOXRMRC_CastingCameraActor_NoRegister()
	{
		return APICOXRMRC_CastingCameraActor::StaticClass();
	}
	struct Z_Construct_UClass_APICOXRMRC_CastingCameraActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ForegroundCaptureActor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ForegroundCaptureActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BackgroundRenderTarget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BackgroundRenderTarget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ForegroundRenderTarget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ForegroundRenderTarget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MRState_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MRState;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_M_MRC_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_M_MRC;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MI_Background_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MI_Background;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MI_Foreground_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MI_Foreground;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APICOXRMRC_CastingCameraActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ASceneCapture2D,
		(UObject* (*)())Z_Construct_UPackage__Script_PICOXRMRC,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APICOXRMRC_CastingCameraActor_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Material Attachment Actor Collision Attachment Actor" },
		{ "IncludePath", "PXR_MRCCastingCameraActor.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Private/PXR_MRCCastingCameraActor.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APICOXRMRC_CastingCameraActor_Statics::NewProp_ForegroundCaptureActor_MetaData[] = {
		{ "ModuleRelativePath", "Private/PXR_MRCCastingCameraActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APICOXRMRC_CastingCameraActor_Statics::NewProp_ForegroundCaptureActor = { "ForegroundCaptureActor", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APICOXRMRC_CastingCameraActor, ForegroundCaptureActor), Z_Construct_UClass_ASceneCapture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APICOXRMRC_CastingCameraActor_Statics::NewProp_ForegroundCaptureActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APICOXRMRC_CastingCameraActor_Statics::NewProp_ForegroundCaptureActor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APICOXRMRC_CastingCameraActor_Statics::NewProp_BackgroundRenderTarget_MetaData[] = {
		{ "ModuleRelativePath", "Private/PXR_MRCCastingCameraActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APICOXRMRC_CastingCameraActor_Statics::NewProp_BackgroundRenderTarget = { "BackgroundRenderTarget", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APICOXRMRC_CastingCameraActor, BackgroundRenderTarget), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APICOXRMRC_CastingCameraActor_Statics::NewProp_BackgroundRenderTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APICOXRMRC_CastingCameraActor_Statics::NewProp_BackgroundRenderTarget_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APICOXRMRC_CastingCameraActor_Statics::NewProp_ForegroundRenderTarget_MetaData[] = {
		{ "ModuleRelativePath", "Private/PXR_MRCCastingCameraActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APICOXRMRC_CastingCameraActor_Statics::NewProp_ForegroundRenderTarget = { "ForegroundRenderTarget", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APICOXRMRC_CastingCameraActor, ForegroundRenderTarget), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APICOXRMRC_CastingCameraActor_Statics::NewProp_ForegroundRenderTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APICOXRMRC_CastingCameraActor_Statics::NewProp_ForegroundRenderTarget_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APICOXRMRC_CastingCameraActor_Statics::NewProp_MRState_MetaData[] = {
		{ "ModuleRelativePath", "Private/PXR_MRCCastingCameraActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APICOXRMRC_CastingCameraActor_Statics::NewProp_MRState = { "MRState", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APICOXRMRC_CastingCameraActor, MRState), Z_Construct_UClass_UPXRInGameThirdCamState_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APICOXRMRC_CastingCameraActor_Statics::NewProp_MRState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APICOXRMRC_CastingCameraActor_Statics::NewProp_MRState_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APICOXRMRC_CastingCameraActor_Statics::NewProp_M_MRC_MetaData[] = {
		{ "ModuleRelativePath", "Private/PXR_MRCCastingCameraActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APICOXRMRC_CastingCameraActor_Statics::NewProp_M_MRC = { "M_MRC", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APICOXRMRC_CastingCameraActor, M_MRC), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APICOXRMRC_CastingCameraActor_Statics::NewProp_M_MRC_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APICOXRMRC_CastingCameraActor_Statics::NewProp_M_MRC_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APICOXRMRC_CastingCameraActor_Statics::NewProp_MI_Background_MetaData[] = {
		{ "ModuleRelativePath", "Private/PXR_MRCCastingCameraActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APICOXRMRC_CastingCameraActor_Statics::NewProp_MI_Background = { "MI_Background", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APICOXRMRC_CastingCameraActor, MI_Background), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APICOXRMRC_CastingCameraActor_Statics::NewProp_MI_Background_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APICOXRMRC_CastingCameraActor_Statics::NewProp_MI_Background_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APICOXRMRC_CastingCameraActor_Statics::NewProp_MI_Foreground_MetaData[] = {
		{ "ModuleRelativePath", "Private/PXR_MRCCastingCameraActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APICOXRMRC_CastingCameraActor_Statics::NewProp_MI_Foreground = { "MI_Foreground", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APICOXRMRC_CastingCameraActor, MI_Foreground), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APICOXRMRC_CastingCameraActor_Statics::NewProp_MI_Foreground_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APICOXRMRC_CastingCameraActor_Statics::NewProp_MI_Foreground_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APICOXRMRC_CastingCameraActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APICOXRMRC_CastingCameraActor_Statics::NewProp_ForegroundCaptureActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APICOXRMRC_CastingCameraActor_Statics::NewProp_BackgroundRenderTarget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APICOXRMRC_CastingCameraActor_Statics::NewProp_ForegroundRenderTarget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APICOXRMRC_CastingCameraActor_Statics::NewProp_MRState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APICOXRMRC_CastingCameraActor_Statics::NewProp_M_MRC,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APICOXRMRC_CastingCameraActor_Statics::NewProp_MI_Background,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APICOXRMRC_CastingCameraActor_Statics::NewProp_MI_Foreground,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APICOXRMRC_CastingCameraActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APICOXRMRC_CastingCameraActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_APICOXRMRC_CastingCameraActor_Statics::ClassParams = {
		&APICOXRMRC_CastingCameraActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_APICOXRMRC_CastingCameraActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_APICOXRMRC_CastingCameraActor_Statics::PropPointers),
		0,
		0x008002A4u,
		METADATA_PARAMS(Z_Construct_UClass_APICOXRMRC_CastingCameraActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APICOXRMRC_CastingCameraActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APICOXRMRC_CastingCameraActor()
	{
		if (!Z_Registration_Info_UClass_APICOXRMRC_CastingCameraActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APICOXRMRC_CastingCameraActor.OuterSingleton, Z_Construct_UClass_APICOXRMRC_CastingCameraActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_APICOXRMRC_CastingCameraActor.OuterSingleton;
	}
	template<> PICOXRMRC_API UClass* StaticClass<APICOXRMRC_CastingCameraActor>()
	{
		return APICOXRMRC_CastingCameraActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(APICOXRMRC_CastingCameraActor);
	APICOXRMRC_CastingCameraActor::~APICOXRMRC_CastingCameraActor() {}
	struct Z_CompiledInDeferFile_FID_VR_VrVideoUpdateWS_Plugins_PICOXR_Source_PICOXRMRC_Private_PXR_MRCCastingCameraActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_VR_VrVideoUpdateWS_Plugins_PICOXR_Source_PICOXRMRC_Private_PXR_MRCCastingCameraActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_APICOXRMRC_CastingCameraActor, APICOXRMRC_CastingCameraActor::StaticClass, TEXT("APICOXRMRC_CastingCameraActor"), &Z_Registration_Info_UClass_APICOXRMRC_CastingCameraActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APICOXRMRC_CastingCameraActor), 2276055389U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_VR_VrVideoUpdateWS_Plugins_PICOXR_Source_PICOXRMRC_Private_PXR_MRCCastingCameraActor_h_2288452188(TEXT("/Script/PICOXRMRC"),
		Z_CompiledInDeferFile_FID_VR_VrVideoUpdateWS_Plugins_PICOXR_Source_PICOXRMRC_Private_PXR_MRCCastingCameraActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_VR_VrVideoUpdateWS_Plugins_PICOXR_Source_PICOXRMRC_Private_PXR_MRCCastingCameraActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
