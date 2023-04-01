// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "YoutubeChatPlugin/Public/YoutubeChatPluginBPLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeYoutubeChatPluginBPLibrary() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_YoutubeChatPlugin();
	YOUTUBECHATPLUGIN_API UClass* Z_Construct_UClass_UJsonTool();
	YOUTUBECHATPLUGIN_API UClass* Z_Construct_UClass_UJsonTool_NoRegister();
	YOUTUBECHATPLUGIN_API UClass* Z_Construct_UClass_UYoutubeChatPluginBPLibrary();
	YOUTUBECHATPLUGIN_API UClass* Z_Construct_UClass_UYoutubeChatPluginBPLibrary_NoRegister();
	YOUTUBECHATPLUGIN_API UFunction* Z_Construct_UDelegateFunction_YoutubeChatPlugin_ResponseDelegate__DelegateSignature();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_YoutubeChatPlugin_ResponseDelegate__DelegateSignature_Statics
	{
		struct _Script_YoutubeChatPlugin_eventResponseDelegate_Parms
		{
			FString Data;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_Data;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_YoutubeChatPlugin_ResponseDelegate__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_YoutubeChatPlugin_eventResponseDelegate_Parms, Data), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_YoutubeChatPlugin_ResponseDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_YoutubeChatPlugin_ResponseDelegate__DelegateSignature_Statics::NewProp_Data,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_YoutubeChatPlugin_ResponseDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/* \n*\x09""Function library class.\n*\x09""Each function in it is expected to be static and represents blueprint node that can be called in any blueprint.\n*\n*\x09When declaring function you can define metadata for the node. Key function specifiers will be BlueprintPure and BlueprintCallable.\n*\x09""BlueprintPure - means the function does not affect the owning object in any way and thus creates a node without Exec pins.\n*\x09""BlueprintCallable - makes a function which can be executed in Blueprints - Thus it has Exec pins.\n*\x09""DisplayName - full name of the node, shown when you mouse over the node and in the blueprint drop down menu.\n*\x09\x09\x09\x09Its lets you name the node using characters not allowed in C++ function names.\n*\x09""CompactNodeTitle - the word(s) that appear on the node.\n*\x09Keywords -\x09the list of keywords that helps you to find node when you search for it using Blueprint drop-down menu. \n*\x09\x09\x09\x09Good example is \"Print String\" node which you can find also by using keyword \"log\".\n*\x09""Category -\x09the category your node will be under in the Blueprint drop-down menu.\n*\n*\x09""For more info on custom blueprint nodes visit documentation:\n*\x09https://wiki.unrealengine.com/Custom_Blueprint_Node_Creation\n*/" },
		{ "ModuleRelativePath", "Public/YoutubeChatPluginBPLibrary.h" },
		{ "ToolTip", "*      Function library class.\n*      Each function in it is expected to be static and represents blueprint node that can be called in any blueprint.\n*\n*      When declaring function you can define metadata for the node. Key function specifiers will be BlueprintPure and BlueprintCallable.\n*      BlueprintPure - means the function does not affect the owning object in any way and thus creates a node without Exec pins.\n*      BlueprintCallable - makes a function which can be executed in Blueprints - Thus it has Exec pins.\n*      DisplayName - full name of the node, shown when you mouse over the node and in the blueprint drop down menu.\n*                              Its lets you name the node using characters not allowed in C++ function names.\n*      CompactNodeTitle - the word(s) that appear on the node.\n*      Keywords -      the list of keywords that helps you to find node when you search for it using Blueprint drop-down menu.\n*                              Good example is \"Print String\" node which you can find also by using keyword \"log\".\n*      Category -      the category your node will be under in the Blueprint drop-down menu.\n*\n*      For more info on custom blueprint nodes visit documentation:\n*      https://wiki.unrealengine.com/Custom_Blueprint_Node_Creation" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_YoutubeChatPlugin_ResponseDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_YoutubeChatPlugin, nullptr, "ResponseDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_YoutubeChatPlugin_ResponseDelegate__DelegateSignature_Statics::_Script_YoutubeChatPlugin_eventResponseDelegate_Parms), Z_Construct_UDelegateFunction_YoutubeChatPlugin_ResponseDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_YoutubeChatPlugin_ResponseDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_YoutubeChatPlugin_ResponseDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_YoutubeChatPlugin_ResponseDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_YoutubeChatPlugin_ResponseDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_YoutubeChatPlugin_ResponseDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UYoutubeChatPluginBPLibrary::execYoutubeChatPluginGetMessage)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UYoutubeChatPluginBPLibrary::YoutubeChatPluginGetMessage();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYoutubeChatPluginBPLibrary::execYoutubeChatPluginSampleFunction)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Param);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UYoutubeChatPluginBPLibrary::YoutubeChatPluginSampleFunction(Z_Param_Param);
		P_NATIVE_END;
	}
	void UYoutubeChatPluginBPLibrary::StaticRegisterNativesUYoutubeChatPluginBPLibrary()
	{
		UClass* Class = UYoutubeChatPluginBPLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "YoutubeChatPluginGetMessage", &UYoutubeChatPluginBPLibrary::execYoutubeChatPluginGetMessage },
			{ "YoutubeChatPluginSampleFunction", &UYoutubeChatPluginBPLibrary::execYoutubeChatPluginSampleFunction },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UYoutubeChatPluginBPLibrary_YoutubeChatPluginGetMessage_Statics
	{
		struct YoutubeChatPluginBPLibrary_eventYoutubeChatPluginGetMessage_Parms
		{
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UYoutubeChatPluginBPLibrary_YoutubeChatPluginGetMessage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(YoutubeChatPluginBPLibrary_eventYoutubeChatPluginGetMessage_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYoutubeChatPluginBPLibrary_YoutubeChatPluginGetMessage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYoutubeChatPluginBPLibrary_YoutubeChatPluginGetMessage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYoutubeChatPluginBPLibrary_YoutubeChatPluginGetMessage_Statics::Function_MetaDataParams[] = {
		{ "Category", "YoutubeChatPluginTesting" },
		{ "DisplayName", "YoutubeChat GetMessage" },
		{ "Keywords", "YoutubeChatPlugin Get Message" },
		{ "ModuleRelativePath", "Public/YoutubeChatPluginBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UYoutubeChatPluginBPLibrary_YoutubeChatPluginGetMessage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYoutubeChatPluginBPLibrary, nullptr, "YoutubeChatPluginGetMessage", nullptr, nullptr, sizeof(Z_Construct_UFunction_UYoutubeChatPluginBPLibrary_YoutubeChatPluginGetMessage_Statics::YoutubeChatPluginBPLibrary_eventYoutubeChatPluginGetMessage_Parms), Z_Construct_UFunction_UYoutubeChatPluginBPLibrary_YoutubeChatPluginGetMessage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYoutubeChatPluginBPLibrary_YoutubeChatPluginGetMessage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYoutubeChatPluginBPLibrary_YoutubeChatPluginGetMessage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYoutubeChatPluginBPLibrary_YoutubeChatPluginGetMessage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYoutubeChatPluginBPLibrary_YoutubeChatPluginGetMessage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UYoutubeChatPluginBPLibrary_YoutubeChatPluginGetMessage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYoutubeChatPluginBPLibrary_YoutubeChatPluginSampleFunction_Statics
	{
		struct YoutubeChatPluginBPLibrary_eventYoutubeChatPluginSampleFunction_Parms
		{
			float Param;
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Param;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UYoutubeChatPluginBPLibrary_YoutubeChatPluginSampleFunction_Statics::NewProp_Param = { "Param", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(YoutubeChatPluginBPLibrary_eventYoutubeChatPluginSampleFunction_Parms, Param), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UYoutubeChatPluginBPLibrary_YoutubeChatPluginSampleFunction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(YoutubeChatPluginBPLibrary_eventYoutubeChatPluginSampleFunction_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYoutubeChatPluginBPLibrary_YoutubeChatPluginSampleFunction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYoutubeChatPluginBPLibrary_YoutubeChatPluginSampleFunction_Statics::NewProp_Param,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYoutubeChatPluginBPLibrary_YoutubeChatPluginSampleFunction_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYoutubeChatPluginBPLibrary_YoutubeChatPluginSampleFunction_Statics::Function_MetaDataParams[] = {
		{ "Category", "YoutubeChatPluginTesting" },
		{ "DisplayName", "Execute Sample function" },
		{ "Keywords", "YoutubeChatPlugin sample test testing" },
		{ "ModuleRelativePath", "Public/YoutubeChatPluginBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UYoutubeChatPluginBPLibrary_YoutubeChatPluginSampleFunction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYoutubeChatPluginBPLibrary, nullptr, "YoutubeChatPluginSampleFunction", nullptr, nullptr, sizeof(Z_Construct_UFunction_UYoutubeChatPluginBPLibrary_YoutubeChatPluginSampleFunction_Statics::YoutubeChatPluginBPLibrary_eventYoutubeChatPluginSampleFunction_Parms), Z_Construct_UFunction_UYoutubeChatPluginBPLibrary_YoutubeChatPluginSampleFunction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYoutubeChatPluginBPLibrary_YoutubeChatPluginSampleFunction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYoutubeChatPluginBPLibrary_YoutubeChatPluginSampleFunction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYoutubeChatPluginBPLibrary_YoutubeChatPluginSampleFunction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYoutubeChatPluginBPLibrary_YoutubeChatPluginSampleFunction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UYoutubeChatPluginBPLibrary_YoutubeChatPluginSampleFunction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UYoutubeChatPluginBPLibrary);
	UClass* Z_Construct_UClass_UYoutubeChatPluginBPLibrary_NoRegister()
	{
		return UYoutubeChatPluginBPLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UYoutubeChatPluginBPLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UYoutubeChatPluginBPLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_YoutubeChatPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UYoutubeChatPluginBPLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UYoutubeChatPluginBPLibrary_YoutubeChatPluginGetMessage, "YoutubeChatPluginGetMessage" }, // 2721693868
		{ &Z_Construct_UFunction_UYoutubeChatPluginBPLibrary_YoutubeChatPluginSampleFunction, "YoutubeChatPluginSampleFunction" }, // 4110575118
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UYoutubeChatPluginBPLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "YoutubeChatPluginBPLibrary.h" },
		{ "ModuleRelativePath", "Public/YoutubeChatPluginBPLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UYoutubeChatPluginBPLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UYoutubeChatPluginBPLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UYoutubeChatPluginBPLibrary_Statics::ClassParams = {
		&UYoutubeChatPluginBPLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UYoutubeChatPluginBPLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UYoutubeChatPluginBPLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UYoutubeChatPluginBPLibrary()
	{
		if (!Z_Registration_Info_UClass_UYoutubeChatPluginBPLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UYoutubeChatPluginBPLibrary.OuterSingleton, Z_Construct_UClass_UYoutubeChatPluginBPLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UYoutubeChatPluginBPLibrary.OuterSingleton;
	}
	template<> YOUTUBECHATPLUGIN_API UClass* StaticClass<UYoutubeChatPluginBPLibrary>()
	{
		return UYoutubeChatPluginBPLibrary::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UYoutubeChatPluginBPLibrary);
	UYoutubeChatPluginBPLibrary::~UYoutubeChatPluginBPLibrary() {}
	DEFINE_FUNCTION(UJsonTool::execCreate)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UJsonTool**)Z_Param__Result=UJsonTool::Create();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UJsonTool::execGetRequest)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UJsonTool**)Z_Param__Result=UJsonTool::GetRequest();
		P_NATIVE_END;
	}
	void UJsonTool::StaticRegisterNativesUJsonTool()
	{
		UClass* Class = UJsonTool::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Create", &UJsonTool::execCreate },
			{ "GetRequest", &UJsonTool::execGetRequest },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UJsonTool_Create_Statics
	{
		struct JsonTool_eventCreate_Parms
		{
			UJsonTool* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UJsonTool_Create_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(JsonTool_eventCreate_Parms, ReturnValue), Z_Construct_UClass_UJsonTool_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJsonTool_Create_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonTool_Create_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonTool_Create_Statics::Function_MetaDataParams[] = {
		{ "Category", "JSON" },
		{ "ModuleRelativePath", "Public/YoutubeChatPluginBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UJsonTool_Create_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJsonTool, nullptr, "Create", nullptr, nullptr, sizeof(Z_Construct_UFunction_UJsonTool_Create_Statics::JsonTool_eventCreate_Parms), Z_Construct_UFunction_UJsonTool_Create_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonTool_Create_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJsonTool_Create_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonTool_Create_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJsonTool_Create()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UJsonTool_Create_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UJsonTool_GetRequest_Statics
	{
		struct JsonTool_eventGetRequest_Parms
		{
			UJsonTool* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UJsonTool_GetRequest_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(JsonTool_eventGetRequest_Parms, ReturnValue), Z_Construct_UClass_UJsonTool_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJsonTool_GetRequest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonTool_GetRequest_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonTool_GetRequest_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "JSON" },
		{ "ModuleRelativePath", "Public/YoutubeChatPluginBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UJsonTool_GetRequest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJsonTool, nullptr, "GetRequest", nullptr, nullptr, sizeof(Z_Construct_UFunction_UJsonTool_GetRequest_Statics::JsonTool_eventGetRequest_Parms), Z_Construct_UFunction_UJsonTool_GetRequest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonTool_GetRequest_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJsonTool_GetRequest_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonTool_GetRequest_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJsonTool_GetRequest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UJsonTool_GetRequest_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UJsonTool);
	UClass* Z_Construct_UClass_UJsonTool_NoRegister()
	{
		return UJsonTool::StaticClass();
	}
	struct Z_Construct_UClass_UJsonTool_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSuccess;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnFail_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFail;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UJsonTool_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_YoutubeChatPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UJsonTool_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UJsonTool_Create, "Create" }, // 233005826
		{ &Z_Construct_UFunction_UJsonTool_GetRequest, "GetRequest" }, // 2783173097
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UJsonTool_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "JSON" },
		{ "IncludePath", "YoutubeChatPluginBPLibrary.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/YoutubeChatPluginBPLibrary.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UJsonTool_Statics::NewProp_OnSuccess_MetaData[] = {
		{ "Category", "JSON" },
		{ "ModuleRelativePath", "Public/YoutubeChatPluginBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UJsonTool_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UJsonTool, OnSuccess), Z_Construct_UDelegateFunction_YoutubeChatPlugin_ResponseDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UJsonTool_Statics::NewProp_OnSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UJsonTool_Statics::NewProp_OnSuccess_MetaData)) }; // 1996516765
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UJsonTool_Statics::NewProp_OnFail_MetaData[] = {
		{ "Category", "JSON" },
		{ "ModuleRelativePath", "Public/YoutubeChatPluginBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UJsonTool_Statics::NewProp_OnFail = { "OnFail", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UJsonTool, OnFail), Z_Construct_UDelegateFunction_YoutubeChatPlugin_ResponseDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UJsonTool_Statics::NewProp_OnFail_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UJsonTool_Statics::NewProp_OnFail_MetaData)) }; // 1996516765
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UJsonTool_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UJsonTool_Statics::NewProp_OnSuccess,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UJsonTool_Statics::NewProp_OnFail,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UJsonTool_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UJsonTool>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UJsonTool_Statics::ClassParams = {
		&UJsonTool::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UJsonTool_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UJsonTool_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UJsonTool_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UJsonTool_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UJsonTool()
	{
		if (!Z_Registration_Info_UClass_UJsonTool.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UJsonTool.OuterSingleton, Z_Construct_UClass_UJsonTool_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UJsonTool.OuterSingleton;
	}
	template<> YOUTUBECHATPLUGIN_API UClass* StaticClass<UJsonTool>()
	{
		return UJsonTool::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UJsonTool);
	UJsonTool::~UJsonTool() {}
	struct Z_CompiledInDeferFile_FID_Users_Segfault_Documents_Unreal_Projects_ProjectAlpha_Plugins_YoutubeChatPlugin_Source_YoutubeChatPlugin_Public_YoutubeChatPluginBPLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Segfault_Documents_Unreal_Projects_ProjectAlpha_Plugins_YoutubeChatPlugin_Source_YoutubeChatPlugin_Public_YoutubeChatPluginBPLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UYoutubeChatPluginBPLibrary, UYoutubeChatPluginBPLibrary::StaticClass, TEXT("UYoutubeChatPluginBPLibrary"), &Z_Registration_Info_UClass_UYoutubeChatPluginBPLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UYoutubeChatPluginBPLibrary), 2580711067U) },
		{ Z_Construct_UClass_UJsonTool, UJsonTool::StaticClass, TEXT("UJsonTool"), &Z_Registration_Info_UClass_UJsonTool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UJsonTool), 2067867286U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Segfault_Documents_Unreal_Projects_ProjectAlpha_Plugins_YoutubeChatPlugin_Source_YoutubeChatPlugin_Public_YoutubeChatPluginBPLibrary_h_2796907084(TEXT("/Script/YoutubeChatPlugin"),
		Z_CompiledInDeferFile_FID_Users_Segfault_Documents_Unreal_Projects_ProjectAlpha_Plugins_YoutubeChatPlugin_Source_YoutubeChatPlugin_Public_YoutubeChatPluginBPLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Segfault_Documents_Unreal_Projects_ProjectAlpha_Plugins_YoutubeChatPlugin_Source_YoutubeChatPlugin_Public_YoutubeChatPluginBPLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
