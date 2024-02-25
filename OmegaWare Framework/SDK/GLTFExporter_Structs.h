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
	 * Enum GLTFExporter.EGLTFTextureImageFormat
	 */
	enum class EGLTFTextureImageFormat : uint8_t
	{
		None = 0,
		PNG  = 1,
		JPEG = 2,
		MAX  = 3
	};

	/**
	 * Enum GLTFExporter.EGLTFMaterialVariantMode
	 */
	enum class EGLTFMaterialVariantMode : uint8_t
	{
		None        = 0,
		Simple      = 1,
		UseMeshData = 2,
		MAX         = 3
	};

	/**
	 * Enum GLTFExporter.EGLTFMaterialBakeMode
	 */
	enum class EGLTFMaterialBakeMode : uint8_t
	{
		Disabled    = 0,
		Simple      = 1,
		UseMeshData = 2,
		MAX         = 3
	};

	/**
	 * Enum GLTFExporter.EGLTFMaterialBakeSizePOT
	 */
	enum class EGLTFMaterialBakeSizePOT : uint8_t
	{
		POT     = 0,
		POT01   = 1,
		POT02   = 2,
		POT03   = 3,
		POT04   = 4,
		POT05   = 5,
		POT06   = 6,
		POT07   = 7,
		POT08   = 8,
		POT09   = 9,
		POT10   = 10,
		POT11   = 11,
		POT12   = 12,
		POT13   = 13,
		POT_MAX = 14
	};

	/**
	 * Enum GLTFExporter.EGLTFMaterialPropertyGroup
	 */
	enum class EGLTFMaterialPropertyGroup : uint8_t
	{
		None                  = 0,
		BaseColorOpacity      = 1,
		MetallicRoughness     = 2,
		EmissiveColor         = 3,
		Normal                = 4,
		AmbientOcclusion      = 5,
		ClearCoatRoughness    = 6,
		ClearCoatBottomNormal = 7,
		MAX                   = 8
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct GLTFExporter.GLTFOverrideMaterialBakeSettings
	 * Size -> 0x0006
	 */
	struct FGLTFOverrideMaterialBakeSettings
	{
	public:
		bool                                                       bOverrideSize;                                           // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EGLTFMaterialBakeSizePOT                                   Size;                                                    // 0x0001(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOverrideFilter;                                         // 0x0002(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ETextureFilter                                             Filter;                                                  // 0x0003(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOverrideTiling;                                         // 0x0004(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ETextureAddress                                            Tiling;                                                  // 0x0005(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GLTFExporter.GLTFExportMessages
	 * Size -> 0x0030
	 */
	struct FGLTFExportMessages
	{
	public:
		TArray<class FString>                                      Suggestions;                                             // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class FString>                                      Warnings;                                                // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class FString>                                      Errors;                                                  // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
