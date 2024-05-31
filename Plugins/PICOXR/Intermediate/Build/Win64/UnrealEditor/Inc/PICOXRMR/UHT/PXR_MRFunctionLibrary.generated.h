// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PXR_MRFunctionLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UActorComponent;
class UObject;
class UPICOAnchorComponent;
enum class EPICOAnchorComponentTypeFlag : uint8;
enum class EPICOAnchorSceneLabel : uint8;
struct FAnchorLoadResult;
struct FPICOAnchor;
struct FPICOAnchorPlaneBoundaryInfo;
struct FPICOAnchorPlanePolygonInfo;
struct FPICOAnchorUUID;
struct FPICOAnchorVolumeInfo;
#ifdef PICOXRMR_PXR_MRFunctionLibrary_generated_h
#error "PXR_MRFunctionLibrary.generated.h already included, missing '#pragma once' in PXR_MRFunctionLibrary.h"
#endif
#define PICOXRMR_PXR_MRFunctionLibrary_generated_h

#define FID_VR_VrVideoUpdateWS_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_MRFunctionLibrary_h_14_SPARSE_DATA
#define FID_VR_VrVideoUpdateWS_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_MRFunctionLibrary_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execPXR_FromUUIDToString); \
	DECLARE_FUNCTION(execPXR_FromAnchorToString); \
	DECLARE_FUNCTION(execPXR_IsAnchorValidForComponent); \
	DECLARE_FUNCTION(execPXR_IsAnchorValidForActor); \
	DECLARE_FUNCTION(execPXR_SpawnActorFromLoadResult); \
	DECLARE_FUNCTION(execPXR_GetAnchorPoseByActor); \
	DECLARE_FUNCTION(execPXR_GetAnchorPoseByComponent); \
	DECLARE_FUNCTION(execPXR_GetAnchorVolumeInfo); \
	DECLARE_FUNCTION(execPXR_GetAnchorPlanePolygonInfo); \
	DECLARE_FUNCTION(execPXR_GetAnchorPlaneBoundaryInfo); \
	DECLARE_FUNCTION(execPXR_GetAnchorSceneLabel); \
	DECLARE_FUNCTION(execPXR_GetAnchorComponentFlags); \
	DECLARE_FUNCTION(execPXR_GetAnchorEntityUuid);


#define FID_VR_VrVideoUpdateWS_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_MRFunctionLibrary_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execPXR_FromUUIDToString); \
	DECLARE_FUNCTION(execPXR_FromAnchorToString); \
	DECLARE_FUNCTION(execPXR_IsAnchorValidForComponent); \
	DECLARE_FUNCTION(execPXR_IsAnchorValidForActor); \
	DECLARE_FUNCTION(execPXR_SpawnActorFromLoadResult); \
	DECLARE_FUNCTION(execPXR_GetAnchorPoseByActor); \
	DECLARE_FUNCTION(execPXR_GetAnchorPoseByComponent); \
	DECLARE_FUNCTION(execPXR_GetAnchorVolumeInfo); \
	DECLARE_FUNCTION(execPXR_GetAnchorPlanePolygonInfo); \
	DECLARE_FUNCTION(execPXR_GetAnchorPlaneBoundaryInfo); \
	DECLARE_FUNCTION(execPXR_GetAnchorSceneLabel); \
	DECLARE_FUNCTION(execPXR_GetAnchorComponentFlags); \
	DECLARE_FUNCTION(execPXR_GetAnchorEntityUuid);


#define FID_VR_VrVideoUpdateWS_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_MRFunctionLibrary_h_14_ACCESSORS
#define FID_VR_VrVideoUpdateWS_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_MRFunctionLibrary_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPICOXRMRFunctionLibrary(); \
	friend struct Z_Construct_UClass_UPICOXRMRFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UPICOXRMRFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PICOXRMR"), NO_API) \
	DECLARE_SERIALIZER(UPICOXRMRFunctionLibrary)


#define FID_VR_VrVideoUpdateWS_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_MRFunctionLibrary_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUPICOXRMRFunctionLibrary(); \
	friend struct Z_Construct_UClass_UPICOXRMRFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UPICOXRMRFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PICOXRMR"), NO_API) \
	DECLARE_SERIALIZER(UPICOXRMRFunctionLibrary)


#define FID_VR_VrVideoUpdateWS_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_MRFunctionLibrary_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPICOXRMRFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPICOXRMRFunctionLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPICOXRMRFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPICOXRMRFunctionLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPICOXRMRFunctionLibrary(UPICOXRMRFunctionLibrary&&); \
	NO_API UPICOXRMRFunctionLibrary(const UPICOXRMRFunctionLibrary&); \
public: \
	NO_API virtual ~UPICOXRMRFunctionLibrary();


#define FID_VR_VrVideoUpdateWS_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_MRFunctionLibrary_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPICOXRMRFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPICOXRMRFunctionLibrary(UPICOXRMRFunctionLibrary&&); \
	NO_API UPICOXRMRFunctionLibrary(const UPICOXRMRFunctionLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPICOXRMRFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPICOXRMRFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPICOXRMRFunctionLibrary) \
	NO_API virtual ~UPICOXRMRFunctionLibrary();


#define FID_VR_VrVideoUpdateWS_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_MRFunctionLibrary_h_11_PROLOG
#define FID_VR_VrVideoUpdateWS_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_MRFunctionLibrary_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_VR_VrVideoUpdateWS_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_MRFunctionLibrary_h_14_SPARSE_DATA \
	FID_VR_VrVideoUpdateWS_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_MRFunctionLibrary_h_14_RPC_WRAPPERS \
	FID_VR_VrVideoUpdateWS_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_MRFunctionLibrary_h_14_ACCESSORS \
	FID_VR_VrVideoUpdateWS_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_MRFunctionLibrary_h_14_INCLASS \
	FID_VR_VrVideoUpdateWS_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_MRFunctionLibrary_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_VR_VrVideoUpdateWS_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_MRFunctionLibrary_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_VR_VrVideoUpdateWS_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_MRFunctionLibrary_h_14_SPARSE_DATA \
	FID_VR_VrVideoUpdateWS_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_MRFunctionLibrary_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_VR_VrVideoUpdateWS_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_MRFunctionLibrary_h_14_ACCESSORS \
	FID_VR_VrVideoUpdateWS_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_MRFunctionLibrary_h_14_INCLASS_NO_PURE_DECLS \
	FID_VR_VrVideoUpdateWS_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_MRFunctionLibrary_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PICOXRMR_API UClass* StaticClass<class UPICOXRMRFunctionLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_VR_VrVideoUpdateWS_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_MRFunctionLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
