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
	// # Enums
	// --------------------------------------------------
	/**
	 * Enum GeometryScriptingCore.EGeometryScriptOutcomePins
	 */
	enum class EGeometryScriptOutcomePins : uint8_t
	{
		Failure = 0,
		Success = 1,
		MAX     = 2
	};

	/**
	 * Enum GeometryScriptingCore.EGeometryScriptSearchOutcomePins
	 */
	enum class EGeometryScriptSearchOutcomePins : uint8_t
	{
		Found    = 0,
		NotFound = 1,
		MAX      = 2
	};

	/**
	 * Enum GeometryScriptingCore.EGeometryScriptContainmentOutcomePins
	 */
	enum class EGeometryScriptContainmentOutcomePins : uint8_t
	{
		Inside  = 0,
		Outside = 1,
		MAX     = 2
	};

	/**
	 * Enum GeometryScriptingCore.EGeometryScriptLODType
	 */
	enum class EGeometryScriptLODType : uint8_t
	{
		MaxAvailable     = 0,
		HiResSourceModel = 1,
		SourceModel      = 2,
		RenderData       = 3,
		MAX              = 4
	};

	/**
	 * Enum GeometryScriptingCore.EGeometryScriptAxis
	 */
	enum class EGeometryScriptAxis : uint8_t
	{
		X   = 0,
		Y   = 1,
		Z   = 2,
		MAX = 3
	};

	/**
	 * Enum GeometryScriptingCore.EGeometryScriptIndexType
	 */
	enum class EGeometryScriptIndexType : uint8_t
	{
		Any         = 0,
		Triangle    = 1,
		Vertex      = 2,
		MaterialID  = 3,
		PolygroupID = 4,
		MAX         = 5
	};

	/**
	 * Enum GeometryScriptingCore.EGeometryScriptDebugMessageType
	 */
	enum class EGeometryScriptDebugMessageType : uint8_t
	{
		ErrorMessage   = 0,
		WarningMessage = 1,
		MAX            = 2
	};

	/**
	 * Enum GeometryScriptingCore.EGeometryScriptErrorType
	 */
	enum class EGeometryScriptErrorType : uint8_t
	{
		NoError         = 0,
		UnknownError    = 1,
		InvalidInputs   = 2,
		OperationFailed = 3,
		MAX             = 4
	};

	/**
	 * Enum GeometryScriptingCore.EGeometryScriptCollisionGenerationMethod
	 */
	enum class EGeometryScriptCollisionGenerationMethod : uint8_t
	{
		AlignedBoxes    = 0,
		OrientedBoxes   = 1,
		MinimalSpheres  = 2,
		Capsules        = 3,
		ConvexHulls     = 4,
		SweptHulls      = 5,
		MinVolumeShapes = 6,
		MAX             = 7
	};

	/**
	 * Enum GeometryScriptingCore.EGeometryScriptSweptHullAxis
	 */
	enum class EGeometryScriptSweptHullAxis : uint8_t
	{
		X                    = 0,
		Y                    = 1,
		Z                    = 2,
		SmallestBoxDimension = 3,
		SmallestVolume       = 4,
		MAX                  = 5
	};

	/**
	 * Enum GeometryScriptingCore.EGeometryScriptMeshSelectionType
	 */
	enum class EGeometryScriptMeshSelectionType : uint8_t
	{
		Vertices   = 0,
		Triangles  = 1,
		Polygroups = 2,
		MAX        = 3
	};

	/**
	 * Enum GeometryScriptingCore.EGeometryScriptMeshSelectionConversionType
	 */
	enum class EGeometryScriptMeshSelectionConversionType : uint8_t
	{
		NoConversion = 0,
		ToVertices   = 1,
		ToTriangles  = 2,
		ToPolygroups = 3,
		MAX          = 4
	};

	/**
	 * Enum GeometryScriptingCore.EGeometryScriptCombineSelectionMode
	 */
	enum class EGeometryScriptCombineSelectionMode : uint8_t
	{
		Add          = 0,
		Subtract     = 1,
		Intersection = 2,
		MAX          = 3
	};

	/**
	 * Enum GeometryScriptingCore.EGeometryScriptEmptySelectionBehavior
	 */
	enum class EGeometryScriptEmptySelectionBehavior : uint8_t
	{
		FullMeshSelection = 0,
		EmptySelection    = 1,
		MAX               = 2
	};

	/**
	 * Enum GeometryScriptingCore.EGeometryScriptBakeResolution
	 */
	enum class EGeometryScriptBakeResolution : uint8_t
	{
		Resolution16   = 0,
		Resolution32   = 1,
		Resolution64   = 2,
		Resolution128  = 3,
		Resolution256  = 4,
		Resolution512  = 5,
		Resolution1024 = 6,
		Resolution2048 = 7,
		Resolution4096 = 8,
		Resolution8192 = 9,
		MAX            = 10
	};

	/**
	 * Enum GeometryScriptingCore.EGeometryScriptBakeBitDepth
	 */
	enum class EGeometryScriptBakeBitDepth : uint8_t
	{
		ChannelBits8  = 0,
		ChannelBits16 = 1,
		MAX           = 2
	};

	/**
	 * Enum GeometryScriptingCore.EGeometryScriptBakeSamplesPerPixel
	 */
	enum class EGeometryScriptBakeSamplesPerPixel : uint8_t
	{
		Sample1    = 0,
		Sample4    = 1,
		Sample16   = 2,
		Sample64   = 3,
		Samples256 = 4,
		MAX        = 5
	};

	/**
	 * Enum GeometryScriptingCore.EGeometryScriptBakeTypes
	 */
	enum class EGeometryScriptBakeTypes : uint8_t
	{
		TangentSpaceNormal = 0,
		ObjectSpaceNormal  = 1,
		FaceNormal         = 2,
		BentNormal         = 3,
		Position           = 4,
		Curvature          = 5,
		AmbientOcclusion   = 6,
		Texture            = 7,
		MultiTexture       = 8,
		VertexColor        = 9,
		MaterialID         = 10,
		MAX                = 11
	};

	/**
	 * Enum GeometryScriptingCore.EGeometryScriptBakeOutputMode
	 */
	enum class EGeometryScriptBakeOutputMode : uint8_t
	{
		RGBA       = 0,
		PerChannel = 1,
		MAX        = 2
	};

	/**
	 * Enum GeometryScriptingCore.EGeometryScriptBakeNormalSpace
	 */
	enum class EGeometryScriptBakeNormalSpace : uint8_t
	{
		Tangent = 0,
		Object  = 1,
		MAX     = 2
	};

	/**
	 * Enum GeometryScriptingCore.EGeometryScriptBakeCurvatureTypeMode
	 */
	enum class EGeometryScriptBakeCurvatureTypeMode : uint8_t
	{
		Mean     = 0,
		Max      = 1,
		Min      = 2,
		Gaussian = 3
	};

	/**
	 * Enum GeometryScriptingCore.EGeometryScriptBakeCurvatureColorMode
	 */
	enum class EGeometryScriptBakeCurvatureColorMode : uint8_t
	{
		Grayscale    = 0,
		RedBlue      = 1,
		RedGreenBlue = 2,
		MAX          = 3
	};

	/**
	 * Enum GeometryScriptingCore.EGeometryScriptBakeCurvatureClampMode
	 */
	enum class EGeometryScriptBakeCurvatureClampMode : uint8_t
	{
		None         = 0,
		OnlyPositive = 1,
		OnlyNegative = 2,
		MAX          = 3
	};

	/**
	 * Enum GeometryScriptingCore.EGeometryScriptCombineAttributesMode
	 */
	enum class EGeometryScriptCombineAttributesMode : uint8_t
	{
		EnableAllMatching = 0,
		UseTarget         = 1,
		UseSource         = 2,
		MAX               = 3
	};

	/**
	 * Enum GeometryScriptingCore.EGeometryScriptSmoothBoneWeightsType
	 */
	enum class EGeometryScriptSmoothBoneWeightsType : uint8_t
	{
		DirectDistance = 0,
		GeodesicVoxel  = 1,
		MAX            = 2
	};

	/**
	 * Enum GeometryScriptingCore.EGeometryScriptBooleanOperation
	 */
	enum class EGeometryScriptBooleanOperation : uint8_t
	{
		Union        = 0,
		Intersection = 1,
		Subtract     = 2,
		MAX          = 3
	};

	/**
	 * Enum GeometryScriptingCore.EGeometryScriptFlareType
	 */
	enum class EGeometryScriptFlareType : uint8_t
	{
		SinMode        = 0,
		SinSquaredMode = 1,
		TriangleMode   = 2,
		MAX            = 3
	};

	/**
	 * Enum GeometryScriptingCore.EGeometryScriptMathWarpType
	 */
	enum class EGeometryScriptMathWarpType : uint8_t
	{
		SinWave1D = 0,
		SinWave2D = 1,
		SinWave3D = 2,
		MAX       = 3
	};

	/**
	 * Enum GeometryScriptingCore.EGeometryScriptMeshEditPolygroupMode
	 */
	enum class EGeometryScriptMeshEditPolygroupMode : uint8_t
	{
		PreserveExisting = 0,
		AutoGenerateNew  = 1,
		SetConstant      = 2,
		MAX              = 3
	};

	/**
	 * Enum GeometryScriptingCore.EGeometryScriptPolyOperationArea
	 */
	enum class EGeometryScriptPolyOperationArea : uint8_t
	{
		EntireSelection = 0,
		PerPolygroup    = 1,
		PerTriangle     = 2,
		MAX             = 3
	};

	/**
	 * Enum GeometryScriptingCore.EGeometryScriptLinearExtrudeDirection
	 */
	enum class EGeometryScriptLinearExtrudeDirection : uint8_t
	{
		FixedDirection    = 0,
		AverageFaceNormal = 1,
		MAX               = 2
	};

	/**
	 * Enum GeometryScriptingCore.EGeometryScriptOffsetFacesType
	 */
	enum class EGeometryScriptOffsetFacesType : uint8_t
	{
		VertexNormal       = 0,
		FaceNormal         = 1,
		ParallelFaceOffset = 2,
		MAX                = 3
	};

	/**
	 * Enum GeometryScriptingCore.EGeometryScriptMeshBevelSelectionMode
	 */
	enum class EGeometryScriptMeshBevelSelectionMode : uint8_t
	{
		TriangleArea         = 0,
		AllPolygroupEdges    = 1,
		SharedPolygroupEdges = 2,
		MAX                  = 3
	};

	/**
	 * Enum GeometryScriptingCore.EGeometryScriptTangentTypes
	 */
	enum class EGeometryScriptTangentTypes : uint8_t
	{
		FastMikkT   = 0,
		PerTriangle = 1,
		MAX         = 2
	};

	/**
	 * Enum GeometryScriptingCore.EGeometryScriptPrimitivePolygroupMode
	 */
	enum class EGeometryScriptPrimitivePolygroupMode : uint8_t
	{
		SingleGroup = 0,
		PerFace     = 1,
		PerQuad     = 2,
		MAX         = 3
	};

	/**
	 * Enum GeometryScriptingCore.EGeometryScriptPrimitiveOriginMode
	 */
	enum class EGeometryScriptPrimitiveOriginMode : uint8_t
	{
		Center = 0,
		Base   = 1,
		MAX    = 2
	};

	/**
	 * Enum GeometryScriptingCore.EGeometryScriptPrimitiveUVMode
	 */
	enum class EGeometryScriptPrimitiveUVMode : uint8_t
	{
		Uniform     = 0,
		ScaleToFill = 1,
		MAX         = 2
	};

	/**
	 * Enum GeometryScriptingCore.EGeometryScriptUniformRemeshTargetType
	 */
	enum class EGeometryScriptUniformRemeshTargetType : uint8_t
	{
		TriangleCount    = 0,
		TargetEdgeLength = 1,
		MAX              = 2
	};

	/**
	 * Enum GeometryScriptingCore.EGeometryScriptRemeshEdgeConstraintType
	 */
	enum class EGeometryScriptRemeshEdgeConstraintType : uint8_t
	{
		Fixed  = 0,
		Refine = 1,
		Free   = 2,
		Ignore = 3,
		MAX    = 4
	};

	/**
	 * Enum GeometryScriptingCore.EGeometryScriptRemeshSmoothingType
	 */
	enum class EGeometryScriptRemeshSmoothingType : uint8_t
	{
		Uniform      = 0,
		UVPreserving = 1,
		Mixed        = 2,
		MAX          = 3
	};

	/**
	 * Enum GeometryScriptingCore.EGeometryScriptFillHolesMethod
	 */
	enum class EGeometryScriptFillHolesMethod : uint8_t
	{
		Automatic            = 0,
		MinimalFill          = 1,
		PolygonTriangulation = 2,
		TriangleFan          = 3,
		PlanarProjection     = 4,
		MAX                  = 5
	};

	/**
	 * Enum GeometryScriptingCore.EGeometryScriptRemoveHiddenTrianglesMethod
	 */
	enum class EGeometryScriptRemoveHiddenTrianglesMethod : uint8_t
	{
		FastWindingNumber    = 0,
		RaycastOcclusionTest = 1,
		MAX                  = 2
	};

	/**
	 * Enum GeometryScriptingCore.EGeometryScriptRepairMeshMode
	 */
	enum class EGeometryScriptRepairMeshMode : uint8_t
	{
		DeleteOnly     = 0,
		RepairOrDelete = 1,
		RepairOrSkip   = 2,
		MAX            = 3
	};

	/**
	 * Enum GeometryScriptingCore.EGeometryScriptSamplingWeightMode
	 */
	enum class EGeometryScriptSamplingWeightMode : uint8_t
	{
		WeightToRadius       = 0,
		FilledWeightToRadius = 1,
		WeightedRandom       = 2,
		MAX                  = 3
	};

	/**
	 * Enum GeometryScriptingCore.EGeometryScriptSamplingDistributionMode
	 */
	enum class EGeometryScriptSamplingDistributionMode : uint8_t
	{
		Uniform = 0,
		Smaller = 1,
		Larger  = 2,
		MAX     = 3
	};

	/**
	 * Enum GeometryScriptingCore.EGeometryScriptTopologyConnectionType
	 */
	enum class EGeometryScriptTopologyConnectionType : uint8_t
	{
		Geometric  = 0,
		Polygroup  = 1,
		MaterialID = 2,
		MAX        = 3
	};

	/**
	 * Enum GeometryScriptingCore.EGeometryScriptRemoveMeshSimplificationType
	 */
	enum class EGeometryScriptRemoveMeshSimplificationType : uint8_t
	{
		StandardQEM      = 0,
		VolumePreserving = 1,
		AttributeAware   = 2,
		MAX              = 3
	};

	/**
	 * Enum GeometryScriptingCore.ESelectiveTessellatePatternType
	 */
	enum class ESelectiveTessellatePatternType : uint8_t
	{
		ConcentricRings = 0,
		MAX             = 1
	};

	/**
	 * Enum GeometryScriptingCore.EGeometryScriptUVFlattenMethod
	 */
	enum class EGeometryScriptUVFlattenMethod : uint8_t
	{
		ExpMap            = 0,
		Conformal         = 1,
		SpectralConformal = 2,
		MAX               = 3
	};

	/**
	 * Enum GeometryScriptingCore.EGeometryScriptUVIslandSource
	 */
	enum class EGeometryScriptUVIslandSource : uint8_t
	{
		PolyGroups = 0,
		UVIslands  = 1,
		MAX        = 2
	};

	/**
	 * Enum GeometryScriptingCore.EGeometryScriptGridSizingMethod
	 */
	enum class EGeometryScriptGridSizingMethod : uint8_t
	{
		GridCellSize   = 0,
		GridResolution = 1,
		MAX            = 2
	};

	/**
	 * Enum GeometryScriptingCore.EGeometryScriptMorphologicalOpType
	 */
	enum class EGeometryScriptMorphologicalOpType : uint8_t
	{
		Dilate   = 0,
		Contract = 1,
		Close    = 2,
		Open     = 3,
		MAX      = 4
	};

	/**
	 * Enum GeometryScriptingCore.EGeometryScriptSampleSpacing
	 */
	enum class EGeometryScriptSampleSpacing : uint8_t
	{
		UniformDistance = 0,
		UniformTime     = 1,
		ErrorTolerance  = 2,
		MAX             = 3
	};

	/**
	 * Enum GeometryScriptingCore.EGeometryScriptPixelSamplingMethod
	 */
	enum class EGeometryScriptPixelSamplingMethod : uint8_t
	{
		Bilinear = 0,
		Nearest  = 1,
		MAX      = 2
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct GeometryScriptingCore.GeometryScriptDebugMessage
	 * Size -> 0x0020
	 */
	struct FGeometryScriptDebugMessage
	{
	public:
		EGeometryScriptDebugMessageType                            MessageType;                                             // 0x0000(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EGeometryScriptErrorType                                   ErrorType;                                               // 0x0001(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9Q1E[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                Message;                                                 // 0x0008(0x0018) BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GeometryScriptingCore.GeometryScriptMeshReadLOD
	 * Size -> 0x0008
	 */
	struct FGeometryScriptMeshReadLOD
	{
	public:
		EGeometryScriptLODType                                     LODType;                                                 // 0x0000(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IWBJ[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    LODIndex;                                                // 0x0004(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GeometryScriptingCore.GeometryScriptMeshWriteLOD
	 * Size -> 0x0008
	 */
	struct FGeometryScriptMeshWriteLOD
	{
	public:
		bool                                                       bWriteHiResSource;                                       // 0x0000(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QZPX[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    LODIndex;                                                // 0x0004(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GeometryScriptingCore.GeometryScriptTriangle
	 * Size -> 0x0048
	 */
	struct FGeometryScriptTriangle
	{
	public:
		struct FVector                                             Vector0;                                                 // 0x0000(0x0018) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Vector1;                                                 // 0x0018(0x0018) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Vector2;                                                 // 0x0030(0x0018) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GeometryScriptingCore.GeometryScriptTrianglePoint
	 * Size -> 0x0038
	 */
	struct FGeometryScriptTrianglePoint
	{
	public:
		bool                                                       bValid;                                                  // 0x0000(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ENZ5[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    TriangleID;                                              // 0x0004(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Position;                                                // 0x0008(0x0018) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             BaryCoords;                                              // 0x0020(0x0018) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GeometryScriptingCore.GeometryScriptUVTriangle
	 * Size -> 0x0030
	 */
	struct FGeometryScriptUVTriangle
	{
	public:
		struct FVector2D                                           UV0;                                                     // 0x0000(0x0010) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           UV1;                                                     // 0x0010(0x0010) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           UV2;                                                     // 0x0020(0x0010) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GeometryScriptingCore.GeometryScriptColorFlags
	 * Size -> 0x0004
	 */
	struct FGeometryScriptColorFlags
	{
	public:
		bool                                                       bRed;                                                    // 0x0000(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bGreen;                                                  // 0x0001(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bBlue;                                                   // 0x0002(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAlpha;                                                  // 0x0003(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GeometryScriptingCore.GeometryScriptGroupLayer
	 * Size -> 0x0008
	 */
	struct FGeometryScriptGroupLayer
	{
	public:
		bool                                                       bDefaultLayer;                                           // 0x0000(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OW0H[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    ExtendedLayerIndex;                                      // 0x0004(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GeometryScriptingCore.GeometryScriptIndexList
	 * Size -> 0x0018
	 */
	struct FGeometryScriptIndexList
	{
	public:
		EGeometryScriptIndexType                                   IndexType;                                               // 0x0000(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_21PA[0x17];                                  // 0x0001(0x0017) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GeometryScriptingCore.GeometryScriptTriangleList
	 * Size -> 0x0010
	 */
	struct FGeometryScriptTriangleList
	{
	public:
		unsigned char                                              UnknownData_VTMN[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GeometryScriptingCore.GeometryScriptScalarList
	 * Size -> 0x0010
	 */
	struct FGeometryScriptScalarList
	{
	public:
		unsigned char                                              UnknownData_0H4E[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GeometryScriptingCore.GeometryScriptVectorList
	 * Size -> 0x0010
	 */
	struct FGeometryScriptVectorList
	{
	public:
		unsigned char                                              UnknownData_LF7Y[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GeometryScriptingCore.GeometryScriptUVList
	 * Size -> 0x0010
	 */
	struct FGeometryScriptUVList
	{
	public:
		unsigned char                                              UnknownData_H2S4[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GeometryScriptingCore.GeometryScriptColorList
	 * Size -> 0x0010
	 */
	struct FGeometryScriptColorList
	{
	public:
		unsigned char                                              UnknownData_9QEY[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GeometryScriptingCore.GeometryScriptPolyPath
	 * Size -> 0x0018
	 */
	struct FGeometryScriptPolyPath
	{
	public:
		unsigned char                                              UnknownData_HHZM[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bClosedLoop;                                             // 0x0010(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PNJL[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GeometryScriptingCore.GeometryScriptDynamicMeshBVH
	 * Size -> 0x0020
	 */
	struct FGeometryScriptDynamicMeshBVH
	{
	public:
		unsigned char                                              UnknownData_SK1C[0x20];                                  // 0x0000(0x0020) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GeometryScriptingCore.GeometryScriptCollisionFromMeshOptions
	 * Size -> 0x0030
	 */
	struct FGeometryScriptCollisionFromMeshOptions
	{
	public:
		bool                                                       bEmitTransaction;                                        // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EGeometryScriptCollisionGenerationMethod                   Method;                                                  // 0x0001(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAutoDetectSpheres;                                      // 0x0002(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAutoDetectBoxes;                                        // 0x0003(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAutoDetectCapsules;                                     // 0x0004(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RQFC[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MinThickness;                                            // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSimplifyHulls;                                          // 0x000C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VV3C[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    ConvexHullTargetFaceCount;                               // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxConvexHullsPerMesh;                                   // 0x0014(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ConvexDecompositionSearchFactor;                         // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ConvexDecompositionErrorTolerance;                       // 0x001C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ConvexDecompositionMinPartThickness;                     // 0x0020(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SweptHullSimplifyTolerance;                              // 0x0024(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EGeometryScriptSweptHullAxis                               SweptHullAxis;                                           // 0x0028(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bRemoveFullyContainedShapes;                             // 0x0029(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EVND[0x2];                                   // 0x002A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    MaxShapeCount;                                           // 0x002C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GeometryScriptingCore.GeometryScriptSetSimpleCollisionOptions
	 * Size -> 0x0001
	 */
	struct FGeometryScriptSetSimpleCollisionOptions
	{
	public:
		bool                                                       bEmitTransaction;                                        // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GeometryScriptingCore.GeometryScriptConvexHullOptions
	 * Size -> 0x000C
	 */
	struct FGeometryScriptConvexHullOptions
	{
	public:
		bool                                                       bPrefilterVertices;                                      // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OY5A[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    PrefilterGridResolution;                                 // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SimplifyToFaceCount;                                     // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GeometryScriptingCore.GeometryScriptSweptHullOptions
	 * Size -> 0x0018
	 */
	struct FGeometryScriptSweptHullOptions
	{
	public:
		bool                                                       bPrefilterVertices;                                      // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_U6RM[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    PrefilterGridResolution;                                 // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinThickness;                                            // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSimplify;                                               // 0x000C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ST50[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MinEdgeLength;                                           // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SimplifyTolerance;                                       // 0x0014(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GeometryScriptingCore.GeometryScriptConvexDecompositionOptions
	 * Size -> 0x0028
	 */
	struct FGeometryScriptConvexDecompositionOptions
	{
	public:
		int32_t                                                    NumHulls;                                                // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XFH6[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     SearchFactor;                                            // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		double                                                     ErrorTolerance;                                          // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		double                                                     MinPartThickness;                                        // 0x0018(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SimplifyToFaceCount;                                     // 0x0020(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_H77J[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GeometryScriptingCore.GeometryScriptMeshSelection
	 * Size -> 0x0010
	 */
	struct FGeometryScriptMeshSelection
	{
	public:
		unsigned char                                              UnknownData_A395[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GeometryScriptingCore.GeometryScriptCopyMeshFromAssetOptions
	 * Size -> 0x0003
	 */
	struct FGeometryScriptCopyMeshFromAssetOptions
	{
	public:
		bool                                                       bApplyBuildSettings;                                     // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bRequestTangents;                                        // 0x0001(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIgnoreRemoveDegenerates;                                // 0x0002(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GeometryScriptingCore.GeometryScriptNaniteOptions
	 * Size -> 0x000C
	 */
	struct FGeometryScriptNaniteOptions
	{
	public:
		bool                                                       bEnabled;                                                // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_T1TP[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      FallbackPercentTriangles;                                // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FallbackRelativeError;                                   // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GeometryScriptingCore.GeometryScriptCopyMeshToAssetOptions
	 * Size -> 0x0078
	 */
	struct FGeometryScriptCopyMeshToAssetOptions
	{
	public:
		bool                                                       bEnableRecomputeNormals;                                 // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnableRecomputeTangents;                                // 0x0001(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnableRemoveDegenerates;                                // 0x0002(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bReplaceMaterials;                                       // 0x0003(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_F29G[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UMaterialInterface*>                          NewMaterials;                                            // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic
		TArray<class FName>                                        NewMaterialSlotNames;                                    // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       bApplyNaniteSettings;                                    // 0x0028(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_V71N[0x3];                                   // 0x0029(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGeometryScriptNaniteOptions                        NaniteSettings;                                          // 0x002C(0x000C) Edit, BlueprintVisible, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic
		struct FMeshNaniteSettings                                 NewNaniteSettings;                                       // 0x0038(0x0038) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		bool                                                       bEmitTransaction;                                        // 0x0070(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDeferMeshPostEditChange;                                // 0x0071(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QHJY[0x6];                                   // 0x0072(0x0006) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GeometryScriptingCore.GeometryScriptBakeTypeOptions
	 * Size -> 0x0018
	 */
	struct FGeometryScriptBakeTypeOptions
	{
	public:
		EGeometryScriptBakeTypes                                   BakeType;                                                // 0x0000(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BV24[0x17];                                  // 0x0001(0x0017) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GeometryScriptingCore.GeometryScriptBakeTextureOptions
	 * Size -> 0x0018
	 */
	struct FGeometryScriptBakeTextureOptions
	{
	public:
		EGeometryScriptBakeResolution                              Resolution;                                              // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EGeometryScriptBakeBitDepth                                BitDepth;                                                // 0x0001(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EGeometryScriptBakeSamplesPerPixel                         SamplesPerPixel;                                         // 0x0002(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1T6G[0x5];                                   // 0x0003(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTexture2D*                                          SampleFilterMask;                                        // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ProjectionDistance;                                      // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bProjectionInWorldSpace;                                 // 0x0014(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JEU9[0x3];                                   // 0x0015(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GeometryScriptingCore.GeometryScriptBakeVertexOptions
	 * Size -> 0x000C
	 */
	struct FGeometryScriptBakeVertexOptions
	{
	public:
		bool                                                       bSplitAtNormalSeams;                                     // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSplitAtUVSeams;                                         // 0x0001(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RYY7[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ProjectionDistance;                                      // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bProjectionInWorldSpace;                                 // 0x0008(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DEES[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GeometryScriptingCore.GeometryScriptBakeOutputType
	 * Size -> 0x0080
	 */
	struct FGeometryScriptBakeOutputType
	{
	public:
		EGeometryScriptBakeOutputMode                              OutputMode;                                              // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_T1VS[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGeometryScriptBakeTypeOptions                      RGBA;                                                    // 0x0008(0x0018) BlueprintVisible, NativeAccessSpecifierPublic
		struct FGeometryScriptBakeTypeOptions                      R;                                                       // 0x0020(0x0018) BlueprintVisible, NativeAccessSpecifierPublic
		struct FGeometryScriptBakeTypeOptions                      G;                                                       // 0x0038(0x0018) BlueprintVisible, NativeAccessSpecifierPublic
		struct FGeometryScriptBakeTypeOptions                      B;                                                       // 0x0050(0x0018) BlueprintVisible, NativeAccessSpecifierPublic
		struct FGeometryScriptBakeTypeOptions                      A;                                                       // 0x0068(0x0018) BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GeometryScriptingCore.GeometryScriptBakeTargetMeshOptions
	 * Size -> 0x0004
	 */
	struct FGeometryScriptBakeTargetMeshOptions
	{
	public:
		int32_t                                                    TargetUVLayer;                                           // 0x0000(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GeometryScriptingCore.GeometryScriptBakeSourceMeshOptions
	 * Size -> 0x0010
	 */
	struct FGeometryScriptBakeSourceMeshOptions
	{
	public:
		class UTexture2D*                                          SourceNormalMap;                                         // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SourceNormalUVLayer;                                     // 0x0008(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EGeometryScriptBakeNormalSpace                             SourceNormalSpace;                                       // 0x000C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NYD2[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GeometryScriptingCore.GeometryScriptBakeRenderCaptureOptions
	 * Size -> 0x0028
	 */
	struct FGeometryScriptBakeRenderCaptureOptions
	{
	public:
		EGeometryScriptBakeResolution                              Resolution;                                              // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EGeometryScriptBakeResolution                              RenderCaptureResolution;                                 // 0x0001(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EGeometryScriptBakeSamplesPerPixel                         SamplesPerPixel;                                         // 0x0002(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bRenderCaptureAntiAliasing;                              // 0x0003(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CleanupTolerance;                                        // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bBaseColorMap;                                           // 0x0008(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bNormalMap;                                              // 0x0009(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPackedMRSMap;                                           // 0x000A(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bMetallicMap;                                            // 0x000B(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bRoughnessMap;                                           // 0x000C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSpecularMap;                                            // 0x000D(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEmissiveMap;                                            // 0x000E(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOpacityMap;                                             // 0x000F(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSubsurfaceColorMap;                                     // 0x0010(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1PYS[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     FieldOfViewDegrees;                                      // 0x0018(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		double                                                     NearPlaneDist;                                           // 0x0020(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GeometryScriptingCore.GeometryScriptRenderCaptureTextures
	 * Size -> 0x0090
	 */
	struct FGeometryScriptRenderCaptureTextures
	{
	public:
		class UTexture2D*                                          BaseColorMap;                                            // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bHasBaseColorMap;                                        // 0x0008(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SGY8[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTexture2D*                                          NormalMap;                                               // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bHasNormalMap;                                           // 0x0018(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_C3PF[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTexture2D*                                          PackedMRSMap;                                            // 0x0020(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bHasPackedMRSMap;                                        // 0x0028(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_H7O3[0x7];                                   // 0x0029(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTexture2D*                                          MetallicMap;                                             // 0x0030(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bHasMetallicMap;                                         // 0x0038(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_O0DA[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTexture2D*                                          RoughnessMap;                                            // 0x0040(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bHasRoughnessMap;                                        // 0x0048(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NEHK[0x7];                                   // 0x0049(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTexture2D*                                          SpecularMap;                                             // 0x0050(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bHasSpecularMap;                                         // 0x0058(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HMZ6[0x7];                                   // 0x0059(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTexture2D*                                          EmissiveMap;                                             // 0x0060(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bHasEmissiveMap;                                         // 0x0068(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5IIV[0x7];                                   // 0x0069(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTexture2D*                                          OpacityMap;                                              // 0x0070(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bHasOpacityMap;                                          // 0x0078(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SNHN[0x7];                                   // 0x0079(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTexture2D*                                          SubsurfaceColorMap;                                      // 0x0080(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bHasSubsurfaceColorMap;                                  // 0x0088(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_J42A[0x7];                                   // 0x0089(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GeometryScriptingCore.GeometryScriptSimpleMeshBuffers
	 * Size -> 0x00D0
	 */
	struct FGeometryScriptSimpleMeshBuffers
	{
	public:
		TArray<struct FVector>                                     Vertices;                                                // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FVector>                                     Normals;                                                 // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FVector2D>                                   UV0;                                                     // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FVector2D>                                   UV1;                                                     // 0x0030(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FVector2D>                                   UV2;                                                     // 0x0040(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FVector2D>                                   UV3;                                                     // 0x0050(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FVector2D>                                   UV4;                                                     // 0x0060(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FVector2D>                                   UV5;                                                     // 0x0070(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FVector2D>                                   UV6;                                                     // 0x0080(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FVector2D>                                   UV7;                                                     // 0x0090(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FLinearColor>                                VertexColors;                                            // 0x00A0(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FIntVector>                                  Triangles;                                               // 0x00B0(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<int32_t>                                            TriGroupIDs;                                             // 0x00C0(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GeometryScriptingCore.GeometryScriptAppendMeshOptions
	 * Size -> 0x0001
	 */
	struct FGeometryScriptAppendMeshOptions
	{
	public:
		EGeometryScriptCombineAttributesMode                       CombineMode;                                             // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GeometryScriptingCore.GeometryScriptBoneWeight
	 * Size -> 0x0008
	 */
	struct FGeometryScriptBoneWeight
	{
	public:
		int32_t                                                    BoneIndex;                                               // 0x0000(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Weight;                                                  // 0x0004(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GeometryScriptingCore.GeometryScriptBoneWeightProfile
	 * Size -> 0x0008
	 */
	struct FGeometryScriptBoneWeightProfile
	{
	public:
		class FName                                                ProfileName;                                             // 0x0000(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GeometryScriptingCore.GeometryScriptSmoothBoneWeightsOptions
	 * Size -> 0x0010
	 */
	struct FGeometryScriptSmoothBoneWeightsOptions
	{
	public:
		EGeometryScriptSmoothBoneWeightsType                       DistanceWeighingType;                                    // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UNU2[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Stiffness;                                               // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxInfluences;                                           // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    VoxelResolution;                                         // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GeometryScriptingCore.GeometryScriptMeshBooleanOptions
	 * Size -> 0x0008
	 */
	struct FGeometryScriptMeshBooleanOptions
	{
	public:
		bool                                                       bFillHoles;                                              // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSimplifyOutput;                                         // 0x0001(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_N08L[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      SimplifyPlanarTolerance;                                 // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GeometryScriptingCore.GeometryScriptMeshSelfUnionOptions
	 * Size -> 0x000C
	 */
	struct FGeometryScriptMeshSelfUnionOptions
	{
	public:
		bool                                                       bFillHoles;                                              // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bTrimFlaps;                                              // 0x0001(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSimplifyOutput;                                         // 0x0002(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_R6E0[0x1];                                   // 0x0003(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      SimplifyPlanarTolerance;                                 // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      WindingThreshold;                                        // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GeometryScriptingCore.GeometryScriptMeshPlaneCutOptions
	 * Size -> 0x0008
	 */
	struct FGeometryScriptMeshPlaneCutOptions
	{
	public:
		bool                                                       bFillHoles;                                              // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bFillSpans;                                              // 0x0001(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bFlipCutSide;                                            // 0x0002(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_N841[0x1];                                   // 0x0003(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      UVWorldDimension;                                        // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GeometryScriptingCore.GeometryScriptMeshPlaneSliceOptions
	 * Size -> 0x000C
	 */
	struct FGeometryScriptMeshPlaneSliceOptions
	{
	public:
		bool                                                       bFillHoles;                                              // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bFillSpans;                                              // 0x0001(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GEDT[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      GapWidth;                                                // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      UVWorldDimension;                                        // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GeometryScriptingCore.GeometryScriptMeshMirrorOptions
	 * Size -> 0x0003
	 */
	struct FGeometryScriptMeshMirrorOptions
	{
	public:
		bool                                                       bApplyPlaneCut;                                          // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bFlipCutSide;                                            // 0x0001(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bWeldAlongPlane;                                         // 0x0002(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GeometryScriptingCore.GeometryScriptIsSameMeshOptions
	 * Size -> 0x000C
	 */
	struct FGeometryScriptIsSameMeshOptions
	{
	public:
		bool                                                       bCheckConnectivity;                                      // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCheckEdgeIDs;                                           // 0x0001(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCheckNormals;                                           // 0x0002(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCheckColors;                                            // 0x0003(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCheckUVs;                                               // 0x0004(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCheckGroups;                                            // 0x0005(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCheckAttributes;                                        // 0x0006(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DM70[0x1];                                   // 0x0007(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Epsilon;                                                 // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GeometryScriptingCore.GeometryScriptMeasureMeshDistanceOptions
	 * Size -> 0x0001
	 */
	struct FGeometryScriptMeasureMeshDistanceOptions
	{
	public:
		bool                                                       bSymmetric;                                              // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GeometryScriptingCore.GeometryScriptBendWarpOptions
	 * Size -> 0x000C
	 */
	struct FGeometryScriptBendWarpOptions
	{
	public:
		bool                                                       bSymmetricExtents;                                       // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WBTK[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      LowerExtent;                                             // 0x0004(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bBidirectional;                                          // 0x0008(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Y4UO[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GeometryScriptingCore.GeometryScriptTwistWarpOptions
	 * Size -> 0x000C
	 */
	struct FGeometryScriptTwistWarpOptions
	{
	public:
		bool                                                       bSymmetricExtents;                                       // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Z0VX[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      LowerExtent;                                             // 0x0004(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bBidirectional;                                          // 0x0008(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WIMD[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GeometryScriptingCore.GeometryScriptFlareWarpOptions
	 * Size -> 0x000C
	 */
	struct FGeometryScriptFlareWarpOptions
	{
	public:
		bool                                                       bSymmetricExtents;                                       // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_C4JP[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      LowerExtent;                                             // 0x0004(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EGeometryScriptFlareType                                   FlareType;                                               // 0x0008(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZFNY[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GeometryScriptingCore.GeometryScriptPerlinNoiseLayerOptions
	 * Size -> 0x0028
	 */
	struct FGeometryScriptPerlinNoiseLayerOptions
	{
	public:
		float                                                      Magnitude;                                               // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Frequency;                                               // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             FrequencyShift;                                          // 0x0008(0x0018) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    RandomSeed;                                              // 0x0020(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MXBU[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GeometryScriptingCore.GeometryScriptMathWarpOptions
	 * Size -> 0x000C
	 */
	struct FGeometryScriptMathWarpOptions
	{
	public:
		float                                                      Magnitude;                                               // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Frequency;                                               // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FrequencyShift;                                          // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GeometryScriptingCore.GeometryScriptPerlinNoiseOptions
	 * Size -> 0x0030
	 */
	struct FGeometryScriptPerlinNoiseOptions
	{
	public:
		struct FGeometryScriptPerlinNoiseLayerOptions              BaseLayer;                                               // 0x0000(0x0028) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bApplyAlongNormal;                                       // 0x0028(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EGeometryScriptEmptySelectionBehavior                      EmptyBehavior;                                           // 0x0029(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UHCT[0x6];                                   // 0x002A(0x0006) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GeometryScriptingCore.GeometryScriptIterativeMeshSmoothingOptions
	 * Size -> 0x000C
	 */
	struct FGeometryScriptIterativeMeshSmoothingOptions
	{
	public:
		int32_t                                                    NumIterations;                                           // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Alpha;                                                   // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EGeometryScriptEmptySelectionBehavior                      EmptyBehavior;                                           // 0x0008(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ODCP[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GeometryScriptingCore.GeometryScriptDisplaceFromTextureOptions
	 * Size -> 0x0038
	 */
	struct FGeometryScriptDisplaceFromTextureOptions
	{
	public:
		float                                                      Magnitude;                                               // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_P5GP[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector2D                                           UVScale;                                                 // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           UVOffset;                                                // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Center;                                                  // 0x0028(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ImageChannel;                                            // 0x002C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EGeometryScriptEmptySelectionBehavior                      EmptyBehavior;                                           // 0x0030(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_W0D3[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GeometryScriptingCore.GeometryScriptMeshEditPolygroupOptions
	 * Size -> 0x0008
	 */
	struct FGeometryScriptMeshEditPolygroupOptions
	{
	public:
		EGeometryScriptMeshEditPolygroupMode                       GroupMode;                                               // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AD22[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    ConstantGroup;                                           // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GeometryScriptingCore.GeometryScriptMeshOffsetOptions
	 * Size -> 0x0018
	 */
	struct FGeometryScriptMeshOffsetOptions
	{
	public:
		float                                                      OffsetDistance;                                          // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bFixedBoundary;                                          // 0x0004(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_B7BH[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    SolveSteps;                                              // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SmoothAlpha;                                             // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bReprojectDuringSmoothing;                               // 0x0010(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LGCL[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      BoundaryAlpha;                                           // 0x0014(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GeometryScriptingCore.GeometryScriptMeshExtrudeOptions
	 * Size -> 0x0028
	 */
	struct FGeometryScriptMeshExtrudeOptions
	{
	public:
		float                                                      ExtrudeDistance;                                         // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CH3I[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             ExtrudeDirection;                                        // 0x0008(0x0018) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      UVScale;                                                 // 0x0020(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSolidsToShells;                                         // 0x0024(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TJIA[0x3];                                   // 0x0025(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GeometryScriptingCore.GeometryScriptMeshLinearExtrudeOptions
	 * Size -> 0x0038
	 */
	struct FGeometryScriptMeshLinearExtrudeOptions
	{
	public:
		float                                                      Distance;                                                // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EGeometryScriptLinearExtrudeDirection                      DirectionMode;                                           // 0x0004(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2E57[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             Direction;                                               // 0x0008(0x0018) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EGeometryScriptPolyOperationArea                           AreaMode;                                                // 0x0020(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Q253[0x3];                                   // 0x0021(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGeometryScriptMeshEditPolygroupOptions             GroupOptions;                                            // 0x0024(0x0008) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		float                                                      UVScale;                                                 // 0x002C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSolidsToShells;                                         // 0x0030(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CT1A[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GeometryScriptingCore.GeometryScriptMeshOffsetFacesOptions
	 * Size -> 0x0018
	 */
	struct FGeometryScriptMeshOffsetFacesOptions
	{
	public:
		float                                                      Distance;                                                // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EGeometryScriptOffsetFacesType                             OffsetType;                                              // 0x0004(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EGeometryScriptPolyOperationArea                           AreaMode;                                                // 0x0005(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_B7B7[0x2];                                   // 0x0006(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGeometryScriptMeshEditPolygroupOptions             GroupOptions;                                            // 0x0008(0x0008) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		float                                                      UVScale;                                                 // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSolidsToShells;                                         // 0x0014(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2MT0[0x3];                                   // 0x0015(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GeometryScriptingCore.GeometryScriptMeshInsetOutsetFacesOptions
	 * Size -> 0x0020
	 */
	struct FGeometryScriptMeshInsetOutsetFacesOptions
	{
	public:
		float                                                      Distance;                                                // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bReproject;                                              // 0x0004(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bBoundaryOnly;                                           // 0x0005(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_64XU[0x2];                                   // 0x0006(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Softness;                                                // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AreaScale;                                               // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EGeometryScriptPolyOperationArea                           AreaMode;                                                // 0x0010(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JLB3[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGeometryScriptMeshEditPolygroupOptions             GroupOptions;                                            // 0x0014(0x0008) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		float                                                      UVScale;                                                 // 0x001C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GeometryScriptingCore.GeometryScriptMeshBevelOptions
	 * Size -> 0x00C0
	 */
	struct FGeometryScriptMeshBevelOptions
	{
	public:
		float                                                      BevelDistance;                                           // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bInferMaterialID;                                        // 0x0004(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_B52U[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    SetMaterialID;                                           // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bApplyFilterBox;                                         // 0x000C(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CUJI[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FBox                                                FilterBox;                                               // 0x0010(0x0038) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8W99[0x8];                                   // 0x0048(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          FilterBoxTransform;                                      // 0x0050(0x0060) BlueprintVisible, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bFullyContained;                                         // 0x00B0(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HUVQ[0xF];                                   // 0x00B1(0x000F) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GeometryScriptingCore.GeometryScriptMeshBevelSelectionOptions
	 * Size -> 0x000C
	 */
	struct FGeometryScriptMeshBevelSelectionOptions
	{
	public:
		float                                                      BevelDistance;                                           // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bInferMaterialID;                                        // 0x0004(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WG3R[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    SetMaterialID;                                           // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GeometryScriptingCore.GeometryScriptCalculateNormalsOptions
	 * Size -> 0x0002
	 */
	struct FGeometryScriptCalculateNormalsOptions
	{
	public:
		bool                                                       bAngleWeighted;                                          // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAreaWeighted;                                           // 0x0001(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GeometryScriptingCore.GeometryScriptSplitNormalsOptions
	 * Size -> 0x0014
	 */
	struct FGeometryScriptSplitNormalsOptions
	{
	public:
		bool                                                       bSplitByOpeningAngle;                                    // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LDJU[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      OpeningAngleDeg;                                         // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSplitByFaceGroup;                                       // 0x0008(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PXEH[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGeometryScriptGroupLayer                           GroupLayer;                                              // 0x000C(0x0008) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GeometryScriptingCore.GeometryScriptTangentsOptions
	 * Size -> 0x0008
	 */
	struct FGeometryScriptTangentsOptions
	{
	public:
		EGeometryScriptTangentTypes                                Type;                                                    // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LDW2[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    UVLayer;                                                 // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GeometryScriptingCore.GeometryScriptPrimitiveOptions
	 * Size -> 0x0003
	 */
	struct FGeometryScriptPrimitiveOptions
	{
	public:
		EGeometryScriptPrimitivePolygroupMode                      PolygroupMode;                                           // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bFlipOrientation;                                        // 0x0001(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EGeometryScriptPrimitiveUVMode                             UVMode;                                                  // 0x0002(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GeometryScriptingCore.GeometryScriptRevolveOptions
	 * Size -> 0x0014
	 */
	struct FGeometryScriptRevolveOptions
	{
	public:
		float                                                      RevolveDegrees;                                          // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DegreeOffset;                                            // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bReverseDirection;                                       // 0x0008(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bHardNormals;                                            // 0x0009(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_POBE[0x2];                                   // 0x000A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      HardNormalAngle;                                         // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bProfileAtMidpoint;                                      // 0x0010(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bFillPartialRevolveEndcaps;                              // 0x0011(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_U3LY[0x2];                                   // 0x0012(0x0002) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GeometryScriptingCore.GeometryScriptVoronoiOptions
	 * Size -> 0x0058
	 */
	struct FGeometryScriptVoronoiOptions
	{
	public:
		float                                                      BoundsExpand;                                            // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VUJ5[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FBox                                                Bounds;                                                  // 0x0008(0x0038) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		TArray<int32_t>                                            CreateCells;                                             // 0x0040(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       bIncludeBoundary;                                        // 0x0050(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RRC7[0x7];                                   // 0x0051(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GeometryScriptingCore.GeometryScriptRemeshOptions
	 * Size -> 0x001C
	 */
	struct FGeometryScriptRemeshOptions
	{
	public:
		bool                                                       bDiscardAttributes;                                      // 0x0000(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bReprojectToInputMesh;                                   // 0x0001(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EGeometryScriptRemeshSmoothingType                         SmoothingType;                                           // 0x0002(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2J4S[0x1];                                   // 0x0003(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      SmoothingRate;                                           // 0x0004(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EGeometryScriptRemeshEdgeConstraintType                    MeshBoundaryConstraint;                                  // 0x0008(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EGeometryScriptRemeshEdgeConstraintType                    GroupBoundaryConstraint;                                 // 0x0009(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EGeometryScriptRemeshEdgeConstraintType                    MaterialBoundaryConstraint;                              // 0x000A(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAllowFlips;                                             // 0x000B(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAllowSplits;                                            // 0x000C(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAllowCollapses;                                         // 0x000D(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPreventNormalFlips;                                     // 0x000E(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPreventTinyTriangles;                                   // 0x000F(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseFullRemeshPasses;                                    // 0x0010(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9HB7[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    RemeshIterations;                                        // 0x0014(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAutoCompact;                                            // 0x0018(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XARV[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GeometryScriptingCore.GeometryScriptUniformRemeshOptions
	 * Size -> 0x000C
	 */
	struct FGeometryScriptUniformRemeshOptions
	{
	public:
		EGeometryScriptUniformRemeshTargetType                     TargetType;                                              // 0x0000(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YJXG[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    TargetTriangleCount;                                     // 0x0004(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TargetEdgeLength;                                        // 0x0008(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GeometryScriptingCore.GeometryScriptWeldEdgesOptions
	 * Size -> 0x0008
	 */
	struct FGeometryScriptWeldEdgesOptions
	{
	public:
		float                                                      Tolerance;                                               // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOnlyUniquePairs;                                        // 0x0004(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DRNA[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GeometryScriptingCore.GeometryScriptResolveTJunctionOptions
	 * Size -> 0x0004
	 */
	struct FGeometryScriptResolveTJunctionOptions
	{
	public:
		float                                                      Tolerance;                                               // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GeometryScriptingCore.GeometryScriptFillHolesOptions
	 * Size -> 0x0002
	 */
	struct FGeometryScriptFillHolesOptions
	{
	public:
		EGeometryScriptFillHolesMethod                             FillMethod;                                              // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDeleteIsolatedTriangles;                                // 0x0001(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GeometryScriptingCore.GeometryScriptRemoveSmallComponentOptions
	 * Size -> 0x000C
	 */
	struct FGeometryScriptRemoveSmallComponentOptions
	{
	public:
		float                                                      MinVolume;                                               // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinArea;                                                 // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MinTriangleCount;                                        // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GeometryScriptingCore.GeometryScriptRemoveHiddenTrianglesOptions
	 * Size -> 0x001C
	 */
	struct FGeometryScriptRemoveHiddenTrianglesOptions
	{
	public:
		EGeometryScriptRemoveHiddenTrianglesMethod                 Method;                                                  // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YZHA[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    SamplesPerTriangle;                                      // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ShrinkSelection;                                         // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      WindingIsoValue;                                         // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    RaysPerSample;                                           // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      NormalOffset;                                            // 0x0014(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCompactResult;                                          // 0x0018(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_J10R[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GeometryScriptingCore.GeometryScriptDegenerateTriangleOptions
	 * Size -> 0x0020
	 */
	struct FGeometryScriptDegenerateTriangleOptions
	{
	public:
		EGeometryScriptRepairMeshMode                              Mode;                                                    // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_D4JR[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     MinTriangleArea;                                         // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		double                                                     MinEdgeLength;                                           // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCompactOnCompletion;                                    // 0x0018(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0PV2[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GeometryScriptingCore.GeometryScriptMeshPointSamplingOptions
	 * Size -> 0x0018
	 */
	struct FGeometryScriptMeshPointSamplingOptions
	{
	public:
		float                                                      SamplingRadius;                                          // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxNumSamples;                                           // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    RandomSeed;                                              // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BZR5[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     SubSampleDensity;                                        // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GeometryScriptingCore.GeometryScriptNonUniformPointSamplingOptions
	 * Size -> 0x0018
	 */
	struct FGeometryScriptNonUniformPointSamplingOptions
	{
	public:
		float                                                      MaxSamplingRadius;                                       // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EGeometryScriptSamplingDistributionMode                    SizeDistribution;                                        // 0x0004(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NJJN[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     SizeDistributionPower;                                   // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EGeometryScriptSamplingWeightMode                          WeightMode;                                              // 0x0010(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bInvertWeights;                                          // 0x0011(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_L5P5[0x6];                                   // 0x0012(0x0006) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GeometryScriptingCore.GeometryScriptPlanarSimplifyOptions
	 * Size -> 0x0008
	 */
	struct FGeometryScriptPlanarSimplifyOptions
	{
	public:
		float                                                      AngleThreshold;                                          // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAutoCompact;                                            // 0x0004(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OE76[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GeometryScriptingCore.GeometryScriptPolygroupSimplifyOptions
	 * Size -> 0x0008
	 */
	struct FGeometryScriptPolygroupSimplifyOptions
	{
	public:
		float                                                      AngleThreshold;                                          // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAutoCompact;                                            // 0x0004(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VKTY[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GeometryScriptingCore.GeometryScriptSimplifyMeshOptions
	 * Size -> 0x0007
	 */
	struct FGeometryScriptSimplifyMeshOptions
	{
	public:
		EGeometryScriptRemoveMeshSimplificationType                Method;                                                  // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAllowSeamCollapse;                                      // 0x0001(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAllowSeamSmoothing;                                     // 0x0002(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAllowSeamSplits;                                        // 0x0003(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPreserveVertexPositions;                                // 0x0004(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bRetainQuadricMemory;                                    // 0x0005(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAutoCompact;                                            // 0x0006(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GeometryScriptingCore.GeometryScriptSpatialQueryOptions
	 * Size -> 0x000C
	 */
	struct FGeometryScriptSpatialQueryOptions
	{
	public:
		float                                                      MaxDistance;                                             // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAllowUnsafeModifiedQueries;                             // 0x0004(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AC86[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      WindingIsoThreshold;                                     // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GeometryScriptingCore.GeometryScriptRayHitResult
	 * Size -> 0x0040
	 */
	struct FGeometryScriptRayHitResult
	{
	public:
		bool                                                       bHit;                                                    // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DBNX[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      RayParameter;                                            // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    HitTriangleID;                                           // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_M682[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             HitPosition;                                             // 0x0010(0x0018) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             HitBaryCoords;                                           // 0x0028(0x0018) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GeometryScriptingCore.GeometryScriptPNTessellateOptions
	 * Size -> 0x0001
	 */
	struct FGeometryScriptPNTessellateOptions
	{
	public:
		bool                                                       bRecomputeNormals;                                       // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GeometryScriptingCore.GeometryScriptSelectiveTessellateOptions
	 * Size -> 0x0002
	 */
	struct FGeometryScriptSelectiveTessellateOptions
	{
	public:
		bool                                                       bEnableMultithreading;                                   // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EGeometryScriptEmptySelectionBehavior                      EmptyBehavior;                                           // 0x0001(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GeometryScriptingCore.GeometryScriptRepackUVsOptions
	 * Size -> 0x0008
	 */
	struct FGeometryScriptRepackUVsOptions
	{
	public:
		int32_t                                                    TargetImageWidth;                                        // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOptimizeIslandRotation;                                 // 0x0004(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OHFJ[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GeometryScriptingCore.GeometryScriptExpMapUVOptions
	 * Size -> 0x0008
	 */
	struct FGeometryScriptExpMapUVOptions
	{
	public:
		int32_t                                                    NormalSmoothingRounds;                                   // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      NormalSmoothingAlpha;                                    // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GeometryScriptingCore.GeometryScriptSpectralConformalUVOptions
	 * Size -> 0x0001
	 */
	struct FGeometryScriptSpectralConformalUVOptions
	{
	public:
		bool                                                       bPreserveIrregularity;                                   // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GeometryScriptingCore.GeometryScriptRecomputeUVsOptions
	 * Size -> 0x001C
	 */
	struct FGeometryScriptRecomputeUVsOptions
	{
	public:
		EGeometryScriptUVFlattenMethod                             Method;                                                  // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EGeometryScriptUVIslandSource                              IslandSource;                                            // 0x0001(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XGSS[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGeometryScriptExpMapUVOptions                      ExpMapOptions;                                           // 0x0004(0x0008) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FGeometryScriptSpectralConformalUVOptions           SpectralConformalOptions;                                // 0x000C(0x0001) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6SJH[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGeometryScriptGroupLayer                           GroupLayer;                                              // 0x0010(0x0008) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bAutoAlignIslandsWithAxes;                               // 0x0018(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_14MF[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GeometryScriptingCore.GeometryScriptPatchBuilderOptions
	 * Size -> 0x0034
	 */
	struct FGeometryScriptPatchBuilderOptions
	{
	public:
		int32_t                                                    InitialPatchCount;                                       // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MinPatchSize;                                            // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PatchCurvatureAlignmentWeight;                           // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PatchMergingMetricThresh;                                // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PatchMergingAngleThresh;                                 // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGeometryScriptExpMapUVOptions                      ExpMapOptions;                                           // 0x0014(0x0008) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bRespectInputGroups;                                     // 0x001C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2VB1[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGeometryScriptGroupLayer                           GroupLayer;                                              // 0x0020(0x0008) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bAutoPack;                                               // 0x0028(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6EMF[0x3];                                   // 0x0029(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGeometryScriptRepackUVsOptions                     PackingOptions;                                          // 0x002C(0x0008) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GeometryScriptingCore.GeometryScriptXAtlasOptions
	 * Size -> 0x0004
	 */
	struct FGeometryScriptXAtlasOptions
	{
	public:
		int32_t                                                    MaxIterations;                                           // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GeometryScriptingCore.GeometryScript3DGridParameters
	 * Size -> 0x000C
	 */
	struct FGeometryScript3DGridParameters
	{
	public:
		EGeometryScriptGridSizingMethod                            SizeMethod;                                              // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RAWY[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      GridCellSize;                                            // 0x0004(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    GridResolution;                                          // 0x0008(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GeometryScriptingCore.GeometryScriptSolidifyOptions
	 * Size -> 0x0028
	 */
	struct FGeometryScriptSolidifyOptions
	{
	public:
		struct FGeometryScript3DGridParameters                     GridParameters;                                          // 0x0000(0x000C) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		float                                                      WindingThreshold;                                        // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSolidAtBoundaries;                                      // 0x0010(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9XDH[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ExtendBounds;                                            // 0x0014(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SurfaceSearchSteps;                                      // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bThickenShells;                                          // 0x001C(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PISN[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     ShellThickness;                                          // 0x0020(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GeometryScriptingCore.GeometryScriptMorphologyOptions
	 * Size -> 0x0024
	 */
	struct FGeometryScriptMorphologyOptions
	{
	public:
		struct FGeometryScript3DGridParameters                     SDFGridParameters;                                       // 0x0000(0x000C) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bUseSeparateMeshGrid;                                    // 0x000C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NN1W[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGeometryScript3DGridParameters                     MeshGridParameters;                                      // 0x0010(0x000C) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		EGeometryScriptMorphologicalOpType                         Operation;                                               // 0x001C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6YWF[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Distance;                                                // 0x0020(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GeometryScriptingCore.GeometryScriptSplineSamplingOptions
	 * Size -> 0x000C
	 */
	struct FGeometryScriptSplineSamplingOptions
	{
	public:
		int32_t                                                    NumSamples;                                              // 0x0000(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ErrorTolerance;                                          // 0x0004(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EGeometryScriptSampleSpacing                               SampleSpacing;                                           // 0x0008(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESplineCoordinateSpace                                     CoordinateSpace;                                         // 0x0009(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XDO9[0x2];                                   // 0x000A(0x0002) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GeometryScriptingCore.GeometryScriptCopyMeshFromComponentOptions
	 * Size -> 0x000C
	 */
	struct FGeometryScriptCopyMeshFromComponentOptions
	{
	public:
		bool                                                       bWantNormals;                                            // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bWantTangents;                                           // 0x0001(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7JMZ[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGeometryScriptMeshReadLOD                          RequestedLOD;                                            // 0x0004(0x0008) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GeometryScriptingCore.GeometryScriptSampleTextureOptions
	 * Size -> 0x0028
	 */
	struct FGeometryScriptSampleTextureOptions
	{
	public:
		EGeometryScriptPixelSamplingMethod                         SamplingMethod;                                          // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bWrap;                                                   // 0x0001(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FTQN[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector2D                                           UVScale;                                                 // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           UVOffset;                                                // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
