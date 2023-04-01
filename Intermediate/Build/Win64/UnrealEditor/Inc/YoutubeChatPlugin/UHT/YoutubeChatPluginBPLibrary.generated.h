// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "YoutubeChatPluginBPLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UJsonTool;
#ifdef YOUTUBECHATPLUGIN_YoutubeChatPluginBPLibrary_generated_h
#error "YoutubeChatPluginBPLibrary.generated.h already included, missing '#pragma once' in YoutubeChatPluginBPLibrary.h"
#endif
#define YOUTUBECHATPLUGIN_YoutubeChatPluginBPLibrary_generated_h

#define FID_Users_Segfault_Documents_Unreal_Projects_ProjectAlpha_Plugins_YoutubeChatPlugin_Source_YoutubeChatPlugin_Public_YoutubeChatPluginBPLibrary_h_30_DELEGATE \
struct _Script_YoutubeChatPlugin_eventResponseDelegate_Parms \
{ \
	FString Data; \
}; \
static inline void FResponseDelegate_DelegateWrapper(const FMulticastScriptDelegate& ResponseDelegate, const FString& Data) \
{ \
	_Script_YoutubeChatPlugin_eventResponseDelegate_Parms Parms; \
	Parms.Data=Data; \
	ResponseDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_Users_Segfault_Documents_Unreal_Projects_ProjectAlpha_Plugins_YoutubeChatPlugin_Source_YoutubeChatPlugin_Public_YoutubeChatPluginBPLibrary_h_34_SPARSE_DATA
#define FID_Users_Segfault_Documents_Unreal_Projects_ProjectAlpha_Plugins_YoutubeChatPlugin_Source_YoutubeChatPlugin_Public_YoutubeChatPluginBPLibrary_h_34_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execYoutubeChatPluginGetMessage); \
	DECLARE_FUNCTION(execYoutubeChatPluginSampleFunction);


#define FID_Users_Segfault_Documents_Unreal_Projects_ProjectAlpha_Plugins_YoutubeChatPlugin_Source_YoutubeChatPlugin_Public_YoutubeChatPluginBPLibrary_h_34_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execYoutubeChatPluginGetMessage); \
	DECLARE_FUNCTION(execYoutubeChatPluginSampleFunction);


#define FID_Users_Segfault_Documents_Unreal_Projects_ProjectAlpha_Plugins_YoutubeChatPlugin_Source_YoutubeChatPlugin_Public_YoutubeChatPluginBPLibrary_h_34_ACCESSORS
#define FID_Users_Segfault_Documents_Unreal_Projects_ProjectAlpha_Plugins_YoutubeChatPlugin_Source_YoutubeChatPlugin_Public_YoutubeChatPluginBPLibrary_h_34_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUYoutubeChatPluginBPLibrary(); \
	friend struct Z_Construct_UClass_UYoutubeChatPluginBPLibrary_Statics; \
public: \
	DECLARE_CLASS(UYoutubeChatPluginBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/YoutubeChatPlugin"), NO_API) \
	DECLARE_SERIALIZER(UYoutubeChatPluginBPLibrary)


#define FID_Users_Segfault_Documents_Unreal_Projects_ProjectAlpha_Plugins_YoutubeChatPlugin_Source_YoutubeChatPlugin_Public_YoutubeChatPluginBPLibrary_h_34_INCLASS \
private: \
	static void StaticRegisterNativesUYoutubeChatPluginBPLibrary(); \
	friend struct Z_Construct_UClass_UYoutubeChatPluginBPLibrary_Statics; \
public: \
	DECLARE_CLASS(UYoutubeChatPluginBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/YoutubeChatPlugin"), NO_API) \
	DECLARE_SERIALIZER(UYoutubeChatPluginBPLibrary)


#define FID_Users_Segfault_Documents_Unreal_Projects_ProjectAlpha_Plugins_YoutubeChatPlugin_Source_YoutubeChatPlugin_Public_YoutubeChatPluginBPLibrary_h_34_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UYoutubeChatPluginBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UYoutubeChatPluginBPLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UYoutubeChatPluginBPLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UYoutubeChatPluginBPLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UYoutubeChatPluginBPLibrary(UYoutubeChatPluginBPLibrary&&); \
	NO_API UYoutubeChatPluginBPLibrary(const UYoutubeChatPluginBPLibrary&); \
public: \
	NO_API virtual ~UYoutubeChatPluginBPLibrary();


#define FID_Users_Segfault_Documents_Unreal_Projects_ProjectAlpha_Plugins_YoutubeChatPlugin_Source_YoutubeChatPlugin_Public_YoutubeChatPluginBPLibrary_h_34_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UYoutubeChatPluginBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UYoutubeChatPluginBPLibrary(UYoutubeChatPluginBPLibrary&&); \
	NO_API UYoutubeChatPluginBPLibrary(const UYoutubeChatPluginBPLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UYoutubeChatPluginBPLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UYoutubeChatPluginBPLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UYoutubeChatPluginBPLibrary) \
	NO_API virtual ~UYoutubeChatPluginBPLibrary();


#define FID_Users_Segfault_Documents_Unreal_Projects_ProjectAlpha_Plugins_YoutubeChatPlugin_Source_YoutubeChatPlugin_Public_YoutubeChatPluginBPLibrary_h_31_PROLOG
#define FID_Users_Segfault_Documents_Unreal_Projects_ProjectAlpha_Plugins_YoutubeChatPlugin_Source_YoutubeChatPlugin_Public_YoutubeChatPluginBPLibrary_h_34_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Segfault_Documents_Unreal_Projects_ProjectAlpha_Plugins_YoutubeChatPlugin_Source_YoutubeChatPlugin_Public_YoutubeChatPluginBPLibrary_h_34_SPARSE_DATA \
	FID_Users_Segfault_Documents_Unreal_Projects_ProjectAlpha_Plugins_YoutubeChatPlugin_Source_YoutubeChatPlugin_Public_YoutubeChatPluginBPLibrary_h_34_RPC_WRAPPERS \
	FID_Users_Segfault_Documents_Unreal_Projects_ProjectAlpha_Plugins_YoutubeChatPlugin_Source_YoutubeChatPlugin_Public_YoutubeChatPluginBPLibrary_h_34_ACCESSORS \
	FID_Users_Segfault_Documents_Unreal_Projects_ProjectAlpha_Plugins_YoutubeChatPlugin_Source_YoutubeChatPlugin_Public_YoutubeChatPluginBPLibrary_h_34_INCLASS \
	FID_Users_Segfault_Documents_Unreal_Projects_ProjectAlpha_Plugins_YoutubeChatPlugin_Source_YoutubeChatPlugin_Public_YoutubeChatPluginBPLibrary_h_34_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Users_Segfault_Documents_Unreal_Projects_ProjectAlpha_Plugins_YoutubeChatPlugin_Source_YoutubeChatPlugin_Public_YoutubeChatPluginBPLibrary_h_34_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Segfault_Documents_Unreal_Projects_ProjectAlpha_Plugins_YoutubeChatPlugin_Source_YoutubeChatPlugin_Public_YoutubeChatPluginBPLibrary_h_34_SPARSE_DATA \
	FID_Users_Segfault_Documents_Unreal_Projects_ProjectAlpha_Plugins_YoutubeChatPlugin_Source_YoutubeChatPlugin_Public_YoutubeChatPluginBPLibrary_h_34_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Segfault_Documents_Unreal_Projects_ProjectAlpha_Plugins_YoutubeChatPlugin_Source_YoutubeChatPlugin_Public_YoutubeChatPluginBPLibrary_h_34_ACCESSORS \
	FID_Users_Segfault_Documents_Unreal_Projects_ProjectAlpha_Plugins_YoutubeChatPlugin_Source_YoutubeChatPlugin_Public_YoutubeChatPluginBPLibrary_h_34_INCLASS_NO_PURE_DECLS \
	FID_Users_Segfault_Documents_Unreal_Projects_ProjectAlpha_Plugins_YoutubeChatPlugin_Source_YoutubeChatPlugin_Public_YoutubeChatPluginBPLibrary_h_34_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class YoutubeChatPluginBPLibrary."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> YOUTUBECHATPLUGIN_API UClass* StaticClass<class UYoutubeChatPluginBPLibrary>();

#define FID_Users_Segfault_Documents_Unreal_Projects_ProjectAlpha_Plugins_YoutubeChatPlugin_Source_YoutubeChatPlugin_Public_YoutubeChatPluginBPLibrary_h_47_SPARSE_DATA
#define FID_Users_Segfault_Documents_Unreal_Projects_ProjectAlpha_Plugins_YoutubeChatPlugin_Source_YoutubeChatPlugin_Public_YoutubeChatPluginBPLibrary_h_47_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCreate); \
	DECLARE_FUNCTION(execGetRequest);


#define FID_Users_Segfault_Documents_Unreal_Projects_ProjectAlpha_Plugins_YoutubeChatPlugin_Source_YoutubeChatPlugin_Public_YoutubeChatPluginBPLibrary_h_47_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCreate); \
	DECLARE_FUNCTION(execGetRequest);


#define FID_Users_Segfault_Documents_Unreal_Projects_ProjectAlpha_Plugins_YoutubeChatPlugin_Source_YoutubeChatPlugin_Public_YoutubeChatPluginBPLibrary_h_47_ACCESSORS
#define FID_Users_Segfault_Documents_Unreal_Projects_ProjectAlpha_Plugins_YoutubeChatPlugin_Source_YoutubeChatPlugin_Public_YoutubeChatPluginBPLibrary_h_47_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUJsonTool(); \
	friend struct Z_Construct_UClass_UJsonTool_Statics; \
public: \
	DECLARE_CLASS(UJsonTool, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/YoutubeChatPlugin"), NO_API) \
	DECLARE_SERIALIZER(UJsonTool)


#define FID_Users_Segfault_Documents_Unreal_Projects_ProjectAlpha_Plugins_YoutubeChatPlugin_Source_YoutubeChatPlugin_Public_YoutubeChatPluginBPLibrary_h_47_INCLASS \
private: \
	static void StaticRegisterNativesUJsonTool(); \
	friend struct Z_Construct_UClass_UJsonTool_Statics; \
public: \
	DECLARE_CLASS(UJsonTool, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/YoutubeChatPlugin"), NO_API) \
	DECLARE_SERIALIZER(UJsonTool)


#define FID_Users_Segfault_Documents_Unreal_Projects_ProjectAlpha_Plugins_YoutubeChatPlugin_Source_YoutubeChatPlugin_Public_YoutubeChatPluginBPLibrary_h_47_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UJsonTool(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UJsonTool) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UJsonTool); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UJsonTool); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UJsonTool(UJsonTool&&); \
	NO_API UJsonTool(const UJsonTool&); \
public: \
	NO_API virtual ~UJsonTool();


#define FID_Users_Segfault_Documents_Unreal_Projects_ProjectAlpha_Plugins_YoutubeChatPlugin_Source_YoutubeChatPlugin_Public_YoutubeChatPluginBPLibrary_h_47_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UJsonTool(UJsonTool&&); \
	NO_API UJsonTool(const UJsonTool&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UJsonTool); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UJsonTool); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UJsonTool) \
	NO_API virtual ~UJsonTool();


#define FID_Users_Segfault_Documents_Unreal_Projects_ProjectAlpha_Plugins_YoutubeChatPlugin_Source_YoutubeChatPlugin_Public_YoutubeChatPluginBPLibrary_h_44_PROLOG
#define FID_Users_Segfault_Documents_Unreal_Projects_ProjectAlpha_Plugins_YoutubeChatPlugin_Source_YoutubeChatPlugin_Public_YoutubeChatPluginBPLibrary_h_47_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Segfault_Documents_Unreal_Projects_ProjectAlpha_Plugins_YoutubeChatPlugin_Source_YoutubeChatPlugin_Public_YoutubeChatPluginBPLibrary_h_47_SPARSE_DATA \
	FID_Users_Segfault_Documents_Unreal_Projects_ProjectAlpha_Plugins_YoutubeChatPlugin_Source_YoutubeChatPlugin_Public_YoutubeChatPluginBPLibrary_h_47_RPC_WRAPPERS \
	FID_Users_Segfault_Documents_Unreal_Projects_ProjectAlpha_Plugins_YoutubeChatPlugin_Source_YoutubeChatPlugin_Public_YoutubeChatPluginBPLibrary_h_47_ACCESSORS \
	FID_Users_Segfault_Documents_Unreal_Projects_ProjectAlpha_Plugins_YoutubeChatPlugin_Source_YoutubeChatPlugin_Public_YoutubeChatPluginBPLibrary_h_47_INCLASS \
	FID_Users_Segfault_Documents_Unreal_Projects_ProjectAlpha_Plugins_YoutubeChatPlugin_Source_YoutubeChatPlugin_Public_YoutubeChatPluginBPLibrary_h_47_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Users_Segfault_Documents_Unreal_Projects_ProjectAlpha_Plugins_YoutubeChatPlugin_Source_YoutubeChatPlugin_Public_YoutubeChatPluginBPLibrary_h_47_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Segfault_Documents_Unreal_Projects_ProjectAlpha_Plugins_YoutubeChatPlugin_Source_YoutubeChatPlugin_Public_YoutubeChatPluginBPLibrary_h_47_SPARSE_DATA \
	FID_Users_Segfault_Documents_Unreal_Projects_ProjectAlpha_Plugins_YoutubeChatPlugin_Source_YoutubeChatPlugin_Public_YoutubeChatPluginBPLibrary_h_47_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Segfault_Documents_Unreal_Projects_ProjectAlpha_Plugins_YoutubeChatPlugin_Source_YoutubeChatPlugin_Public_YoutubeChatPluginBPLibrary_h_47_ACCESSORS \
	FID_Users_Segfault_Documents_Unreal_Projects_ProjectAlpha_Plugins_YoutubeChatPlugin_Source_YoutubeChatPlugin_Public_YoutubeChatPluginBPLibrary_h_47_INCLASS_NO_PURE_DECLS \
	FID_Users_Segfault_Documents_Unreal_Projects_ProjectAlpha_Plugins_YoutubeChatPlugin_Source_YoutubeChatPlugin_Public_YoutubeChatPluginBPLibrary_h_47_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> YOUTUBECHATPLUGIN_API UClass* StaticClass<class UJsonTool>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Segfault_Documents_Unreal_Projects_ProjectAlpha_Plugins_YoutubeChatPlugin_Source_YoutubeChatPlugin_Public_YoutubeChatPluginBPLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
