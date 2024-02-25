#pragma once

/**
 * Name: Satisfactory
 * Version: Early_Access_CL#273254
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Classes
	// --------------------------------------------------
	/**
	 * Class TraceUtilities.TraceUtilLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UTraceUtilLibrary : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_TraceMarkRegionStart(const class FString& Name);
		void STATIC_TraceMarkRegionEnd(const class FString& Name);
		void STATIC_TraceBookmark(const class FString& Name);
		bool STATIC_ToggleChannel(const class FString& ChannelName, bool Enabled);
		bool STATIC_StopTracing();
		bool STATIC_StartTraceToFile(const class FString& Filename, TArray<class FString> Channels);
		bool STATIC_StartTraceSendTo(const class FString& Target, TArray<class FString> Channels);
		bool STATIC_ResumeTracing();
		bool STATIC_PauseTracing();
		bool STATIC_IsTracing();
		bool STATIC_IsChannelEnabled(const class FString& ChannelName);
		TArray<class FString> STATIC_GetEnabledChannels();
		TArray<class FString> STATIC_GetAllChannels();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
