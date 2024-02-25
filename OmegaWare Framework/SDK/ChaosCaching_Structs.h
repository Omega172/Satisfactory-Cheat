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
	 * Enum ChaosCaching.ECacheMode
	 */
	enum class ECacheMode : uint8_t
	{
		None   = 0,
		Play   = 1,
		Record = 2,
		MAX    = 3
	};

	/**
	 * Enum ChaosCaching.EStartMode
	 */
	enum class EStartMode : uint8_t
	{
		Timed     = 0,
		Triggered = 1,
		MAX       = 2
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct ChaosCaching.ObservedComponent
	 * Size -> 0x0170
	 */
	struct FObservedComponent
	{
	public:
		class FName                                                CacheName;                                               // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FComponentReference                                 ComponentRef;                                            // 0x0008(0x0028) NativeAccessSpecifierPublic
		struct FSoftComponentReference                             SoftComponentRef;                                        // 0x0030(0x0050) Edit, NativeAccessSpecifierPublic
		bool                                                       bIsSimulating;                                           // 0x0080(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XC2Y[0x1];                                   // 0x0081(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bPlaybackEnabled;                                        // 0x0082(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_K6MW[0xED];                                  // 0x0083(0x00ED) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ChaosCaching.ParticleTransformTrack
	 * Size -> 0x0048
	 */
	struct FParticleTransformTrack
	{
	public:
		struct FRawAnimSequenceTrack                               RawTransformTrack;                                       // 0x0000(0x0030) NativeAccessSpecifierPublic
		float                                                      BeginOffset;                                             // 0x0030(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDeactivateOnEnd;                                        // 0x0034(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2I2E[0x3];                                   // 0x0035(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<float>                                              KeyTimestamps;                                           // 0x0038(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ChaosCaching.PerParticleCacheData
	 * Size -> 0x0098
	 */
	struct FPerParticleCacheData
	{
	public:
		struct FParticleTransformTrack                             TransformData;                                           // 0x0000(0x0048) NativeAccessSpecifierPublic
		TMap<class FName, struct FRichCurve>                       CurveData;                                               // 0x0048(0x0050) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ChaosCaching.RichCurves
	 * Size -> 0x0010
	 */
	struct FRichCurves
	{
	public:
		TArray<struct FRichCurve>                                  RichCurves;                                              // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ChaosCaching.CacheEventTrack
	 * Size -> 0x0038
	 */
	struct FCacheEventTrack
	{
	public:
		class FName                                                Name;                                                    // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UScriptStruct*                                       Struct;                                                  // 0x0008(0x0008) ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<float>                                              TimeStamps;                                              // 0x0010(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_D2XT[0x18];                                  // 0x0020(0x0018) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ChaosCaching.CacheSpawnableTemplate
	 * Size -> 0x00D0
	 */
	struct FCacheSpawnableTemplate
	{
	public:
		class UObject*                                             DuplicatedTemplate;                                      // 0x0000(0x0008) Edit, ZeroConstructor, EditConst, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VD6I[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          InitialTransform;                                        // 0x0010(0x0060) Edit, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FTransform                                          ComponentTransform;                                      // 0x0070(0x0060) Edit, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ChaosCaching.MovieSceneChaosCacheParams
	 * Size -> 0x0008 (FullSize[0x0028] - InheritedSize[0x0020])
	 */
	struct FMovieSceneChaosCacheParams : public FMovieSceneBaseCacheParams
	{
	public:
		class UChaosCacheCollection*                               CacheCollection;                                         // 0x0020(0x0008) Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ChaosCaching.CacheEventBase
	 * Size -> 0x0008
	 */
	struct FCacheEventBase
	{
	public:
		unsigned char                                              UnknownData_L21R[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ChaosCaching.EnableStateEvent
	 * Size -> 0x0008 (FullSize[0x0010] - InheritedSize[0x0008])
	 */
	struct FEnableStateEvent : public FCacheEventBase
	{
	public:
		int32_t                                                    Index;                                                   // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnable;                                                 // 0x000C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QZ1M[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ChaosCaching.BreakingEvent
	 * Size -> 0x0088 (FullSize[0x0090] - InheritedSize[0x0008])
	 */
	struct FBreakingEvent : public FCacheEventBase
	{
	public:
		int32_t                                                    Index;                                                   // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FZZX[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             Location;                                                // 0x0010(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Velocity;                                                // 0x0028(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             AngularVelocity;                                         // 0x0040(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Mass;                                                    // 0x0058(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_C5BA[0x4];                                   // 0x005C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             BoundingBoxMin;                                          // 0x0060(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             BoundingBoxMax;                                          // 0x0078(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ChaosCaching.CollisionEvent
	 * Size -> 0x00E8 (FullSize[0x00F0] - InheritedSize[0x0008])
	 */
	struct FCollisionEvent : public FCacheEventBase
	{
	public:
		struct FVector                                             Location;                                                // 0x0008(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             AccumulatedImpulse;                                      // 0x0020(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Normal;                                                  // 0x0038(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Velocity1;                                               // 0x0050(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Velocity2;                                               // 0x0068(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             DeltaVelocity1;                                          // 0x0080(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             DeltaVelocity2;                                          // 0x0098(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             AngularVelocity1;                                        // 0x00B0(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             AngularVelocity2;                                        // 0x00C8(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Mass1;                                                   // 0x00E0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Mass2;                                                   // 0x00E4(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PenetrationDepth;                                        // 0x00E8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3DP6[0x4];                                   // 0x00EC(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ChaosCaching.TrailingEvent
	 * Size -> 0x0080 (FullSize[0x0088] - InheritedSize[0x0008])
	 */
	struct FTrailingEvent : public FCacheEventBase
	{
	public:
		int32_t                                                    Index;                                                   // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GXC8[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             Location;                                                // 0x0010(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Velocity;                                                // 0x0028(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             AngularVelocity;                                         // 0x0040(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             BoundingBoxMin;                                          // 0x0058(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             BoundingBoxMax;                                          // 0x0070(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ChaosCaching.MovieSceneChaosCacheSectionTemplateParameters
	 * Size -> 0x0028 (FullSize[0x0030] - InheritedSize[0x0008])
	 */
	struct FMovieSceneChaosCacheSectionTemplateParameters : public FMovieSceneBaseCacheSectionTemplateParameters
	{
	public:
		struct FMovieSceneChaosCacheParams                         ChaosCacheParams;                                        // 0x0008(0x0028) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ChaosCaching.MovieSceneChaosCacheSectionTemplate
	 * Size -> 0x0030 (FullSize[0x0050] - InheritedSize[0x0020])
	 */
	struct FMovieSceneChaosCacheSectionTemplate : public FMovieSceneEvalTemplate
	{
	public:
		struct FMovieSceneChaosCacheSectionTemplateParameters      Params;                                                  // 0x0020(0x0030) NativeAccessSpecifierPublic
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
