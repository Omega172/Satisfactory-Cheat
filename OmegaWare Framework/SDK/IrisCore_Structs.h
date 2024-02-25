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
	 * Enum IrisCore.EDataStreamSendStatus
	 */
	enum class EDataStreamSendStatus : uint8_t
	{
		Send  = 0,
		Pause = 1,
		MAX   = 2
	};

	/**
	 * Enum IrisCore.ENetObjectCountLimiterMode
	 */
	enum class ENetObjectCountLimiterMode : uint8_t
	{
		RoundRobin = 0,
		Fill       = 1,
		MAX        = 2
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct IrisCore.DataStreamDefinition
	 * Size -> 0x0020
	 */
	struct FDataStreamDefinition
	{
	public:
		class FName                                                DataStreamName;                                          // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                ClassName;                                               // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              Class;                                                   // 0x0010(0x0008) ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EDataStreamSendStatus                                      DefaultSendStatus;                                       // 0x0018(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAutoCreate;                                             // 0x0019(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PORK[0x6];                                   // 0x001A(0x0006) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct IrisCore.NetBlobHandlerDefinition
	 * Size -> 0x0008
	 */
	struct FNetBlobHandlerDefinition
	{
	public:
		class FName                                                ClassName;                                               // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct IrisCore.NetObjectFilterDefinition
	 * Size -> 0x0018
	 */
	struct FNetObjectFilterDefinition
	{
	public:
		class FName                                                FilterName;                                              // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                ClassName;                                               // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                ConfigClassName;                                         // 0x0010(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct IrisCore.NetObjectPrioritizerDefinition
	 * Size -> 0x0028
	 */
	struct FNetObjectPrioritizerDefinition
	{
	public:
		class FName                                                PrioritizerName;                                         // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                ClassName;                                               // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              Class;                                                   // 0x0010(0x0008) ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                ConfigClassName;                                         // 0x0018(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              ConfigClass;                                             // 0x0020(0x0008) ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct IrisCore.ObjectReplicationBridgePollConfig
	 * Size -> 0x0010
	 */
	struct FObjectReplicationBridgePollConfig
	{
	public:
		class FName                                                ClassName;                                               // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   PollFramePeriod;                                         // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIncludeSubclasses;                                      // 0x000C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LNE8[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct IrisCore.ObjectReplicationBridgeFilterConfig
	 * Size -> 0x0010
	 */
	struct FObjectReplicationBridgeFilterConfig
	{
	public:
		class FName                                                ClassName;                                               // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                DynamicFilterName;                                       // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct IrisCore.ObjectReplicationBridgePrioritizerConfig
	 * Size -> 0x0010
	 */
	struct FObjectReplicationBridgePrioritizerConfig
	{
	public:
		class FName                                                ClassName;                                               // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                PrioritizerName;                                         // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct IrisCore.ObjectReplicationBridgeDeltaCompressionConfig
	 * Size -> 0x000C
	 */
	struct FObjectReplicationBridgeDeltaCompressionConfig
	{
	public:
		class FName                                                ClassName;                                               // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnableDeltaCompression;                                 // 0x0008(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_000G[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct IrisCore.SupportsStructNetSerializerConfig
	 * Size -> 0x000C
	 */
	struct FSupportsStructNetSerializerConfig
	{
	public:
		class FName                                                StructName;                                              // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCanUseStructNetSerializer;                              // 0x0008(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JN2C[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct IrisCore.NetSerializerConfig
	 * Size -> 0x0010
	 */
	struct FNetSerializerConfig
	{
	public:
		unsigned char                                              UnknownData_BHW4[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct IrisCore.DateTimeNetSerializerConfig
	 * Size -> 0x0000 (FullSize[0x0010] - InheritedSize[0x0010])
	 */
	struct FDateTimeNetSerializerConfig : public FNetSerializerConfig
	{	};

	/**
	 * ScriptStruct IrisCore.EnumInt8NetSerializerConfig
	 * Size -> 0x0010 (FullSize[0x0020] - InheritedSize[0x0010])
	 */
	struct FEnumInt8NetSerializerConfig : public FNetSerializerConfig
	{
	public:
		int8_t                                                     LowerBound;                                              // 0x0010(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int8_t                                                     UpperBound;                                              // 0x0011(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              BitCount;                                                // 0x0012(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_S7EQ[0xD];                                   // 0x0013(0x000D) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct IrisCore.EnumInt16NetSerializerConfig
	 * Size -> 0x0010 (FullSize[0x0020] - InheritedSize[0x0010])
	 */
	struct FEnumInt16NetSerializerConfig : public FNetSerializerConfig
	{
	public:
		int16_t                                                    LowerBound;                                              // 0x0010(0x0002) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int16_t                                                    UpperBound;                                              // 0x0012(0x0002) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              BitCount;                                                // 0x0014(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HVGD[0xB];                                   // 0x0015(0x000B) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct IrisCore.EnumInt32NetSerializerConfig
	 * Size -> 0x0018 (FullSize[0x0028] - InheritedSize[0x0010])
	 */
	struct FEnumInt32NetSerializerConfig : public FNetSerializerConfig
	{
	public:
		int32_t                                                    LowerBound;                                              // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    UpperBound;                                              // 0x0014(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              BitCount;                                                // 0x0018(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VLE1[0xF];                                   // 0x0019(0x000F) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct IrisCore.EnumInt64NetSerializerConfig
	 * Size -> 0x0020 (FullSize[0x0030] - InheritedSize[0x0010])
	 */
	struct FEnumInt64NetSerializerConfig : public FNetSerializerConfig
	{
	public:
		int64_t                                                    LowerBound;                                              // 0x0010(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int64_t                                                    UpperBound;                                              // 0x0018(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              BitCount;                                                // 0x0020(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LY15[0xF];                                   // 0x0021(0x000F) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct IrisCore.EnumUint8NetSerializerConfig
	 * Size -> 0x0010 (FullSize[0x0020] - InheritedSize[0x0010])
	 */
	struct FEnumUint8NetSerializerConfig : public FNetSerializerConfig
	{
	public:
		unsigned char                                              LowerBound;                                              // 0x0010(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UpperBound;                                              // 0x0011(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              BitCount;                                                // 0x0012(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DR8X[0xD];                                   // 0x0013(0x000D) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct IrisCore.EnumUint16NetSerializerConfig
	 * Size -> 0x0010 (FullSize[0x0020] - InheritedSize[0x0010])
	 */
	struct FEnumUint16NetSerializerConfig : public FNetSerializerConfig
	{
	public:
		uint16_t                                                   LowerBound;                                              // 0x0010(0x0002) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint16_t                                                   UpperBound;                                              // 0x0012(0x0002) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              BitCount;                                                // 0x0014(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_J1JU[0xB];                                   // 0x0015(0x000B) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct IrisCore.EnumUint32NetSerializerConfig
	 * Size -> 0x0018 (FullSize[0x0028] - InheritedSize[0x0010])
	 */
	struct FEnumUint32NetSerializerConfig : public FNetSerializerConfig
	{
	public:
		uint32_t                                                   LowerBound;                                              // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   UpperBound;                                              // 0x0014(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              BitCount;                                                // 0x0018(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2TG9[0xF];                                   // 0x0019(0x000F) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct IrisCore.EnumUint64NetSerializerConfig
	 * Size -> 0x0020 (FullSize[0x0030] - InheritedSize[0x0010])
	 */
	struct FEnumUint64NetSerializerConfig : public FNetSerializerConfig
	{
	public:
		uint64_t                                                   LowerBound;                                              // 0x0010(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint64_t                                                   UpperBound;                                              // 0x0018(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              BitCount;                                                // 0x0020(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CBTM[0xF];                                   // 0x0021(0x000F) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct IrisCore.FloatNetSerializerConfig
	 * Size -> 0x0000 (FullSize[0x0010] - InheritedSize[0x0010])
	 */
	struct FFloatNetSerializerConfig : public FNetSerializerConfig
	{	};

	/**
	 * ScriptStruct IrisCore.DoubleNetSerializerConfig
	 * Size -> 0x0000 (FullSize[0x0010] - InheritedSize[0x0010])
	 */
	struct FDoubleNetSerializerConfig : public FNetSerializerConfig
	{	};

	/**
	 * ScriptStruct IrisCore.GuidNetSerializerConfig
	 * Size -> 0x0000 (FullSize[0x0010] - InheritedSize[0x0010])
	 */
	struct FGuidNetSerializerConfig : public FNetSerializerConfig
	{	};

	/**
	 * ScriptStruct IrisCore.BitfieldNetSerializerConfig
	 * Size -> 0x0008 (FullSize[0x0018] - InheritedSize[0x0010])
	 */
	struct FBitfieldNetSerializerConfig : public FNetSerializerConfig
	{
	public:
		unsigned char                                              BitMask;                                                 // 0x0010(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Z0QN[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct IrisCore.ArrayPropertyNetSerializerConfig
	 * Size -> 0x0030 (FullSize[0x0040] - InheritedSize[0x0010])
	 */
	struct FArrayPropertyNetSerializerConfig : public FNetSerializerConfig
	{
	public:
		uint16_t                                                   MaxElementCount;                                         // 0x0010(0x0002) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint16_t                                                   ElementCountBitCount;                                    // 0x0012(0x0002) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3DKM[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              Property[0x20];                                          // 0x0018(0x0020) UNKNOWN PROPERTY: FieldPathProperty
		unsigned char                                              UnknownData_UEL6[0x8];                                   // 0x0038(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct IrisCore.LastResortPropertyNetSerializerConfig
	 * Size -> 0x0020 (FullSize[0x0030] - InheritedSize[0x0010])
	 */
	struct FLastResortPropertyNetSerializerConfig : public FNetSerializerConfig
	{
	public:
		unsigned char                                              Property[0x20];                                          // 0x0010(0x0020) UNKNOWN PROPERTY: FieldPathProperty
	};

	/**
	 * ScriptStruct IrisCore.NetRoleNetSerializerConfig
	 * Size -> 0x0018 (FullSize[0x0028] - InheritedSize[0x0010])
	 */
	struct FNetRoleNetSerializerConfig : public FNetSerializerConfig
	{
	public:
		int32_t                                                    RelativeInternalOffsetToOtherRole;                       // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    RelativeExternalOffsetToOtherRole;                       // 0x0014(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              LowerBound;                                              // 0x0018(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UpperBound;                                              // 0x0019(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              BitCount;                                                // 0x001A(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              AutonomousProxyValue;                                    // 0x001B(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              SimulatedProxyValue;                                     // 0x001C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EEOY[0xB];                                   // 0x001D(0x000B) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct IrisCore.FieldPathNetSerializerConfig
	 * Size -> 0x0020 (FullSize[0x0030] - InheritedSize[0x0010])
	 */
	struct FFieldPathNetSerializerConfig : public FNetSerializerConfig
	{
	public:
		unsigned char                                              Property[0x20];                                          // 0x0010(0x0020) UNKNOWN PROPERTY: FieldPathProperty
	};

	/**
	 * ScriptStruct IrisCore.FieldPathNetSerializerSerializationHelper
	 * Size -> 0x0018
	 */
	struct FFieldPathNetSerializerSerializationHelper
	{
	public:
		TWeakObjectPtr<class UStruct>                              Owner;                                                   // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class FName>                                        PropertyPath;                                            // 0x0008(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct IrisCore.IntNetSerializerConfig
	 * Size -> 0x0008 (FullSize[0x0018] - InheritedSize[0x0010])
	 */
	struct FIntNetSerializerConfig : public FNetSerializerConfig
	{
	public:
		unsigned char                                              BitCount;                                                // 0x0010(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LBU9[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct IrisCore.Int8RangeNetSerializerConfig
	 * Size -> 0x0008 (FullSize[0x0018] - InheritedSize[0x0010])
	 */
	struct FInt8RangeNetSerializerConfig : public FNetSerializerConfig
	{
	public:
		int8_t                                                     LowerBound;                                              // 0x0010(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int8_t                                                     UpperBound;                                              // 0x0011(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              BitCount;                                                // 0x0012(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DHAE[0x5];                                   // 0x0013(0x0005) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct IrisCore.Int16RangeNetSerializerConfig
	 * Size -> 0x0008 (FullSize[0x0018] - InheritedSize[0x0010])
	 */
	struct FInt16RangeNetSerializerConfig : public FNetSerializerConfig
	{
	public:
		int16_t                                                    LowerBound;                                              // 0x0010(0x0002) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int16_t                                                    UpperBound;                                              // 0x0012(0x0002) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              BitCount;                                                // 0x0014(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AMF5[0x3];                                   // 0x0015(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct IrisCore.Int32RangeNetSerializerConfig
	 * Size -> 0x0010 (FullSize[0x0020] - InheritedSize[0x0010])
	 */
	struct FInt32RangeNetSerializerConfig : public FNetSerializerConfig
	{
	public:
		int32_t                                                    LowerBound;                                              // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    UpperBound;                                              // 0x0014(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              BitCount;                                                // 0x0018(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IZ8Y[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct IrisCore.Int64RangeNetSerializerConfig
	 * Size -> 0x0018 (FullSize[0x0028] - InheritedSize[0x0010])
	 */
	struct FInt64RangeNetSerializerConfig : public FNetSerializerConfig
	{
	public:
		int64_t                                                    LowerBound;                                              // 0x0010(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int64_t                                                    UpperBound;                                              // 0x0018(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              BitCount;                                                // 0x0020(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4CDV[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct IrisCore.IrisFastArraySerializer
	 * Size -> 0x0010 (FullSize[0x0118] - InheritedSize[0x0108])
	 */
	struct FIrisFastArraySerializer : public FFastArraySerializer
	{
	public:
		uint32_t                                                   ChangeMaskStorage[0x2];                                  // 0x0108(0x0008) ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_39F3[0x8];                                   // 0x0110(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct IrisCore.BoolNetSerializerConfig
	 * Size -> 0x0000 (FullSize[0x0010] - InheritedSize[0x0010])
	 */
	struct FBoolNetSerializerConfig : public FNetSerializerConfig
	{	};

	/**
	 * ScriptStruct IrisCore.StructNetSerializerConfig
	 * Size -> 0x0008 (FullSize[0x0018] - InheritedSize[0x0010])
	 */
	struct FStructNetSerializerConfig : public FNetSerializerConfig
	{
	public:
		unsigned char                                              UnknownData_5DZV[0x8];                                   // 0x0010(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct IrisCore.NopNetSerializerConfig
	 * Size -> 0x0000 (FullSize[0x0010] - InheritedSize[0x0010])
	 */
	struct FNopNetSerializerConfig : public FNetSerializerConfig
	{	};

	/**
	 * ScriptStruct IrisCore.ObjectNetSerializerConfig
	 * Size -> 0x0000 (FullSize[0x0010] - InheritedSize[0x0010])
	 */
	struct FObjectNetSerializerConfig : public FNetSerializerConfig
	{	};

	/**
	 * ScriptStruct IrisCore.WeakObjectNetSerializerConfig
	 * Size -> 0x0000 (FullSize[0x0010] - InheritedSize[0x0010])
	 */
	struct FWeakObjectNetSerializerConfig : public FNetSerializerConfig
	{	};

	/**
	 * ScriptStruct IrisCore.ScriptInterfaceNetSerializerConfig
	 * Size -> 0x0008 (FullSize[0x0018] - InheritedSize[0x0010])
	 */
	struct FScriptInterfaceNetSerializerConfig : public FNetSerializerConfig
	{
	public:
		class UClass*                                              InterfaceClass;                                          // 0x0010(0x0008) ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct IrisCore.PackedInt32NetSerializerConfig
	 * Size -> 0x0000 (FullSize[0x0010] - InheritedSize[0x0010])
	 */
	struct FPackedInt32NetSerializerConfig : public FNetSerializerConfig
	{	};

	/**
	 * ScriptStruct IrisCore.PackedUint32NetSerializerConfig
	 * Size -> 0x0000 (FullSize[0x0010] - InheritedSize[0x0010])
	 */
	struct FPackedUint32NetSerializerConfig : public FNetSerializerConfig
	{	};

	/**
	 * ScriptStruct IrisCore.VectorNetQuantizeNetSerializerConfig
	 * Size -> 0x0000 (FullSize[0x0010] - InheritedSize[0x0010])
	 */
	struct FVectorNetQuantizeNetSerializerConfig : public FNetSerializerConfig
	{	};

	/**
	 * ScriptStruct IrisCore.VectorNetQuantize10NetSerializerConfig
	 * Size -> 0x0000 (FullSize[0x0010] - InheritedSize[0x0010])
	 */
	struct FVectorNetQuantize10NetSerializerConfig : public FNetSerializerConfig
	{	};

	/**
	 * ScriptStruct IrisCore.VectorNetQuantize100NetSerializerConfig
	 * Size -> 0x0000 (FullSize[0x0010] - InheritedSize[0x0010])
	 */
	struct FVectorNetQuantize100NetSerializerConfig : public FNetSerializerConfig
	{	};

	/**
	 * ScriptStruct IrisCore.VectorNetQuantizeNormalNetSerializerConfig
	 * Size -> 0x0000 (FullSize[0x0010] - InheritedSize[0x0010])
	 */
	struct FVectorNetQuantizeNormalNetSerializerConfig : public FNetSerializerConfig
	{	};

	/**
	 * ScriptStruct IrisCore.PolymorphicStructNetSerializerConfig
	 * Size -> 0x0018 (FullSize[0x0028] - InheritedSize[0x0010])
	 */
	struct FPolymorphicStructNetSerializerConfig : public FNetSerializerConfig
	{
	public:
		unsigned char                                              UnknownData_BJ6X[0x18];                                  // 0x0010(0x0018) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct IrisCore.PolymorphicArrayStructNetSerializerConfig
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	struct FPolymorphicArrayStructNetSerializerConfig : public FPolymorphicStructNetSerializerConfig
	{	};

	/**
	 * ScriptStruct IrisCore.UnitQuatNetSerializerConfig
	 * Size -> 0x0000 (FullSize[0x0010] - InheritedSize[0x0010])
	 */
	struct FUnitQuatNetSerializerConfig : public FNetSerializerConfig
	{	};

	/**
	 * ScriptStruct IrisCore.UnitQuat4fNetSerializerConfig
	 * Size -> 0x0000 (FullSize[0x0010] - InheritedSize[0x0010])
	 */
	struct FUnitQuat4fNetSerializerConfig : public FNetSerializerConfig
	{	};

	/**
	 * ScriptStruct IrisCore.UnitQuat4dNetSerializerConfig
	 * Size -> 0x0000 (FullSize[0x0010] - InheritedSize[0x0010])
	 */
	struct FUnitQuat4dNetSerializerConfig : public FNetSerializerConfig
	{	};

	/**
	 * ScriptStruct IrisCore.RotatorNetSerializerConfig
	 * Size -> 0x0000 (FullSize[0x0010] - InheritedSize[0x0010])
	 */
	struct FRotatorNetSerializerConfig : public FNetSerializerConfig
	{	};

	/**
	 * ScriptStruct IrisCore.RotatorAsByteNetSerializerConfig
	 * Size -> 0x0000 (FullSize[0x0010] - InheritedSize[0x0010])
	 */
	struct FRotatorAsByteNetSerializerConfig : public FNetSerializerConfig
	{	};

	/**
	 * ScriptStruct IrisCore.RotatorAsShortNetSerializerConfig
	 * Size -> 0x0000 (FullSize[0x0010] - InheritedSize[0x0010])
	 */
	struct FRotatorAsShortNetSerializerConfig : public FNetSerializerConfig
	{	};

	/**
	 * ScriptStruct IrisCore.SoftObjectNetSerializerConfig
	 * Size -> 0x0000 (FullSize[0x0010] - InheritedSize[0x0010])
	 */
	struct FSoftObjectNetSerializerConfig : public FNetSerializerConfig
	{	};

	/**
	 * ScriptStruct IrisCore.SoftObjectPathNetSerializerConfig
	 * Size -> 0x0000 (FullSize[0x0010] - InheritedSize[0x0010])
	 */
	struct FSoftObjectPathNetSerializerConfig : public FNetSerializerConfig
	{	};

	/**
	 * ScriptStruct IrisCore.SoftClassPathNetSerializerConfig
	 * Size -> 0x0000 (FullSize[0x0010] - InheritedSize[0x0010])
	 */
	struct FSoftClassPathNetSerializerConfig : public FNetSerializerConfig
	{	};

	/**
	 * ScriptStruct IrisCore.NameNetSerializerConfig
	 * Size -> 0x0000 (FullSize[0x0010] - InheritedSize[0x0010])
	 */
	struct FNameNetSerializerConfig : public FNetSerializerConfig
	{	};

	/**
	 * ScriptStruct IrisCore.StringNetSerializerConfig
	 * Size -> 0x0000 (FullSize[0x0010] - InheritedSize[0x0010])
	 */
	struct FStringNetSerializerConfig : public FNetSerializerConfig
	{	};

	/**
	 * ScriptStruct IrisCore.UintNetSerializerConfig
	 * Size -> 0x0008 (FullSize[0x0018] - InheritedSize[0x0010])
	 */
	struct FUintNetSerializerConfig : public FNetSerializerConfig
	{
	public:
		unsigned char                                              BitCount;                                                // 0x0010(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7TDW[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct IrisCore.Uint8RangeNetSerializerConfig
	 * Size -> 0x0008 (FullSize[0x0018] - InheritedSize[0x0010])
	 */
	struct FUint8RangeNetSerializerConfig : public FNetSerializerConfig
	{
	public:
		unsigned char                                              LowerBound;                                              // 0x0010(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UpperBound;                                              // 0x0011(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              BitCount;                                                // 0x0012(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZPDF[0x5];                                   // 0x0013(0x0005) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct IrisCore.Uint16RangeNetSerializerConfig
	 * Size -> 0x0008 (FullSize[0x0018] - InheritedSize[0x0010])
	 */
	struct FUint16RangeNetSerializerConfig : public FNetSerializerConfig
	{
	public:
		uint16_t                                                   LowerBound;                                              // 0x0010(0x0002) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint16_t                                                   UpperBound;                                              // 0x0012(0x0002) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              BitCount;                                                // 0x0014(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KDTS[0x3];                                   // 0x0015(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct IrisCore.Uint32RangeNetSerializerConfig
	 * Size -> 0x0010 (FullSize[0x0020] - InheritedSize[0x0010])
	 */
	struct FUint32RangeNetSerializerConfig : public FNetSerializerConfig
	{
	public:
		uint32_t                                                   LowerBound;                                              // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   UpperBound;                                              // 0x0014(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              BitCount;                                                // 0x0018(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5JHC[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct IrisCore.Uint64RangeNetSerializerConfig
	 * Size -> 0x0018 (FullSize[0x0028] - InheritedSize[0x0010])
	 */
	struct FUint64RangeNetSerializerConfig : public FNetSerializerConfig
	{
	public:
		uint64_t                                                   LowerBound;                                              // 0x0010(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint64_t                                                   UpperBound;                                              // 0x0018(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              BitCount;                                                // 0x0020(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_867M[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct IrisCore.VectorNetSerializerConfig
	 * Size -> 0x0000 (FullSize[0x0010] - InheritedSize[0x0010])
	 */
	struct FVectorNetSerializerConfig : public FNetSerializerConfig
	{	};

	/**
	 * ScriptStruct IrisCore.Vector3fNetSerializerConfig
	 * Size -> 0x0000 (FullSize[0x0010] - InheritedSize[0x0010])
	 */
	struct FVector3fNetSerializerConfig : public FNetSerializerConfig
	{	};

	/**
	 * ScriptStruct IrisCore.Vector3dNetSerializerConfig
	 * Size -> 0x0000 (FullSize[0x0010] - InheritedSize[0x0010])
	 */
	struct FVector3dNetSerializerConfig : public FNetSerializerConfig
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
