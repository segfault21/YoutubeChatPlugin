// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeYoutubeChatPlugin_init() {}
	YOUTUBECHATPLUGIN_API UFunction* Z_Construct_UDelegateFunction_YoutubeChatPlugin_ResponseDelegate__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_YoutubeChatPlugin;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_YoutubeChatPlugin()
	{
		if (!Z_Registration_Info_UPackage__Script_YoutubeChatPlugin.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_YoutubeChatPlugin_ResponseDelegate__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/YoutubeChatPlugin",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x3932B095,
				0x20DDD44F,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_YoutubeChatPlugin.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_YoutubeChatPlugin.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_YoutubeChatPlugin(Z_Construct_UPackage__Script_YoutubeChatPlugin, TEXT("/Script/YoutubeChatPlugin"), Z_Registration_Info_UPackage__Script_YoutubeChatPlugin, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x3932B095, 0x20DDD44F));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
