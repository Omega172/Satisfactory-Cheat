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
	 * Enum OpenColorIO.EOpenColorIOViewTransformDirection
	 */
	enum class EOpenColorIOViewTransformDirection : uint8_t
	{
		Forward = 0,
		Inverse = 1,
		MAX     = 2
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct OpenColorIO.OpenColorIOColorSpace
	 * Size -> 0x0028
	 */
	struct FOpenColorIOColorSpace
	{
	public:
		class FString                                              ColorSpaceName;                                          // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ColorSpaceIndex;                                         // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PTLG[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              FamilyName;                                              // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OpenColorIO.OpenColorIODisplayView
	 * Size -> 0x0020
	 */
	struct FOpenColorIODisplayView
	{
	public:
		class FString                                              Display;                                                 // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              View;                                                    // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OpenColorIO.OpenColorIOColorConversionSettings
	 * Size -> 0x0098
	 */
	struct FOpenColorIOColorConversionSettings
	{
	public:
		class UOpenColorIOConfiguration*                           ConfigurationSource;                                     // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FOpenColorIOColorSpace                              SourceColorSpace;                                        // 0x0008(0x0028) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FOpenColorIOColorSpace                              DestinationColorSpace;                                   // 0x0030(0x0028) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FOpenColorIODisplayView                             DestinationDisplayView;                                  // 0x0058(0x0020) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		EOpenColorIOViewTransformDirection                         DisplayViewDirection;                                    // 0x0078(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NAWS[0x1F];                                  // 0x0079(0x001F) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OpenColorIO.OpenColorIODisplayConfiguration
	 * Size -> 0x00A0
	 */
	struct FOpenColorIODisplayConfiguration
	{
	public:
		bool                                                       bIsEnabled;                                              // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GRX1[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FOpenColorIOColorConversionSettings                 ColorConfiguration;                                      // 0x0008(0x0098) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
