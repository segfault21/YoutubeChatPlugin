#pragma once

#include "Engine/DeveloperSettings.h"
#include "YoutubeChatPluginSettings.generated.h"

UCLASS(Config=Game, DefaultConfig, meta=(DisplayName="YoutubeChat Plugin Settings"))
class YOUTUBECHATPLUGIN_API UYoutubeChatPluginSettings : public UDeveloperSettings
{
	GENERATED_BODY()
public:

	UPROPERTY(Config, EditAnywhere, Category = "Main")
	FString ApiKey;
	UPROPERTY(Config, EditAnywhere, Category = "Main")
	FString LiveChatId;
};