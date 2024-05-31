// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PICOXRInput/Private/PXR_HandComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePXR_HandComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UPoseableMeshComponent();
	PICOXRINPUT_API UClass* Z_Construct_UClass_UPICOXRHandComponent();
	PICOXRINPUT_API UClass* Z_Construct_UClass_UPICOXRHandComponent_NoRegister();
	PICOXRINPUT_API UEnum* Z_Construct_UEnum_PICOXRInput_EPICOXRHandJoint();
	PICOXRINPUT_API UEnum* Z_Construct_UEnum_PICOXRInput_EPICOXRHandType();
	UPackage* Z_Construct_UPackage__Script_PICOXRInput();
// End Cross Module References
	void UPICOXRHandComponent::StaticRegisterNativesUPICOXRHandComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPICOXRHandComponent);
	UClass* Z_Construct_UClass_UPICOXRHandComponent_NoRegister()
	{
		return UPICOXRHandComponent::StaticClass();
	}
	struct Z_Construct_UClass_UPICOXRHandComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_SkeletonType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SkeletonType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SkeletonType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHideByConfidence_MetaData[];
#endif
		static void NewProp_bHideByConfidence_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHideByConfidence;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUpdateHandScale_MetaData[];
#endif
		static void NewProp_bUpdateHandScale_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUpdateHandScale;
		static const UECodeGen_Private::FNamePropertyParams NewProp_BoneNameMappings_ValueProp;
		static const UECodeGen_Private::FBytePropertyParams NewProp_BoneNameMappings_Key_KeyProp_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_BoneNameMappings_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoneNameMappings_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_BoneNameMappings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPICOXRHandComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPoseableMeshComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_PICOXRInput,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPICOXRHandComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "PICOXRComponent" },
		{ "HideCategories", "Object Physics Object Mobility Trigger" },
		{ "IncludePath", "PXR_HandComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Private/PXR_HandComponent.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPICOXRHandComponent_Statics::NewProp_SkeletonType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPICOXRHandComponent_Statics::NewProp_SkeletonType_MetaData[] = {
		{ "Category", "HandProperties" },
		{ "ModuleRelativePath", "Private/PXR_HandComponent.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPICOXRHandComponent_Statics::NewProp_SkeletonType = { "SkeletonType", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPICOXRHandComponent, SkeletonType), Z_Construct_UEnum_PICOXRInput_EPICOXRHandType, METADATA_PARAMS(Z_Construct_UClass_UPICOXRHandComponent_Statics::NewProp_SkeletonType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPICOXRHandComponent_Statics::NewProp_SkeletonType_MetaData)) }; // 4144937550
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPICOXRHandComponent_Statics::NewProp_bHideByConfidence_MetaData[] = {
		{ "Category", "HandProperties" },
		{ "Comment", "/** Behavior for when hand tracking loses high confidence tracking */" },
		{ "ModuleRelativePath", "Private/PXR_HandComponent.h" },
		{ "ToolTip", "Behavior for when hand tracking loses high confidence tracking" },
	};
#endif
	void Z_Construct_UClass_UPICOXRHandComponent_Statics::NewProp_bHideByConfidence_SetBit(void* Obj)
	{
		((UPICOXRHandComponent*)Obj)->bHideByConfidence = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPICOXRHandComponent_Statics::NewProp_bHideByConfidence = { "bHideByConfidence", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UPICOXRHandComponent), &Z_Construct_UClass_UPICOXRHandComponent_Statics::NewProp_bHideByConfidence_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPICOXRHandComponent_Statics::NewProp_bHideByConfidence_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPICOXRHandComponent_Statics::NewProp_bHideByConfidence_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPICOXRHandComponent_Statics::NewProp_bUpdateHandScale_MetaData[] = {
		{ "Category", "HandProperties" },
		{ "Comment", "/** Whether or not the hand scale should update based on values from the runtime to match the users hand scale */" },
		{ "ModuleRelativePath", "Private/PXR_HandComponent.h" },
		{ "ToolTip", "Whether or not the hand scale should update based on values from the runtime to match the users hand scale" },
	};
#endif
	void Z_Construct_UClass_UPICOXRHandComponent_Statics::NewProp_bUpdateHandScale_SetBit(void* Obj)
	{
		((UPICOXRHandComponent*)Obj)->bUpdateHandScale = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPICOXRHandComponent_Statics::NewProp_bUpdateHandScale = { "bUpdateHandScale", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UPICOXRHandComponent), &Z_Construct_UClass_UPICOXRHandComponent_Statics::NewProp_bUpdateHandScale_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPICOXRHandComponent_Statics::NewProp_bUpdateHandScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPICOXRHandComponent_Statics::NewProp_bUpdateHandScale_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPICOXRHandComponent_Statics::NewProp_BoneNameMappings_ValueProp = { "BoneNameMappings", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPICOXRHandComponent_Statics::NewProp_BoneNameMappings_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPICOXRHandComponent_Statics::NewProp_BoneNameMappings_Key_KeyProp = { "BoneNameMappings_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UEnum_PICOXRInput_EPICOXRHandJoint, METADATA_PARAMS(nullptr, 0) }; // 2156400413
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPICOXRHandComponent_Statics::NewProp_BoneNameMappings_MetaData[] = {
		{ "Category", "CustomSkeletalMesh" },
		{ "Comment", "/** Bone mapping for custom hand skeletal meshes */" },
		{ "ModuleRelativePath", "Private/PXR_HandComponent.h" },
		{ "ToolTip", "Bone mapping for custom hand skeletal meshes" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UPICOXRHandComponent_Statics::NewProp_BoneNameMappings = { "BoneNameMappings", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPICOXRHandComponent, BoneNameMappings), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UPICOXRHandComponent_Statics::NewProp_BoneNameMappings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPICOXRHandComponent_Statics::NewProp_BoneNameMappings_MetaData)) }; // 2156400413
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPICOXRHandComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPICOXRHandComponent_Statics::NewProp_SkeletonType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPICOXRHandComponent_Statics::NewProp_SkeletonType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPICOXRHandComponent_Statics::NewProp_bHideByConfidence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPICOXRHandComponent_Statics::NewProp_bUpdateHandScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPICOXRHandComponent_Statics::NewProp_BoneNameMappings_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPICOXRHandComponent_Statics::NewProp_BoneNameMappings_Key_KeyProp_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPICOXRHandComponent_Statics::NewProp_BoneNameMappings_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPICOXRHandComponent_Statics::NewProp_BoneNameMappings,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPICOXRHandComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPICOXRHandComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPICOXRHandComponent_Statics::ClassParams = {
		&UPICOXRHandComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPICOXRHandComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPICOXRHandComponent_Statics::PropPointers),
		0,
		0x00B010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UPICOXRHandComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPICOXRHandComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPICOXRHandComponent()
	{
		if (!Z_Registration_Info_UClass_UPICOXRHandComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPICOXRHandComponent.OuterSingleton, Z_Construct_UClass_UPICOXRHandComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPICOXRHandComponent.OuterSingleton;
	}
	template<> PICOXRINPUT_API UClass* StaticClass<UPICOXRHandComponent>()
	{
		return UPICOXRHandComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPICOXRHandComponent);
	UPICOXRHandComponent::~UPICOXRHandComponent() {}
	struct Z_CompiledInDeferFile_FID_VR_VrVideoUpdateWS_Plugins_PICOXR_Source_PICOXRInput_Private_PXR_HandComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_VR_VrVideoUpdateWS_Plugins_PICOXR_Source_PICOXRInput_Private_PXR_HandComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPICOXRHandComponent, UPICOXRHandComponent::StaticClass, TEXT("UPICOXRHandComponent"), &Z_Registration_Info_UClass_UPICOXRHandComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPICOXRHandComponent), 182981044U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_VR_VrVideoUpdateWS_Plugins_PICOXR_Source_PICOXRInput_Private_PXR_HandComponent_h_3579366191(TEXT("/Script/PICOXRInput"),
		Z_CompiledInDeferFile_FID_VR_VrVideoUpdateWS_Plugins_PICOXR_Source_PICOXRInput_Private_PXR_HandComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_VR_VrVideoUpdateWS_Plugins_PICOXR_Source_PICOXRInput_Private_PXR_HandComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
