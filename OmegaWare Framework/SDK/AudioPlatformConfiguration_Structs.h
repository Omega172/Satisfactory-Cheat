﻿#pragma once

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
	// # Enums
	// --------------------------------------------------
	/**
	 * Enum AudioPlatformConfiguration.ESoundwaveSampleRateSettings
	 */
	enum class ESoundwaveSampleRateSettings : uint8_t
	{
		Max                    = 0,
		High                   = 1,
		Medium                 = 2,
		Low                    = 3,
		Min                    = 4,
		MatchDevice_DEPRECATED = 5
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct AudioPlatformConfiguration.PlatformRuntimeAudioCompressionOverrides
	 * Size -> 0x0010
	 */
	struct FPlatformRuntimeAudioCompressionOverrides
	{
	public:
		bool                                                       bOverrideCompressionTimes;                               // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_N47H[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      DurationThreshold;                                       // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxNumRandomBranches;                                    // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SoundCueQualityIndex;                                    // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
