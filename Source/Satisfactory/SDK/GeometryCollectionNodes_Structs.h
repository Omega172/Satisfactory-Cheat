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
	 * Enum GeometryCollectionNodes.EDataflowFieldFalloffType
	 */
	enum class EDataflowFieldFalloffType : uint8_t
	{
		Dataflow_FieldFalloffType_None        = 0,
		Dataflow_FieldFalloffType_Linear      = 1,
		Dataflow_FieldFalloffType_Inverse     = 2,
		Dataflow_FieldFalloffType_Squared     = 3,
		Dataflow_FieldFalloffType_Logarithmic = 4,
		Dataflow_Max                          = 5
	};

	/**
	 * Enum GeometryCollectionNodes.EDataflowSetMaskConditionType
	 */
	enum class EDataflowSetMaskConditionType : uint8_t
	{
		Dataflow_SetMaskConditionType_Always           = 0,
		Dataflow_SetMaskConditionType_IFF_NOT_Interior = 1,
		Dataflow_SetMaskConditionType_IFF_NOT_Exterior = 2,
		Dataflow_Max                                   = 3
	};

	/**
	 * Enum GeometryCollectionNodes.EDataflowWaveFunctionType
	 */
	enum class EDataflowWaveFunctionType : uint8_t
	{
		Dataflow_WaveFunctionType_Cosine   = 0,
		Dataflow_WaveFunctionType_Gaussian = 1,
		Dataflow_WaveFunctionType_Falloff  = 2,
		Dataflow_WaveFunctionType_Decay    = 3,
		Dataflow_Max                       = 4
	};

	/**
	 * Enum GeometryCollectionNodes.EDataflowFloatFieldOperationType
	 */
	enum class EDataflowFloatFieldOperationType : uint8_t
	{
		Dataflow_FloatFieldOperationType_Multiply = 0,
		Dataflow_FloatFieldFalloffType_Divide     = 1,
		Dataflow_FloatFieldFalloffType_Add        = 2,
		Dataflow_FloatFieldFalloffType_Substract  = 3,
		Dataflow_FloatFieldFalloffType_Min        = 4,
		Dataflow_FloatFieldFalloffType_Max        = 5,
		Dataflow_Max                              = 6
	};

	/**
	 * Enum GeometryCollectionNodes.EDataflowVectorFieldOperationType
	 */
	enum class EDataflowVectorFieldOperationType : uint8_t
	{
		Dataflow_VectorFieldOperationType_Multiply   = 0,
		Dataflow_VectorFieldFalloffType_Divide       = 1,
		Dataflow_VectorFieldFalloffType_Add          = 2,
		Dataflow_VectorFieldFalloffType_Substract    = 3,
		Dataflow_VectorFieldFalloffType_CrossProduct = 4,
		Dataflow_Max                                 = 5
	};

	/**
	 * Enum GeometryCollectionNodes.ESetMaterialOperationTypeEnum
	 */
	enum class ESetMaterialOperationTypeEnum : uint8_t
	{
		Dataflow_SetMaterialOperationType_Add    = 0,
		Dataflow_SetMaterialOperationType_Insert = 1,
		Dataflow_Max                             = 2
	};

	/**
	 * Enum GeometryCollectionNodes.EConvexOverlapRemovalMethodEnum
	 */
	enum class EConvexOverlapRemovalMethodEnum : uint8_t
	{
		Dataflow_EConvexOverlapRemovalMethod_None                   = 0,
		Dataflow_EConvexOverlapRemovalMethod_All                    = 1,
		Dataflow_EConvexOverlapRemovalMethod_OnlyClusters           = 2,
		Dataflow_EConvexOverlapRemovalMethod_OnlyClustersVsClusters = 3,
		Dataflow_Max                                                = 4
	};

	/**
	 * Enum GeometryCollectionNodes.EClusterSizeMethodEnum
	 */
	enum class EClusterSizeMethodEnum : uint8_t
	{
		Dataflow_ClusterSizeMethod_ByNumber          = 0,
		Dataflow_ClusterSizeMethod_ByFractionOfInput = 1,
		Dataflow_ClusterSizeMethod_BySize            = 2,
		Dataflow_Max                                 = 3
	};

	/**
	 * Enum GeometryCollectionNodes.EVisibiltyOptionsEnum
	 */
	enum class EVisibiltyOptionsEnum : uint8_t
	{
		Dataflow_VisibilityOptions_Visible   = 0,
		Dataflow_VisibilityOptions_Invisible = 1,
		Dataflow_Max                         = 2
	};

	/**
	 * Enum GeometryCollectionNodes.EMeshBooleanOperationEnum
	 */
	enum class EMeshBooleanOperationEnum : uint8_t
	{
		Dataflow_MeshBoolean_Union      = 0,
		Dataflow_MeshBoolean_Intersect  = 1,
		Dataflow_MeshBoolean_Difference = 2,
		Dataflow_Max                    = 3
	};

	/**
	 * Enum GeometryCollectionNodes.EMakeBoxDataTypeEnum
	 */
	enum class EMakeBoxDataTypeEnum : uint8_t
	{
		Dataflow_MakeBox_DataType_MinMax     = 0,
		Dataflow_MakeBox_DataType_CenterSize = 1,
		Dataflow_Max                         = 2
	};

	/**
	 * Enum GeometryCollectionNodes.EFloatToIntFunctionEnum
	 */
	enum class EFloatToIntFunctionEnum : uint8_t
	{
		Dataflow_FloatToInt_Function_Floor    = 0,
		Dataflow_FloatToInt_Function_Ceil     = 1,
		Dataflow_FloatToInt_Function_Round    = 2,
		Dataflow_FloatToInt_Function_Truncate = 3,
		Dataflow_Max                          = 4
	};

	/**
	 * Enum GeometryCollectionNodes.EFloatArrayToIntArrayFunctionEnum
	 */
	enum class EFloatArrayToIntArrayFunctionEnum : uint8_t
	{
		Dataflow_FloatToInt_Function_Floor    = 0,
		Dataflow_FloatToInt_Function_Ceil     = 1,
		Dataflow_FloatToInt_Function_Round    = 2,
		Dataflow_FloatToInt_Function_Truncate = 3,
		Dataflow_FloatToInt_NonZeroToIndex    = 4,
		Dataflow_FloatToInt_ZeroToIndex       = 5,
		Dataflow_Max                          = 6
	};

	/**
	 * Enum GeometryCollectionNodes.EMathConstantsEnum
	 */
	enum class EMathConstantsEnum : uint8_t
	{
		Dataflow_MathConstants_Pi                  = 0,
		Dataflow_MathConstants_HalfPi              = 1,
		Dataflow_MathConstants_TwoPi               = 2,
		Dataflow_MathConstants_FourPi              = 3,
		Dataflow_MathConstants_InvPi               = 4,
		Dataflow_MathConstants_InvTwoPi            = 5,
		Dataflow_MathConstants_Sqrt2               = 6,
		Dataflow_MathConstants_InvSqrt2            = 7,
		Dataflow_MathConstants_Sqrt3               = 8,
		Dataflow_MathConstants_InvSqrt3            = 9,
		Dataflow_FloatToInt_Function_E             = 10,
		Dataflow_FloatToInt_Function_Gamma         = 11,
		Dataflow_FloatToInt_Function_GoldenRatio   = 12,
		Dataflow_FloatToInt_Function_ZeroTolerance = 13,
		Dataflow_Max                               = 14
	};

	/**
	 * Enum GeometryCollectionNodes.ERotationOrderEnum
	 */
	enum class ERotationOrderEnum : uint8_t
	{
		Dataflow_RotationOrder_XYZ = 0,
		Dataflow_RotationOrder_YZX = 1,
		Dataflow_RotationOrder_ZXY = 2,
		Dataflow_RotationOrder_XZY = 3,
		Dataflow_RotationOrder_YXZ = 4,
		Dataflow_RotationOrder_ZYX = 5,
		Dataflow_Max               = 6
	};

	/**
	 * Enum GeometryCollectionNodes.ECompareOperationEnum
	 */
	enum class ECompareOperationEnum : uint8_t
	{
		Dataflow_Compare_Equal          = 0,
		Dataflow_Compare_Smaller        = 1,
		Dataflow_Compare_SmallerOrEqual = 2,
		Dataflow_Compare_Greater        = 3,
		Dataflow_Compare_GreaterOrEqual = 4,
		Dataflow_Max                    = 5
	};

	/**
	 * Enum GeometryCollectionNodes.EAnchorStateEnum
	 */
	enum class EAnchorStateEnum : uint8_t
	{
		Dataflow_AnchorState_Anchored    = 0,
		Dataflow_AnchorState_NotAnchored = 1,
		Dataflow_Max                     = 2
	};

	/**
	 * Enum GeometryCollectionNodes.EProximityMethodEnum
	 */
	enum class EProximityMethodEnum : uint8_t
	{
		Dataflow_ProximityMethod_Precise    = 0,
		Dataflow_ProximityMethod_ConvexHull = 1,
		Dataflow_Max                        = 2
	};

	/**
	 * Enum GeometryCollectionNodes.EStandardGroupNameEnum
	 */
	enum class EStandardGroupNameEnum : uint8_t
	{
		Dataflow_Transform = 0,
		Dataflow_Geometry  = 1,
		Dataflow_Faces     = 2,
		Dataflow_Vertices  = 3,
		Dataflow_Material  = 4,
		Dataflow_Breaking  = 5,
		Dataflow_Custom    = 6,
		Dataflow_Max       = 7
	};

	/**
	 * Enum GeometryCollectionNodes.ECustomAttributeTypeEnum
	 */
	enum class ECustomAttributeTypeEnum : uint8_t
	{
		Dataflow_CustomAttributeType_UInt8           = 0,
		Dataflow_CustomAttributeType_Int32           = 1,
		Dataflow_CustomAttributeType_Float           = 2,
		Dataflow_CustomAttributeType_Double          = 3,
		Dataflow_CustomAttributeType_Bool            = 4,
		Dataflow_CustomAttributeType_String          = 5,
		Dataflow_CustomAttributeType_Vector2f        = 6,
		Dataflow_CustomAttributeType_Vector3f        = 7,
		Dataflow_CustomAttributeType_Vector3d        = 8,
		Dataflow_CustomAttributeType_Vector4f        = 9,
		Dataflow_CustomAttributeType_LinearColor     = 10,
		Dataflow_CustomAttributeType_Transform       = 11,
		Dataflow_CustomAttributeType_Quat4f          = 12,
		Dataflow_CustomAttributeType_Box             = 13,
		Dataflow_CustomAttributeType_Guid            = 14,
		Dataflow_CustomAttributeType_Int32Set        = 15,
		Dataflow_CustomAttributeType_Int32Array      = 16,
		Dataflow_CustomAttributeType_IntVector       = 17,
		Dataflow_CustomAttributeType_IntVector2      = 18,
		Dataflow_CustomAttributeType_IntVector4      = 19,
		Dataflow_CustomAttributeType_IntVector2Array = 20,
		Dataflow_CustomAttributeType_FloatArray      = 21,
		Dataflow_CustomAttributeType_Vector2fArray   = 22,
		Dataflow_CustomAttributeType_FVector3fArray  = 23,
		Dataflow_Max                                 = 24
	};

	/**
	 * Enum GeometryCollectionNodes.ESetOperationEnum
	 */
	enum class ESetOperationEnum : uint8_t
	{
		Dataflow_SetOperation_AND = 0,
		Dataflow_SetOperation_OR  = 1,
		Dataflow_SetOperation_XOR = 2,
		Dataflow_Max              = 3
	};

	/**
	 * Enum GeometryCollectionNodes.ERangeSettingEnum
	 */
	enum class ERangeSettingEnum : uint8_t
	{
		Dataflow_RangeSetting_InsideRange  = 0,
		Dataflow_RangeSetting_OutsideRange = 1,
		Dataflow_Max                       = 2
	};

	/**
	 * Enum GeometryCollectionNodes.ESelectSubjectTypeEnum
	 */
	enum class ESelectSubjectTypeEnum : uint8_t
	{
		Dataflow_SelectSubjectType_Vertices    = 0,
		Dataflow_SelectSubjectType_BoundingBox = 1,
		Dataflow_SelectSubjectType_Centroid    = 2,
		Dataflow_Max                           = 3
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct GeometryCollectionNodes.GeometryCollectionTerminalDataflowNode
	 * Size -> 0x00D0 (FullSize[0x01B8] - InheritedSize[0x00E8])
	 */
	struct FGeometryCollectionTerminalDataflowNode : public FDataflowTerminalNode
	{
	public:
		struct FManagedArrayCollection                             Collection;                                              // 0x00E8(0x00B0) NativeAccessSpecifierPublic
		TArray<class UMaterial*>                                   Materials;                                               // 0x0198(0x0010) ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic
		TArray<struct FGeometryCollectionAutoInstanceMesh>         InstancedMeshes;                                         // 0x01A8(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GeometryCollectionNodes.GetGeometryCollectionAssetDataflowNode
	 * Size -> 0x0008 (FullSize[0x00F0] - InheritedSize[0x00E8])
	 */
	struct FGetGeometryCollectionAssetDataflowNode : public FDataflowNode
	{
	public:
		class UGeometryCollection*                                 Asset;                                                   // 0x00E8(0x0008) ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GeometryCollectionNodes.GetGeometryCollectionSourcesDataflowNode
	 * Size -> 0x0018 (FullSize[0x0100] - InheritedSize[0x00E8])
	 */
	struct FGetGeometryCollectionSourcesDataflowNode : public FDataflowNode
	{
	public:
		class UGeometryCollection*                                 Asset;                                                   // 0x00E8(0x0008) ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FGeometryCollectionSource>                   Sources;                                                 // 0x00F0(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GeometryCollectionNodes.CreateGeometryCollectionFromSourcesDataflowNode
	 * Size -> 0x00E0 (FullSize[0x01C8] - InheritedSize[0x00E8])
	 */
	struct FCreateGeometryCollectionFromSourcesDataflowNode : public FDataflowNode
	{
	public:
		TArray<struct FGeometryCollectionSource>                   Sources;                                                 // 0x00E8(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		struct FManagedArrayCollection                             Collection;                                              // 0x00F8(0x00B0) NativeAccessSpecifierPublic
		TArray<class UMaterial*>                                   Materials;                                               // 0x01A8(0x0010) ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic
		TArray<struct FGeometryCollectionAutoInstanceMesh>         InstancedMeshes;                                         // 0x01B8(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GeometryCollectionNodes.RadialFalloffFieldDataflowNode
	 * Size -> 0x00C8 (FullSize[0x01B0] - InheritedSize[0x00E8])
	 */
	struct FRadialFalloffFieldDataflowNode : public FDataflowNode
	{
	public:
		TArray<struct FVector3f>                                   SamplePositions;                                         // 0x00E8(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		struct FDataflowVertexSelection                            SampleIndices;                                           // 0x00F8(0x0020) NativeAccessSpecifierPublic
		struct FSphere                                             Sphere;                                                  // 0x0118(0x0020) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FVector                                             Translation;                                             // 0x0138(0x0018) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Magnitude;                                               // 0x0150(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinRange;                                                // 0x0154(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxRange;                                                // 0x0158(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Default;                                                 // 0x015C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EDataflowFieldFalloffType                                  FalloffType;                                             // 0x0160(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_665F[0x7];                                   // 0x0161(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<float>                                              FieldFloatResult;                                        // 0x0168(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<int32_t>                                            FieldRemap;                                              // 0x0178(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		struct FDataflowVertexSelection                            FieldSelectionMask;                                      // 0x0188(0x0020) NativeAccessSpecifierPublic
		int32_t                                                    NumSamplePositions;                                      // 0x01A8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AFA8[0x4];                                   // 0x01AC(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GeometryCollectionNodes.BoxFalloffFieldDataflowNode
	 * Size -> 0x0128 (FullSize[0x0210] - InheritedSize[0x00E8])
	 */
	struct FBoxFalloffFieldDataflowNode : public FDataflowNode
	{
	public:
		TArray<struct FVector3f>                                   SamplePositions;                                         // 0x00E8(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		struct FDataflowVertexSelection                            SampleIndices;                                           // 0x00F8(0x0020) NativeAccessSpecifierPublic
		struct FBox                                                Box;                                                     // 0x0118(0x0038) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FTransform                                          Transform;                                               // 0x0150(0x0060) Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Magnitude;                                               // 0x01B0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinRange;                                                // 0x01B4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxRange;                                                // 0x01B8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Default;                                                 // 0x01BC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EDataflowFieldFalloffType                                  FalloffType;                                             // 0x01C0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9RGA[0x7];                                   // 0x01C1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<float>                                              FieldFloatResult;                                        // 0x01C8(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<int32_t>                                            FieldRemap;                                              // 0x01D8(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		struct FDataflowVertexSelection                            FieldSelectionMask;                                      // 0x01E8(0x0020) NativeAccessSpecifierPublic
		int32_t                                                    NumSamplePositions;                                      // 0x0208(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AF03[0x4];                                   // 0x020C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GeometryCollectionNodes.PlaneFalloffFieldDataflowNode
	 * Size -> 0x00E0 (FullSize[0x01C8] - InheritedSize[0x00E8])
	 */
	struct FPlaneFalloffFieldDataflowNode : public FDataflowNode
	{
	public:
		TArray<struct FVector3f>                                   SamplePositions;                                         // 0x00E8(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		struct FDataflowVertexSelection                            SampleIndices;                                           // 0x00F8(0x0020) NativeAccessSpecifierPublic
		struct FVector                                             Position;                                                // 0x0118(0x0018) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Normal;                                                  // 0x0130(0x0018) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Distance;                                                // 0x0148(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OEDM[0x4];                                   // 0x014C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             Translation;                                             // 0x0150(0x0018) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Magnitude;                                               // 0x0168(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinRange;                                                // 0x016C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxRange;                                                // 0x0170(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Default;                                                 // 0x0174(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EDataflowFieldFalloffType                                  FalloffType;                                             // 0x0178(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZTLI[0x7];                                   // 0x0179(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<float>                                              FieldFloatResult;                                        // 0x0180(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<int32_t>                                            FieldRemap;                                              // 0x0190(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		struct FDataflowVertexSelection                            FieldSelectionMask;                                      // 0x01A0(0x0020) NativeAccessSpecifierPublic
		int32_t                                                    NumSamplePositions;                                      // 0x01C0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1LUR[0x4];                                   // 0x01C4(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GeometryCollectionNodes.RadialIntMaskFieldDataflowNode
	 * Size -> 0x00A0 (FullSize[0x0188] - InheritedSize[0x00E8])
	 */
	struct FRadialIntMaskFieldDataflowNode : public FDataflowNode
	{
	public:
		TArray<struct FVector3f>                                   SamplePositions;                                         // 0x00E8(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		struct FDataflowVertexSelection                            SampleIndices;                                           // 0x00F8(0x0020) NativeAccessSpecifierPublic
		struct FSphere                                             Sphere;                                                  // 0x0118(0x0020) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FVector                                             Translation;                                             // 0x0138(0x0018) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    InteriorValue;                                           // 0x0150(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ExteriorValue;                                           // 0x0154(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EDataflowSetMaskConditionType                              SetMaskConditionType;                                    // 0x0158(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7SIZ[0x7];                                   // 0x0159(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<int32_t>                                            FieldIntResult;                                          // 0x0160(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<int32_t>                                            FieldRemap;                                              // 0x0170(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		int32_t                                                    NumSamplePositions;                                      // 0x0180(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_G2JH[0x4];                                   // 0x0184(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GeometryCollectionNodes.UniformScalarFieldDataflowNode
	 * Size -> 0x0060 (FullSize[0x0148] - InheritedSize[0x00E8])
	 */
	struct FUniformScalarFieldDataflowNode : public FDataflowNode
	{
	public:
		TArray<struct FVector3f>                                   SamplePositions;                                         // 0x00E8(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		struct FDataflowVertexSelection                            SampleIndices;                                           // 0x00F8(0x0020) NativeAccessSpecifierPublic
		float                                                      Magnitude;                                               // 0x0118(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6QVA[0x4];                                   // 0x011C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<float>                                              FieldFloatResult;                                        // 0x0120(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<int32_t>                                            FieldRemap;                                              // 0x0130(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		int32_t                                                    NumSamplePositions;                                      // 0x0140(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VYX4[0x4];                                   // 0x0144(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GeometryCollectionNodes.UniformVectorFieldDataflowNode
	 * Size -> 0x0078 (FullSize[0x0160] - InheritedSize[0x00E8])
	 */
	struct FUniformVectorFieldDataflowNode : public FDataflowNode
	{
	public:
		TArray<struct FVector3f>                                   SamplePositions;                                         // 0x00E8(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		struct FDataflowVertexSelection                            SampleIndices;                                           // 0x00F8(0x0020) NativeAccessSpecifierPublic
		float                                                      Magnitude;                                               // 0x0118(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KLVH[0x4];                                   // 0x011C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             Direction;                                               // 0x0120(0x0018) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FVector>                                     FieldVectorResult;                                       // 0x0138(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<int32_t>                                            FieldRemap;                                              // 0x0148(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		int32_t                                                    NumSamplePositions;                                      // 0x0158(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_J3BM[0x4];                                   // 0x015C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GeometryCollectionNodes.RadialVectorFieldDataflowNode
	 * Size -> 0x0078 (FullSize[0x0160] - InheritedSize[0x00E8])
	 */
	struct FRadialVectorFieldDataflowNode : public FDataflowNode
	{
	public:
		TArray<struct FVector3f>                                   SamplePositions;                                         // 0x00E8(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		struct FDataflowVertexSelection                            SampleIndices;                                           // 0x00F8(0x0020) NativeAccessSpecifierPublic
		float                                                      Magnitude;                                               // 0x0118(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_U4VC[0x4];                                   // 0x011C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             Position;                                                // 0x0120(0x0018) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FVector>                                     FieldVectorResult;                                       // 0x0138(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<int32_t>                                            FieldRemap;                                              // 0x0148(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		int32_t                                                    NumSamplePositions;                                      // 0x0158(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_B0BY[0x4];                                   // 0x015C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GeometryCollectionNodes.RandomVectorFieldDataflowNode
	 * Size -> 0x0060 (FullSize[0x0148] - InheritedSize[0x00E8])
	 */
	struct FRandomVectorFieldDataflowNode : public FDataflowNode
	{
	public:
		TArray<struct FVector3f>                                   SamplePositions;                                         // 0x00E8(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		struct FDataflowVertexSelection                            SampleIndices;                                           // 0x00F8(0x0020) NativeAccessSpecifierPublic
		float                                                      Magnitude;                                               // 0x0118(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SYI6[0x4];                                   // 0x011C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FVector>                                     FieldVectorResult;                                       // 0x0120(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<int32_t>                                            FieldRemap;                                              // 0x0130(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		int32_t                                                    NumSamplePositions;                                      // 0x0140(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LE0A[0x4];                                   // 0x0144(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GeometryCollectionNodes.NoiseFieldDataflowNode
	 * Size -> 0x00C8 (FullSize[0x01B0] - InheritedSize[0x00E8])
	 */
	struct FNoiseFieldDataflowNode : public FDataflowNode
	{
	public:
		TArray<struct FVector3f>                                   SamplePositions;                                         // 0x00E8(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		struct FDataflowVertexSelection                            SampleIndices;                                           // 0x00F8(0x0020) NativeAccessSpecifierPublic
		float                                                      MinRange;                                                // 0x0118(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxRange;                                                // 0x011C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FTransform                                          Transform;                                               // 0x0120(0x0060) Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<float>                                              FieldFloatResult;                                        // 0x0180(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<int32_t>                                            FieldRemap;                                              // 0x0190(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		int32_t                                                    NumSamplePositions;                                      // 0x01A0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_25CG[0xC];                                   // 0x01A4(0x000C) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GeometryCollectionNodes.UniformIntegerFieldDataflowNode
	 * Size -> 0x0060 (FullSize[0x0148] - InheritedSize[0x00E8])
	 */
	struct FUniformIntegerFieldDataflowNode : public FDataflowNode
	{
	public:
		TArray<struct FVector3f>                                   SamplePositions;                                         // 0x00E8(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		struct FDataflowVertexSelection                            SampleIndices;                                           // 0x00F8(0x0020) NativeAccessSpecifierPublic
		int32_t                                                    Magnitude;                                               // 0x0118(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_D1ES[0x4];                                   // 0x011C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<int32_t>                                            FieldIntResult;                                          // 0x0120(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<int32_t>                                            FieldRemap;                                              // 0x0130(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		int32_t                                                    NumSamplePositions;                                      // 0x0140(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_96YA[0x4];                                   // 0x0144(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GeometryCollectionNodes.WaveScalarFieldDataflowNode
	 * Size -> 0x00A0 (FullSize[0x0188] - InheritedSize[0x00E8])
	 */
	struct FWaveScalarFieldDataflowNode : public FDataflowNode
	{
	public:
		TArray<struct FVector3f>                                   SamplePositions;                                         // 0x00E8(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		struct FDataflowVertexSelection                            SampleIndices;                                           // 0x00F8(0x0020) NativeAccessSpecifierPublic
		float                                                      Magnitude;                                               // 0x0118(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GJC4[0x4];                                   // 0x011C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             Position;                                                // 0x0120(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Translation;                                             // 0x0138(0x0018) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Wavelength;                                              // 0x0150(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Period;                                                  // 0x0154(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EDataflowWaveFunctionType                                  FunctionType;                                            // 0x0158(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EDataflowFieldFalloffType                                  FalloffType;                                             // 0x0159(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LGGH[0x6];                                   // 0x015A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<float>                                              FieldFloatResult;                                        // 0x0160(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<int32_t>                                            FieldRemap;                                              // 0x0170(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		int32_t                                                    NumSamplePositions;                                      // 0x0180(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DY45[0x4];                                   // 0x0184(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GeometryCollectionNodes.SumScalarFieldDataflowNode
	 * Size -> 0x0068 (FullSize[0x0150] - InheritedSize[0x00E8])
	 */
	struct FSumScalarFieldDataflowNode : public FDataflowNode
	{
	public:
		TArray<float>                                              FieldFloatLeft;                                          // 0x00E8(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<int32_t>                                            FieldRemapLeft;                                          // 0x00F8(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<float>                                              FieldFloatRight;                                         // 0x0108(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<int32_t>                                            FieldRemapRight;                                         // 0x0118(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		float                                                      Magnitude;                                               // 0x0128(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EDataflowFloatFieldOperationType                           Operation;                                               // 0x012C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSwapInputs;                                             // 0x012D(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ABFV[0x2];                                   // 0x012E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<float>                                              FieldFloatResult;                                        // 0x0130(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<int32_t>                                            FieldRemap;                                              // 0x0140(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GeometryCollectionNodes.SumVectorFieldDataflowNode
	 * Size -> 0x0088 (FullSize[0x0170] - InheritedSize[0x00E8])
	 */
	struct FSumVectorFieldDataflowNode : public FDataflowNode
	{
	public:
		TArray<float>                                              FieldFloat;                                              // 0x00E8(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<int32_t>                                            FieldFloatRemap;                                         // 0x00F8(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FVector>                                     FieldVectorLeft;                                         // 0x0108(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<int32_t>                                            FieldRemapLeft;                                          // 0x0118(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FVector>                                     FieldVectorRight;                                        // 0x0128(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<int32_t>                                            FieldRemapRight;                                         // 0x0138(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		float                                                      Magnitude;                                               // 0x0148(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EDataflowVectorFieldOperationType                          Operation;                                               // 0x014C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSwapVectorInputs;                                       // 0x014D(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CVS5[0x2];                                   // 0x014E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FVector>                                     FieldVectorResult;                                       // 0x0150(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<int32_t>                                            FieldRemap;                                              // 0x0160(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GeometryCollectionNodes.FieldMakeDenseFloatArrayDataflowNode
	 * Size -> 0x0038 (FullSize[0x0120] - InheritedSize[0x00E8])
	 */
	struct FFieldMakeDenseFloatArrayDataflowNode : public FDataflowNode
	{
	public:
		TArray<float>                                              FieldFloatInput;                                         // 0x00E8(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<int32_t>                                            FieldRemap;                                              // 0x00F8(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		int32_t                                                    NumSamplePositions;                                      // 0x0108(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Default;                                                 // 0x010C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<float>                                              FieldFloatResult;                                        // 0x0110(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GeometryCollectionNodes.AddMaterialToCollectionDataflowNode
	 * Size -> 0x00F8 (FullSize[0x01E0] - InheritedSize[0x00E8])
	 */
	struct FAddMaterialToCollectionDataflowNode : public FDataflowNode
	{
	public:
		struct FManagedArrayCollection                             Collection;                                              // 0x00E8(0x00B0) NativeAccessSpecifierPublic
		struct FDataflowFaceSelection                              FaceSelection;                                           // 0x0198(0x0020) NativeAccessSpecifierPublic
		TArray<class UMaterial*>                                   Materials;                                               // 0x01B8(0x0010) ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic
		class UMaterial*                                           OutsideMaterial;                                         // 0x01C8(0x0008) Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMaterial*                                           InsideMaterial;                                          // 0x01D0(0x0008) Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAssignOutsideMaterial;                                  // 0x01D8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAssignInsideMaterial;                                   // 0x01D9(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_C6UC[0x6];                                   // 0x01DA(0x0006) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GeometryCollectionNodes.ReAssignMaterialInCollectionDataflowNode
	 * Size -> 0x00F0 (FullSize[0x01D8] - InheritedSize[0x00E8])
	 */
	struct FReAssignMaterialInCollectionDataflowNode : public FDataflowNode
	{
	public:
		struct FManagedArrayCollection                             Collection;                                              // 0x00E8(0x00B0) NativeAccessSpecifierPublic
		struct FDataflowFaceSelection                              FaceSelection;                                           // 0x0198(0x0020) NativeAccessSpecifierPublic
		TArray<class UMaterial*>                                   Materials;                                               // 0x01B8(0x0010) Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic
		int32_t                                                    OutsideMaterialIdx;                                      // 0x01C8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    InsideMaterialIdx;                                       // 0x01CC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAssignOutsideMaterial;                                  // 0x01D0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAssignInsideMaterial;                                   // 0x01D1(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BPNL[0x6];                                   // 0x01D2(0x0006) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GeometryCollectionNodes.MaterialsInfoDataflowNode
	 * Size -> 0x0020 (FullSize[0x0108] - InheritedSize[0x00E8])
	 */
	struct FMaterialsInfoDataflowNode : public FDataflowNode
	{
	public:
		TArray<class UMaterial*>                                   Materials;                                               // 0x00E8(0x0010) ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic
		class FString                                              String;                                                  // 0x00F8(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GeometryCollectionNodes.GetMaterialFromMaterialsArrayDataflowNode
	 * Size -> 0x0020 (FullSize[0x0108] - InheritedSize[0x00E8])
	 */
	struct FGetMaterialFromMaterialsArrayDataflowNode : public FDataflowNode
	{
	public:
		TArray<class UMaterial*>                                   Materials;                                               // 0x00E8(0x0010) ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic
		class UMaterial*                                           Material;                                                // 0x00F8(0x0008) ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaterialIdx;                                             // 0x0100(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_362S[0x4];                                   // 0x0104(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GeometryCollectionNodes.SetMaterialInMaterialsArrayDataflowNode
	 * Size -> 0x0020 (FullSize[0x0108] - InheritedSize[0x00E8])
	 */
	struct FSetMaterialInMaterialsArrayDataflowNode : public FDataflowNode
	{
	public:
		TArray<class UMaterial*>                                   Materials;                                               // 0x00E8(0x0010) ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic
		class UMaterial*                                           Material;                                                // 0x00F8(0x0008) Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESetMaterialOperationTypeEnum                              Operation;                                               // 0x0100(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EPH5[0x3];                                   // 0x0101(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    MaterialIdx;                                             // 0x0104(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GeometryCollectionNodes.MakeMaterialDataflowNode
	 * Size -> 0x0010 (FullSize[0x00F8] - InheritedSize[0x00E8])
	 */
	struct FMakeMaterialDataflowNode : public FDataflowNode
	{
	public:
		class UMaterial*                                           InMaterial;                                              // 0x00E8(0x0008) Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMaterial*                                           Material;                                                // 0x00F0(0x0008) ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GeometryCollectionNodes.MakeMaterialsArrayDataflowNode
	 * Size -> 0x0010 (FullSize[0x00F8] - InheritedSize[0x00E8])
	 */
	struct FMakeMaterialsArrayDataflowNode : public FDataflowNode
	{
	public:
		TArray<class UMaterial*>                                   Materials;                                               // 0x00E8(0x0010) ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GeometryCollectionNodes.CloseGeometryOnCollectionDataflowNode
	 * Size -> 0x00B0 (FullSize[0x0198] - InheritedSize[0x00E8])
	 */
	struct FCloseGeometryOnCollectionDataflowNode : public FDataflowNode
	{
	public:
		struct FManagedArrayCollection                             Collection;                                              // 0x00E8(0x00B0) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GeometryCollectionNodes.SkeletonToCollectionDataflowNode
	 * Size -> 0x00B8 (FullSize[0x01A0] - InheritedSize[0x00E8])
	 */
	struct FSkeletonToCollectionDataflowNode : public FDataflowNode
	{
	public:
		class USkeleton*                                           Skeleton;                                                // 0x00E8(0x0008) Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FManagedArrayCollection                             Collection;                                              // 0x00F0(0x00B0) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GeometryCollectionNodes.CreateNonOverlappingConvexHullsDataflowNode
	 * Size -> 0x00C8 (FullSize[0x01B0] - InheritedSize[0x00E8])
	 */
	struct FCreateNonOverlappingConvexHullsDataflowNode : public FDataflowNode
	{
	public:
		struct FManagedArrayCollection                             Collection;                                              // 0x00E8(0x00B0) NativeAccessSpecifierPublic
		float                                                      CanRemoveFraction;                                       // 0x0198(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SimplificationDistanceThreshold;                         // 0x019C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CanExceedFraction;                                       // 0x01A0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EConvexOverlapRemovalMethodEnum                            OverlapRemovalMethod;                                    // 0x01A4(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3E23[0x3];                                   // 0x01A5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      OverlapRemovalShrinkPercent;                             // 0x01A8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WXC3[0x4];                                   // 0x01AC(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GeometryCollectionNodes.AutoClusterDataflowNode
	 * Size -> 0x00E8 (FullSize[0x01D0] - InheritedSize[0x00E8])
	 */
	struct FAutoClusterDataflowNode : public FDataflowNode
	{
	public:
		EClusterSizeMethodEnum                                     ClusterSizeMethod;                                       // 0x00E8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WS66[0x3];                                   // 0x00E9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    ClusterSites;                                            // 0x00EC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ClusterFraction;                                         // 0x00F0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SiteSize;                                                // 0x00F4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       AutoCluster;                                             // 0x00F8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       AvoidIsolated;                                           // 0x00F9(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LL6T[0x6];                                   // 0x00FA(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FManagedArrayCollection                             Collection;                                              // 0x0100(0x00B0) NativeAccessSpecifierPublic
		struct FDataflowTransformSelection                         TransformSelection;                                      // 0x01B0(0x0020) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GeometryCollectionNodes.ClusterFlattenDataflowNode
	 * Size -> 0x00B0 (FullSize[0x0198] - InheritedSize[0x00E8])
	 */
	struct FClusterFlattenDataflowNode : public FDataflowNode
	{
	public:
		struct FManagedArrayCollection                             Collection;                                              // 0x00E8(0x00B0) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GeometryCollectionNodes.PruneInCollectionDataflowNode
	 * Size -> 0x00D0 (FullSize[0x01B8] - InheritedSize[0x00E8])
	 */
	struct FPruneInCollectionDataflowNode : public FDataflowNode
	{
	public:
		struct FManagedArrayCollection                             Collection;                                              // 0x00E8(0x00B0) NativeAccessSpecifierPublic
		struct FDataflowTransformSelection                         TransformSelection;                                      // 0x0198(0x0020) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GeometryCollectionNodes.SetVisibilityInCollectionDataflowNode
	 * Size -> 0x00F8 (FullSize[0x01E0] - InheritedSize[0x00E8])
	 */
	struct FSetVisibilityInCollectionDataflowNode : public FDataflowNode
	{
	public:
		EVisibiltyOptionsEnum                                      Visibility;                                              // 0x00E8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8X34[0x7];                                   // 0x00E9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FManagedArrayCollection                             Collection;                                              // 0x00F0(0x00B0) NativeAccessSpecifierPublic
		struct FDataflowTransformSelection                         TransformSelection;                                      // 0x01A0(0x0020) NativeAccessSpecifierPublic
		struct FDataflowFaceSelection                              FaceSelection;                                           // 0x01C0(0x0020) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GeometryCollectionNodes.MergeInCollectionDataflowNode
	 * Size -> 0x00D0 (FullSize[0x01B8] - InheritedSize[0x00E8])
	 */
	struct FMergeInCollectionDataflowNode : public FDataflowNode
	{
	public:
		struct FManagedArrayCollection                             Collection;                                              // 0x00E8(0x00B0) NativeAccessSpecifierPublic
		struct FDataflowTransformSelection                         TransformSelection;                                      // 0x0198(0x0020) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GeometryCollectionNodes.UniformScatterPointsDataflowNode
	 * Size -> 0x0058 (FullSize[0x0140] - InheritedSize[0x00E8])
	 */
	struct FUniformScatterPointsDataflowNode : public FDataflowNode
	{
	public:
		int32_t                                                    MinNumberOfPoints;                                       // 0x00E8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxNumberOfPoints;                                       // 0x00EC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RandomSeed;                                              // 0x00F0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0BNY[0x4];                                   // 0x00F4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FBox                                                BoundingBox;                                             // 0x00F8(0x0038) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		TArray<struct FVector>                                     Points;                                                  // 0x0130(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GeometryCollectionNodes.RadialScatterPointsDataflowNode
	 * Size -> 0x0058 (FullSize[0x0140] - InheritedSize[0x00E8])
	 */
	struct FRadialScatterPointsDataflowNode : public FDataflowNode
	{
	public:
		struct FVector                                             Center;                                                  // 0x00E8(0x0018) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Normal;                                                  // 0x0100(0x0018) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Radius;                                                  // 0x0118(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    AngularSteps;                                            // 0x011C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    RadialSteps;                                             // 0x0120(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AngleOffset;                                             // 0x0124(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Variability;                                             // 0x0128(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RandomSeed;                                              // 0x012C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FVector>                                     Points;                                                  // 0x0130(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GeometryCollectionNodes.VoronoiFractureDataflowNode
	 * Size -> 0x0110 (FullSize[0x01F8] - InheritedSize[0x00E8])
	 */
	struct FVoronoiFractureDataflowNode : public FDataflowNode
	{
	public:
		struct FManagedArrayCollection                             Collection;                                              // 0x00E8(0x00B0) NativeAccessSpecifierPublic
		TArray<struct FVector>                                     Points;                                                  // 0x0198(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		struct FDataflowTransformSelection                         TransformSelection;                                      // 0x01A8(0x0020) NativeAccessSpecifierPublic
		float                                                      RandomSeed;                                              // 0x01C8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ChanceToFracture;                                        // 0x01CC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       GroupFracture;                                           // 0x01D0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RSVY[0x3];                                   // 0x01D1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Grout;                                                   // 0x01D4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Amplitude;                                               // 0x01D8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Frequency;                                               // 0x01DC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Persistence;                                             // 0x01E0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Lacunarity;                                              // 0x01E4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    OctaveNumber;                                            // 0x01E8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PointSpacing;                                            // 0x01EC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       AddSamplesForCollision;                                  // 0x01F0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DS2J[0x3];                                   // 0x01F1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CollisionSampleSpacing;                                  // 0x01F4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GeometryCollectionNodes.PlaneCutterDataflowNode
	 * Size -> 0x0138 (FullSize[0x0220] - InheritedSize[0x00E8])
	 */
	struct FPlaneCutterDataflowNode : public FDataflowNode
	{
	public:
		struct FManagedArrayCollection                             Collection;                                              // 0x00E8(0x00B0) NativeAccessSpecifierPublic
		struct FBox                                                BoundingBox;                                             // 0x0198(0x0038) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FDataflowTransformSelection                         TransformSelection;                                      // 0x01D0(0x0020) NativeAccessSpecifierPublic
		int32_t                                                    NumPlanes;                                               // 0x01F0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RandomSeed;                                              // 0x01F4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Grout;                                                   // 0x01F8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Amplitude;                                               // 0x01FC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Frequency;                                               // 0x0200(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Persistence;                                             // 0x0204(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Lacunarity;                                              // 0x0208(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    OctaveNumber;                                            // 0x020C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PointSpacing;                                            // 0x0210(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       AddSamplesForCollision;                                  // 0x0214(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZD0G[0x3];                                   // 0x0215(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CollisionSampleSpacing;                                  // 0x0218(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BO76[0x4];                                   // 0x021C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GeometryCollectionNodes.ExplodedViewDataflowNode
	 * Size -> 0x00D0 (FullSize[0x01B8] - InheritedSize[0x00E8])
	 */
	struct FExplodedViewDataflowNode : public FDataflowNode
	{
	public:
		struct FManagedArrayCollection                             Collection;                                              // 0x00E8(0x00B0) NativeAccessSpecifierPublic
		float                                                      UniformScale;                                            // 0x0198(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TPMD[0x4];                                   // 0x019C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             Scale;                                                   // 0x01A0(0x0018) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GeometryCollectionNodes.PointsToMeshDataflowNode
	 * Size -> 0x0020 (FullSize[0x0108] - InheritedSize[0x00E8])
	 */
	struct FPointsToMeshDataflowNode : public FDataflowNode
	{
	public:
		TArray<struct FVector>                                     Points;                                                  // 0x00E8(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		class UDynamicMesh*                                        Mesh;                                                    // 0x00F8(0x0008) ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    TriangleCount;                                           // 0x0100(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3AAF[0x4];                                   // 0x0104(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GeometryCollectionNodes.BoxToMeshDataflowNode
	 * Size -> 0x0048 (FullSize[0x0130] - InheritedSize[0x00E8])
	 */
	struct FBoxToMeshDataflowNode : public FDataflowNode
	{
	public:
		struct FBox                                                Box;                                                     // 0x00E8(0x0038) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		class UDynamicMesh*                                        Mesh;                                                    // 0x0120(0x0008) ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    TriangleCount;                                           // 0x0128(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_L5DV[0x4];                                   // 0x012C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GeometryCollectionNodes.MeshInfoDataflowNode
	 * Size -> 0x0018 (FullSize[0x0100] - InheritedSize[0x00E8])
	 */
	struct FMeshInfoDataflowNode : public FDataflowNode
	{
	public:
		class UDynamicMesh*                                        Mesh;                                                    // 0x00E8(0x0008) ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              InfoString;                                              // 0x00F0(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GeometryCollectionNodes.MeshToCollectionDataflowNode
	 * Size -> 0x00B8 (FullSize[0x01A0] - InheritedSize[0x00E8])
	 */
	struct FMeshToCollectionDataflowNode : public FDataflowNode
	{
	public:
		class UDynamicMesh*                                        Mesh;                                                    // 0x00E8(0x0008) ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FManagedArrayCollection                             Collection;                                              // 0x00F0(0x00B0) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GeometryCollectionNodes.CollectionToMeshDataflowNode
	 * Size -> 0x00C0 (FullSize[0x01A8] - InheritedSize[0x00E8])
	 */
	struct FCollectionToMeshDataflowNode : public FDataflowNode
	{
	public:
		struct FManagedArrayCollection                             Collection;                                              // 0x00E8(0x00B0) NativeAccessSpecifierPublic
		bool                                                       bCenterPivot;                                            // 0x0198(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KCJV[0x7];                                   // 0x0199(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UDynamicMesh*                                        Mesh;                                                    // 0x01A0(0x0008) ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GeometryCollectionNodes.StaticMeshToMeshDataflowNode
	 * Size -> 0x0018 (FullSize[0x0100] - InheritedSize[0x00E8])
	 */
	struct FStaticMeshToMeshDataflowNode : public FDataflowNode
	{
	public:
		class UStaticMesh*                                         StaticMesh;                                              // 0x00E8(0x0008) Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseHiRes;                                               // 0x00F0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WPKC[0x3];                                   // 0x00F1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    LODLevel;                                                // 0x00F4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UDynamicMesh*                                        Mesh;                                                    // 0x00F8(0x0008) ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GeometryCollectionNodes.MeshAppendDataflowNode
	 * Size -> 0x0018 (FullSize[0x0100] - InheritedSize[0x00E8])
	 */
	struct FMeshAppendDataflowNode : public FDataflowNode
	{
	public:
		class UDynamicMesh*                                        Mesh1;                                                   // 0x00E8(0x0008) ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UDynamicMesh*                                        Mesh2;                                                   // 0x00F0(0x0008) ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UDynamicMesh*                                        Mesh;                                                    // 0x00F8(0x0008) ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GeometryCollectionNodes.MeshBooleanDataflowNode
	 * Size -> 0x0020 (FullSize[0x0108] - InheritedSize[0x00E8])
	 */
	struct FMeshBooleanDataflowNode : public FDataflowNode
	{
	public:
		EMeshBooleanOperationEnum                                  Operation;                                               // 0x00E8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_058H[0x7];                                   // 0x00E9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UDynamicMesh*                                        Mesh1;                                                   // 0x00F0(0x0008) ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UDynamicMesh*                                        Mesh2;                                                   // 0x00F8(0x0008) ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UDynamicMesh*                                        Mesh;                                                    // 0x0100(0x0008) ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GeometryCollectionNodes.MeshCopyToPointsDataflowNode
	 * Size -> 0x0028 (FullSize[0x0110] - InheritedSize[0x00E8])
	 */
	struct FMeshCopyToPointsDataflowNode : public FDataflowNode
	{
	public:
		TArray<struct FVector>                                     Points;                                                  // 0x00E8(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		class UDynamicMesh*                                        MeshToCopy;                                              // 0x00F8(0x0008) ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Scale;                                                   // 0x0100(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9B9U[0x4];                                   // 0x0104(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UDynamicMesh*                                        Mesh;                                                    // 0x0108(0x0008) ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GeometryCollectionNodes.GetMeshDataDataflowNode
	 * Size -> 0x0018 (FullSize[0x0100] - InheritedSize[0x00E8])
	 */
	struct FGetMeshDataDataflowNode : public FDataflowNode
	{
	public:
		class UDynamicMesh*                                        Mesh;                                                    // 0x00E8(0x0008) ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    VertexCount;                                             // 0x00F0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    EdgeCount;                                               // 0x00F4(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    TriangleCount;                                           // 0x00F8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AXGG[0x4];                                   // 0x00FC(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GeometryCollectionNodes.GetCollectionFromAssetDataflowNode
	 * Size -> 0x00B8 (FullSize[0x01A0] - InheritedSize[0x00E8])
	 */
	struct FGetCollectionFromAssetDataflowNode : public FDataflowNode
	{
	public:
		class UGeometryCollection*                                 CollectionAsset;                                         // 0x00E8(0x0008) Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FManagedArrayCollection                             Collection;                                              // 0x00F0(0x00B0) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GeometryCollectionNodes.AppendCollectionAssetsDataflowNode
	 * Size -> 0x0180 (FullSize[0x0268] - InheritedSize[0x00E8])
	 */
	struct FAppendCollectionAssetsDataflowNode : public FDataflowNode
	{
	public:
		struct FManagedArrayCollection                             Collection1;                                             // 0x00E8(0x00B0) NativeAccessSpecifierPublic
		struct FManagedArrayCollection                             Collection2;                                             // 0x0198(0x00B0) NativeAccessSpecifierPublic
		TArray<class FString>                                      GeometryGroupGuidsOut1;                                  // 0x0248(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class FString>                                      GeometryGroupGuidsOut2;                                  // 0x0258(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GeometryCollectionNodes.PrintStringDataflowNode
	 * Size -> 0x0020 (FullSize[0x0108] - InheritedSize[0x00E8])
	 */
	struct FPrintStringDataflowNode : public FDataflowNode
	{
	public:
		bool                                                       bPrintToScreen;                                          // 0x00E8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPrintToLog;                                             // 0x00E9(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ERC3[0x2];                                   // 0x00EA(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FColor                                              Color;                                                   // 0x00EC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Duration;                                                // 0x00F0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Z9E6[0x4];                                   // 0x00F4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              String;                                                  // 0x00F8(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GeometryCollectionNodes.LogStringDataflowNode
	 * Size -> 0x0018 (FullSize[0x0100] - InheritedSize[0x00E8])
	 */
	struct FLogStringDataflowNode : public FDataflowNode
	{
	public:
		bool                                                       bPrintToLog;                                             // 0x00E8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_V45L[0x7];                                   // 0x00E9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              String;                                                  // 0x00F0(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GeometryCollectionNodes.MakeLiteralStringDataflowNode
	 * Size -> 0x0020 (FullSize[0x0108] - InheritedSize[0x00E8])
	 */
	struct FMakeLiteralStringDataflowNode : public FDataflowNode
	{
	public:
		class FString                                              Value;                                                   // 0x00E8(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              String;                                                  // 0x00F8(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GeometryCollectionNodes.BoundingBoxDataflowNode
	 * Size -> 0x00E8 (FullSize[0x01D0] - InheritedSize[0x00E8])
	 */
	struct FBoundingBoxDataflowNode : public FDataflowNode
	{
	public:
		struct FManagedArrayCollection                             Collection;                                              // 0x00E8(0x00B0) NativeAccessSpecifierPublic
		struct FBox                                                BoundingBox;                                             // 0x0198(0x0038) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GeometryCollectionNodes.ExpandBoundingBoxDataflowNode
	 * Size -> 0x00A0 (FullSize[0x0188] - InheritedSize[0x00E8])
	 */
	struct FExpandBoundingBoxDataflowNode : public FDataflowNode
	{
	public:
		struct FBox                                                BoundingBox;                                             // 0x00E8(0x0038) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FVector                                             Min;                                                     // 0x0120(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Max;                                                     // 0x0138(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Center;                                                  // 0x0150(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             HalfExtents;                                             // 0x0168(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Volume;                                                  // 0x0180(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LMEK[0x4];                                   // 0x0184(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GeometryCollectionNodes.VectorToStringDataflowNode
	 * Size -> 0x0028 (FullSize[0x0110] - InheritedSize[0x00E8])
	 */
	struct FVectorToStringDataflowNode : public FDataflowNode
	{
	public:
		struct FVector                                             Vector;                                                  // 0x00E8(0x0018) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              String;                                                  // 0x0100(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GeometryCollectionNodes.FloatToStringDataflowNode
	 * Size -> 0x0018 (FullSize[0x0100] - InheritedSize[0x00E8])
	 */
	struct FFloatToStringDataflowNode : public FDataflowNode
	{
	public:
		float                                                      Float;                                                   // 0x00E8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1O7A[0x4];                                   // 0x00EC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              String;                                                  // 0x00F0(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GeometryCollectionNodes.MakePointsDataflowNode
	 * Size -> 0x0020 (FullSize[0x0108] - InheritedSize[0x00E8])
	 */
	struct FMakePointsDataflowNode : public FDataflowNode
	{
	public:
		TArray<struct FVector>                                     Point;                                                   // 0x00E8(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FVector>                                     Points;                                                  // 0x00F8(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GeometryCollectionNodes.MakeBoxDataflowNode
	 * Size -> 0x00A0 (FullSize[0x0188] - InheritedSize[0x00E8])
	 */
	struct FMakeBoxDataflowNode : public FDataflowNode
	{
	public:
		EMakeBoxDataTypeEnum                                       DataType;                                                // 0x00E8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_006C[0x7];                                   // 0x00E9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             Min;                                                     // 0x00F0(0x0018) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Max;                                                     // 0x0108(0x0018) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Center;                                                  // 0x0120(0x0018) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Size;                                                    // 0x0138(0x0018) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FBox                                                Box;                                                     // 0x0150(0x0038) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GeometryCollectionNodes.MakeSphereDataflowNode
	 * Size -> 0x0040 (FullSize[0x0128] - InheritedSize[0x00E8])
	 */
	struct FMakeSphereDataflowNode : public FDataflowNode
	{
	public:
		struct FVector                                             Center;                                                  // 0x00E8(0x0018) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Radius;                                                  // 0x0100(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UCLJ[0x4];                                   // 0x0104(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSphere                                             Sphere;                                                  // 0x0108(0x0020) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GeometryCollectionNodes.MakeLiteralFloatDataflowNode
	 * Size -> 0x0008 (FullSize[0x00F0] - InheritedSize[0x00E8])
	 */
	struct FMakeLiteralFloatDataflowNode : public FDataflowNode
	{
	public:
		float                                                      Value;                                                   // 0x00E8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Float;                                                   // 0x00EC(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GeometryCollectionNodes.MakeLiteralIntDataflowNode
	 * Size -> 0x0008 (FullSize[0x00F0] - InheritedSize[0x00E8])
	 */
	struct FMakeLiteralIntDataflowNode : public FDataflowNode
	{
	public:
		int32_t                                                    Value;                                                   // 0x00E8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Int;                                                     // 0x00EC(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GeometryCollectionNodes.MakeLiteralBoolDataflowNode
	 * Size -> 0x0008 (FullSize[0x00F0] - InheritedSize[0x00E8])
	 */
	struct FMakeLiteralBoolDataflowNode : public FDataflowNode
	{
	public:
		bool                                                       Value;                                                   // 0x00E8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Bool;                                                    // 0x00E9(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_U476[0x6];                                   // 0x00EA(0x0006) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GeometryCollectionNodes.MakeLiteralVectorDataflowNode
	 * Size -> 0x0028 (FullSize[0x0110] - InheritedSize[0x00E8])
	 */
	struct FMakeLiteralVectorDataflowNode : public FDataflowNode
	{
	public:
		float                                                      X;                                                       // 0x00E8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Y;                                                       // 0x00EC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Z;                                                       // 0x00F0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9VVQ[0x4];                                   // 0x00F4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             Vector;                                                  // 0x00F8(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GeometryCollectionNodes.IntToStringDataflowNode
	 * Size -> 0x0018 (FullSize[0x0100] - InheritedSize[0x00E8])
	 */
	struct FIntToStringDataflowNode : public FDataflowNode
	{
	public:
		int32_t                                                    Int;                                                     // 0x00E8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XBX3[0x4];                                   // 0x00EC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              String;                                                  // 0x00F0(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GeometryCollectionNodes.BoolToStringDataflowNode
	 * Size -> 0x0018 (FullSize[0x0100] - InheritedSize[0x00E8])
	 */
	struct FBoolToStringDataflowNode : public FDataflowNode
	{
	public:
		bool                                                       Bool;                                                    // 0x00E8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_E73A[0x7];                                   // 0x00E9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              String;                                                  // 0x00F0(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GeometryCollectionNodes.ExpandVectorDataflowNode
	 * Size -> 0x0028 (FullSize[0x0110] - InheritedSize[0x00E8])
	 */
	struct FExpandVectorDataflowNode : public FDataflowNode
	{
	public:
		struct FVector                                             Vector;                                                  // 0x00E8(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      X;                                                       // 0x0100(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Y;                                                       // 0x0104(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Z;                                                       // 0x0108(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WOLM[0x4];                                   // 0x010C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GeometryCollectionNodes.IntToFloatDataflowNode
	 * Size -> 0x0008 (FullSize[0x00F0] - InheritedSize[0x00E8])
	 */
	struct FIntToFloatDataflowNode : public FDataflowNode
	{
	public:
		int32_t                                                    Int;                                                     // 0x00E8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Float;                                                   // 0x00EC(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GeometryCollectionNodes.StringAppendDataflowNode
	 * Size -> 0x0030 (FullSize[0x0118] - InheritedSize[0x00E8])
	 */
	struct FStringAppendDataflowNode : public FDataflowNode
	{
	public:
		class FString                                              String1;                                                 // 0x00E8(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              String2;                                                 // 0x00F8(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              String;                                                  // 0x0108(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GeometryCollectionNodes.RandomFloatDataflowNode
	 * Size -> 0x0010 (FullSize[0x00F8] - InheritedSize[0x00E8])
	 */
	struct FRandomFloatDataflowNode : public FDataflowNode
	{
	public:
		bool                                                       bDeterministic;                                          // 0x00E8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QJDL[0x3];                                   // 0x00E9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      RandomSeed;                                              // 0x00EC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Float;                                                   // 0x00F0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GPZC[0x4];                                   // 0x00F4(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GeometryCollectionNodes.RandomFloatInRangeDataflowNode
	 * Size -> 0x0018 (FullSize[0x0100] - InheritedSize[0x00E8])
	 */
	struct FRandomFloatInRangeDataflowNode : public FDataflowNode
	{
	public:
		bool                                                       bDeterministic;                                          // 0x00E8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NRG4[0x3];                                   // 0x00E9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      RandomSeed;                                              // 0x00EC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Min;                                                     // 0x00F0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Max;                                                     // 0x00F4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Float;                                                   // 0x00F8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PYFP[0x4];                                   // 0x00FC(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GeometryCollectionNodes.RandomUnitVectorDataflowNode
	 * Size -> 0x0020 (FullSize[0x0108] - InheritedSize[0x00E8])
	 */
	struct FRandomUnitVectorDataflowNode : public FDataflowNode
	{
	public:
		bool                                                       bDeterministic;                                          // 0x00E8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WDZ8[0x3];                                   // 0x00E9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      RandomSeed;                                              // 0x00EC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Vector;                                                  // 0x00F0(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GeometryCollectionNodes.RandomUnitVectorInConeDataflowNode
	 * Size -> 0x0040 (FullSize[0x0128] - InheritedSize[0x00E8])
	 */
	struct FRandomUnitVectorInConeDataflowNode : public FDataflowNode
	{
	public:
		bool                                                       bDeterministic;                                          // 0x00E8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5XD0[0x3];                                   // 0x00E9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      RandomSeed;                                              // 0x00EC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             ConeDirection;                                           // 0x00F0(0x0018) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ConeHalfAngle;                                           // 0x0108(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TVZV[0x4];                                   // 0x010C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             Vector;                                                  // 0x0110(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GeometryCollectionNodes.RadiansToDegreesDataflowNode
	 * Size -> 0x0008 (FullSize[0x00F0] - InheritedSize[0x00E8])
	 */
	struct FRadiansToDegreesDataflowNode : public FDataflowNode
	{
	public:
		float                                                      Radians;                                                 // 0x00E8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Degrees;                                                 // 0x00EC(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GeometryCollectionNodes.DegreesToRadiansDataflowNode
	 * Size -> 0x0008 (FullSize[0x00F0] - InheritedSize[0x00E8])
	 */
	struct FDegreesToRadiansDataflowNode : public FDataflowNode
	{
	public:
		float                                                      Degrees;                                                 // 0x00E8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Radians;                                                 // 0x00EC(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GeometryCollectionNodes.HashStringDataflowNode
	 * Size -> 0x0018 (FullSize[0x0100] - InheritedSize[0x00E8])
	 */
	struct FHashStringDataflowNode : public FDataflowNode
	{
	public:
		class FString                                              String;                                                  // 0x00E8(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Hash;                                                    // 0x00F8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4DBZ[0x4];                                   // 0x00FC(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GeometryCollectionNodes.HashVectorDataflowNode
	 * Size -> 0x0020 (FullSize[0x0108] - InheritedSize[0x00E8])
	 */
	struct FHashVectorDataflowNode : public FDataflowNode
	{
	public:
		struct FVector                                             Vector;                                                  // 0x00E8(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Hash;                                                    // 0x0100(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7R11[0x4];                                   // 0x0104(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GeometryCollectionNodes.FloatToIntDataflowNode
	 * Size -> 0x0010 (FullSize[0x00F8] - InheritedSize[0x00E8])
	 */
	struct FFloatToIntDataflowNode : public FDataflowNode
	{
	public:
		EFloatToIntFunctionEnum                                    Function;                                                // 0x00E8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZHUT[0x3];                                   // 0x00E9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Float;                                                   // 0x00EC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Int;                                                     // 0x00F0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CS4W[0x4];                                   // 0x00F4(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GeometryCollectionNodes.FloatArrayToIntArrayDataflowNode
	 * Size -> 0x0028 (FullSize[0x0110] - InheritedSize[0x00E8])
	 */
	struct FFloatArrayToIntArrayDataflowNode : public FDataflowNode
	{
	public:
		EFloatArrayToIntArrayFunctionEnum                          Function;                                                // 0x00E8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AVXG[0x7];                                   // 0x00E9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<float>                                              FloatArray;                                              // 0x00F0(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<int32_t>                                            IntArray;                                                // 0x0100(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GeometryCollectionNodes.MathConstantsDataflowNode
	 * Size -> 0x0008 (FullSize[0x00F0] - InheritedSize[0x00E8])
	 */
	struct FMathConstantsDataflowNode : public FDataflowNode
	{
	public:
		EMathConstantsEnum                                         Constant;                                                // 0x00E8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_20B3[0x3];                                   // 0x00E9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Float;                                                   // 0x00EC(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GeometryCollectionNodes.GetArrayElementDataflowNode
	 * Size -> 0x0030 (FullSize[0x0118] - InheritedSize[0x00E8])
	 */
	struct FGetArrayElementDataflowNode : public FDataflowNode
	{
	public:
		int32_t                                                    Index;                                                   // 0x00E8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SEXF[0x4];                                   // 0x00EC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FVector>                                     Points;                                                  // 0x00F0(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		struct FVector                                             Point;                                                   // 0x0100(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GeometryCollectionNodes.GetNumArrayElementsDataflowNode
	 * Size -> 0x0028 (FullSize[0x0110] - InheritedSize[0x00E8])
	 */
	struct FGetNumArrayElementsDataflowNode : public FDataflowNode
	{
	public:
		TArray<struct FVector>                                     Points;                                                  // 0x00E8(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FVector3f>                                   Vector3fArray;                                           // 0x00F8(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		int32_t                                                    NumElements;                                             // 0x0108(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NW0Y[0x4];                                   // 0x010C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GeometryCollectionNodes.GetBoundingBoxesFromCollectionDataflowNode
	 * Size -> 0x00E0 (FullSize[0x01C8] - InheritedSize[0x00E8])
	 */
	struct FGetBoundingBoxesFromCollectionDataflowNode : public FDataflowNode
	{
	public:
		struct FManagedArrayCollection                             Collection;                                              // 0x00E8(0x00B0) NativeAccessSpecifierPublic
		struct FDataflowTransformSelection                         TransformSelection;                                      // 0x0198(0x0020) NativeAccessSpecifierPublic
		TArray<struct FBox>                                        BoundingBoxes;                                           // 0x01B8(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GeometryCollectionNodes.GetCentroidsFromCollectionDataflowNode
	 * Size -> 0x00E0 (FullSize[0x01C8] - InheritedSize[0x00E8])
	 */
	struct FGetCentroidsFromCollectionDataflowNode : public FDataflowNode
	{
	public:
		struct FManagedArrayCollection                             Collection;                                              // 0x00E8(0x00B0) NativeAccessSpecifierPublic
		struct FDataflowTransformSelection                         TransformSelection;                                      // 0x0198(0x0020) NativeAccessSpecifierPublic
		TArray<struct FVector>                                     Centroids;                                               // 0x01B8(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GeometryCollectionNodes.TransformCollectionDataflowNode
	 * Size -> 0x0140 (FullSize[0x0228] - InheritedSize[0x00E8])
	 */
	struct FTransformCollectionDataflowNode : public FDataflowNode
	{
	public:
		struct FManagedArrayCollection                             Collection;                                              // 0x00E8(0x00B0) NativeAccessSpecifierPublic
		struct FVector                                             Translate;                                               // 0x0198(0x0018) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ERotationOrderEnum                                         RotationOrder;                                           // 0x01B0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SNB0[0x7];                                   // 0x01B1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             Rotate;                                                  // 0x01B8(0x0018) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Scale;                                                   // 0x01D0(0x0018) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      UniformScale;                                            // 0x01E8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RLED[0x4];                                   // 0x01EC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             RotatePivot;                                             // 0x01F0(0x0018) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             ScalePivot;                                              // 0x0208(0x0018) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bInvertTransformation;                                   // 0x0220(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4HA3[0x7];                                   // 0x0221(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GeometryCollectionNodes.BakeTransformsInCollectionDataflowNode
	 * Size -> 0x00B0 (FullSize[0x0198] - InheritedSize[0x00E8])
	 */
	struct FBakeTransformsInCollectionDataflowNode : public FDataflowNode
	{
	public:
		struct FManagedArrayCollection                             Collection;                                              // 0x00E8(0x00B0) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GeometryCollectionNodes.TransformMeshDataflowNode
	 * Size -> 0x0098 (FullSize[0x0180] - InheritedSize[0x00E8])
	 */
	struct FTransformMeshDataflowNode : public FDataflowNode
	{
	public:
		class UDynamicMesh*                                        Mesh;                                                    // 0x00E8(0x0008) ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Translate;                                               // 0x00F0(0x0018) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ERotationOrderEnum                                         RotationOrder;                                           // 0x0108(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_59G3[0x7];                                   // 0x0109(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             Rotate;                                                  // 0x0110(0x0018) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Scale;                                                   // 0x0128(0x0018) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      UniformScale;                                            // 0x0140(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Y6ZI[0x4];                                   // 0x0144(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             RotatePivot;                                             // 0x0148(0x0018) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             ScalePivot;                                              // 0x0160(0x0018) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bInvertTransformation;                                   // 0x0178(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LHYC[0x7];                                   // 0x0179(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GeometryCollectionNodes.CompareIntDataflowNode
	 * Size -> 0x0010 (FullSize[0x00F8] - InheritedSize[0x00E8])
	 */
	struct FCompareIntDataflowNode : public FDataflowNode
	{
	public:
		ECompareOperationEnum                                      Operation;                                               // 0x00E8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IDZ1[0x3];                                   // 0x00E9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    IntA;                                                    // 0x00EC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    IntB;                                                    // 0x00F0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Result;                                                  // 0x00F4(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AWN5[0x3];                                   // 0x00F5(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GeometryCollectionNodes.BranchDataflowNode
	 * Size -> 0x0020 (FullSize[0x0108] - InheritedSize[0x00E8])
	 */
	struct FBranchDataflowNode : public FDataflowNode
	{
	public:
		class UDynamicMesh*                                        MeshA;                                                   // 0x00E8(0x0008) ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UDynamicMesh*                                        MeshB;                                                   // 0x00F0(0x0008) ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCondition;                                              // 0x00F8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_S39K[0x7];                                   // 0x00F9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UDynamicMesh*                                        Mesh;                                                    // 0x0100(0x0008) ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GeometryCollectionNodes.GetSchemaDataflowNode
	 * Size -> 0x00C0 (FullSize[0x01A8] - InheritedSize[0x00E8])
	 */
	struct FGetSchemaDataflowNode : public FDataflowNode
	{
	public:
		struct FManagedArrayCollection                             Collection;                                              // 0x00E8(0x00B0) NativeAccessSpecifierPublic
		class FString                                              String;                                                  // 0x0198(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GeometryCollectionNodes.RemoveOnBreakDataflowNode
	 * Size -> 0x00E8 (FullSize[0x01D0] - InheritedSize[0x00E8])
	 */
	struct FRemoveOnBreakDataflowNode : public FDataflowNode
	{
	public:
		struct FManagedArrayCollection                             Collection;                                              // 0x00E8(0x00B0) NativeAccessSpecifierPublic
		struct FDataflowTransformSelection                         TransformSelection;                                      // 0x0198(0x0020) NativeAccessSpecifierPublic
		bool                                                       bEnabledRemoval;                                         // 0x01B8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7BHE[0x3];                                   // 0x01B9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector2f                                           PostBreakTimer;                                          // 0x01BC(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2f                                           RemovalTimer;                                            // 0x01C4(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bClusterCrumbling;                                       // 0x01CC(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BU0O[0x3];                                   // 0x01CD(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GeometryCollectionNodes.SetAnchorStateDataflowNode
	 * Size -> 0x00D8 (FullSize[0x01C0] - InheritedSize[0x00E8])
	 */
	struct FSetAnchorStateDataflowNode : public FDataflowNode
	{
	public:
		EAnchorStateEnum                                           AnchorState;                                             // 0x00E8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSetNotSelectedBonesToOppositeState;                     // 0x00E9(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZX9H[0x6];                                   // 0x00EA(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FManagedArrayCollection                             Collection;                                              // 0x00F0(0x00B0) NativeAccessSpecifierPublic
		struct FDataflowTransformSelection                         TransformSelection;                                      // 0x01A0(0x0020) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GeometryCollectionNodes.ProximityDataflowNode
	 * Size -> 0x00C0 (FullSize[0x01A8] - InheritedSize[0x00E8])
	 */
	struct FProximityDataflowNode : public FDataflowNode
	{
	public:
		EProximityMethodEnum                                       ProximityMethod;                                         // 0x00E8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7BDV[0x3];                                   // 0x00E9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      DistanceThreshold;                                       // 0x00EC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ContactThreshold;                                        // 0x00F0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseAsConnectionGraph;                                   // 0x00F4(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_10GB[0x3];                                   // 0x00F5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FManagedArrayCollection                             Collection;                                              // 0x00F8(0x00B0) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GeometryCollectionNodes.CollectionSetPivotDataflowNode
	 * Size -> 0x0118 (FullSize[0x0200] - InheritedSize[0x00E8])
	 */
	struct FCollectionSetPivotDataflowNode : public FDataflowNode
	{
	public:
		struct FManagedArrayCollection                             Collection;                                              // 0x00E8(0x00B0) NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SXPS[0x8];                                   // 0x0198(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          Transform;                                               // 0x01A0(0x0060) Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GeometryCollectionNodes.AddCustomCollectionAttributeDataflowNode
	 * Size -> 0x00E0 (FullSize[0x01C8] - InheritedSize[0x00E8])
	 */
	struct FAddCustomCollectionAttributeDataflowNode : public FDataflowNode
	{
	public:
		struct FManagedArrayCollection                             Collection;                                              // 0x00E8(0x00B0) NativeAccessSpecifierPublic
		EStandardGroupNameEnum                                     GroupName;                                               // 0x0198(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QJ5T[0x7];                                   // 0x0199(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              CustomGroupName;                                         // 0x01A0(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              AttrName;                                                // 0x01B0(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ECustomAttributeTypeEnum                                   CustomAttributeType;                                     // 0x01C0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_U974[0x3];                                   // 0x01C1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    NumElements;                                             // 0x01C4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GeometryCollectionNodes.GetNumElementsInCollectionGroupDataflowNode
	 * Size -> 0x00D0 (FullSize[0x01B8] - InheritedSize[0x00E8])
	 */
	struct FGetNumElementsInCollectionGroupDataflowNode : public FDataflowNode
	{
	public:
		struct FManagedArrayCollection                             Collection;                                              // 0x00E8(0x00B0) NativeAccessSpecifierPublic
		EStandardGroupNameEnum                                     GroupName;                                               // 0x0198(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5BZ6[0x7];                                   // 0x0199(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              CustomGroupName;                                         // 0x01A0(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NumElements;                                             // 0x01B0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XYPC[0x4];                                   // 0x01B4(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GeometryCollectionNodes.GetCollectionAttributeDataTypedDataflowNode
	 * Size -> 0x0148 (FullSize[0x0230] - InheritedSize[0x00E8])
	 */
	struct FGetCollectionAttributeDataTypedDataflowNode : public FDataflowNode
	{
	public:
		struct FManagedArrayCollection                             Collection;                                              // 0x00E8(0x00B0) NativeAccessSpecifierPublic
		EStandardGroupNameEnum                                     GroupName;                                               // 0x0198(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VUSZ[0x7];                                   // 0x0199(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              CustomGroupName;                                         // 0x01A0(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              AttrName;                                                // 0x01B0(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<bool>                                               BoolAttributeData;                                       // 0x01C0(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<float>                                              FloatAttributeData;                                      // 0x01D0(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<double>                                             DoubleAttributeData;                                     // 0x01E0(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<int32_t>                                            Int32AttributeData;                                      // 0x01F0(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class FString>                                      StringAttributeData;                                     // 0x0200(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FVector3f>                                   Vector3fAttributeData;                                   // 0x0210(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FVector3d>                                   Vector3dAttributeData;                                   // 0x0220(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GeometryCollectionNodes.SetCollectionAttributeDataTypedDataflowNode
	 * Size -> 0x0148 (FullSize[0x0230] - InheritedSize[0x00E8])
	 */
	struct FSetCollectionAttributeDataTypedDataflowNode : public FDataflowNode
	{
	public:
		struct FManagedArrayCollection                             Collection;                                              // 0x00E8(0x00B0) NativeAccessSpecifierPublic
		EStandardGroupNameEnum                                     GroupName;                                               // 0x0198(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Q3UP[0x7];                                   // 0x0199(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              CustomGroupName;                                         // 0x01A0(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              AttrName;                                                // 0x01B0(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<bool>                                               BoolAttributeData;                                       // 0x01C0(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<float>                                              FloatAttributeData;                                      // 0x01D0(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<double>                                             DoubleAttributeData;                                     // 0x01E0(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<int32_t>                                            Int32AttributeData;                                      // 0x01F0(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class FString>                                      StringAttributeData;                                     // 0x0200(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FVector3f>                                   Vector3fAttributeData;                                   // 0x0210(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FVector3d>                                   Vector3dAttributeData;                                   // 0x0220(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GeometryCollectionNodes.BoolArrayToFaceSelectionDataflowNode
	 * Size -> 0x0030 (FullSize[0x0118] - InheritedSize[0x00E8])
	 */
	struct FBoolArrayToFaceSelectionDataflowNode : public FDataflowNode
	{
	public:
		TArray<bool>                                               BoolAttributeData;                                       // 0x00E8(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		struct FDataflowFaceSelection                              FaceSelection;                                           // 0x00F8(0x0020) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GeometryCollectionNodes.FloatArrayToVertexSelectionDataflowNode
	 * Size -> 0x0038 (FullSize[0x0120] - InheritedSize[0x00E8])
	 */
	struct FFloatArrayToVertexSelectionDataflowNode : public FDataflowNode
	{
	public:
		TArray<float>                                              FloatArray;                                              // 0x00E8(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		ECompareOperationEnum                                      Operation;                                               // 0x00F8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3ZGL[0x3];                                   // 0x00F9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Threshold;                                               // 0x00FC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FDataflowVertexSelection                            VertexSelection;                                         // 0x0100(0x0020) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GeometryCollectionNodes.SetVertexColorInCollectionFromVertexSelectionDataflowNode
	 * Size -> 0x00F0 (FullSize[0x01D8] - InheritedSize[0x00E8])
	 */
	struct FSetVertexColorInCollectionFromVertexSelectionDataflowNode : public FDataflowNode
	{
	public:
		struct FManagedArrayCollection                             Collection;                                              // 0x00E8(0x00B0) NativeAccessSpecifierPublic
		struct FDataflowVertexSelection                            VertexSelection;                                         // 0x0198(0x0020) NativeAccessSpecifierPublic
		struct FLinearColor                                        SelectedColor;                                           // 0x01B8(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        NonSelectedColor;                                        // 0x01C8(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GeometryCollectionNodes.SelectionToVertexListDataflowNode
	 * Size -> 0x0030 (FullSize[0x0118] - InheritedSize[0x00E8])
	 */
	struct FSelectionToVertexListDataflowNode : public FDataflowNode
	{
	public:
		struct FDataflowVertexSelection                            VertexSelection;                                         // 0x00E8(0x0020) NativeAccessSpecifierPublic
		TArray<int32_t>                                            VertexList;                                              // 0x0108(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GeometryCollectionNodes.MakeTransformDataflowNode
	 * Size -> 0x00A8 (FullSize[0x0190] - InheritedSize[0x00E8])
	 */
	struct FMakeTransformDataflowNode : public FDataflowNode
	{
	public:
		struct FVector                                             InTranslation;                                           // 0x00E8(0x0018) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             InRotation;                                              // 0x0100(0x0018) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             InScale;                                                 // 0x0118(0x0018) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FTransform                                          OutTransform;                                            // 0x0130(0x0060) IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GeometryCollectionNodes.SetVertexColorInCollectionFromFloatArrayDataflowNode
	 * Size -> 0x00C8 (FullSize[0x01B0] - InheritedSize[0x00E8])
	 */
	struct FSetVertexColorInCollectionFromFloatArrayDataflowNode : public FDataflowNode
	{
	public:
		struct FManagedArrayCollection                             Collection;                                              // 0x00E8(0x00B0) NativeAccessSpecifierPublic
		TArray<float>                                              FloatArray;                                              // 0x0198(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		float                                                      Scale;                                                   // 0x01A8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6GVZ[0x4];                                   // 0x01AC(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GeometryCollectionNodes.FloatArrayNormalizeDataflowNode
	 * Size -> 0x0048 (FullSize[0x0130] - InheritedSize[0x00E8])
	 */
	struct FFloatArrayNormalizeDataflowNode : public FDataflowNode
	{
	public:
		TArray<float>                                              InFloatArray;                                            // 0x00E8(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		struct FDataflowVertexSelection                            Selection;                                               // 0x00F8(0x0020) NativeAccessSpecifierPublic
		float                                                      MinRange;                                                // 0x0118(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxRange;                                                // 0x011C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<float>                                              OutFloatArray;                                           // 0x0120(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GeometryCollectionNodes.VectorArrayNormalizeDataflowNode
	 * Size -> 0x0048 (FullSize[0x0130] - InheritedSize[0x00E8])
	 */
	struct FVectorArrayNormalizeDataflowNode : public FDataflowNode
	{
	public:
		TArray<struct FVector>                                     InVectorArray;                                           // 0x00E8(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		struct FDataflowVertexSelection                            Selection;                                               // 0x00F8(0x0020) NativeAccessSpecifierPublic
		float                                                      Magnitude;                                               // 0x0118(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BQO4[0x4];                                   // 0x011C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FVector>                                     OutVectorArray;                                          // 0x0120(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GeometryCollectionNodes.MultiplyTransformDataflowNode
	 * Size -> 0x0128 (FullSize[0x0210] - InheritedSize[0x00E8])
	 */
	struct FMultiplyTransformDataflowNode : public FDataflowNode
	{
	public:
		unsigned char                                              UnknownData_CDUF[0x8];                                   // 0x00E8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          InLeftTransform;                                         // 0x00F0(0x0060) IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FTransform                                          InRightTransform;                                        // 0x0150(0x0060) IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FTransform                                          OutTransform;                                            // 0x01B0(0x0060) IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GeometryCollectionNodes.InvertTransformDataflowNode
	 * Size -> 0x00C8 (FullSize[0x01B0] - InheritedSize[0x00E8])
	 */
	struct FInvertTransformDataflowNode : public FDataflowNode
	{
	public:
		unsigned char                                              UnknownData_ZO9Y[0x8];                                   // 0x00E8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          InTransform;                                             // 0x00F0(0x0060) IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FTransform                                          OutTransform;                                            // 0x0150(0x0060) IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GeometryCollectionNodes.UnionIntArraysDataflowNode
	 * Size -> 0x0030 (FullSize[0x0118] - InheritedSize[0x00E8])
	 */
	struct FUnionIntArraysDataflowNode : public FDataflowNode
	{
	public:
		TArray<int32_t>                                            InArray1;                                                // 0x00E8(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<int32_t>                                            InArray2;                                                // 0x00F8(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<int32_t>                                            OutArray;                                                // 0x0108(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GeometryCollectionNodes.MakeQuaternionDataflowNode
	 * Size -> 0x0038 (FullSize[0x0120] - InheritedSize[0x00E8])
	 */
	struct FMakeQuaternionDataflowNode : public FDataflowNode
	{
	public:
		float                                                      X;                                                       // 0x00E8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Y;                                                       // 0x00EC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Z;                                                       // 0x00F0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      W;                                                       // 0x00F4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6C05[0x8];                                   // 0x00F8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FQuat                                               Quaternion;                                              // 0x0100(0x0020) IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GeometryCollectionNodes.CollectionTransformSelectionAllDataflowNode
	 * Size -> 0x00D0 (FullSize[0x01B8] - InheritedSize[0x00E8])
	 */
	struct FCollectionTransformSelectionAllDataflowNode : public FDataflowNode
	{
	public:
		struct FManagedArrayCollection                             Collection;                                              // 0x00E8(0x00B0) NativeAccessSpecifierPublic
		struct FDataflowTransformSelection                         TransformSelection;                                      // 0x0198(0x0020) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GeometryCollectionNodes.CollectionTransformSelectionSetOperationDataflowNode
	 * Size -> 0x0068 (FullSize[0x0150] - InheritedSize[0x00E8])
	 */
	struct FCollectionTransformSelectionSetOperationDataflowNode : public FDataflowNode
	{
	public:
		ESetOperationEnum                                          Operation;                                               // 0x00E8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ME2Q[0x7];                                   // 0x00E9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FDataflowTransformSelection                         TransformSelectionA;                                     // 0x00F0(0x0020) NativeAccessSpecifierPublic
		struct FDataflowTransformSelection                         TransformSelectionB;                                     // 0x0110(0x0020) NativeAccessSpecifierPublic
		struct FDataflowTransformSelection                         TransformSelection;                                      // 0x0130(0x0020) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GeometryCollectionNodes.CollectionTransformSelectionInfoDataflowNode
	 * Size -> 0x00E0 (FullSize[0x01C8] - InheritedSize[0x00E8])
	 */
	struct FCollectionTransformSelectionInfoDataflowNode : public FDataflowNode
	{
	public:
		struct FDataflowTransformSelection                         TransformSelection;                                      // 0x00E8(0x0020) NativeAccessSpecifierPublic
		struct FManagedArrayCollection                             Collection;                                              // 0x0108(0x00B0) NativeAccessSpecifierPublic
		class FString                                              String;                                                  // 0x01B8(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GeometryCollectionNodes.CollectionTransformSelectionNoneDataflowNode
	 * Size -> 0x00D0 (FullSize[0x01B8] - InheritedSize[0x00E8])
	 */
	struct FCollectionTransformSelectionNoneDataflowNode : public FDataflowNode
	{
	public:
		struct FManagedArrayCollection                             Collection;                                              // 0x00E8(0x00B0) NativeAccessSpecifierPublic
		struct FDataflowTransformSelection                         TransformSelection;                                      // 0x0198(0x0020) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GeometryCollectionNodes.CollectionTransformSelectionInvertDataflowNode
	 * Size -> 0x0020 (FullSize[0x0108] - InheritedSize[0x00E8])
	 */
	struct FCollectionTransformSelectionInvertDataflowNode : public FDataflowNode
	{
	public:
		struct FDataflowTransformSelection                         TransformSelection;                                      // 0x00E8(0x0020) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GeometryCollectionNodes.CollectionTransformSelectionRandomDataflowNode
	 * Size -> 0x00E0 (FullSize[0x01C8] - InheritedSize[0x00E8])
	 */
	struct FCollectionTransformSelectionRandomDataflowNode : public FDataflowNode
	{
	public:
		bool                                                       bDeterministic;                                          // 0x00E8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_D4BB[0x3];                                   // 0x00E9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      RandomSeed;                                              // 0x00EC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RandomThreshold;                                         // 0x00F0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CTUU[0x4];                                   // 0x00F4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FManagedArrayCollection                             Collection;                                              // 0x00F8(0x00B0) NativeAccessSpecifierPublic
		struct FDataflowTransformSelection                         TransformSelection;                                      // 0x01A8(0x0020) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GeometryCollectionNodes.CollectionTransformSelectionRootDataflowNode
	 * Size -> 0x00D0 (FullSize[0x01B8] - InheritedSize[0x00E8])
	 */
	struct FCollectionTransformSelectionRootDataflowNode : public FDataflowNode
	{
	public:
		struct FManagedArrayCollection                             Collection;                                              // 0x00E8(0x00B0) NativeAccessSpecifierPublic
		struct FDataflowTransformSelection                         TransformSelection;                                      // 0x0198(0x0020) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GeometryCollectionNodes.CollectionTransformSelectionCustomDataflowNode
	 * Size -> 0x00E0 (FullSize[0x01C8] - InheritedSize[0x00E8])
	 */
	struct FCollectionTransformSelectionCustomDataflowNode : public FDataflowNode
	{
	public:
		struct FManagedArrayCollection                             Collection;                                              // 0x00E8(0x00B0) NativeAccessSpecifierPublic
		class FString                                              BoneIndicies;                                            // 0x0198(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FDataflowTransformSelection                         TransformSelection;                                      // 0x01A8(0x0020) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GeometryCollectionNodes.CollectionTransformSelectionParentDataflowNode
	 * Size -> 0x00D0 (FullSize[0x01B8] - InheritedSize[0x00E8])
	 */
	struct FCollectionTransformSelectionParentDataflowNode : public FDataflowNode
	{
	public:
		struct FDataflowTransformSelection                         TransformSelection;                                      // 0x00E8(0x0020) NativeAccessSpecifierPublic
		struct FManagedArrayCollection                             Collection;                                              // 0x0108(0x00B0) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GeometryCollectionNodes.CollectionTransformSelectionByPercentageDataflowNode
	 * Size -> 0x0030 (FullSize[0x0118] - InheritedSize[0x00E8])
	 */
	struct FCollectionTransformSelectionByPercentageDataflowNode : public FDataflowNode
	{
	public:
		struct FDataflowTransformSelection                         TransformSelection;                                      // 0x00E8(0x0020) NativeAccessSpecifierPublic
		int32_t                                                    percentage;                                              // 0x0108(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDeterministic;                                          // 0x010C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RGL4[0x3];                                   // 0x010D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      RandomSeed;                                              // 0x0110(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3JYX[0x4];                                   // 0x0114(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GeometryCollectionNodes.CollectionTransformSelectionChildrenDataflowNode
	 * Size -> 0x00D0 (FullSize[0x01B8] - InheritedSize[0x00E8])
	 */
	struct FCollectionTransformSelectionChildrenDataflowNode : public FDataflowNode
	{
	public:
		struct FDataflowTransformSelection                         TransformSelection;                                      // 0x00E8(0x0020) NativeAccessSpecifierPublic
		struct FManagedArrayCollection                             Collection;                                              // 0x0108(0x00B0) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GeometryCollectionNodes.CollectionTransformSelectionSiblingsDataflowNode
	 * Size -> 0x00D0 (FullSize[0x01B8] - InheritedSize[0x00E8])
	 */
	struct FCollectionTransformSelectionSiblingsDataflowNode : public FDataflowNode
	{
	public:
		struct FDataflowTransformSelection                         TransformSelection;                                      // 0x00E8(0x0020) NativeAccessSpecifierPublic
		struct FManagedArrayCollection                             Collection;                                              // 0x0108(0x00B0) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GeometryCollectionNodes.CollectionTransformSelectionLevelDataflowNode
	 * Size -> 0x00D0 (FullSize[0x01B8] - InheritedSize[0x00E8])
	 */
	struct FCollectionTransformSelectionLevelDataflowNode : public FDataflowNode
	{
	public:
		struct FDataflowTransformSelection                         TransformSelection;                                      // 0x00E8(0x0020) NativeAccessSpecifierPublic
		struct FManagedArrayCollection                             Collection;                                              // 0x0108(0x00B0) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GeometryCollectionNodes.CollectionTransformSelectionContactDataflowNode
	 * Size -> 0x00D0 (FullSize[0x01B8] - InheritedSize[0x00E8])
	 */
	struct FCollectionTransformSelectionContactDataflowNode : public FDataflowNode
	{
	public:
		struct FDataflowTransformSelection                         TransformSelection;                                      // 0x00E8(0x0020) NativeAccessSpecifierPublic
		struct FManagedArrayCollection                             Collection;                                              // 0x0108(0x00B0) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GeometryCollectionNodes.CollectionTransformSelectionLeafDataflowNode
	 * Size -> 0x00D0 (FullSize[0x01B8] - InheritedSize[0x00E8])
	 */
	struct FCollectionTransformSelectionLeafDataflowNode : public FDataflowNode
	{
	public:
		struct FManagedArrayCollection                             Collection;                                              // 0x00E8(0x00B0) NativeAccessSpecifierPublic
		struct FDataflowTransformSelection                         TransformSelection;                                      // 0x0198(0x0020) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GeometryCollectionNodes.CollectionTransformSelectionClusterDataflowNode
	 * Size -> 0x00D0 (FullSize[0x01B8] - InheritedSize[0x00E8])
	 */
	struct FCollectionTransformSelectionClusterDataflowNode : public FDataflowNode
	{
	public:
		struct FManagedArrayCollection                             Collection;                                              // 0x00E8(0x00B0) NativeAccessSpecifierPublic
		struct FDataflowTransformSelection                         TransformSelection;                                      // 0x0198(0x0020) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GeometryCollectionNodes.CollectionTransformSelectionBySizeDataflowNode
	 * Size -> 0x00E0 (FullSize[0x01C8] - InheritedSize[0x00E8])
	 */
	struct FCollectionTransformSelectionBySizeDataflowNode : public FDataflowNode
	{
	public:
		struct FManagedArrayCollection                             Collection;                                              // 0x00E8(0x00B0) NativeAccessSpecifierPublic
		float                                                      SizeMin;                                                 // 0x0198(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SizeMax;                                                 // 0x019C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ERangeSettingEnum                                          RangeSetting;                                            // 0x01A0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bInclusive;                                              // 0x01A1(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UGO9[0x6];                                   // 0x01A2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FDataflowTransformSelection                         TransformSelection;                                      // 0x01A8(0x0020) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GeometryCollectionNodes.CollectionTransformSelectionByVolumeDataflowNode
	 * Size -> 0x00E0 (FullSize[0x01C8] - InheritedSize[0x00E8])
	 */
	struct FCollectionTransformSelectionByVolumeDataflowNode : public FDataflowNode
	{
	public:
		struct FManagedArrayCollection                             Collection;                                              // 0x00E8(0x00B0) NativeAccessSpecifierPublic
		float                                                      VolumeMin;                                               // 0x0198(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      VolumeMax;                                               // 0x019C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ERangeSettingEnum                                          RangeSetting;                                            // 0x01A0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bInclusive;                                              // 0x01A1(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HO6J[0x6];                                   // 0x01A2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FDataflowTransformSelection                         TransformSelection;                                      // 0x01A8(0x0020) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GeometryCollectionNodes.CollectionTransformSelectionInBoxDataflowNode
	 * Size -> 0x0178 (FullSize[0x0260] - InheritedSize[0x00E8])
	 */
	struct FCollectionTransformSelectionInBoxDataflowNode : public FDataflowNode
	{
	public:
		struct FManagedArrayCollection                             Collection;                                              // 0x00E8(0x00B0) NativeAccessSpecifierPublic
		struct FBox                                                Box;                                                     // 0x0198(0x0038) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FTransform                                          Transform;                                               // 0x01D0(0x0060) Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESelectSubjectTypeEnum                                     Type;                                                    // 0x0230(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAllVerticesMustContainedInBox;                          // 0x0231(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_K7U7[0x6];                                   // 0x0232(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FDataflowTransformSelection                         TransformSelection;                                      // 0x0238(0x0020) NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JK2R[0x8];                                   // 0x0258(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GeometryCollectionNodes.CollectionTransformSelectionInSphereDataflowNode
	 * Size -> 0x0168 (FullSize[0x0250] - InheritedSize[0x00E8])
	 */
	struct FCollectionTransformSelectionInSphereDataflowNode : public FDataflowNode
	{
	public:
		struct FManagedArrayCollection                             Collection;                                              // 0x00E8(0x00B0) NativeAccessSpecifierPublic
		struct FSphere                                             Sphere;                                                  // 0x0198(0x0020) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OHLT[0x8];                                   // 0x01B8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          Transform;                                               // 0x01C0(0x0060) Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESelectSubjectTypeEnum                                     Type;                                                    // 0x0220(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAllVerticesMustContainedInSphere;                       // 0x0221(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QZXB[0x6];                                   // 0x0222(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FDataflowTransformSelection                         TransformSelection;                                      // 0x0228(0x0020) NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3VYP[0x8];                                   // 0x0248(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GeometryCollectionNodes.CollectionTransformSelectionByFloatAttrDataflowNode
	 * Size -> 0x0100 (FullSize[0x01E8] - InheritedSize[0x00E8])
	 */
	struct FCollectionTransformSelectionByFloatAttrDataflowNode : public FDataflowNode
	{
	public:
		struct FManagedArrayCollection                             Collection;                                              // 0x00E8(0x00B0) NativeAccessSpecifierPublic
		class FString                                              GroupName;                                               // 0x0198(0x0010) Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              AttrName;                                                // 0x01A8(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Min;                                                     // 0x01B8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Max;                                                     // 0x01BC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ERangeSettingEnum                                          RangeSetting;                                            // 0x01C0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bInclusive;                                              // 0x01C1(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_J6V0[0x6];                                   // 0x01C2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FDataflowTransformSelection                         TransformSelection;                                      // 0x01C8(0x0020) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GeometryCollectionNodes.CollectionTransformSelectionByIntAttrDataflowNode
	 * Size -> 0x0100 (FullSize[0x01E8] - InheritedSize[0x00E8])
	 */
	struct FCollectionTransformSelectionByIntAttrDataflowNode : public FDataflowNode
	{
	public:
		struct FManagedArrayCollection                             Collection;                                              // 0x00E8(0x00B0) NativeAccessSpecifierPublic
		class FString                                              GroupName;                                               // 0x0198(0x0010) Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              AttrName;                                                // 0x01A8(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Min;                                                     // 0x01B8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Max;                                                     // 0x01BC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ERangeSettingEnum                                          RangeSetting;                                            // 0x01C0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bInclusive;                                              // 0x01C1(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BXNX[0x6];                                   // 0x01C2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FDataflowTransformSelection                         TransformSelection;                                      // 0x01C8(0x0020) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GeometryCollectionNodes.CollectionVertexSelectionCustomDataflowNode
	 * Size -> 0x00E0 (FullSize[0x01C8] - InheritedSize[0x00E8])
	 */
	struct FCollectionVertexSelectionCustomDataflowNode : public FDataflowNode
	{
	public:
		struct FManagedArrayCollection                             Collection;                                              // 0x00E8(0x00B0) NativeAccessSpecifierPublic
		class FString                                              VertexIndicies;                                          // 0x0198(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FDataflowVertexSelection                            VertexSelection;                                         // 0x01A8(0x0020) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GeometryCollectionNodes.CollectionFaceSelectionCustomDataflowNode
	 * Size -> 0x00E0 (FullSize[0x01C8] - InheritedSize[0x00E8])
	 */
	struct FCollectionFaceSelectionCustomDataflowNode : public FDataflowNode
	{
	public:
		struct FManagedArrayCollection                             Collection;                                              // 0x00E8(0x00B0) NativeAccessSpecifierPublic
		class FString                                              FaceIndicies;                                            // 0x0198(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FDataflowFaceSelection                              FaceSelection;                                           // 0x01A8(0x0020) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GeometryCollectionNodes.CollectionSelectionConvertDataflowNode
	 * Size -> 0x0118 (FullSize[0x0200] - InheritedSize[0x00E8])
	 */
	struct FCollectionSelectionConvertDataflowNode : public FDataflowNode
	{
	public:
		struct FManagedArrayCollection                             Collection;                                              // 0x00E8(0x00B0) NativeAccessSpecifierPublic
		struct FDataflowTransformSelection                         TransformSelection;                                      // 0x0198(0x0020) NativeAccessSpecifierPublic
		struct FDataflowFaceSelection                              FaceSelection;                                           // 0x01B8(0x0020) NativeAccessSpecifierPublic
		struct FDataflowVertexSelection                            VertexSelection;                                         // 0x01D8(0x0020) NativeAccessSpecifierPublic
		bool                                                       bAllElementsMustBeSelected;                              // 0x01F8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WJGN[0x7];                                   // 0x01F9(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GeometryCollectionNodes.CollectionFaceSelectionInvertDataflowNode
	 * Size -> 0x0020 (FullSize[0x0108] - InheritedSize[0x00E8])
	 */
	struct FCollectionFaceSelectionInvertDataflowNode : public FDataflowNode
	{
	public:
		struct FDataflowFaceSelection                              FaceSelection;                                           // 0x00E8(0x0020) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GeometryCollectionNodes.CollectionVertexSelectionByPercentageDataflowNode
	 * Size -> 0x0030 (FullSize[0x0118] - InheritedSize[0x00E8])
	 */
	struct FCollectionVertexSelectionByPercentageDataflowNode : public FDataflowNode
	{
	public:
		struct FDataflowVertexSelection                            VertexSelection;                                         // 0x00E8(0x0020) NativeAccessSpecifierPublic
		int32_t                                                    percentage;                                              // 0x0108(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDeterministic;                                          // 0x010C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TVE6[0x3];                                   // 0x010D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      RandomSeed;                                              // 0x0110(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1LB0[0x4];                                   // 0x0114(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GeometryCollectionNodes.CollectionVertexSelectionSetOperationDataflowNode
	 * Size -> 0x0068 (FullSize[0x0150] - InheritedSize[0x00E8])
	 */
	struct FCollectionVertexSelectionSetOperationDataflowNode : public FDataflowNode
	{
	public:
		ESetOperationEnum                                          Operation;                                               // 0x00E8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KE98[0x7];                                   // 0x00E9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FDataflowVertexSelection                            VertexSelectionA;                                        // 0x00F0(0x0020) NativeAccessSpecifierPublic
		struct FDataflowVertexSelection                            VertexSelectionB;                                        // 0x0110(0x0020) NativeAccessSpecifierPublic
		struct FDataflowVertexSelection                            VertexSelection;                                         // 0x0130(0x0020) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GeometryCollectionNodes.TransformCollectionAttributeDataflowNode
	 * Size -> 0x0198 (FullSize[0x0280] - InheritedSize[0x00E8])
	 */
	struct FTransformCollectionAttributeDataflowNode : public FDataflowNode
	{
	public:
		struct FManagedArrayCollection                             Collection;                                              // 0x00E8(0x00B0) NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MXGJ[0x8];                                   // 0x0198(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          TransformIn;                                             // 0x01A0(0x0060) IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FTransform                                          LocalTransform;                                          // 0x0200(0x0060) Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              GroupName;                                               // 0x0260(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              AttributeName;                                           // 0x0270(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
