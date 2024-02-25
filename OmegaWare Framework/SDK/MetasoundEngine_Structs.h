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
	 * Enum MetasoundEngine.EMetaSoundMessageLevel
	 */
	enum class EMetaSoundMessageLevel : uint8_t
	{
		Error   = 0,
		Warning = 1,
		Info    = 2,
		MAX     = 3
	};

	/**
	 * Enum MetasoundEngine.EMetasoundSourceAudioFormat
	 */
	enum class EMetasoundSourceAudioFormat : uint8_t
	{
		Mono        = 0,
		Stereo      = 1,
		Quad        = 2,
		FiveDotOne  = 3,
		SevenDotOne = 4,
		COUNT       = 5,
		MAX         = 6
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct MetasoundEngine.DefaultMetaSoundAssetAutoUpdateSettings
	 * Size -> 0x0020
	 */
	struct FDefaultMetaSoundAssetAutoUpdateSettings
	{
	public:
		struct FSoftObjectPath                                     Metasound;                                               // 0x0000(0x0020) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct MetasoundEngine.MetaSoundAsyncAssetDependencies
	 * Size -> 0x0030
	 */
	struct FMetaSoundAsyncAssetDependencies
	{
	public:
		unsigned char                                              UnknownData_FBLG[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UObject*                                             Metasound;                                               // 0x0008(0x0008) ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NQUI[0x20];                                  // 0x0010(0x0020) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct MetasoundEngine.MetaSoundAssetDirectory
	 * Size -> 0x0010
	 */
	struct FMetaSoundAssetDirectory
	{
	public:
		struct FDirectoryPath                                      Directory;                                               // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
