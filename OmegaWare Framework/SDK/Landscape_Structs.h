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
	 * Enum Landscape.ELandscapeSetupErrors
	 */
	enum class ELandscapeSetupErrors : uint8_t
	{
		LSE_None            = 0,
		LSE_NoLandscapeInfo = 1,
		LSE_CollsionXY      = 2,
		LSE_NoLayerInfo     = 3,
		LSE_MAX             = 4
	};

	/**
	 * Enum Landscape.ERTDrawingType
	 */
	enum class ERTDrawingType : uint8_t
	{
		RTAtlas           = 0,
		RTAtlasToNonAtlas = 1,
		RTNonAtlasToAtlas = 2,
		RTNonAtlas        = 3,
		RTMips            = 4,
		MAX               = 5
	};

	/**
	 * Enum Landscape.EHeightmapRTType
	 */
	enum class EHeightmapRTType : uint8_t
	{
		HeightmapRT_CombinedAtlas    = 0,
		HeightmapRT_CombinedNonAtlas = 1,
		HeightmapRT_Scratch1         = 2,
		HeightmapRT_Scratch2         = 3,
		HeightmapRT_Scratch3         = 4,
		HeightmapRT_Mip1             = 5,
		HeightmapRT_Mip2             = 6,
		HeightmapRT_Mip3             = 7,
		HeightmapRT_Mip4             = 8,
		HeightmapRT_Mip5             = 9,
		HeightmapRT_Mip6             = 10,
		HeightmapRT_Mip7             = 11,
		HeightmapRT_Count            = 12,
		HeightmapRT_MAX              = 13
	};

	/**
	 * Enum Landscape.EWeightmapRTType
	 */
	enum class EWeightmapRTType : uint8_t
	{
		WeightmapRT_Scratch_RGBA = 0,
		WeightmapRT_Scratch1     = 1,
		WeightmapRT_Scratch2     = 2,
		WeightmapRT_Scratch3     = 3,
		WeightmapRT_Mip0         = 4,
		WeightmapRT_Mip1         = 5,
		WeightmapRT_Mip2         = 6,
		WeightmapRT_Mip3         = 7,
		WeightmapRT_Mip4         = 8,
		WeightmapRT_Mip5         = 9,
		WeightmapRT_Mip6         = 10,
		WeightmapRT_Mip7         = 11,
		WeightmapRT_Count        = 12,
		WeightmapRT_MAX          = 13
	};

	/**
	 * Enum Landscape.ELandscapeBlendMode
	 */
	enum class ELandscapeBlendMode : uint8_t
	{
		LSBM_AdditiveBlend = 0,
		LSBM_AlphaBlend    = 1,
		LSBM_MAX           = 2
	};

	/**
	 * Enum Landscape.ELandscapeClearMode
	 */
	enum class ELandscapeClearMode : uint8_t
	{
		Clear_Weightmap = 0,
		Clear_Heightmap = 1,
		Clear_All       = 2,
		Clear_MAX       = 3
	};

	/**
	 * Enum Landscape.ELandscapeGizmoType
	 */
	enum class ELandscapeGizmoType : uint8_t
	{
		LGT_None   = 0,
		LGT_Height = 1,
		LGT_Weight = 2,
		LGT_MAX    = 3
	};

	/**
	 * Enum Landscape.ELandscapeGizmoSnapType
	 */
	enum class ELandscapeGizmoSnapType : uint8_t
	{
		None      = 0,
		Component = 1,
		Texel     = 2,
		MAX       = 3
	};

	/**
	 * Enum Landscape.EGrassScaling
	 */
	enum class EGrassScaling : uint8_t
	{
		Uniform = 0,
		Free    = 1,
		LockXY  = 2,
		MAX     = 3
	};

	/**
	 * Enum Landscape.ESplineModulationColorMask
	 */
	enum class ESplineModulationColorMask : uint8_t
	{
		Red   = 0,
		Green = 1,
		Blue  = 2,
		Alpha = 3,
		MAX   = 4
	};

	/**
	 * Enum Landscape.ELandscapeDirtyingMode
	 */
	enum class ELandscapeDirtyingMode : uint8_t
	{
		Auto                                   = 0,
		InLandscapeModeOnly                    = 1,
		InLandscapeModeAndUserTriggeredChanges = 2,
		MAX                                    = 3
	};

	/**
	 * Enum Landscape.LandscapeSplineMeshOrientation
	 */
	enum class ELandscapeSplineMeshOrientation : uint8_t
	{
		LSMO_XUp = 0,
		LSMO_YUp = 1,
		LSMO_MAX = 2
	};

	/**
	 * Enum Landscape.ELandscapeLayerBlendType
	 */
	enum class ELandscapeLayerBlendType : uint8_t
	{
		LB_WeightBlend = 0,
		LB_AlphaBlend  = 1,
		LB_HeightBlend = 2,
		LB_MAX         = 3
	};

	/**
	 * Enum Landscape.ETerrainCoordMappingType
	 */
	enum class ETerrainCoordMappingType : uint8_t
	{
		TCMT_Auto = 0,
		TCMT_XY   = 1,
		TCMT_XZ   = 2,
		TCMT_YZ   = 3,
		TCMT_MAX  = 4
	};

	/**
	 * Enum Landscape.ELandscapeCustomizedCoordType
	 */
	enum class ELandscapeCustomizedCoordType : uint8_t
	{
		LCCT_None        = 0,
		LCCT_CustomUV0   = 1,
		LCCT_CustomUV1   = 2,
		LCCT_CustomUV2   = 3,
		LCCT_WeightMapUV = 4,
		LCCT_MAX         = 5
	};

	/**
	 * Enum Landscape.ELandscapeResizeMode
	 */
	enum class ELandscapeResizeMode : uint8_t
	{
		Resample = 0,
		Clip     = 1,
		Expand   = 2,
		MAX      = 3
	};

	/**
	 * Enum Landscape.ELandscapeImportAlphamapType
	 */
	enum class ELandscapeImportAlphamapType : uint8_t
	{
		Additive = 0,
		Layered  = 1,
		MAX      = 2
	};

	/**
	 * Enum Landscape.ELandscapeLayerPaintingRestriction
	 */
	enum class ELandscapeLayerPaintingRestriction : uint8_t
	{
		None                  = 0,
		UseMaxLayers          = 1,
		ExistingOnly          = 2,
		UseComponentAllowList = 3,
		MAX                   = 4
	};

	/**
	 * Enum Landscape.ELandscapeLayerDisplayMode
	 */
	enum class ELandscapeLayerDisplayMode : uint8_t
	{
		Default      = 0,
		Alphabetical = 1,
		UserSpecific = 2,
		MAX          = 3
	};

	/**
	 * Enum Landscape.ELandscapeLODFalloff
	 */
	enum class ELandscapeLODFalloff : uint8_t
	{
		Linear     = 0,
		SquareRoot = 1,
		MAX        = 2
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct Landscape.LandscapePerLODMaterialOverride
	 * Size -> 0x0010
	 */
	struct FLandscapePerLODMaterialOverride
	{
	public:
		int32_t                                                    LODIndex;                                                // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IFQH[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMaterialInterface*                                  Material;                                                // 0x0008(0x0008) Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Landscape.WeightmapLayerAllocationInfo
	 * Size -> 0x0010
	 */
	struct FWeightmapLayerAllocationInfo
	{
	public:
		class ULandscapeLayerInfoObject*                           LayerInfo;                                               // 0x0000(0x0008) ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              WeightmapTextureIndex;                                   // 0x0008(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              WeightmapTextureChannel;                                 // 0x0009(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DZ74[0x6];                                   // 0x000A(0x0006) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Landscape.GrassVariety
	 * Size -> 0x01A8
	 */
	struct FGrassVariety
	{
	public:
		class UStaticMesh*                                         GrassMesh;                                               // 0x0000(0x0008) Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UMaterialInterface*>                          OverrideMaterials;                                       // 0x0008(0x0010) Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic
		struct FPerPlatformFloat                                   GrassDensity;                                            // 0x0018(0x0004) Edit, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_T15I[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPerQualityLevelFloat                               GrassDensityQuality;                                     // 0x0020(0x0068) Edit, NativeAccessSpecifierPublic
		bool                                                       bUseGrid;                                                // 0x0088(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NCZQ[0x3];                                   // 0x0089(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      PlacementJitter;                                         // 0x008C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FPerPlatformInt                                     StartCullDistance;                                       // 0x0090(0x0004) Edit, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RNCD[0x4];                                   // 0x0094(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPerQualityLevelInt                                 StartCullDistanceQuality;                                // 0x0098(0x0068) Edit, NativeAccessSpecifierPublic
		struct FPerPlatformInt                                     EndCullDistance;                                         // 0x0100(0x0004) Edit, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8JD5[0x4];                                   // 0x0104(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPerQualityLevelInt                                 EndCullDistanceQuality;                                  // 0x0108(0x0068) Edit, NativeAccessSpecifierPublic
		int32_t                                                    MinLOD;                                                  // 0x0170(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EGrassScaling                                              Scaling;                                                 // 0x0174(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_S9XI[0x3];                                   // 0x0175(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FFloatInterval                                      ScaleX;                                                  // 0x0178(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FFloatInterval                                      ScaleY;                                                  // 0x0180(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FFloatInterval                                      ScaleZ;                                                  // 0x0188(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       RandomRotation;                                          // 0x0190(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       AlignToSurface;                                          // 0x0191(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseLandscapeLightmap;                                   // 0x0192(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLightingChannels                                   LightingChannels;                                        // 0x0193(0x0001) Edit, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic
		bool                                                       bOverrideMinVertsToSplitNode;                            // 0x0194(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CYVT[0x3];                                   // 0x0195(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    OverriddenMinVertsToSplitNode;                           // 0x0198(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bReceivesDecals;                                         // 0x019C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAffectDistanceFieldLighting;                            // 0x019D(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCastDynamicShadow;                                      // 0x019E(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCastContactShadow;                                      // 0x019F(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bKeepInstanceBufferCPUCopy;                              // 0x01A0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QKGL[0x3];                                   // 0x01A1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		uint32_t                                                   InstanceWorldPositionOffsetDisableDistance;              // 0x01A4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Landscape.LandscapeMaterialTextureStreamingInfo
	 * Size -> 0x000C
	 */
	struct FLandscapeMaterialTextureStreamingInfo
	{
	public:
		class FName                                                TextureName;                                             // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TexelFactor;                                             // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Landscape.LandscapeSplineConnection
	 * Size -> 0x0010
	 */
	struct FLandscapeSplineConnection
	{
	public:
		class ULandscapeSplineSegment*                             Segment;                                                 // 0x0000(0x0008) ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       End : 1;                                                 // 0x0008(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FR3C[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Landscape.LandscapeSplineInterpPoint
	 * Size -> 0x00E0
	 */
	struct FLandscapeSplineInterpPoint
	{
	public:
		struct FVector                                             Center;                                                  // 0x0000(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Left;                                                    // 0x0018(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Right;                                                   // 0x0030(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             FalloffLeft;                                             // 0x0048(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             FalloffRight;                                            // 0x0060(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             LayerLeft;                                               // 0x0078(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             LayerRight;                                              // 0x0090(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             LayerFalloffLeft;                                        // 0x00A8(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             LayerFalloffRight;                                       // 0x00C0(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      StartEndFalloff;                                         // 0x00D8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_O72S[0x4];                                   // 0x00DC(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Landscape.LandscapeSplineSegmentConnection
	 * Size -> 0x0018
	 */
	struct FLandscapeSplineSegmentConnection
	{
	public:
		class ULandscapeSplineControlPoint*                        ControlPoint;                                            // 0x0000(0x0008) ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TangentLen;                                              // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                SocketName;                                              // 0x000C(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PF5J[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Landscape.GrassInput
	 * Size -> 0x0038
	 */
	struct FGrassInput
	{
	public:
		class FName                                                Name;                                                    // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class ULandscapeGrassType*                                 GrassType;                                               // 0x0008(0x0008) Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FExpressionInput                                    Input;                                                   // 0x0010(0x0028) NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Landscape.LayerBlendInput
	 * Size -> 0x0088
	 */
	struct FLayerBlendInput
	{
	public:
		class FName                                                LayerName;                                               // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ELandscapeLayerBlendType                                   BlendType;                                               // 0x0008(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EJSO[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FExpressionInput                                    LayerInput;                                              // 0x0010(0x0028) NoDestructor, NativeAccessSpecifierPublic
		struct FExpressionInput                                    HeightInput;                                             // 0x0038(0x0028) NoDestructor, NativeAccessSpecifierPublic
		float                                                      PreviewWeight;                                           // 0x0060(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3T92[0x4];                                   // 0x0064(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             ConstLayerInput;                                         // 0x0068(0x0018) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ConstHeightInput;                                        // 0x0080(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_J0VA[0x4];                                   // 0x0084(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Landscape.PhysicalMaterialInput
	 * Size -> 0x0030
	 */
	struct FPhysicalMaterialInput
	{
	public:
		class UPhysicalMaterial*                                   PhysicalMaterial;                                        // 0x0000(0x0008) Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FExpressionInput                                    Input;                                                   // 0x0008(0x0028) NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Landscape.LandscapeLayerBrush
	 * Size -> 0x0001
	 */
	struct FLandscapeLayerBrush
	{
	public:
		unsigned char                                              UnknownData_ZLSI[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Landscape.LandscapeLayer
	 * Size -> 0x0088
	 */
	struct FLandscapeLayer
	{
	public:
		struct FGuid                                               Guid;                                                    // 0x0000(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                Name;                                                    // 0x0010(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bVisible;                                                // 0x0018(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bLocked;                                                 // 0x0019(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CQZC[0x2];                                   // 0x001A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      HeightmapAlpha;                                          // 0x001C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      WeightmapAlpha;                                          // 0x0020(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ELandscapeBlendMode                                        BlendMode;                                               // 0x0024(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9YU6[0x3];                                   // 0x0025(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FLandscapeLayerBrush>                        Brushes;                                                 // 0x0028(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TMap<class ULandscapeLayerInfoObject*, bool>               WeightmapLayerAllocationBlend;                           // 0x0038(0x0050) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Landscape.LandscapeEditToolRenderData
	 * Size -> 0x0038
	 */
	struct FLandscapeEditToolRenderData
	{
	public:
		class UMaterialInterface*                                  ToolMaterial;                                            // 0x0000(0x0008) ZeroConstructor, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMaterialInterface*                                  GizmoMaterial;                                           // 0x0008(0x0008) ZeroConstructor, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SelectedType;                                            // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    DebugChannelR;                                           // 0x0014(0x0004) ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    DebugChannelG;                                           // 0x0018(0x0004) ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    DebugChannelB;                                           // 0x001C(0x0004) ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTexture2D*                                          DataTexture;                                             // 0x0020(0x0008) ZeroConstructor, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTexture2D*                                          LayerContributionTexture;                                // 0x0028(0x0008) ZeroConstructor, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTexture2D*                                          DirtyTexture;                                            // 0x0030(0x0008) ZeroConstructor, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Landscape.LandscapeComponentMaterialOverride
	 * Size -> 0x0010
	 */
	struct FLandscapeComponentMaterialOverride
	{
	public:
		struct FPerPlatformInt                                     LODIndex;                                                // 0x0000(0x0004) Edit, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2FI0[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMaterialInterface*                                  Material;                                                // 0x0008(0x0008) Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Landscape.WeightmapData
	 * Size -> 0x0030
	 */
	struct FWeightmapData
	{
	public:
		TArray<class UTexture2D*>                                  Textures;                                                // 0x0000(0x0010) ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic
		TArray<struct FWeightmapLayerAllocationInfo>               LayerAllocations;                                        // 0x0010(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class ULandscapeWeightmapUsage*>                    TextureUsages;                                           // 0x0020(0x0010) ZeroConstructor, Transient, NonTransactional, UObjectWrapper, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Landscape.HeightmapData
	 * Size -> 0x0008
	 */
	struct FHeightmapData
	{
	public:
		class UTexture2D*                                          Texture;                                                 // 0x0000(0x0008) ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Landscape.LandscapeLayerComponentData
	 * Size -> 0x0038
	 */
	struct FLandscapeLayerComponentData
	{
	public:
		struct FHeightmapData                                      HeightmapData;                                           // 0x0000(0x0008) NoDestructor, NativeAccessSpecifierPublic
		struct FWeightmapData                                      WeightmapData;                                           // 0x0008(0x0030) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Landscape.GizmoSelectData
	 * Size -> 0x0050
	 */
	struct FGizmoSelectData
	{
	public:
		unsigned char                                              UnknownData_O188[0x50];                                  // 0x0000(0x0050) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Landscape.ForeignControlPointData
	 * Size -> 0x0001
	 */
	struct FForeignControlPointData
	{
	public:
		unsigned char                                              UnknownData_LHFG[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Landscape.ForeignSplineSegmentData
	 * Size -> 0x0001
	 */
	struct FForeignSplineSegmentData
	{
	public:
		unsigned char                                              UnknownData_4FDH[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Landscape.ForeignWorldSplineData
	 * Size -> 0x0001
	 */
	struct FForeignWorldSplineData
	{
	public:
		unsigned char                                              UnknownData_AOCN[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Landscape.LandscapeSplineMeshEntry
	 * Size -> 0x0058
	 */
	struct FLandscapeSplineMeshEntry
	{
	public:
		class UStaticMesh*                                         Mesh;                                                    // 0x0000(0x0008) Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UMaterialInterface*>                          MaterialOverrides;                                       // 0x0008(0x0010) Edit, ZeroConstructor, AdvancedDisplay, UObjectWrapper, NativeAccessSpecifierPublic
		bool                                                       bCenterH : 1;                                            // 0x0018(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_B9K3[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector2D                                           CenterAdjust;                                            // 0x0020(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bScaleToWidth : 1;                                       // 0x0030(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YNSC[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             Scale;                                                   // 0x0038(0x0018) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ELandscapeSplineMeshOrientation                            Orientation;                                             // 0x0050(0x0001) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESplineMeshAxis                                            ForwardAxis;                                             // 0x0051(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESplineMeshAxis                                            UpAxis;                                                  // 0x0052(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QDOJ[0x5];                                   // 0x0053(0x0005) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Landscape.LandscapeInfoLayerSettings
	 * Size -> 0x0010
	 */
	struct FLandscapeInfoLayerSettings
	{
	public:
		class ULandscapeLayerInfoObject*                           LayerInfoObj;                                            // 0x0000(0x0008) ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                LayerName;                                               // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Landscape.LandscapeEditorLayerSettings
	 * Size -> 0x0001
	 */
	struct FLandscapeEditorLayerSettings
	{
	public:
		unsigned char                                              UnknownData_1IQP[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Landscape.LandscapeLayerStruct
	 * Size -> 0x0008
	 */
	struct FLandscapeLayerStruct
	{
	public:
		class ULandscapeLayerInfoObject*                           LayerInfoObj;                                            // 0x0000(0x0008) ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Landscape.LandscapeImportLayerInfo
	 * Size -> 0x0001
	 */
	struct FLandscapeImportLayerInfo
	{
	public:
		unsigned char                                              UnknownData_QU3T[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Landscape.LandscapeProxyMaterialOverride
	 * Size -> 0x0010
	 */
	struct FLandscapeProxyMaterialOverride
	{
	public:
		struct FPerPlatformInt                                     LODIndex;                                                // 0x0000(0x0004) Edit, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_64ZO[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMaterialInterface*                                  Material;                                                // 0x0008(0x0008) Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
