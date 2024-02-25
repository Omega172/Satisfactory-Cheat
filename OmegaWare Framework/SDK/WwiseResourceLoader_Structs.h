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
	// # Enums
	// --------------------------------------------------
	/**
	 * Enum WwiseResourceLoader.EWwiseEventDestroyOptions
	 */
	enum class EWwiseEventDestroyOptions : uint8_t
	{
		StopEventOnDestroy = 0,
		WaitForEventEnd    = 1,
		MAX                = 2
	};

	/**
	 * Enum WwiseResourceLoader.EWwiseEventSwitchContainerLoading
	 */
	enum class EWwiseEventSwitchContainerLoading : uint8_t
	{
		AlwaysLoad      = 0,
		LoadOnReference = 1,
		MAX             = 2
	};

	/**
	 * Enum WwiseResourceLoader.EWwiseGroupType
	 */
	enum class EWwiseGroupType : uint8_t
	{
		Switch  = 0,
		State   = 1,
		Unknown = 2,
		MAX     = 3
	};

	/**
	 * Enum WwiseResourceLoader.EWwiseReloadLanguage
	 */
	enum class EWwiseReloadLanguage : uint8_t
	{
		Manual    = 0,
		Immediate = 1,
		Safe      = 2,
		MAX       = 3
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct WwiseResourceLoader.WwiseAcousticTextureCookedData
	 * Size -> 0x000C
	 */
	struct FWwiseAcousticTextureCookedData
	{
	public:
		int32_t                                                    ShortId;                                                 // 0x0000(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                DebugName;                                               // 0x0004(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct WwiseResourceLoader.WwiseAuxBusCookedData
	 * Size -> 0x0030
	 */
	struct FWwiseAuxBusCookedData
	{
	public:
		int32_t                                                    AuxBusId;                                                // 0x0000(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZYBD[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FWwiseSoundBankCookedData>                   SoundBanks;                                              // 0x0008(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, NativeAccessSpecifierPublic
		TArray<struct FWwiseMediaCookedData>                       Media;                                                   // 0x0018(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, NativeAccessSpecifierPublic
		class FName                                                DebugName;                                               // 0x0028(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct WwiseResourceLoader.WwiseSwitchContainerLeafCookedData
	 * Size -> 0x0080
	 */
	struct FWwiseSwitchContainerLeafCookedData
	{
	public:
		unsigned char                                              GroupValueSet[0x50];                                     // 0x0000(0x0050) UNKNOWN PROPERTY: SetProperty
		TArray<struct FWwiseSoundBankCookedData>                   SoundBanks;                                              // 0x0050(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, NativeAccessSpecifierPublic
		TArray<struct FWwiseMediaCookedData>                       Media;                                                   // 0x0060(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, NativeAccessSpecifierPublic
		TArray<struct FWwiseExternalSourceCookedData>              ExternalSources;                                         // 0x0070(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct WwiseResourceLoader.WwiseEventCookedData
	 * Size -> 0x00A8
	 */
	struct FWwiseEventCookedData
	{
	public:
		int32_t                                                    EventId;                                                 // 0x0000(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GF0L[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FWwiseSoundBankCookedData>                   SoundBanks;                                              // 0x0008(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, NativeAccessSpecifierPublic
		TArray<struct FWwiseMediaCookedData>                       Media;                                                   // 0x0018(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, NativeAccessSpecifierPublic
		TArray<struct FWwiseExternalSourceCookedData>              ExternalSources;                                         // 0x0028(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, NativeAccessSpecifierPublic
		TArray<struct FWwiseSwitchContainerLeafCookedData>         SwitchContainerLeaves;                                   // 0x0038(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, NativeAccessSpecifierPublic
		unsigned char                                              RequiredGroupValueSet[0x50];                             // 0x0048(0x0050) UNKNOWN PROPERTY: SetProperty
		EWwiseEventDestroyOptions                                  DestroyOptions;                                          // 0x0098(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9PMA[0x3];                                   // 0x0099(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                DebugName;                                               // 0x009C(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_M13A[0x4];                                   // 0x00A4(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct WwiseResourceLoader.WwiseGroupValueCookedData
	 * Size -> 0x0014
	 */
	struct FWwiseGroupValueCookedData
	{
	public:
		EWwiseGroupType                                            Type;                                                    // 0x0000(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SXZ9[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    GroupId;                                                 // 0x0004(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ID;                                                      // 0x0008(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                DebugName;                                               // 0x000C(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct WwiseResourceLoader.WwiseObjectInfo
	 * Size -> 0x0020
	 */
	struct FWwiseObjectInfo
	{
	public:
		struct FGuid                                               WwiseGuid;                                               // 0x0000(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   WwiseShortId;                                            // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                WwiseName;                                               // 0x0014(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   HardCodedSoundBankShortId;                               // 0x001C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct WwiseResourceLoader.WwiseEventInfo
	 * Size -> 0x0004 (FullSize[0x0024] - InheritedSize[0x0020])
	 */
	struct FWwiseEventInfo : public FWwiseObjectInfo
	{
	public:
		EWwiseEventSwitchContainerLoading                          SwitchContainerLoading;                                  // 0x0020(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EWwiseEventDestroyOptions                                  DestroyOptions;                                          // 0x0021(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YFVZ[0x2];                                   // 0x0022(0x0002) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct WwiseResourceLoader.WwiseGameParameterCookedData
	 * Size -> 0x000C
	 */
	struct FWwiseGameParameterCookedData
	{
	public:
		int32_t                                                    ShortId;                                                 // 0x0000(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                DebugName;                                               // 0x0004(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct WwiseResourceLoader.WwiseGroupValueInfo
	 * Size -> 0x0004 (FullSize[0x0024] - InheritedSize[0x0020])
	 */
	struct FWwiseGroupValueInfo : public FWwiseObjectInfo
	{
	public:
		uint32_t                                                   GroupShortId;                                            // 0x0020(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct WwiseResourceLoader.WwiseInitBankCookedData
	 * Size -> 0x0024 (FullSize[0x0040] - InheritedSize[0x001C])
	 */
	struct FWwiseInitBankCookedData : public FWwiseSoundBankCookedData
	{
	public:
		unsigned char                                              UnknownData_F279[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FWwiseMediaCookedData>                       Media;                                                   // 0x0020(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, NativeAccessSpecifierPublic
		TArray<struct FWwiseLanguageCookedData>                    Language;                                                // 0x0030(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct WwiseResourceLoader.WwiseLanguageId
	 * Size -> 0x000C
	 */
	struct FWwiseLanguageId
	{
	public:
		int32_t                                                    LanguageId;                                              // 0x0000(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                LanguageName;                                            // 0x0004(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct WwiseResourceLoader.WwiseLocalizedAuxBusCookedData
	 * Size -> 0x0060
	 */
	struct FWwiseLocalizedAuxBusCookedData
	{
	public:
		TMap<struct FWwiseLanguageCookedData, struct FWwiseAuxBusCookedData> AuxBusLanguageMap;                                       // 0x0000(0x0050) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, EditConst, NativeAccessSpecifierPublic
		class FName                                                DebugName;                                               // 0x0050(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    AuxBusId;                                                // 0x0058(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BFFC[0x4];                                   // 0x005C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct WwiseResourceLoader.WwiseLocalizedEventCookedData
	 * Size -> 0x0060
	 */
	struct FWwiseLocalizedEventCookedData
	{
	public:
		TMap<struct FWwiseLanguageCookedData, struct FWwiseEventCookedData> EventLanguageMap;                                        // 0x0000(0x0050) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, EditConst, NativeAccessSpecifierPublic
		class FName                                                DebugName;                                               // 0x0050(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    EventId;                                                 // 0x0058(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PA41[0x4];                                   // 0x005C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct WwiseResourceLoader.WwiseShareSetCookedData
	 * Size -> 0x0030
	 */
	struct FWwiseShareSetCookedData
	{
	public:
		int32_t                                                    ShareSetId;                                              // 0x0000(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IPUO[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FWwiseSoundBankCookedData>                   SoundBanks;                                              // 0x0008(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, NativeAccessSpecifierPublic
		TArray<struct FWwiseMediaCookedData>                       Media;                                                   // 0x0018(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, NativeAccessSpecifierPublic
		class FName                                                DebugName;                                               // 0x0028(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct WwiseResourceLoader.WwiseLocalizedShareSetCookedData
	 * Size -> 0x0060
	 */
	struct FWwiseLocalizedShareSetCookedData
	{
	public:
		TMap<struct FWwiseLanguageCookedData, struct FWwiseShareSetCookedData> ShareSetLanguageMap;                                     // 0x0000(0x0050) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, EditConst, NativeAccessSpecifierPublic
		class FName                                                DebugName;                                               // 0x0050(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ShareSetId;                                              // 0x0058(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NIYH[0x4];                                   // 0x005C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct WwiseResourceLoader.WwiseLocalizedSoundBankCookedData
	 * Size -> 0x0060
	 */
	struct FWwiseLocalizedSoundBankCookedData
	{
	public:
		TMap<struct FWwiseLanguageCookedData, struct FWwiseSoundBankCookedData> SoundBankLanguageMap;                                    // 0x0000(0x0050) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, EditConst, NativeAccessSpecifierPublic
		class FName                                                DebugName;                                               // 0x0050(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SoundBankId;                                             // 0x0058(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VW3N[0x4];                                   // 0x005C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct WwiseResourceLoader.WwisePlatformId
	 * Size -> 0x0018
	 */
	struct FWwisePlatformId
	{
	public:
		struct FGuid                                               PlatformGuid;                                            // 0x0000(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                PlatformName;                                            // 0x0010(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct WwiseResourceLoader.WwiseSharedGroupValueKey
	 * Size -> 0x0010
	 */
	struct FWwiseSharedGroupValueKey
	{
	public:
		unsigned char                                              UnknownData_NS6F[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct WwiseResourceLoader.WwiseSharedLanguageId
	 * Size -> 0x0018
	 */
	struct FWwiseSharedLanguageId
	{
	public:
		unsigned char                                              UnknownData_9CIJ[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		EWwiseLanguageRequirement                                  LanguageRequirement;                                     // 0x0010(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_32DY[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct WwiseResourceLoader.WwiseSharedPlatformId
	 * Size -> 0x0010
	 */
	struct FWwiseSharedPlatformId
	{
	public:
		unsigned char                                              UnknownData_MJ26[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct WwiseResourceLoader.WwiseTriggerCookedData
	 * Size -> 0x000C
	 */
	struct FWwiseTriggerCookedData
	{
	public:
		int32_t                                                    TriggerId;                                               // 0x0000(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                DebugName;                                               // 0x0004(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
