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
	 * Class WwiseResourceLoader.WwiseEventInfoLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UWwiseEventInfoLibrary : public UBlueprintFunctionLibrary
	{
	public:
		struct FWwiseEventInfo STATIC_SetWwiseShortId(const struct FWwiseEventInfo& Ref, int32_t WwiseShortId);
		struct FWwiseEventInfo STATIC_SetWwiseName(const struct FWwiseEventInfo& Ref, const class FString& WwiseName);
		struct FWwiseEventInfo STATIC_SetWwiseGuid(const struct FWwiseEventInfo& Ref, const struct FGuid& WwiseGuid);
		struct FWwiseEventInfo STATIC_SetSwitchContainerLoading(const struct FWwiseEventInfo& Ref, EWwiseEventSwitchContainerLoading SwitchContainerLoading);
		struct FWwiseEventInfo STATIC_SetHardCodedSoundBankShortId(const struct FWwiseEventInfo& Ref, int32_t HardCodedSoundBankShortId);
		struct FWwiseEventInfo STATIC_SetDestroyOptions(const struct FWwiseEventInfo& Ref, EWwiseEventDestroyOptions DestroyOptions);
		struct FWwiseEventInfo STATIC_MakeStruct(const struct FGuid& WwiseGuid, int32_t WwiseShortId, const class FString& WwiseName, EWwiseEventSwitchContainerLoading SwitchContainerLoading, EWwiseEventDestroyOptions DestroyOptions, int32_t HardCodedSoundBankShortId);
		int32_t STATIC_GetWwiseShortId(const struct FWwiseEventInfo& Ref);
		class FString STATIC_GetWwiseName(const struct FWwiseEventInfo& Ref);
		struct FGuid STATIC_GetWwiseGuid(const struct FWwiseEventInfo& Ref);
		EWwiseEventSwitchContainerLoading STATIC_GetSwitchContainerLoading(const struct FWwiseEventInfo& Ref);
		int32_t STATIC_GetHardCodedSoundBankShortId(const struct FWwiseEventInfo& Ref);
		EWwiseEventDestroyOptions STATIC_GetDestroyOptions(const struct FWwiseEventInfo& Ref);
		void STATIC_BreakStruct(const struct FWwiseEventInfo& Ref, struct FGuid* OutWwiseGuid, int32_t* OutWwiseShortId, class FString* OutWwiseName, EWwiseEventSwitchContainerLoading* OutSwitchContainerLoading, EWwiseEventDestroyOptions* OutDestroyOptions, int32_t* OutHardCodedSoundBankShortId);
		static UClass* StaticClass();
	};

	/**
	 * Class WwiseResourceLoader.WwiseGroupValueInfoLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UWwiseGroupValueInfoLibrary : public UBlueprintFunctionLibrary
	{
	public:
		struct FWwiseGroupValueInfo STATIC_SetWwiseShortId(const struct FWwiseGroupValueInfo& Ref, int32_t WwiseShortId);
		struct FWwiseGroupValueInfo STATIC_SetWwiseName(const struct FWwiseGroupValueInfo& Ref, const class FString& WwiseName);
		struct FWwiseGroupValueInfo STATIC_SetGroupShortId(const struct FWwiseGroupValueInfo& Ref, int32_t GroupShortId);
		struct FWwiseGroupValueInfo STATIC_SetAssetGuid(const struct FWwiseGroupValueInfo& Ref, const struct FGuid& AssetGuid);
		struct FWwiseGroupValueInfo STATIC_MakeStruct(const struct FGuid& AssetGuid, int32_t GroupShortId, int32_t WwiseShortId, const class FString& WwiseName);
		int32_t STATIC_GetWwiseShortId(const struct FWwiseGroupValueInfo& Ref);
		class FString STATIC_GetWwiseName(const struct FWwiseGroupValueInfo& Ref);
		int32_t STATIC_GetGroupShortId(const struct FWwiseGroupValueInfo& Ref);
		struct FGuid STATIC_GetAssetGuid(const struct FWwiseGroupValueInfo& Ref);
		void STATIC_BreakStruct(const struct FWwiseGroupValueInfo& Ref, struct FGuid* OutAssetGuid, int32_t* OutGroupShortId, int32_t* OutWwiseShortId, class FString* OutWwiseName);
		static UClass* StaticClass();
	};

	/**
	 * Class WwiseResourceLoader.WwiseObjectInfoLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UWwiseObjectInfoLibrary : public UBlueprintFunctionLibrary
	{
	public:
		struct FWwiseObjectInfo STATIC_SetWwiseShortId(const struct FWwiseObjectInfo& Ref, int32_t WwiseShortId);
		struct FWwiseObjectInfo STATIC_SetWwiseName(const struct FWwiseObjectInfo& Ref, const class FString& WwiseName);
		struct FWwiseObjectInfo STATIC_SetWwiseGuid(const struct FWwiseObjectInfo& Ref, const struct FGuid& WwiseGuid);
		struct FWwiseObjectInfo STATIC_SetHardCodedSoundBankShortId(const struct FWwiseObjectInfo& Ref, int32_t HardCodedSoundBankShortId);
		struct FWwiseObjectInfo STATIC_MakeStruct(const struct FGuid& WwiseGuid, int32_t WwiseShortId, const class FString& WwiseName, int32_t HardCodedSoundBankShortId);
		int32_t STATIC_GetWwiseShortId(const struct FWwiseObjectInfo& Ref);
		class FString STATIC_GetWwiseName(const struct FWwiseObjectInfo& Ref);
		struct FGuid STATIC_GetWwiseGuid(const struct FWwiseObjectInfo& Ref);
		int32_t STATIC_GetHardCodedSoundBankShortId(const struct FWwiseObjectInfo& Ref);
		void STATIC_BreakStruct(const struct FWwiseObjectInfo& Ref, struct FGuid* OutWwiseGuid, int32_t* OutWwiseShortId, class FString* OutWwiseName, int32_t* OutHardCodedSoundBankShortId);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
