// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PXR_MotionTrackingFunctionLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EPXREyeTrackingMode : uint8;
enum class EPXRFaceTrackingMode : uint8;
struct FPXREyePupilInfo;
struct FPXREyeTrackingData;
struct FPXREyeTrackingDataGetInfo;
struct FPXREyeTrackingStartInfo;
struct FPXREyeTrackingState;
struct FPXREyeTrackingStopInfo;
struct FPXRFaceTrackingData;
struct FPXRFaceTrackingDataGetInfo;
struct FPXRFaceTrackingStartInfo;
struct FPXRFaceTrackingState;
struct FPXRFaceTrackingStopInfo;
#ifdef PICOXRMOTIONTRACKING_PXR_MotionTrackingFunctionLibrary_generated_h
#error "PXR_MotionTrackingFunctionLibrary.generated.h already included, missing '#pragma once' in PXR_MotionTrackingFunctionLibrary.h"
#endif
#define PICOXRMOTIONTRACKING_PXR_MotionTrackingFunctionLibrary_generated_h

#define FID_VR_VrVideoUpdateWS_Plugins_PICOXR_Source_PICOXRMotionTracking_Public_PXR_MotionTrackingFunctionLibrary_h_15_SPARSE_DATA
#define FID_VR_VrVideoUpdateWS_Plugins_PICOXR_Source_PICOXRMotionTracking_Public_PXR_MotionTrackingFunctionLibrary_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetEyeBlink); \
	DECLARE_FUNCTION(execGetPerEyePose); \
	DECLARE_FUNCTION(execGetEyePupilInfo); \
	DECLARE_FUNCTION(execGetEyeOpenness); \
	DECLARE_FUNCTION(execGetEyeTrackingData); \
	DECLARE_FUNCTION(execStopEyeTracking); \
	DECLARE_FUNCTION(execStartEyeTracking); \
	DECLARE_FUNCTION(execGetEyeTrackingState); \
	DECLARE_FUNCTION(execGetEyeTrackingSupported); \
	DECLARE_FUNCTION(execGetFaceTrackingData); \
	DECLARE_FUNCTION(execStopFaceTracking); \
	DECLARE_FUNCTION(execStartFaceTracking); \
	DECLARE_FUNCTION(execGetFaceTrackingState); \
	DECLARE_FUNCTION(execGetFaceTrackingSupported);


#define FID_VR_VrVideoUpdateWS_Plugins_PICOXR_Source_PICOXRMotionTracking_Public_PXR_MotionTrackingFunctionLibrary_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetEyeBlink); \
	DECLARE_FUNCTION(execGetPerEyePose); \
	DECLARE_FUNCTION(execGetEyePupilInfo); \
	DECLARE_FUNCTION(execGetEyeOpenness); \
	DECLARE_FUNCTION(execGetEyeTrackingData); \
	DECLARE_FUNCTION(execStopEyeTracking); \
	DECLARE_FUNCTION(execStartEyeTracking); \
	DECLARE_FUNCTION(execGetEyeTrackingState); \
	DECLARE_FUNCTION(execGetEyeTrackingSupported); \
	DECLARE_FUNCTION(execGetFaceTrackingData); \
	DECLARE_FUNCTION(execStopFaceTracking); \
	DECLARE_FUNCTION(execStartFaceTracking); \
	DECLARE_FUNCTION(execGetFaceTrackingState); \
	DECLARE_FUNCTION(execGetFaceTrackingSupported);


#define FID_VR_VrVideoUpdateWS_Plugins_PICOXR_Source_PICOXRMotionTracking_Public_PXR_MotionTrackingFunctionLibrary_h_15_ACCESSORS
#define FID_VR_VrVideoUpdateWS_Plugins_PICOXR_Source_PICOXRMotionTracking_Public_PXR_MotionTrackingFunctionLibrary_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPICOXRMotionTrackingFunctionLibrary(); \
	friend struct Z_Construct_UClass_UPICOXRMotionTrackingFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UPICOXRMotionTrackingFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PICOXRMotionTracking"), NO_API) \
	DECLARE_SERIALIZER(UPICOXRMotionTrackingFunctionLibrary)


