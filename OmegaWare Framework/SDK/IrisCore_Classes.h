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
	// # Classes
	// --------------------------------------------------
	/**
	 * Class IrisCore.DataStream
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UDataStream : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IrisCore.DataStreamDefinitions
	 * Size -> 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
	 */
	class UDataStreamDefinitions : public UObject
	{
	public:
		TArray<struct FDataStreamDefinition>                       DataStreamDefinitions;                                   // 0x0028(0x0010) ZeroConstructor, Config, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_OIF5[0x8];                                   // 0x0038(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IrisCore.DataStreamManager
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	class UDataStreamManager : public UDataStream
	{
	public:
		unsigned char                                              UnknownData_X8IW[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IrisCore.NetObjectFilterConfig
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UNetObjectFilterConfig : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IrisCore.FilterOutNetObjectFilterConfig
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UFilterOutNetObjectFilterConfig : public UNetObjectFilterConfig
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IrisCore.NetObjectFilter
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UNetObjectFilter : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IrisCore.FilterOutNetObjectFilter
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UFilterOutNetObjectFilter : public UNetObjectFilter
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IrisCore.IrisObjectReferencePackageMap
	 * Size -> 0x0008 (FullSize[0x00E8] - InheritedSize[0x00E0])
	 */
	class UIrisObjectReferencePackageMap : public UPackageMap
	{
	public:
		unsigned char                                              UnknownData_XFFP[0x8];                                   // 0x00E0(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IrisCore.NetObjectPrioritizer
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UNetObjectPrioritizer : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IrisCore.LocationBasedNetObjectPrioritizer
	 * Size -> 0x0038 (FullSize[0x0060] - InheritedSize[0x0028])
	 */
	class ULocationBasedNetObjectPrioritizer : public UNetObjectPrioritizer
	{
	public:
		unsigned char                                              UnknownData_YUU1[0x38];                                  // 0x0028(0x0038) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IrisCore.NetBlobHandler
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UNetBlobHandler : public UObject
	{
	public:
		unsigned char                                              UnknownData_EEJM[0x10];                                  // 0x0028(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IrisCore.NetBlobHandlerDefinitions
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UNetBlobHandlerDefinitions : public UObject
	{
	public:
		TArray<struct FNetBlobHandlerDefinition>                   NetBlobHandlerDefinitions;                               // 0x0028(0x0010) ZeroConstructor, Config, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IrisCore.NetObjectBlobHandler
	 * Size -> 0x0000 (FullSize[0x0038] - InheritedSize[0x0038])
	 */
	class UNetObjectBlobHandler : public UNetBlobHandler
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IrisCore.NetObjectPrioritizerConfig
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UNetObjectPrioritizerConfig : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IrisCore.NetObjectCountLimiterConfig
	 * Size -> 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
	 */
	class UNetObjectCountLimiterConfig : public UNetObjectPrioritizerConfig
	{
	public:
		ENetObjectCountLimiterMode                                 Mode;                                                    // 0x0028(0x0001) ELEMENT_SIZE_MISMATCH ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0T14[0x3];                                   // 0x0029(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		uint32_t                                                   MaxObjectCount;                                          // 0x002C(0x0004) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Priority;                                                // 0x0030(0x0004) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      OwningConnectionPriority;                                // 0x0034(0x0004) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnableOwnedObjectsFastLane;                             // 0x0038(0x0001) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_66HW[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IrisCore.NetObjectCountLimiter
	 * Size -> 0x0068 (FullSize[0x0090] - InheritedSize[0x0028])
	 */
	class UNetObjectCountLimiter : public UNetObjectPrioritizer
	{
	public:
		unsigned char                                              UnknownData_5L3N[0x68];                                  // 0x0028(0x0068) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IrisCore.NetObjectFilterDefinitions
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UNetObjectFilterDefinitions : public UObject
	{
	public:
		TArray<struct FNetObjectFilterDefinition>                  NetObjectFilterDefinitions;                              // 0x0028(0x0010) ZeroConstructor, Config, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IrisCore.NetObjectGridFilterConfig
	 * Size -> 0x0048 (FullSize[0x0070] - InheritedSize[0x0028])
	 */
	class UNetObjectGridFilterConfig : public UNetObjectFilterConfig
	{
	public:
		uint32_t                                                   ViewPosRelevancyFrameCount;                              // 0x0028(0x0004) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CellSizeX;                                               // 0x002C(0x0004) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CellSizeY;                                               // 0x0030(0x0004) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxCullDistance;                                         // 0x0034(0x0004) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DefaultCullDistance;                                     // 0x0038(0x0004) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PBJ6[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             MinPos;                                                  // 0x0040(0x0018) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             MaxPos;                                                  // 0x0058(0x0018) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IrisCore.NetObjectGridFilter
	 * Size -> 0x00B0 (FullSize[0x00D8] - InheritedSize[0x0028])
	 */
	class UNetObjectGridFilter : public UNetObjectFilter
	{
	public:
		unsigned char                                              UnknownData_PLO3[0xB0];                                  // 0x0028(0x00B0) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IrisCore.NetObjectPrioritizerDefinitions
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UNetObjectPrioritizerDefinitions : public UObject
	{
	public:
		TArray<struct FNetObjectPrioritizerDefinition>             NetObjectPrioritizerDefinitions;                         // 0x0028(0x0010) ZeroConstructor, Config, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IrisCore.NetRPCHandler
	 * Size -> 0x0008 (FullSize[0x0040] - InheritedSize[0x0038])
	 */
	class UNetRPCHandler : public UNetBlobHandler
	{
	public:
		unsigned char                                              UnknownData_9J0T[0x8];                                   // 0x0038(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IrisCore.NetTokenDataStream
	 * Size -> 0x0050 (FullSize[0x0078] - InheritedSize[0x0028])
	 */
	class UNetTokenDataStream : public UDataStream
	{
	public:
		unsigned char                                              UnknownData_AWA8[0x50];                                  // 0x0028(0x0050) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IrisCore.NopNetObjectFilterConfig
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UNopNetObjectFilterConfig : public UNetObjectFilterConfig
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IrisCore.NopNetObjectFilter
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UNopNetObjectFilter : public UNetObjectFilter
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IrisCore.ReplicationBridge
	 * Size -> 0x00E8 (FullSize[0x0110] - InheritedSize[0x0028])
	 */
	class UReplicationBridge : public UObject
	{
	public:
		unsigned char                                              UnknownData_7NHK[0xE8];                                  // 0x0028(0x00E8) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IrisCore.ObjectReplicationBridge
	 * Size -> 0x0330 (FullSize[0x0440] - InheritedSize[0x0110])
	 */
	class UObjectReplicationBridge : public UReplicationBridge
	{
	public:
		unsigned char                                              UnknownData_7U0Y[0x330];                                 // 0x0110(0x0330) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IrisCore.ObjectReplicationBridgeConfig
	 * Size -> 0x0050 (FullSize[0x0078] - InheritedSize[0x0028])
	 */
	class UObjectReplicationBridgeConfig : public UObject
	{
	public:
		TArray<struct FObjectReplicationBridgePollConfig>          PollConfigs;                                             // 0x0028(0x0010) ZeroConstructor, Config, NativeAccessSpecifierPrivate
		TArray<struct FObjectReplicationBridgeFilterConfig>        FilterConfigs;                                           // 0x0038(0x0010) ZeroConstructor, Config, NativeAccessSpecifierPrivate
		TArray<struct FObjectReplicationBridgePrioritizerConfig>   PrioritizerConfigs;                                      // 0x0048(0x0010) ZeroConstructor, Config, NativeAccessSpecifierPrivate
		TArray<struct FObjectReplicationBridgeDeltaCompressionConfig> DeltaCompressionConfigs;                                 // 0x0058(0x0010) ZeroConstructor, Config, NativeAccessSpecifierPrivate
		class FName                                                DefaultSpatialFilterName;                                // 0x0068(0x0008) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FName                                                RequiredNetDriverChannelClassName;                       // 0x0070(0x0008) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IrisCore.SequentialPartialNetBlobHandlerConfig
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	class USequentialPartialNetBlobHandlerConfig : public UObject
	{
	public:
		uint32_t                                                   MaxPartBitCount;                                         // 0x0028(0x0004) ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		uint32_t                                                   MaxPartCount;                                            // 0x002C(0x0004) ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IrisCore.PartialNetObjectAttachmentHandlerConfig
	 * Size -> 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
	 */
	class UPartialNetObjectAttachmentHandlerConfig : public USequentialPartialNetBlobHandlerConfig
	{
	public:
		uint32_t                                                   BitCountSplitThreshold;                                  // 0x0030(0x0004) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_BPZ7[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IrisCore.SequentialPartialNetBlobHandler
	 * Size -> 0x0010 (FullSize[0x0048] - InheritedSize[0x0038])
	 */
	class USequentialPartialNetBlobHandler : public UNetBlobHandler
	{
	public:
		unsigned char                                              UnknownData_KA2U[0x10];                                  // 0x0038(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IrisCore.PartialNetObjectAttachmentHandler
	 * Size -> 0x0000 (FullSize[0x0048] - InheritedSize[0x0048])
	 */
	class UPartialNetObjectAttachmentHandler : public USequentialPartialNetBlobHandler
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IrisCore.ReplicationDataStream
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UReplicationDataStream : public UDataStream
	{
	public:
		unsigned char                                              UnknownData_Q6X4[0x10];                                  // 0x0028(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IrisCore.ReplicationSystem
	 * Size -> 0x0028 (FullSize[0x0050] - InheritedSize[0x0028])
	 */
	class UReplicationSystem : public UObject
	{
	public:
		unsigned char                                              UnknownData_YDDV[0x10];                                  // 0x0028(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UReplicationBridge*                                  ReplicationBridge;                                       // 0x0038(0x0008) ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_FX5M[0x10];                                  // 0x0040(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IrisCore.SphereNetObjectPrioritizerConfig
	 * Size -> 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
	 */
	class USphereNetObjectPrioritizerConfig : public UNetObjectPrioritizerConfig
	{
	public:
		float                                                      InnerRadius;                                             // 0x0028(0x0004) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      OuterRadius;                                             // 0x002C(0x0004) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      InnerPriority;                                           // 0x0030(0x0004) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      OuterPriority;                                           // 0x0034(0x0004) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      OutsidePriority;                                         // 0x0038(0x0004) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7VBN[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IrisCore.SphereNetObjectPrioritizer
	 * Size -> 0x0008 (FullSize[0x0068] - InheritedSize[0x0060])
	 */
	class USphereNetObjectPrioritizer : public ULocationBasedNetObjectPrioritizer
	{
	public:
		unsigned char                                              UnknownData_4AU0[0x8];                                   // 0x0060(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IrisCore.SphereWithOwnerBoostNetObjectPrioritizerConfig
	 * Size -> 0x0008 (FullSize[0x0048] - InheritedSize[0x0040])
	 */
	class USphereWithOwnerBoostNetObjectPrioritizerConfig : public USphereNetObjectPrioritizerConfig
	{
	public:
		float                                                      OwnerPriorityBoost;                                      // 0x0040(0x0004) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9JOO[0x4];                                   // 0x0044(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IrisCore.SphereWithOwnerBoostNetObjectPrioritizer
	 * Size -> 0x0038 (FullSize[0x00A0] - InheritedSize[0x0068])
	 */
	class USphereWithOwnerBoostNetObjectPrioritizer : public USphereNetObjectPrioritizer
	{
	public:
		unsigned char                                              UnknownData_RYN8[0x38];                                  // 0x0068(0x0038) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IrisCore.ReplicationStateDescriptorConfig
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UReplicationStateDescriptorConfig : public UObject
	{
	public:
		TArray<struct FSupportsStructNetSerializerConfig>          SupportsStructNetSerializerList;                         // 0x0028(0x0010) ZeroConstructor, Config, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
