#pragma once

/**
 * Name: Satisfactory
 * Version: Early_Access_CL#264901
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
	 * Class ResonanceAudio.ResonanceAudioSoundfieldSettings
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	class UResonanceAudioSoundfieldSettings : public USoundfieldEncodingSettingsBase
	{
	public:
		EResonanceRenderMode                                       RenderMode;                                              // 0x0028(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KEV1[0x7];                                   // 0x0029(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ResonanceAudio.ResonanceAudioBlueprintFunctionLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UResonanceAudioBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_SetGlobalReverbPreset(class UResonanceAudioReverbPluginPreset* InPreset);
		class UResonanceAudioReverbPluginPreset* STATIC_GetGlobalReverbPreset();
		static UClass* StaticClass();
	};

	/**
	 * Class ResonanceAudio.ResonanceAudioDirectivityVisualizer
	 * Size -> 0x0088 (FullSize[0x0380] - InheritedSize[0x02F8])
	 */
	class AResonanceAudioDirectivityVisualizer : public AActor
	{
	public:
		unsigned char                                              UnknownData_RPIU[0x8];                                   // 0x02F8(0x0008) Fix Super Size
		unsigned char                                              UnknownData_CKL1[0x68];                                  // 0x0300(0x0068) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMaterial*                                           Material;                                                // 0x0368(0x0008) ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UResonanceAudioSpatializationSourceSettings*         Settings;                                                // 0x0370(0x0008) ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_KI9G[0x8];                                   // 0x0378(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ResonanceAudio.ResonanceAudioReverbPluginPreset
	 * Size -> 0x0108 (FullSize[0x0170] - InheritedSize[0x0068])
	 */
	class UResonanceAudioReverbPluginPreset : public USoundEffectSubmixPreset
	{
	public:
		unsigned char                                              UnknownData_UDFL[0x98];                                  // 0x0068(0x0098) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FResonanceAudioReverbPluginSettings                 Settings;                                                // 0x0100(0x0070) Edit, NoDestructor, NativeAccessSpecifierPublic

	public:
		void SetRoomRotation(const struct FQuat& InRotation);
		void SetRoomPosition(const struct FVector& InPosition);
		void SetRoomMaterials(TArray<ERaMaterialName> InMaterials);
		void SetRoomDimensions(const struct FVector& InDimensions);
		void SetReverbTimeModifier(float InReverbTimeModifier);
		void SetReverbGain(float InReverbGain);
		void SetReverbBrightness(float InReverbBrightness);
		void SetReflectionScalar(float InReflectionScalar);
		void SetEnableRoomEffects(bool bInEnableRoomEffects);
		static UClass* StaticClass();
	};

	/**
	 * Class ResonanceAudio.ResonanceAudioSettings
	 * Size -> 0x0068 (FullSize[0x0090] - InheritedSize[0x0028])
	 */
	class UResonanceAudioSettings : public UObject
	{
	public:
		struct FSoftObjectPath                                     OutputSubmix;                                            // 0x0028(0x0020) Edit, ZeroConstructor, Config, GlobalConfig, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ERaQualityMode                                             QualityMode;                                             // 0x0048(0x0001) Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XOB1[0x7];                                   // 0x0049(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSoftObjectPath                                     GlobalReverbPreset;                                      // 0x0050(0x0020) Edit, ZeroConstructor, Config, GlobalConfig, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSoftObjectPath                                     GlobalSourcePreset;                                      // 0x0070(0x0020) Edit, ZeroConstructor, Config, GlobalConfig, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ResonanceAudio.ResonanceAudioSpatializationSourceSettings
	 * Size -> 0x0028 (FullSize[0x0050] - InheritedSize[0x0028])
	 */
	class UResonanceAudioSpatializationSourceSettings : public USpatializationPluginSourceSettingsBase
	{
	public:
		ERaSpatializationMethod                                    SpatializationMethod;                                    // 0x0028(0x0001) Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Z9SN[0x3];                                   // 0x0029(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Pattern;                                                 // 0x002C(0x0004) Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Sharpness;                                               // 0x0030(0x0004) Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bToggleVisualization;                                    // 0x0034(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3TYU[0x3];                                   // 0x0035(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Scale;                                                   // 0x0038(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Spread;                                                  // 0x003C(0x0004) Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ERaDistanceRolloffModel                                    Rolloff;                                                 // 0x0040(0x0001) Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KFHH[0x3];                                   // 0x0041(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MinDistance;                                             // 0x0044(0x0004) Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxDistance;                                             // 0x0048(0x0004) Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_G3XG[0x4];                                   // 0x004C(0x0004) MISSED OFFSET (PADDING)

	public:
		void SetSoundSourceSpread(float InSpread);
		void SetSoundSourceDirectivity(float InPattern, float InSharpness);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
