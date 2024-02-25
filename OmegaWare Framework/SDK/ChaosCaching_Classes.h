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
	 * Class ChaosCaching.ChaosCacheCollection
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UChaosCacheCollection : public UObject
	{
	public:
		TArray<class UChaosCache*>                                 Caches;                                                  // 0x0028(0x0010) Edit, ExportObject, ZeroConstructor, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ChaosCaching.ChaosCacheManager
	 * Size -> 0x00A8 (FullSize[0x03A0] - InheritedSize[0x02F8])
	 */
	class AChaosCacheManager : public AActor
	{
	public:
		class UChaosCacheCollection*                               CacheCollection;                                         // 0x02F8(0x0008) Edit, ZeroConstructor, DisableEditOnTemplate, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ECacheMode                                                 CacheMode;                                               // 0x0300(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EStartMode                                                 StartMode;                                               // 0x0301(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NU1G[0x2];                                   // 0x0302(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      StartTime;                                               // 0x0304(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ERKA[0x8];                                   // 0x0308(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FObservedComponent>                          ObservedComponents;                                      // 0x0310(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_E6Q1[0x80];                                  // 0x0320(0x0080) MISSED OFFSET (PADDING)

	public:
		void TriggerComponentByCache(const class FName& InCacheName);
		void TriggerComponent(class UPrimitiveComponent* InComponent);
		void TriggerAll();
		void SetStartTime(float InStartTime);
		void ResetSingleTransform(int32_t InIndex);
		void ResetAllComponentTransforms();
		static UClass* StaticClass();
	};

	/**
	 * Class ChaosCaching.ChaosCachePlayer
	 * Size -> 0x0000 (FullSize[0x03A0] - InheritedSize[0x03A0])
	 */
	class AChaosCachePlayer : public AChaosCacheManager
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ChaosCaching.ChaosCache
	 * Size -> 0x0228 (FullSize[0x0250] - InheritedSize[0x0028])
	 */
	class UChaosCache : public UObject
	{
	public:
		float                                                      RecordedDuration;                                        // 0x0028(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   NumRecordedFrames;                                       // 0x002C(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<int32_t>                                            TrackToParticle;                                         // 0x0030(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FPerParticleCacheData>                       ParticleTracks;                                          // 0x0040(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TMap<class FName, struct FRichCurves>                      ChannelsTracks;                                          // 0x0050(0x0050) NativeAccessSpecifierPublic
		TMap<class FName, struct FRichCurve>                       CurveData;                                               // 0x00A0(0x0050) NativeAccessSpecifierPublic
		TMap<class FName, struct FCacheEventTrack>                 EventTracks;                                             // 0x00F0(0x0050) NativeAccessSpecifierPrivate
		struct FCacheSpawnableTemplate                             Spawnable;                                               // 0x0140(0x00D0) Edit, EditConst, NoDestructor, NativeAccessSpecifierPrivate
		struct FGuid                                               AdapterGuid;                                             // 0x0210(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		int32_t                                                    Version;                                                 // 0x0220(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_P23F[0x2C];                                  // 0x0224(0x002C) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ChaosCaching.MovieSceneChaosCacheSection
	 * Size -> 0x0028 (FullSize[0x0120] - InheritedSize[0x00F8])
	 */
	class UMovieSceneChaosCacheSection : public UMovieSceneBaseCacheSection
	{
	public:
		struct FMovieSceneChaosCacheParams                         Params;                                                  // 0x00F8(0x0028) Edit, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ChaosCaching.MovieSceneChaosCacheTrack
	 * Size -> 0x0018 (FullSize[0x00B0] - InheritedSize[0x0098])
	 */
	class UMovieSceneChaosCacheTrack : public UMovieSceneNameableTrack
	{
	public:
		unsigned char                                              UnknownData_9D58[0x8];                                   // 0x0098(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UMovieSceneSection*>                          AnimationSections;                                       // 0x00A0(0x0010) ExportObject, ZeroConstructor, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
