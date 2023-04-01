#pragma once

#include "CoreMinimal.h"
#include "Http.h"
#include "Json.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "YoutubeChatPluginBPLibrary.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FResponseDelegate, FString, Data);
UCLASS()
class UYoutubeChatPluginBPLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_UCLASS_BODY()
	
	
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Execute Sample function", Keywords = "YoutubeChatPlugin sample test testing"), Category = "YoutubeChatPluginTesting")
	static float YoutubeChatPluginSampleFunction(float Param);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "YoutubeChat GetMessage", Keywords = "YoutubeChatPlugin Get Message"), Category = "YoutubeChatPluginTesting")
	static FString YoutubeChatPluginGetMessage();
};

UCLASS(BlueprintType, Blueprintable, Category = "JSON")
class YOUTUBECHATPLUGIN_API UJsonTool : public UBlueprintAsyncActionBase
{
	GENERATED_BODY()

public:
	TSharedPtr<FJsonObject> Data;
	
	UJsonTool();
	
	UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly = "true"), Category = "JSON")
		static UJsonTool* GetRequest();
	UFUNCTION(BlueprintPure, Category = "JSON")
		static UJsonTool* Create();
	UPROPERTY(BlueprintAssignable, Category = "JSON")
	FResponseDelegate OnSuccess;
	UPROPERTY(BlueprintAssignable, Category = "JSON")
	FResponseDelegate OnFail;
	bool FromString(const FString& DataString);
	FString GetString(const FString& Key);
	FString CreateResult();
private:
	void Reset();
	
	void FOnHttpReady(FHttpRequestPtr Request, FHttpResponsePtr Response, bool bSuccessful);
};
