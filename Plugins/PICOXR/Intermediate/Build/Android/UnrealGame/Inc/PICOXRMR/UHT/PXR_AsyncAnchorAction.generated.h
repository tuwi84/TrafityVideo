// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PXR_AsyncAnchorAction.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPICOAnchorComponent;
class UPICOClearAnchorEntity_AsyncAction;
class UPICOCreateAnchorEntity_AsyncAction;
class UPICODestroyAnchorEntityAction;
class UPICOLoadAnchorEntity_AsyncAction;
class UPICOPersistAnchorEntity_AsyncAction;
class UPICOStartSpatialSceneCapture_AsyncAction;
class UPICOUnpersistAnchorEntity_AsyncAction;
enum class EPICOPersistLocation : uint8;
enum class EPICOResult : uint8;
enum class EPICOSpatialSceneCaptureStatus : uint8;
struct FAnchorLoadResult;
struct FPICOAnchorLoadInfo;
#ifdef PICOXRMR_PXR_AsyncAnchorAction_generated_h
#error "PXR_AsyncAnchorAction.generated.h already included, missing '#pragma once' in PXR_AsyncAnchorAction.h"
#endif
#define PICOXRMR_PXR_AsyncAnchorAction_generated_h

#define FID_VR_VrVideoUpdateWS_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_17_DELEGATE \
struct _Script_PICOXRMR_eventPICOCreateAnchorEntityActionSuccess_Parms \
{ \
	EPICOResult Result; \
	UPICOAnchorComponent* AnchorEntityComponent; \
}; \
static inline void FPICOCreateAnchorEntityActionSuccess_DelegateWrapper(const FMulticastScriptDelegate& PICOCreateAnchorEntityActionSuccess, EPICOResult Result, UPICOAnchorComponent* AnchorEntityComponent) \
{ \
	_Script_PICOXRMR_eventPICOCreateAnchorEntityActionSuccess_Parms Parms; \
	Parms.Result=Result; \
	Parms.AnchorEntityComponent=AnchorEntityComponent; \
	PICOCreateAnchorEntityActionSuccess.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_VR_VrVideoUpdateWS_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_18_DELEGATE \
struct _Script_PICOXRMR_eventPICOCreateAnchorEntityActionFailure_Parms \
{ \
	EPICOResult Result; \
}; \
static inline void FPICOCreateAnchorEntityActionFailure_DelegateWrapper(const FMulticastScriptDelegate& PICOCreateAnchorEntityActionFailure, EPICOResult Result) \
{ \
	_Script_PICOXRMR_eventPICOCreateAnchorEntityActionFailure_Parms Parms; \
	Parms.Result=Result; \
	PICOCreateAnchorEntityActionFailure.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_VR_VrVideoUpdateWS_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_20_DELEGATE \
struct _Script_PICOXRMR_eventPICODestroyAnchorEntityActionSuccess_Parms \
{ \
	EPICOResult Result; \
}; \
static inline void FPICODestroyAnchorEntityActionSuccess_DelegateWrapper(const FMulticastScriptDelegate& PICODestroyAnchorEntityActionSuccess, EPICOResult Result) \
{ \
	_Script_PICOXRMR_eventPICODestroyAnchorEntityActionSuccess_Parms Parms; \
	Parms.Result=Result; \
	PICODestroyAnchorEntityActionSuccess.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_VR_VrVideoUpdateWS_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_21_DELEGATE \
struct _Script_PICOXRMR_eventPICODestroyAnchorEntityActionFailure_Parms \
{ \
	EPICOResult Result; \
}; \
static inline void FPICODestroyAnchorEntityActionFailure_DelegateWrapper(const FMulticastScriptDelegate& PICODestroyAnchorEntityActionFailure, EPICOResult Result) \
{ \
	_Script_PICOXRMR_eventPICODestroyAnchorEntityActionFailure_Parms Parms; \
	Parms.Result=Result; \
	PICODestroyAnchorEntityActionFailure.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_VR_VrVideoUpdateWS_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_23_DELEGATE \
struct _Script_PICOXRMR_eventPICOPersistAnchorEntityActionSuccess_Parms \
{ \
	EPICOResult Result; \
	TArray<UPICOAnchorComponent*> AnchorList; \
}; \
static inline void FPICOPersistAnchorEntityActionSuccess_DelegateWrapper(const FMulticastScriptDelegate& PICOPersistAnchorEntityActionSuccess, EPICOResult Result, TArray<UPICOAnchorComponent*> const& AnchorList) \
{ \
	_Script_PICOXRMR_eventPICOPersistAnchorEntityActionSuccess_Parms Parms; \
	Parms.Result=Result; \
	Parms.AnchorList=AnchorList; \
	PICOPersistAnchorEntityActionSuccess.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_VR_VrVideoUpdateWS_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_24_DELEGATE \
struct _Script_PICOXRMR_eventPICOPersistAnchorEntityActionFailure_Parms \
{ \
	EPICOResult Result; \
}; \
static inline void FPICOPersistAnchorEntityActionFailure_DelegateWrapper(const FMulticastScriptDelegate& PICOPersistAnchorEntityActionFailure, EPICOResult Result) \
{ \
	_Script_PICOXRMR_eventPICOPersistAnchorEntityActionFailure_Parms Parms; \
	Parms.Result=Result; \
	PICOPersistAnchorEntityActionFailure.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_VR_VrVideoUpdateWS_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_26_DELEGATE \
struct _Script_PICOXRMR_eventPICOUnpersistAnchorEntityActionSuccess_Parms \
{ \
	EPICOResult Result; \
	TArray<UPICOAnchorComponent*> AnchorList; \
}; \
static inline void FPICOUnpersistAnchorEntityActionSuccess_DelegateWrapper(const FMulticastScriptDelegate& PICOUnpersistAnchorEntityActionSuccess, EPICOResult Result, TArray<UPICOAnchorComponent*> const& AnchorList) \
{ \
	_Script_PICOXRMR_eventPICOUnpersistAnchorEntityActionSuccess_Parms Parms; \
	Parms.Result=Result; \
	Parms.AnchorList=AnchorList; \
	PICOUnpersistAnchorEntityActionSuccess.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_VR_VrVideoUpdateWS_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_27_DELEGATE \
struct _Script_PICOXRMR_eventPICOUnpersistAnchorEntityActionFailure_Parms \
{ \
	EPICOResult Result; \
}; \
static inline void FPICOUnpersistAnchorEntityActionFailure_DelegateWrapper(const FMulticastScriptDelegate& PICOUnpersistAnchorEntityActionFailure, EPICOResult Result) \
{ \
	_Script_PICOXRMR_eventPICOUnpersistAnchorEntityActionFailure_Parms Parms; \
	Parms.Result=Result; \
	PICOUnpersistAnchorEntityActionFailure.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_VR_VrVideoUpdateWS_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_29_DELEGATE \
struct _Script_PICOXRMR_eventPICOClearAnchorEntityActionSuccess_Parms \
{ \
	EPICOResult Result; \
}; \
static inline void FPICOClearAnchorEntityActionSuccess_DelegateWrapper(const FMulticastScriptDelegate& PICOClearAnchorEntityActionSuccess, EPICOResult Result) \
{ \
	_Script_PICOXRMR_eventPICOClearAnchorEntityActionSuccess_Parms Parms; \
	Parms.Result=Result; \
	PICOClearAnchorEntityActionSuccess.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_VR_VrVideoUpdateWS_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_30_DELEGATE \
struct _Script_PICOXRMR_eventPICOClearAnchorEntityActionFailure_Parms \
{ \
	EPICOResult Result; \
}; \
static inline void FPICOClearAnchorEntityActionFailure_DelegateWrapper(const FMulticastScriptDelegate& PICOClearAnchorEntityActionFailure, EPICOResult Result) \
{ \
	_Script_PICOXRMR_eventPICOClearAnchorEntityActionFailure_Parms Parms; \
	Parms.Result=Result; \
	PICOClearAnchorEntityActionFailure.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_VR_VrVideoUpdateWS_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_32_DELEGATE \
struct _Script_PICOXRMR_eventPICOLoadAnchorEntityActionSuccess_Parms \
{ \
	EPICOResult Result; \
	TArray<FAnchorLoadResult> AnchorLoadResults; \
}; \
static inline void FPICOLoadAnchorEntityActionSuccess_DelegateWrapper(const FMulticastScriptDelegate& PICOLoadAnchorEntityActionSuccess, EPICOResult Result, TArray<FAnchorLoadResult> const& AnchorLoadResults) \
{ \
	_Script_PICOXRMR_eventPICOLoadAnchorEntityActionSuccess_Parms Parms; \
	Parms.Result=Result; \
	Parms.AnchorLoadResults=AnchorLoadResults; \
	PICOLoadAnchorEntityActionSuccess.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_VR_VrVideoUpdateWS_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_33_DELEGATE \
struct _Script_PICOXRMR_eventPICOLoadAnchorEntityActionFailure_Parms \
{ \
	EPICOResult Result; \
}; \
static inline void FPICOLoadAnchorEntityActionFailure_DelegateWrapper(const FMulticastScriptDelegate& PICOLoadAnchorEntityActionFailure, EPICOResult Result) \
{ \
	_Script_PICOXRMR_eventPICOLoadAnchorEntityActionFailure_Parms Parms; \
	Parms.Result=Result; \
	PICOLoadAnchorEntityActionFailure.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_VR_VrVideoUpdateWS_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_35_DELEGATE \
struct _Script_PICOXRMR_eventPICOStartSpatialSceneCaptureActionSuccess_Parms \
{ \
	EPICOResult Result; \
	EPICOSpatialSceneCaptureStatus SpatialSceneCaptureStatus; \
}; \
static inline void FPICOStartSpatialSceneCaptureActionSuccess_DelegateWrapper(const FMulticastScriptDelegate& PICOStartSpatialSceneCaptureActionSuccess, EPICOResult Result, EPICOSpatialSceneCaptureStatus SpatialSceneCaptureStatus) \
{ \
	_Script_PICOXRMR_eventPICOStartSpatialSceneCaptureActionSuccess_Parms Parms; \
	Parms.Result=Result; \
	Parms.SpatialSceneCaptureStatus=SpatialSceneCaptureStatus; \
	PICOStartSpatialSceneCaptureActionSuccess.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_VR_VrVideoUpdateWS_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_36_DELEGATE \
struct _Script_PICOXRMR_eventPICOStartSpatialSceneCaptureActionFailure_Parms \
{ \
	EPICOResult Result; \
}; \
static inline void FPICOStartSpatialSceneCaptureActionFailure_DelegateWrapper(const FMulticastScriptDelegate& PICOStartSpatialSceneCaptureActionFailure, EPICOResult Result) \
{ \
	_Script_PICOXRMR_eventPICOStartSpatialSceneCaptureActionFailure_Parms Parms; \
	Parms.Result=Result; \
	PICOStartSpatialSceneCaptureActionFailure.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_VR_VrVideoUpdateWS_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_57_SPARSE_DATA
#define FID_VR_VrVideoUpdateWS_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_57_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execPXR_CreateAnchorEntity_Async);


#define FID_VR_VrVideoUpdateWS_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_57_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execPXR_CreateAnchorEntity_Async);


#define FID_VR_VrVideoUpdateWS_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_57_ACCESSORS
#define FID_VR_VrVideoUpdateWS_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_57_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPICOCreateAnchorEntity_AsyncAction(); \
	friend struct Z_Construct_UClass_UPICOCreateAnchorEntity_AsyncAction_Statics; \
public: \
	DECLARE_CLASS(UPICOCreateAnchorEntity_AsyncAction, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PICOXRMR"), NO_API) \
	DECLARE_SERIALIZER(UPICOCreateAnchorEntity_AsyncAction)


#define FID_VR_VrVideoUpdateWS_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_57_INCLASS \
private: \
	static void StaticRegisterNativesUPICOCreateAnchorEntity_AsyncAction(); \
	friend struct Z_Construct_UClass_UPICOCreateAnchorEntity_AsyncAction_Statics; \
public: \
	DECLARE_CLASS(UPICOCreateAnchorEntity_AsyncAction, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PICOXRMR"), NO_API) \
	DECLARE_SERIALIZER(UPICOCreateAnchorEntity_AsyncAction)


#define FID_VR_VrVideoUpdateWS_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_57_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPICOCreateAnchorEntity_AsyncAction(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPICOCreateAnchorEntity_AsyncAction) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPICOCreateAnchorEntity_AsyncAction); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPICOCreateAnchorEntity_AsyncAction); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPICOCreateAnchorEntity_AsyncAction(UPICOCreateAnchorEntity_AsyncAction&&); \
	NO_API UPICOCreateAnchorEntity_AsyncAction(const UPICOCreateAnchorEntity_AsyncAction&); \
public: \
	NO_API virtual ~UPICOCreateAnchorEntity_AsyncAction();


#define FID_VR_VrVideoUpdateWS_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_57_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPICOCreateAnchorEntity_AsyncAction(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPICOCreateAnchorEntity_AsyncAction(UPICOCreateAnchorEntity_AsyncAction&&); \
	NO_API UPICOCreateAnchorEntity_AsyncAction(const UPICOCreateAnchorEntity_AsyncAction&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPICOCreateAnchorEntity_AsyncAction); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPICOCreateAnchorEntity_AsyncAction); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPICOCreateAnchorEntity_AsyncAction) \
	NO_API virtual ~UPICOCreateAnchorEntity_AsyncAction();


#define FID_VR_VrVideoUpdateWS_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_54_PROLOG
#define FID_VR_VrVideoUpdateWS_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_57_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_VR_VrVideoUpdateWS_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_57_SPARSE_DATA \
	FID_VR_VrVideoUpdateWS_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_57_RPC_WRAPPERS \
	FID_VR_VrVideoUpdateWS_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_57_ACCESSORS \
	FID_VR_VrVideoUpdateWS_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_57_INCLASS \
	FID_VR_VrVideoUpdateWS_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_57_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_VR_VrVideoUpdateWS_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_57_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_VR_VrVideoUpdateWS_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_57_SPARSE_DATA \
	FID_VR_VrVideoUpdateWS_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_57_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_VR_VrVideoUpdateWS_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_57_ACCESSORS \
	FID_VR_VrVideoUpdateWS_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_57_INCLASS_NO_PURE_DECLS \
	FID_VR_VrVideoUpdateWS_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_57_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PICOXRMR_API UClass* StaticClass<class UPICOCreateAnchorEntity_AsyncAction>();

#define FID_VR_VrVideoUpdateWS_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_92_SPARSE_DATA
#define FID_VR_VrVideoUpdateWS_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_92_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execPXR_DestroyAnchorEntity);


#define FID_VR_VrVideoUpdateWS_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_92_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execPXR_DestroyAnchorEntity);


#define FID_VR_VrVideoUpdateWS_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_92_ACCESSORS
#define FID_VR_VrVideoUpdateWS_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_92_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPICODestroyAnchorEntityAction(); \
	friend struct Z_Construct_UClass_UPICODestroyAnchorEntityAction_Statics; \
public: \
	DECLARE_CLASS(UPICODestroyAnchorEntityAction, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PICOXRMR"), NO_API) \
	DECLARE_SERIALIZER(UPICODestroyAnchorEntityAction)


#define FID_VR_VrVideoUpdateWS_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_92_INCLASS \
private: \
	static void StaticRegisterNativesUPICODestroyAnchorEntityAction(); \
	friend struct Z_Construct_UClass_UPICODestroyAnchorEntityAction_Statics; \
public: \
	DECLARE_CLASS(UPICODestroyAnchorEntityAction, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PICOXRMR"), NO_API) \
	DECLARE_SERIALIZER(UPICODestroyAnchorEntityAction)


#define FID_VR_VrVideoUpdateWS_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_92_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPICODestroyAnchorEntityAction(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPICODestroyAnchorEntityAction) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPICODestroyAnchorEntityAction); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPICODestroyAnchorEntityAction); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPICODestroyAnchorEntityAction(UPICODestroyAnchorEntityAction&&); \
	NO_API UPICODestroyAnchorEntityAction(const UPICODestroyAnchorEntityAction&); \
public: \
	NO_API virtual ~UPICODestroyAnchorEntityAction();


#define FID_VR_VrVideoUpdateWS_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_92_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPICODestroyAnchorEntityAction(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPICODestroyAnchorEntityAction(UPICODestroyAnchorEntityAction&&); \
	NO_API UPICODestroyAnchorEntityAction(const UPICODestroyAnchorEntityAction&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPICODestroyAnchorEntityAction); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPICODestroyAnchorEntityAction); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPICODestroyAnchorEntityAction) \
	NO_API virtual ~UPICODestroyAnchorEntityAction();


#define FID_VR_VrVideoUpdateWS_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_89_PROLOG
#define FID_VR_VrVideoUpdateWS_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_92_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_VR_VrVideoUpdateWS_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_92_SPARSE_DATA \
	FID_VR_VrVideoUpdateWS_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_92_RPC_WRAPPERS \
	FID_VR_VrVideoUpdateWS_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_92_ACCESSORS \
	FID_VR_VrVideoUpdateWS_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_92_INCLASS \
	FID_VR_VrVideoUpdateWS_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_92_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_VR_VrVideoUpdateWS_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_92_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_VR_VrVideoUpdateWS_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_92_SPARSE_DATA \
	FID_VR_VrVideoUpdateWS_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_92_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_VR_VrVideoUpdateWS_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_92_ACCESSORS \
	FID_VR_VrVideoUpdateWS_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_92_INCLASS_NO_PURE_DECLS \
	FID_VR_VrVideoUpdateWS_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_92_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PICOXRMR_API UClass* StaticClass<class UPICODestroyAnchorEntityAction>();

#define FID_VR_VrVideoUpdateWS_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_120_SPARSE_DATA
#define FID_VR_VrVideoUpdateWS_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_120_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execPXR_PersistAnchorEntity_Async);


#define FID_VR_VrVideoUpdateWS_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_120_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execPXR_PersistAnchorEntity_Async);


#define FID_VR_VrVideoUpdateWS_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_120_ACCESSORS
#define FID_VR_VrVideoUpdateWS_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_120_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPICOPersistAnchorEntity_AsyncAction(); \
	friend struct Z_Construct_UClass_UPICOPersistAnchorEntity_AsyncAction_Statics; \
public: \
	DECLARE_CLASS(UPICOPersistAnchorEntity_AsyncAction, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PICOXRMR"), NO_API) \
	DECLARE_SERIALIZER(UPICOPersistAnchorEntity_AsyncAction)


#define FID_VR_VrVideoUpdateWS_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_120_INCLASS \
private: \
	static void StaticRegisterNativesUPICOPersistAnchorEntity_AsyncAction(); \
	friend struct Z_Construct_UClass_UPICOPersistAnchorEntity_AsyncAction_Statics; \
public: \
	DECLARE_CLASS(UPICOPersistAnchorEntity_AsyncAction, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PICOXRMR"), NO_API) \
	DECLARE_SERIALIZER(UPICOPersistAnchorEntity_AsyncAction)


#define FID_VR_VrVideoUpdateWS_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_120_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPICOPersistAnchorEntity_AsyncAction(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPICOPersistAnchorEntity_AsyncAction) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPICOPersistAnchorEntity_AsyncAction); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPICOPersistAnchorEntity_AsyncAction); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPICOPersistAnchorEntity_AsyncAction(UPICOPersistAnchorEntity_AsyncAction&&); \
	NO_API UPICOPersistAnchorEntity_AsyncAction(const UPICOPersistAnchorEntity_AsyncAction&); \
public: \
	NO_API virtual ~UPICOPersistAnchorEntity_AsyncAction();


#define FID_VR_VrVideoUpdateWS_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_120_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPICOPersistAnchorEntity_AsyncAction(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPICOPersistAnchorEntity_AsyncAction(UPICOPersistAnchorEntity_AsyncAction&&); \
	NO_API UPICOPersistAnchorEntity_AsyncAction(const UPICOPersistAnchorEntity_AsyncAction&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPICOPersistAnchorEntity_AsyncAction); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPICOPersistAnchorEntity_AsyncAction); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPICOPersistAnchorEntity_AsyncAction) \
	NO_API virtual ~UPICOPersistAnchorEntity_AsyncAction();


#define FID_VR_VrVideoUpdateWS_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_117_PROLOG
#define FID_VR_VrVideoUpdateWS_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_120_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_VR_VrVideoUpdateWS_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_120_SPARSE_DATA \
	FID_VR_VrVideoUpdateWS_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_120_RPC_WRAPPERS \
	FID_VR_VrVideoUpdateWS_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_120_ACCESSORS \
	FID_VR_VrVideoUpdateWS_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_120_INCLASS \
	FID_VR_VrVideoUpdateWS_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_120_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_VR_VrVideoUpdateWS_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_120_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_VR_VrVideoUpdateWS_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_120_SPARSE_DATA \
	FID_VR_VrVideoUpdateWS_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_120_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_VR_VrVideoUpdateWS_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_120_ACCESSORS \
	FID_VR_VrVideoUpdateWS_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_120_INCLASS_NO_PURE_DECLS \
	FID_VR_VrVideoUpdateWS_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_120_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PICOXRMR_API UClass* StaticClass<class UPICOPersistAnchorEntity_AsyncAction>();

#define FID_VR_VrVideoUpdateWS_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_155_SPARSE_DATA
#define FID_VR_VrVideoUpdateWS_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_155_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execPXR_UnpersistAnchorEntity_Async);


#define FID_VR_VrVideoUpdateWS_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_155_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execPXR_UnpersistAnchorEntity_Async);


#define FID_VR_VrVideoUpdateWS_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_155_ACCESSORS
#define FID_VR_VrVideoUpdateWS_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_155_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPICOUnpersistAnchorEntity_AsyncAction(); \
	friend struct Z_Construct_UClass_UPICOUnpersistAnchorEntity_AsyncAction_Statics; \
public: \
	DECLARE_CLASS(UPICOUnpersistAnchorEntity_AsyncAction, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PICOXRMR"), NO_API) \
	DECLARE_SERIALIZER(UPICOUnpersistAnchorEntity_AsyncAction)


#define FID_VR_VrVideoUpdateWS_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_155_INCLASS \
private: \
	static void StaticRegisterNativesUPICOUnpersistAnchorEntity_AsyncAction(); \
	friend struct Z_Construct_UClass_UPICOUnpersistAnchorEntity_AsyncAction_Statics; \
public: \
	DECLARE_CLASS(UPICOUnpersistAnchorEntity_AsyncAction, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PICOXRMR"), NO_API) \
	DECLARE_SERIALIZER(UPICOUnpersistAnchorEntity_AsyncAction)


#define FID_VR_VrVideoUpdateWS_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_155_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPICOUnpersistAnchorEntity_AsyncAction(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPICOUnpersistAnchorEntity_AsyncAction) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPICOUnpersistAnchorEntity_AsyncAction); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPICOUnpersistAnchorEntity_AsyncAction); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPICOUnpersistAnchorEntity_AsyncAction(UPICOUnpersistAnchorEntity_AsyncAction&&); \
	NO_API UPICOUnpersistAnchorEntity_AsyncAction(const UPICOUnpersistAnchorEntity_AsyncAction&); \
public: \
	NO_API virtual ~UPICOUnpersistAnchorEntity_AsyncAction();


#define FID_VR_VrVideoUpdateWS_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_155_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPICOUnpersistAnchorEntity_AsyncAction(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPICOUnpersistAnchorEntity_AsyncAction(UPICOUnpersistAnchorEntity_AsyncAction&&); \
	NO_API UPICOUnpersistAnchorEntity_AsyncAction(const UPICOUnpersistAnchorEntity_AsyncAction&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPICOUnpersistAnchorEntity_AsyncAction); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPICOUnpersistAnchorEntity_AsyncAction); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPICOUnpersistAnchorEntity_AsyncAction) \
	NO_API virtual ~UPICOUnpersistAnchorEntity_AsyncAction();


#define FID_VR_VrVideoUpdateWS_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_152_PROLOG
#define FID_VR_VrVideoUpdateWS_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_155_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_VR_VrVideoUpdateWS_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_155_SPARSE_DATA \
	FID_VR_VrVideoUpdateWS_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_155_RPC_WRAPPERS \
	FID_VR_VrVideoUpdateWS_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_155_ACCESSORS \
	FID_VR_VrVideoUpdateWS_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_155_INCLASS \
	FID_VR_VrVideoUpdateWS_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_155_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_VR_VrVideoUpdateWS_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_155_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_VR_VrVideoUpdateWS_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_155_SPARSE_DATA \
	FID_VR_VrVideoUpdateWS_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_155_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_VR_VrVideoUpdateWS_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_155_ACCESSORS \
	FID_VR_VrVideoUpdateWS_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_155_INCLASS_NO_PURE_DECLS \
	FID_VR_VrVideoUpdateWS_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_155_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PICOXRMR_API UClass* StaticClass<class UPICOUnpersistAnchorEntity_AsyncAction>();

#define FID_VR_VrVideoUpdateWS_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_190_SPARSE_DATA
#define FID_VR_VrVideoUpdateWS_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_190_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execPXR_ClearAnchorEntity_Async);


#define FID_VR_VrVideoUpdateWS_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_190_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execPXR_ClearAnchorEntity_Async);


#define FID_VR_VrVideoUpdateWS_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_190_ACCESSORS
#define FID_VR_VrVideoUpdateWS_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_190_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPICOClearAnchorEntity_AsyncAction(); \
	friend struct Z_Construct_UClass_UPICOClearAnchorEntity_AsyncAction_Statics; \
public: \
	DECLARE_CLASS(UPICOClearAnchorEntity_AsyncAction, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PICOXRMR"), NO_API) \
	DECLARE_SERIALIZER(UPICOClearAnchorEntity_AsyncAction)


#define FID_VR_VrVideoUpdateWS_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_190_INCLASS \
private: \
	static void StaticRegisterNativesUPICOClearAnchorEntity_AsyncAction(); \
	friend struct Z_Construct_UClass_UPICOClearAnchorEntity_AsyncAction_Statics; \
public: \
	DECLARE_CLASS(UPICOClearAnchorEntity_AsyncAction, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PICOXRMR"), NO_API) \
	DECLARE_SERIALIZER(UPICOClearAnchorEntity_AsyncAction)


#define FID_VR_VrVideoUpdateWS_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_190_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPICOClearAnchorEntity_AsyncAction(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPICOClearAnchorEntity_AsyncAction) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPICOClearAnchorEntity_AsyncAction); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPICOClearAnchorEntity_AsyncAction); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPICOClearAnchorEntity_AsyncAction(UPICOClearAnchorEntity_AsyncAction&&); \
	NO_API UPICOClearAnchorEntity_AsyncAction(const UPICOClearAnchorEntity_AsyncAction&); \
public: \
	NO_API virtual ~UPICOClearAnchorEntity_AsyncAction();


#define FID_VR_VrVideoUpdateWS_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_190_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPICOClearAnchorEntity_AsyncAction(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPICOClearAnchorEntity_AsyncAction(UPICOClearAnchorEntity_AsyncAction&&); \
	NO_API UPICOClearAnchorEntity_AsyncAction(const UPICOClearAnchorEntity_AsyncAction&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPICOClearAnchorEntity_AsyncAction); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPICOClearAnchorEntity_AsyncAction); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPICOClearAnchorEntity_AsyncAction) \
	NO_API virtual ~UPICOClearAnchorEntity_AsyncAction();


#define FID_VR_VrVideoUpdateWS_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_187_PROLOG
#define FID_VR_VrVideoUpdateWS_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_190_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_VR_VrVideoUpdateWS_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_190_SPARSE_DATA \
	FID_VR_VrVideoUpdateWS_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_190_RPC_WRAPPERS \
	FID_VR_VrVideoUpdateWS_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_190_ACCESSORS \
	FID_VR_VrVideoUpdateWS_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_190_INCLASS \
	FID_VR_VrVideoUpdateWS_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_190_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_VR_VrVideoUpdateWS_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_190_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_VR_VrVideoUpdateWS_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_190_SPARSE_DATA \
	FID_VR_VrVideoUpdateWS_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_190_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_VR_VrVideoUpdateWS_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_190_ACCESSORS \
	FID_VR_VrVideoUpdateWS_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_190_INCLASS_NO_PURE_DECLS \
	FID_VR_VrVideoUpdateWS_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_190_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PICOXRMR_API UClass* StaticClass<class UPICOClearAnchorEntity_AsyncAction>();

#define FID_VR_VrVideoUpdateWS_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_220_SPARSE_DATA
#define FID_VR_VrVideoUpdateWS_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_220_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execPXR_LoadAnchorEntity_Async);


#define FID_VR_VrVideoUpdateWS_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_220_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execPXR_LoadAnchorEntity_Async);


#define FID_VR_VrVideoUpdateWS_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_220_ACCESSORS
#define FID_VR_VrVideoUpdateWS_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_220_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPICOLoadAnchorEntity_AsyncAction(); \
	friend struct Z_Construct_UClass_UPICOLoadAnchorEntity_AsyncAction_Statics; \
public: \
	DECLARE_CLASS(UPICOLoadAnchorEntity_AsyncAction, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PICOXRMR"), NO_API) \
	DECLARE_SERIALIZER(UPICOLoadAnchorEntity_AsyncAction)


#define FID_VR_VrVideoUpdateWS_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_220_INCLASS \
private: \
	static void StaticRegisterNativesUPICOLoadAnchorEntity_AsyncAction(); \
	friend struct Z_Construct_UClass_UPICOLoadAnchorEntity_AsyncAction_Statics; \
public: \
	DECLARE_CLASS(UPICOLoadAnchorEntity_AsyncAction, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PICOXRMR"), NO_API) \
	DECLARE_SERIALIZER(UPICOLoadAnchorEntity_AsyncAction)


#define FID_VR_VrVideoUpdateWS_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_220_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPICOLoadAnchorEntity_AsyncAction(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPICOLoadAnchorEntity_AsyncAction) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPICOLoadAnchorEntity_AsyncAction); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPICOLoadAnchorEntity_AsyncAction); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPICOLoadAnchorEntity_AsyncAction(UPICOLoadAnchorEntity_AsyncAction&&); \
	NO_API UPICOLoadAnchorEntity_AsyncAction(const UPICOLoadAnchorEntity_AsyncAction&); \
public: \
	NO_API virtual ~UPICOLoadAnchorEntity_AsyncAction();


#define FID_VR_VrVideoUpdateWS_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_220_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPICOLoadAnchorEntity_AsyncAction(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPICOLoadAnchorEntity_AsyncAction(UPICOLoadAnchorEntity_AsyncAction&&); \
	NO_API UPICOLoadAnchorEntity_AsyncAction(const UPICOLoadAnchorEntity_AsyncAction&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPICOLoadAnchorEntity_AsyncAction); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPICOLoadAnchorEntity_AsyncAction); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPICOLoadAnchorEntity_AsyncAction) \
	NO_API virtual ~UPICOLoadAnchorEntity_AsyncAction();


#define FID_VR_VrVideoUpdateWS_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_217_PROLOG
#define FID_VR_VrVideoUpdateWS_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_220_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_VR_VrVideoUpdateWS_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_220_SPARSE_DATA \
	FID_VR_VrVideoUpdateWS_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_220_RPC_WRAPPERS \
	FID_VR_VrVideoUpdateWS_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_220_ACCESSORS \
	FID_VR_VrVideoUpdateWS_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_220_INCLASS \
	FID_VR_VrVideoUpdateWS_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_220_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_VR_VrVideoUpdateWS_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_220_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_VR_VrVideoUpdateWS_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_220_SPARSE_DATA \
	FID_VR_VrVideoUpdateWS_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_220_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_VR_VrVideoUpdateWS_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_220_ACCESSORS \
	FID_VR_VrVideoUpdateWS_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_220_INCLASS_NO_PURE_DECLS \
	FID_VR_VrVideoUpdateWS_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_220_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PICOXRMR_API UClass* StaticClass<class UPICOLoadAnchorEntity_AsyncAction>();

#define FID_VR_VrVideoUpdateWS_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_258_SPARSE_DATA
#define FID_VR_VrVideoUpdateWS_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_258_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execPXR_StartSpatialSceneCapture_Async);


#define FID_VR_VrVideoUpdateWS_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_258_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execPXR_StartSpatialSceneCapture_Async);


#define FID_VR_VrVideoUpdateWS_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_258_ACCESSORS
#define FID_VR_VrVideoUpdateWS_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_258_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPICOStartSpatialSceneCapture_AsyncAction(); \
	friend struct Z_Construct_UClass_UPICOStartSpatialSceneCapture_AsyncAction_Statics; \
public: \
	DECLARE_CLASS(UPICOStartSpatialSceneCapture_AsyncAction, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PICOXRMR"), NO_API) \
	DECLARE_SERIALIZER(UPICOStartSpatialSceneCapture_AsyncAction)


#define FID_VR_VrVideoUpdateWS_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_258_INCLASS \
private: \
	static void StaticRegisterNativesUPICOStartSpatialSceneCapture_AsyncAction(); \
	friend struct Z_Construct_UClass_UPICOStartSpatialSceneCapture_AsyncAction_Statics; \
public: \
	DECLARE_CLASS(UPICOStartSpatialSceneCapture_AsyncAction, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PICOXRMR"), NO_API) \
	DECLARE_SERIALIZER(UPICOStartSpatialSceneCapture_AsyncAction)


#define FID_VR_VrVideoUpdateWS_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_258_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPICOStartSpatialSceneCapture_AsyncAction(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPICOStartSpatialSceneCapture_AsyncAction) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPICOStartSpatialSceneCapture_AsyncAction); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPICOStartSpatialSceneCapture_AsyncAction); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPICOStartSpatialSceneCapture_AsyncAction(UPICOStartSpatialSceneCapture_AsyncAction&&); \
	NO_API UPICOStartSpatialSceneCapture_AsyncAction(const UPICOStartSpatialSceneCapture_AsyncAction&); \
public: \
	NO_API virtual ~UPICOStartSpatialSceneCapture_AsyncAction();


#define FID_VR_VrVideoUpdateWS_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_258_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPICOStartSpatialSceneCapture_AsyncAction(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPICOStartSpatialSceneCapture_AsyncAction(UPICOStartSpatialSceneCapture_AsyncAction&&); \
	NO_API UPICOStartSpatialSceneCapture_AsyncAction(const UPICOStartSpatialSceneCapture_AsyncAction&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPICOStartSpatialSceneCapture_AsyncAction); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPICOStartSpatialSceneCapture_AsyncAction); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPICOStartSpatialSceneCapture_AsyncAction) \
	NO_API virtual ~UPICOStartSpatialSceneCapture_AsyncAction();


#define FID_VR_VrVideoUpdateWS_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_255_PROLOG
#define FID_VR_VrVideoUpdateWS_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_258_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_VR_VrVideoUpdateWS_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_258_SPARSE_DATA \
	FID_VR_VrVideoUpdateWS_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_258_RPC_WRAPPERS \
	FID_VR_VrVideoUpdateWS_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_258_ACCESSORS \
	FID_VR_VrVideoUpdateWS_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_258_INCLASS \
	FID_VR_VrVideoUpdateWS_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_258_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_VR_VrVideoUpdateWS_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_258_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_VR_VrVideoUpdateWS_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_258_SPARSE_DATA \
	FID_VR_VrVideoUpdateWS_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_258_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_VR_VrVideoUpdateWS_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_258_ACCESSORS \
	FID_VR_VrVideoUpdateWS_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_258_INCLASS_NO_PURE_DECLS \
	FID_VR_VrVideoUpdateWS_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_258_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PICOXRMR_API UClass* StaticClass<class UPICOStartSpatialSceneCapture_AsyncAction>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_VR_VrVideoUpdateWS_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
