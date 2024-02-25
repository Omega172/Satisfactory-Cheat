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
	 * Enum ModelingComponents.EBakeTextureResolution
	 */
	enum class EBakeTextureResolution : uint8_t
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
	 * Enum ModelingComponents.EBakeTextureBitDepth
	 */
	enum class EBakeTextureBitDepth : uint8_t
	{
		ChannelBits8  = 0,
		ChannelBits16 = 1,
		MAX           = 2
	};

	/**
	 * Enum ModelingComponents.EBakeTextureSamplesPerPixel
	 */
	enum class EBakeTextureSamplesPerPixel : uint8_t
	{
		Sample1   = 0,
		Sample4   = 1,
		Sample16  = 2,
		Sample64  = 3,
		Sample256 = 4,
		MAX       = 5
	};

	/**
	 * Enum ModelingComponents.EBaseCreateFromSelectedTargetType
	 */
	enum class EBaseCreateFromSelectedTargetType : uint8_t
	{
		NewObject        = 0,
		FirstInputObject = 1,
		LastInputObject  = 2,
		MAX              = 3
	};

	/**
	 * Enum ModelingComponents.EUVLayoutPreviewSide
	 */
	enum class EUVLayoutPreviewSide : uint8_t
	{
		Left  = 0,
		Right = 1,
		MAX   = 2
	};

	/**
	 * Enum ModelingComponents.ESpaceCurveControlPointTransformMode
	 */
	enum class ESpaceCurveControlPointTransformMode : uint8_t
	{
		Shared    = 0,
		PerVertex = 1,
		MAX       = 2
	};

	/**
	 * Enum ModelingComponents.ESpaceCurveControlPointOriginMode
	 */
	enum class ESpaceCurveControlPointOriginMode : uint8_t
	{
		Shared = 0,
		First  = 1,
		Last   = 2,
		MAX    = 3
	};

	/**
	 * Enum ModelingComponents.ESpaceCurveControlPointFalloffType
	 */
	enum class ESpaceCurveControlPointFalloffType : uint8_t
	{
		Linear = 0,
		Smooth = 1,
		MAX    = 2
	};

	/**
	 * Enum ModelingComponents.EModelingComponentsPlaneVisualizationMode
	 */
	enum class EModelingComponentsPlaneVisualizationMode : uint8_t
	{
		SimpleGrid          = 0,
		HierarchicalGrid    = 1,
		FixedScreenAreaGrid = 2,
		MAX                 = 3
	};

	/**
	 * Enum ModelingComponents.ECreateModelingObjectResult
	 */
	enum class ECreateModelingObjectResult : uint8_t
	{
		Ok                         = 0,
		Cancelled                  = 1,
		Failed_Unknown             = 2,
		Failed_NoAPIFound          = 3,
		Failed_InvalidWorld        = 4,
		Failed_InvalidMesh         = 5,
		Failed_InvalidTexture      = 6,
		Failed_AssetCreationFailed = 7,
		Failed_ActorCreationFailed = 8,
		MAX                        = 9
	};

	/**
	 * Enum ModelingComponents.ECreateMeshObjectSourceMeshType
	 */
	enum class ECreateMeshObjectSourceMeshType : uint8_t
	{
		MeshDescription = 0,
		DynamicMesh     = 1,
		MAX             = 2
	};

	/**
	 * Enum ModelingComponents.ECreateObjectTypeHint
	 */
	enum class ECreateObjectTypeHint : uint8_t
	{
		Undefined        = 0,
		StaticMesh       = 1,
		Volume           = 2,
		DynamicMeshActor = 3,
		MAX              = 4
	};

	/**
	 * Enum ModelingComponents.EHandleSourcesMethod
	 */
	enum class EHandleSourcesMethod : uint8_t
	{
		DeleteSources   = 0,
		HideSources     = 1,
		KeepSources     = 2,
		KeepFirstSource = 3,
		KeepLastSource  = 4,
		MAX             = 5
	};

	/**
	 * Enum ModelingComponents.EMultiTransformerMode
	 */
	enum class EMultiTransformerMode : uint8_t
	{
		DefaultGizmo         = 0,
		QuickAxisTranslation = 1,
		MAX                  = 2
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct ModelingComponents.ModelingToolsAxisFilter
	 * Size -> 0x0003
	 */
	struct FModelingToolsAxisFilter
	{
	public:
		bool                                                       bAxisX;                                                  // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAxisY;                                                  // 0x0001(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAxisZ;                                                  // 0x0002(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ModelingComponents.RenderableTriangleVertex
	 * Size -> 0x0048
	 */
	struct FRenderableTriangleVertex
	{
	public:
		struct FVector                                             Position;                                                // 0x0000(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           UV;                                                      // 0x0018(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Normal;                                                  // 0x0028(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FColor                                              Color;                                                   // 0x0040(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LIU4[0x4];                                   // 0x0044(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ModelingComponents.RenderableTriangle
	 * Size -> 0x00E0
	 */
	struct FRenderableTriangle
	{
	public:
		class UMaterialInterface*                                  Material;                                                // 0x0000(0x0008) ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRenderableTriangleVertex                           Vertex0;                                                 // 0x0008(0x0048) NoDestructor, NativeAccessSpecifierPublic
		struct FRenderableTriangleVertex                           Vertex1;                                                 // 0x0050(0x0048) NoDestructor, NativeAccessSpecifierPublic
		struct FRenderableTriangleVertex                           Vertex2;                                                 // 0x0098(0x0048) NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ModelingComponents.CreateMeshObjectParams
	 * Size -> 0x0600
	 */
	struct FCreateMeshObjectParams
	{
	public:
		class UPrimitiveComponent*                                 SourceComponent;                                         // 0x0000(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ECreateObjectTypeHint                                      TypeHint;                                                // 0x0008(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4XIF[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              TypeHintClass;                                           // 0x0010(0x0008) Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    TypeHintExtended;                                        // 0x0018(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1NRE[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UWorld*                                              TargetWorld;                                             // 0x0020(0x0008) Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YEUR[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          Transform;                                               // 0x0030(0x0060) Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              BaseName;                                                // 0x0090(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UMaterialInterface*>                          Materials;                                               // 0x00A0(0x0010) Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic
		TArray<class UMaterialInterface*>                          AssetMaterials;                                          // 0x00B0(0x0010) Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic
		bool                                                       bEnableCollision;                                        // 0x00C0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ECollisionTraceFlag                                        CollisionMode;                                           // 0x00C1(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnableRaytracingSupport;                                // 0x00C2(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnableRecomputeNormals;                                 // 0x00C3(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnableRecomputeTangents;                                // 0x00C4(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnableNanite;                                           // 0x00C5(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_U8UA[0x2];                                   // 0x00C6(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      NaniteProxyTrianglePercent;                              // 0x00C8(0x0004) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5Y70[0x4];                                   // 0x00CC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FMeshNaniteSettings                                 NaniteSettings;                                          // 0x00D0(0x0038) Edit, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XANV[0x4F8];                                 // 0x0108(0x04F8) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ModelingComponents.CreateMeshObjectResult
	 * Size -> 0x0020
	 */
	struct FCreateMeshObjectResult
	{
	public:
		ECreateModelingObjectResult                                ResultCode;                                              // 0x0000(0x0001) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_B5MB[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              NewActor;                                                // 0x0008(0x0008) Edit, ZeroConstructor, EditConst, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPrimitiveComponent*                                 NewComponent;                                            // 0x0010(0x0008) Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UObject*                                             NewAsset;                                                // 0x0018(0x0008) Edit, ZeroConstructor, EditConst, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ModelingComponents.CreateTextureObjectParams
	 * Size -> 0x0030
	 */
	struct FCreateTextureObjectParams
	{
	public:
		int32_t                                                    TypeHintExtended;                                        // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7J6Y[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UWorld*                                              TargetWorld;                                             // 0x0008(0x0008) Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UObject*                                             StoreRelativeToObject;                                   // 0x0010(0x0008) Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              BaseName;                                                // 0x0018(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTexture2D*                                          GeneratedTransientTexture;                               // 0x0028(0x0008) Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ModelingComponents.CreateTextureObjectResult
	 * Size -> 0x0010
	 */
	struct FCreateTextureObjectResult
	{
	public:
		ECreateModelingObjectResult                                ResultCode;                                              // 0x0000(0x0001) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RAX8[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UObject*                                             NewAsset;                                                // 0x0008(0x0008) Edit, ZeroConstructor, EditConst, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
