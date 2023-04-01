#include "YoutubeChatPluginBPLibrary.h"
#include "YoutubeChatPluginSettings.h"
#include "YoutubeChatPlugin.h"

UYoutubeChatPluginBPLibrary::UYoutubeChatPluginBPLibrary(const FObjectInitializer& ObjectInitializer)
: Super(ObjectInitializer)
{

}

UJsonTool::UJsonTool()
{
	Reset();
}

UJsonTool* UJsonTool::Create()
{
	return NewObject<UJsonTool>();
}

FString UJsonTool::CreateResult()
{
	return GetString("messageText");
}

UJsonTool* UJsonTool::GetRequest()
 {
	const FString ChatId = GetDefault<UYoutubeChatPluginSettings>()->LiveChatId;
	const FString ApiKey = GetDefault<UYoutubeChatPluginSettings>()->ApiKey;
 	UJsonTool* DataObj = Create();
 	TSharedRef<IHttpRequest, ESPMode::ThreadSafe> Request = FHttpModule::Get().CreateRequest();
	const FString Url = "https://youtube.googleapis.com/youtube/v3/liveChat/messages?liveChatId=" + ChatId + "&part=snippet&key=" + ApiKey;
 	Request->SetURL(Url);
	
 	Request->SetVerb("GET");
 	Request->OnProcessRequestComplete().BindUObject(DataObj, &UJsonTool::FOnHttpReady);
 	DataObj->AddToRoot();
 	
 	Request->ProcessRequest();
 	return DataObj;
 }

bool UJsonTool::FromString(const FString& DataString)
{
	TSharedRef<TJsonReader<TCHAR>> JsonReader = TJsonReaderFactory<TCHAR>::Create(DataString);
	
	bool bIsDeserialized = FJsonSerializer::Deserialize(JsonReader, Data);
	if (!bIsDeserialized)
		return false;
	return true;
}

FString UJsonTool::GetString(const FString& Key)
{
	UJsonTool* FieldObj = Create();
	FString OutString = "";
	const TSharedPtr<FJsonObject> *OutPtr;
	if (!Data->TryGetObjectField("textMessageDetails", OutPtr))
		return OutString;
	FieldObj->Data = *OutPtr;
	FieldObj->Data->TryGetStringField(*Key, OutString);
	return OutString;
}

void UJsonTool::Reset()
{
	if (Data.IsValid())
		Data.Reset();
	Data = MakeShareable(new FJsonObject());
}

void UJsonTool::FOnHttpReady(FHttpRequestPtr Request, FHttpResponsePtr Response, bool bSuccessful)
{
	RemoveFromRoot();
	if (!bSuccessful)
	{
		OnFail.Broadcast("Request failed\n");
		return ;
	}
	if (!FromString(Response->GetContentAsString()))
	{
		OnFail.Broadcast("Parsing failed\n");
		return ;
	}
	OnSuccess.Broadcast(this->CreateResult());
}

FString UYoutubeChatPluginBPLibrary::YoutubeChatPluginGetMessage()
{
	FString ApiKey = GetDefault<UYoutubeChatPluginSettings>()->ApiKey;
	return ApiKey;
}


float UYoutubeChatPluginBPLibrary::YoutubeChatPluginSampleFunction(float Param)
{
	return -1;
}