#define FID_VR_VrVideoUpdateWS_Plugins_PICOXR_Source_PICOXRMotionTracking_Public_PXR_MotionTrackingFunctionLibrary_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUPICOXRMotionTrackingFunctionLibrary(); \
	friend struct Z_Construct_UClass_UPICOXRMotionTrackingFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UPICOXRMotionTrackingFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PICOXRMotionTracking"), NO_API) \
	DECLARE_SERIALIZER(UPICOXRMotionTrackingFunctionLibrary)


#define FID_VR_VrVideoUpdateWS_Plugins_PICOXR_Source_PICOXRMotionTracking_Public_PXR_MotionTrackingFunctionLibrary_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPICOXRMotionTrackingFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPICOXRMotionTrackingFunctionLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPICOXRMotionTrackingFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPICOXRMotionTrackingFunctionLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPICOXRMotionTrackingFunctionLibrary(UPICOXRMotionTrackingFunctionLibrary&&); \
	NO_API UPICOXRMotionTrackingFunctionLibrary(const UPICOXRMotionTrackingFunctionLibrary&); \
public: \
	NO_API virtual ~UPICOXRMotionTrackingFunctionLibrary();


#define FID_VR_VrVideoUpdateWS_Plugins_PICOXR_Source_PICOXRMotionTracking_Public_PXR_MotionTrackingFunctionLibrary_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPICOXRMotionTrackingFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPICOXRMotionTrackingFunctionLibrary(UPICOXRMotionTrackingFunctionLibrary&&); \
	NO_API UPICOXRMotionTrackingFunctionLibrary(const UPICOXRMotionTrackingFunctionLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPICOXRMotionTrackingFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPICOXRMotionTrackingFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPICOXRMotionTrackingFunctionLibrary) \
	NO_API virtual ~UPICOXRMotionTrackingFunctionLibrary();


#define FID_VR_VrVideoUpdateWS_Plugins_PICOXR_Source_PICOXRMotionTracking_Public_PXR_MotionTrackingFunctionLibrary_h_12_PROLOG
#define FID_VR_VrVideoUpdateWS_Plugins_PICOXR_Source_PICOXRMotionTracking_Public_PXR_MotionTrackingFunctionLibrary_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_VR_VrVideoUpdateWS_Plugins_PICOXR_Source_PICOXRMotionTracking_Public_PXR_MotionTrackingFunctionLibrary_h_15_SPARSE_DATA \
	FID_VR_VrVideoUpdateWS_Plugins_PICOXR_Source_PICOXRMotionTracking_Public_PXR_MotionTrackingFunctionLibrary_h_15_RPC_WRAPPERS \
	FID_VR_VrVideoUpdateWS_Plugins_PICOXR_Source_PICOXRMotionTracking_Public_PXR_MotionTrackingFunctionLibrary_h_15_ACCESSORS \
	FID_VR_VrVideoUpdateWS_Plugins_PICOXR_Source_PICOXRMotionTracking_Public_PXR_MotionTrackingFunctionLibrary_h_15_INCLASS \
	FID_VR_VrVideoUpdateWS_Plugins_PICOXR_Source_PICOXRMotionTracking_Public_PXR_MotionTrackingFunctionLibrary_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_VR_VrVideoUpdateWS_Plugins_PICOXR_Source_PICOXRMotionTracking_Public_PXR_MotionTrackingFunctionLibrary_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_VR_VrVideoUpdateWS_Plugins_PICOXR_Source_PICOXRMotionTracking_Public_PXR_MotionTrackingFunctionLibrary_h_15_SPARSE_DATA \
	FID_VR_VrVideoUpdateWS_Plugins_PICOXR_Source_PICOXRMotionTracking_Public_PXR_MotionTrackingFunctionLibrary_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_VR_VrVideoUpdateWS_Plugins_PICOXR_Source_PICOXRMotionTracking_Public_PXR_MotionTrackingFunctionLibrary_h_15_ACCESSORS \
	FID_VR_VrVideoUpdateWS_Plugins_PICOXR_Source_PICOXRMotionTracking_Public_PXR_MotionTrackingFunctionLibrary_h_15_INCLASS_NO_PURE_DECLS \
	FID_VR_VrVideoUpdateWS_Plugins_PICOXR_Source_PICOXRMotionTracking_Public_PXR_MotionTrackingFunctionLibrary_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PICOXRMOTIONTRACKING_API UClass* StaticClass<class UPICOXRMotionTrackingFunctionLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_VR_VrVideoUpdateWS_Plugins_PICOXR_Source_PICOXRMotionTracking_Public_PXR_MotionTrackingFunctionLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
