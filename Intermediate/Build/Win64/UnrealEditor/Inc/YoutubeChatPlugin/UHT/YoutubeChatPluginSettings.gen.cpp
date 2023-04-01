// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "YoutubeChatPlugin/Public/YoutubeChatPluginSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeYoutubeChatPluginSettings() {}
// Cross Module References
	DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
	UPackage* Z_Construct_UPackage__Script_YoutubeChatPlugin();
	YOUTUBECHATPLUGIN_API UClass* Z_Construct_UClass_UYoutubeChatPluginSettings();
	YOUTUBECHATPLUGIN_API UClass* Z_Construct_UClass_UYoutubeChatPluginSettings_NoRegister();
// End Cross Module References
	void UYoutubeChatPluginSettings::StaticRegisterNativesUYoutubeChatPluginSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UYoutubeChatPluginSettings);
	UClass* Z_Construct_UClass_UYoutubeChatPluginSettings_NoRegister()
	{
		return UYoutubeChatPluginSettings::StaticClass();
	}
	struct Z_Construct_UClass_UYoutubeChatPluginSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ApiKey_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ApiKey;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LiveChatId_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_LiveChatId;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UYoutubeChatPluginSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_YoutubeChatPlugin,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UYoutubeChatPluginSettings_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "YoutubeChat Plugin Settings" },
		{ "IncludePath", "YoutubeChatPluginSettings.h" },
		{ "ModuleRelativePath", "Public/YoutubeChatPluginSettings.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UYoutubeChatPluginSettings_Statics::NewProp_ApiKey_MetaData[] = {
		{ "Category", "Main" },
		{ "ModuleRelativePath", "Public/YoutubeChatPluginSettings.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UYoutubeChatPluginSettings_Statics::NewProp_ApiKey = { "ApiKey", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UYoutubeChatPluginSettings, ApiKey), METADATA_PARAMS(Z_Construct_UClass_UYoutubeChatPluginSettings_Statics::NewProp_ApiKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UYoutubeChatPluginSettings_Statics::NewProp_ApiKey_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UYoutubeChatPluginSettings_Statics::NewProp_LiveChatId_MetaData[] = {
		{ "Category", "Main" },
		{ "ModuleRelativePath", "Public/YoutubeChatPluginSettings.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UYoutubeChatPluginSettings_Statics::NewProp_LiveChatId = { "LiveChatId", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UYoutubeChatPluginSettings, LiveChatId), METADATA_PARAMS(Z_Construct_UClass_UYoutubeChatPluginSettings_Statics::NewProp_LiveChatId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UYoutubeChatPluginSettings_Statics::NewProp_LiveChatId_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UYoutubeChatPluginSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UYoutubeChatPluginSettings_Statics::NewProp_ApiKey,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UYoutubeChatPluginSettings_Statics::NewProp_LiveChatId,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UYoutubeChatPluginSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UYoutubeChatPluginSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UYoutubeChatPluginSettings_Statics::ClassParams = {
		&UYoutubeChatPluginSettings::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UYoutubeChatPluginSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UYoutubeChatPluginSettings_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_UYoutubeChatPluginSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UYoutubeChatPluginSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UYoutubeChatPluginSettings()
	{
		if (!Z_Registration_Info_UClass_UYoutubeChatPluginSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UYoutubeChatPluginSettings.OuterSingleton, Z_Construct_UClass_UYoutubeChatPluginSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UYoutubeChatPluginSettings.OuterSingleton;
	}
	template<> YOUTUBECHATPLUGIN_API UClass* StaticClass<UYoutubeChatPluginSettings>()
	{
		return UYoutubeChatPluginSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UYoutubeChatPluginSettings);
	UYoutubeChatPluginSettings::~UYoutubeChatPluginSettings() {}
	struct Z_CompiledInDeferFile_FID_Users_Segfault_Documents_Unreal_Projects_ProjectAlpha_Plugins_YoutubeChatPlugin_Source_YoutubeChatPlugin_Public_YoutubeChatPluginSettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Segfault_Documents_Unreal_Projects_ProjectAlpha_Plugins_YoutubeChatPlugin_Source_YoutubeChatPlugin_Public_YoutubeChatPluginSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UYoutubeChatPluginSettings, UYoutubeChatPluginSettings::StaticClass, TEXT("UYoutubeChatPluginSettings"), &Z_Registration_Info_UClass_UYoutubeChatPluginSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UYoutubeChatPluginSettings), 1019824261U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Segfault_Documents_Unreal_Projects_ProjectAlpha_Plugins_YoutubeChatPlugin_Source_YoutubeChatPlugin_Public_YoutubeChatPluginSettings_h_3137013832(TEXT("/Script/YoutubeChatPlugin"),
		Z_CompiledInDeferFile_FID_Users_Segfault_Documents_Unreal_Projects_ProjectAlpha_Plugins_YoutubeChatPlugin_Source_YoutubeChatPlugin_Public_YoutubeChatPluginSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Segfault_Documents_Unreal_Projects_ProjectAlpha_Plugins_YoutubeChatPlugin_Source_YoutubeChatPlugin_Public_YoutubeChatPluginSettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
