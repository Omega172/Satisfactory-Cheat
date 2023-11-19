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
	 * Class GLTFExporter.GLTFExportOptions
	 * Size -> 0x0078 (FullSize[0x00A0] - InheritedSize[0x0028])
	 */
	class UGLTFExportOptions : public UObject
	{
	public:
		float                                                      ExportUniformScale;                                      // 0x0028(0x0004) Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bExportPreviewMesh;                                      // 0x002C(0x0001) Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSkipNearDefaultValues;                                  // 0x002D(0x0001) Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bExportProxyMaterials;                                   // 0x002E(0x0001) Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bExportUnlitMaterials;                                   // 0x002F(0x0001) Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bExportClearCoatMaterials;                               // 0x0030(0x0001) Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EGLTFMaterialBakeMode                                      BakeMaterialInputs;                                      // 0x0031(0x0001) Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EGLTFMaterialBakeSizePOT                                   DefaultMaterialBakeSize;                                 // 0x0032(0x0001) Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ETextureFilter                                             DefaultMaterialBakeFilter;                               // 0x0033(0x0001) Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ETextureAddress                                            DefaultMaterialBakeTiling;                               // 0x0034(0x0001) Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7SJF[0x3];                                   // 0x0035(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<EGLTFMaterialPropertyGroup, struct FGLTFOverrideMaterialBakeSettings> DefaultInputBakeSettings;                                // 0x0038(0x0050) Edit, BlueprintVisible, Config, NativeAccessSpecifierPublic
		int32_t                                                    DefaultLevelOfDetail;                                    // 0x0088(0x0004) Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bExportVertexColors;                                     // 0x008C(0x0001) Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bExportVertexSkinWeights;                                // 0x008D(0x0001) Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseMeshQuantization;                                    // 0x008E(0x0001) Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bExportLevelSequences;                                   // 0x008F(0x0001) Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bExportAnimationSequences;                               // 0x0090(0x0001) Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EGLTFTextureImageFormat                                    TextureImageFormat;                                      // 0x0091(0x0001) Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LIDT[0x2];                                   // 0x0092(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    TextureImageQuality;                                     // 0x0094(0x0004) Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bExportTextureTransforms;                                // 0x0098(0x0001) Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAdjustNormalmaps;                                       // 0x0099(0x0001) Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bExportHiddenInGame;                                     // 0x009A(0x0001) Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bExportLights;                                           // 0x009B(0x0001) Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bExportCameras;                                          // 0x009C(0x0001) Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EGLTFMaterialVariantMode                                   ExportMaterialVariants;                                  // 0x009D(0x0001) Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_F7K5[0x2];                                   // 0x009E(0x0002) MISSED OFFSET (PADDING)

	public:
		void ResetToDefault();
		static UClass* StaticClass();
	};

	/**
	 * Class GLTFExporter.GLTFExporter
	 * Size -> 0x0000 (FullSize[0x0078] - InheritedSize[0x0078])
	 */
	class UGLTFExporter : public UExporter
	{
	public:
		bool STATIC_ExportToGLTF(class UObject* Object, const class FString& FilePath, class UGLTFExportOptions* Options, struct FGLTFExportMessages* OutMessages);
		static UClass* StaticClass();
	};

	/**
	 * Class GLTFExporter.GLTFAnimSequenceExporter
	 * Size -> 0x0000 (FullSize[0x0078] - InheritedSize[0x0078])
	 */
	class UGLTFAnimSequenceExporter : public UGLTFExporter
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GLTFExporter.GLTFLevelExporter
	 * Size -> 0x0000 (FullSize[0x0078] - InheritedSize[0x0078])
	 */
	class UGLTFLevelExporter : public UGLTFExporter
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GLTFExporter.GLTFLevelSequenceExporter
	 * Size -> 0x0000 (FullSize[0x0078] - InheritedSize[0x0078])
	 */
	class UGLTFLevelSequenceExporter : public UGLTFExporter
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GLTFExporter.GLTFLevelVariantSetsExporter
	 * Size -> 0x0000 (FullSize[0x0078] - InheritedSize[0x0078])
	 */
	class UGLTFLevelVariantSetsExporter : public UGLTFExporter
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GLTFExporter.GLTFMaterialExporter
	 * Size -> 0x0000 (FullSize[0x0078] - InheritedSize[0x0078])
	 */
	class UGLTFMaterialExporter : public UGLTFExporter
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GLTFExporter.GLTFSkeletalMeshExporter
	 * Size -> 0x0000 (FullSize[0x0078] - InheritedSize[0x0078])
	 */
	class UGLTFSkeletalMeshExporter : public UGLTFExporter
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GLTFExporter.GLTFStaticMeshExporter
	 * Size -> 0x0000 (FullSize[0x0078] - InheritedSize[0x0078])
	 */
	class UGLTFStaticMeshExporter : public UGLTFExporter
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GLTFExporter.GLTFProxyOptions
	 * Size -> 0x0058 (FullSize[0x0080] - InheritedSize[0x0028])
	 */
	class UGLTFProxyOptions : public UObject
	{
	public:
		bool                                                       bBakeMaterialInputs;                                     // 0x0028(0x0001) Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EGLTFMaterialBakeSizePOT                                   DefaultMaterialBakeSize;                                 // 0x0029(0x0001) Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ETextureFilter                                             DefaultMaterialBakeFilter;                               // 0x002A(0x0001) Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ETextureAddress                                            DefaultMaterialBakeTiling;                               // 0x002B(0x0001) Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XNZA[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<EGLTFMaterialPropertyGroup, struct FGLTFOverrideMaterialBakeSettings> DefaultInputBakeSettings;                                // 0x0030(0x0050) Edit, BlueprintVisible, Config, NativeAccessSpecifierPublic

	public:
		void ResetToDefault();
		static UClass* StaticClass();
	};

	/**
	 * Class GLTFExporter.GLTFMaterialExportOptions
	 * Size -> 0x0060 (FullSize[0x0088] - InheritedSize[0x0028])
	 */
	class UGLTFMaterialExportOptions : public UAssetUserData
	{
	public:
		class UMaterialInterface*                                  Proxy;                                                   // 0x0028(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGLTFOverrideMaterialBakeSettings                   Default;                                                 // 0x0030(0x0006) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3GLE[0x2];                                   // 0x0036(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<EGLTFMaterialPropertyGroup, struct FGLTFOverrideMaterialBakeSettings> Inputs;                                                  // 0x0038(0x0050) Edit, BlueprintVisible, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
