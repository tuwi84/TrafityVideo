// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PXR_MRCFunctionLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USceneComponent;
class UTextureRenderTarget2D;
#ifdef PICOXRMRC_PXR_MRCFunctionLibrary_generated_h
#error "PXR_MRCFunctionLibrary.generated.h already included, missing '#pragma once' in PXR_MRCFunctionLibrary.h"
#endif
#define PICOXRMRC_PXR_MRCFunctionLibrary_generated_h

#define FID_VR_VrVideoUpdateWS_Plugins_PICOXR_Source_PICOXRMRC_Public_PXR_MRCFunctionLibrary_h_19_SPARSE_DATA
#define FID_VR_VrVideoUpdateWS_Plugins_PICOXR_Source_PICOXRMRC_Public_PXR_MRCFunctionLibrary_h_19_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execUpdateMRCCameraZ); \
	DECLARE_FUNCTION(execGetMRCRelativePose); \
	DECLARE_FUNCTION(execSetMRCUseCustomTrans); \
	DECLARE_FUNCTION(execSetMRCTrackingReference); \
	DECLARE_FUNCTION(execEnableForegroundMRC); \
	DECLARE_FUNCTION(execGetInGameThirdCameraRT); \
	DECLARE_FUNCTION(execIsMrcActivated);


#define FID_VR_VrVideoUpdateWS_Plugins_PICOXR_Source_PICOXRMRC_Public_PXR_MRCFunctionLibrary_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execUpdateMRCCameraZ); \
	DECLARE_FUNCTION(execGetMRCRelativePose); \
	DECLARE_FUNCTION(execSetMRCUseCustomTrans); \
	DECLARE_FUNCTION(execSetMRCTrackingReference); \
	DECLARE_FUNCTION(execEnableForegroundMRC); \
	DECLARE_FUNCTION(execGetInGameThirdCameraRT); \
	DECLARE_FUNCTION(execIsMrcActivated);


#define FID_VR_VrVideoUpdateWS_Plugins_PICOXR_Source_PICOXRMRC_Public_PXR_MRCFunctionLibrary_h_19_ACCESSORS
#define FID_VR_VrVideoUpdateWS_Plugins_PICOXR_Source_PICOXRMRC_Public_PXR_MRCFunctionLibrary_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPICOXRMRCFunctionLibrary(); \
	friend struct Z_Construct_UClass_UPICOXRMRCFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UPICOXRMRCFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PICOXRMRC"), NO_API) \
	DECLARE_SERIALIZER(UPICOXRMRCFunctionLibrary)


#define FID_VR_VrVideoUpdateWS_Plugins_PICOXR_Source_PICOXRMRC_Public_PXR_MRCFunctionLibrary_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUPICOXRMRCFunctionLibrary(); \
	friend struct Z_Construct_UClass_UPICOXRMRCFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UPICOXRMRCFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PICOXRMRC"), NO_API) \
	DECLARE_SERIALIZER(UPICOXRMRCFunctionLibrary)


#define FID_VR_VrVideoUpdateWS_Plugins_PICOXR_Source_PICOXRMRC_Public_PXR_MRCFunctionLibrary_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPICOXRMRCFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPICOXRMRCFunctionLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPICOXRMRCFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPICOXRMRCFunctionLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPICOXRMRCFunctionLibrary(UPICOXRMRCFunctionLibrary&&); \
	NO_API UPICOXRMRCFunctionLibrary(const UPICOXRMRCFunctionLibrary&); \
public: \
	NO_API virtual ~UPICOXRMRCFunctionLibrary();


#define FID_VR_VrVideoUpdateWS_Plugins_PICOXR_Source_PICOXRMRC_Public_PXR_MRCFunctionLibrary_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPICOXRMRCFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPICOXRMRCFunctionLibrary(UPICOXRMRCFunctionLibrary&&); \
	NO_API UPICOXRMRCFunctionLibrary(const UPICOXRMRCFunctionLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPICOXRMRCFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPICOXRMRCFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPICOXRMRCFunctionLibrary) \
	NO_API virtual ~UPICOXRMRCFunctionLibrary();


#define FID_VR_VrVideoUpdateWS_Plugins_PICOXR_Source_PICOXRMRC_Public_PXR_MRCFunctionLibrary_h_16_PROLOG
#define FID_VR_VrVideoUpdateWS_Plugins_PICOXR_Source_PICOXRMRC_Public_PXR_MRCFunctionLibrary_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_VR_VrVideoUpdateWS_Plugins_PICOXR_Source_PICOXRMRC_Public_PXR_MRCFunctionLibrary_h_19_SPARSE_DATA \
	FID_VR_VrVideoUpdateWS_Plugins_PICOXR_Source_PICOXRMRC_Public_PXR_MRCFunctionLibrary_h_19_RPC_WRAPPERS \
	FID_VR_VrVideoUpdateWS_Plugins_PICOXR_Source_PICOXRMRC_Public_PXR_MRCFunctionLibrary_h_19_ACCESSORS \
	FID_VR_VrVideoUpdateWS_Plugins_PICOXR_Source_PICOXRMRC_Public_PXR_MRCFunctionLibrary_h_19_INCLASS \
	FID_VR_VrVideoUpdateWS_Plugins_PICOXR_Source_PICOXRMRC_Public_PXR_MRCFunctionLibrary_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_VR_VrVideoUpdateWS_Plugins_PICOXR_Source_PICOXRMRC_Public_PXR_MRCFunctionLibrary_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_VR_VrVideoUpdateWS_Plugins_PICOXR_Source_PICOXRMRC_Public_PXR_MRCFunctionLibrary_h_19_SPARSE_DATA \
	FID_VR_VrVideoUpdateWS_Plugins_PICOXR_Source_PICOXRMRC_Public_PXR_MRCFunctionLibrary_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_VR_VrVideoUpdateWS_Plugins_PICOXR_Source_PICOXRMRC_Public_PXR_MRCFunctionLibrary_h_19_ACCESSORS \
	FID_VR_VrVideoUpdateWS_Plugins_PICOXR_Source_PICOXRMRC_Public_PXR_MRCFunctionLibrary_h_19_INCLASS_NO_PURE_DECLS \
	FID_VR_VrVideoUpdateWS_Plugins_PICOXR_Source_PICOXRMRC_Public_PXR_MRCFunctionLibrary_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PICOXRMRC_API UClass* StaticClass<class UPICOXRMRCFunctionLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_VR_VrVideoUpdateWS_Plugins_PICOXR_Source_PICOXRMRC_Public_PXR_MRCFunctionLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
