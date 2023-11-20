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
	 * Class GeometryCache.GeometryCache
	 * Size -> 0x0048 (FullSize[0x0070] - InheritedSize[0x0028])
	 */
	class UGeometryCache : public UObject
	{
	public:
		unsigned char                                              UnknownData_IXI4[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UMaterialInterface*>                          Materials;                                               // 0x0030(0x0010) Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic
		TArray<class UGeometryCacheTrack*>                         Tracks;                                                  // 0x0040(0x0010) Edit, ZeroConstructor, EditConst, UObjectWrapper, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7XFZ[0x10];                                  // 0x0050(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    StartFrame;                                              // 0x0060(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    EndFrame;                                                // 0x0064(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		uint64_t                                                   Hash;                                                    // 0x0068(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GeometryCache.GeometryCacheActor
	 * Size -> 0x0008 (FullSize[0x0300] - InheritedSize[0x02F8])
	 */
	class AGeometryCacheActor : public AActor
	{
	public:
		class UGeometryCacheComponent*                             GeometryCacheComponent;                                  // 0x02F8(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		class UGeometryCacheComponent* GetGeometryCacheComponent();
		static UClass* StaticClass();
	};

	/**
	 * Class GeometryCache.GeometryCacheCodecBase
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UGeometryCacheCodecBase : public UObject
	{
	public:
		TArray<int32_t>                                            TopologyRanges;                                          // 0x0028(0x0010) Edit, ZeroConstructor, EditConst, Protected, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GeometryCache.GeometryCacheCodecRaw
	 * Size -> 0x0008 (FullSize[0x0040] - InheritedSize[0x0038])
	 */
	class UGeometryCacheCodecRaw : public UGeometryCacheCodecBase
	{
	public:
		int32_t                                                    DummyProperty;                                           // 0x0038(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_IKP7[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GeometryCache.GeometryCacheCodecV1
	 * Size -> 0x0008 (FullSize[0x0040] - InheritedSize[0x0038])
	 */
	class UGeometryCacheCodecV1 : public UGeometryCacheCodecBase
	{
	public:
		unsigned char                                              UnknownData_TGTS[0x8];                                   // 0x0038(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GeometryCache.GeometryCacheComponent
	 * Size -> 0x0090 (FullSize[0x0630] - InheritedSize[0x05A0])
	 */
	class UGeometryCacheComponent : public UMeshComponent
	{
	public:
		class UGeometryCache*                                      GeometryCache;                                           // 0x05A0(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bRunning;                                                // 0x05A8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bLooping;                                                // 0x05A9(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bExtrapolateFrames;                                      // 0x05AA(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_2OVA[0x1];                                   // 0x05AB(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      StartTimeOffset;                                         // 0x05AC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      PlaybackSpeed;                                           // 0x05B0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      MotionVectorScale;                                       // 0x05B4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    NumTracks;                                               // 0x05B8(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      ElapsedTime;                                             // 0x05BC(0x0004) Edit, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_CVT9[0x4C];                                  // 0x05C0(0x004C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Duration;                                                // 0x060C(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bManualTick;                                             // 0x0610(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bOverrideWireframeColor;                                 // 0x0611(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_SYF5[0x2];                                   // 0x0612(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FLinearColor                                        WireframeOverrideColor;                                  // 0x0614(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_SM34[0xC];                                   // 0x0624(0x000C) MISSED OFFSET (PADDING)

	public:
		void TickAtThisTime(float Time, bool bInIsRunning, bool bInBackwards, bool bInIsLooping);
		void Stop();
		void SetWireframeOverrideColor(const struct FLinearColor& Color);
		void SetStartTimeOffset(float NewStartTimeOffset);
		void SetPlaybackSpeed(float NewPlaybackSpeed);
		void SetOverrideWireframeColor(bool bOverride);
		void SetMotionVectorScale(float NewMotionVectorScale);
		void SetLooping(bool bNewLooping);
		bool SetGeometryCache(class UGeometryCache* NewGeomCache);
		void SetExtrapolateFrames(bool bNewExtrapolating);
		void PlayReversedFromEnd();
		void PlayReversed();
		void PlayFromStart();
		void Play();
		void Pause();
		bool IsPlayingReversed();
		bool IsPlaying();
		bool IsLooping();
		bool IsExtrapolatingFrames();
		struct FLinearColor GetWireframeOverrideColor();
		float GetStartTimeOffset();
		float GetPlaybackSpeed();
		float GetPlaybackDirection();
		bool GetOverrideWireframeColor();
		int32_t GetNumberOfFrames();
		float GetMotionVectorScale();
		float GetDuration();
		float GetAnimationTime();
		static UClass* StaticClass();
	};

	/**
	 * Class GeometryCache.GeometryCacheTrack
	 * Size -> 0x0030 (FullSize[0x0058] - InheritedSize[0x0028])
	 */
	class UGeometryCacheTrack : public UObject
	{
	public:
		float                                                      Duration;                                                // 0x0028(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_A42M[0x2C];                                  // 0x002C(0x002C) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GeometryCache.GeometryCacheTrack_FlipbookAnimation
	 * Size -> 0x0028 (FullSize[0x0080] - InheritedSize[0x0058])
	 */
	class UGeometryCacheTrack_FlipbookAnimation : public UGeometryCacheTrack
	{
	public:
		uint32_t                                                   NumMeshSamples;                                          // 0x0058(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_JQEM[0x24];                                  // 0x005C(0x0024) MISSED OFFSET (PADDING)

	public:
		void AddMeshSample(const struct FGeometryCacheMeshData& MeshData, float SampleTime);
		static UClass* StaticClass();
	};

	/**
	 * Class GeometryCache.GeometryCacheTrackStreamable
	 * Size -> 0x0080 (FullSize[0x00D8] - InheritedSize[0x0058])
	 */
	class UGeometryCacheTrackStreamable : public UGeometryCacheTrack
	{
	public:
		class UGeometryCacheCodecBase*                             Codec;                                                   // 0x0058(0x0008) Edit, ZeroConstructor, EditConst, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6ECO[0x68];                                  // 0x0060(0x0068) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      StartSampleTime;                                         // 0x00C8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_SS7O[0xC];                                   // 0x00CC(0x000C) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GeometryCache.GeometryCacheTrack_TransformAnimation
	 * Size -> 0x00C8 (FullSize[0x0120] - InheritedSize[0x0058])
	 */
	class UGeometryCacheTrack_TransformAnimation : public UGeometryCacheTrack
	{
	public:
		unsigned char                                              UnknownData_AROH[0xC8];                                  // 0x0058(0x00C8) MISSED OFFSET (PADDING)

	public:
		void SetMesh(const struct FGeometryCacheMeshData& NewMeshData);
		static UClass* StaticClass();
	};

	/**
	 * Class GeometryCache.GeometryCacheTrack_TransformGroupAnimation
	 * Size -> 0x00C8 (FullSize[0x0120] - InheritedSize[0x0058])
	 */
	class UGeometryCacheTrack_TransformGroupAnimation : public UGeometryCacheTrack
	{
	public:
		unsigned char                                              UnknownData_AU49[0xC8];                                  // 0x0058(0x00C8) MISSED OFFSET (PADDING)

	public:
		void SetMesh(const struct FGeometryCacheMeshData& NewMeshData);
		static UClass* StaticClass();
	};

	/**
	 * Class GeometryCache.NiagaraGeometryCacheRendererProperties
	 * Size -> 0x0288 (FullSize[0x0368] - InheritedSize[0x00E0])
	 */
	class UNiagaraGeometryCacheRendererProperties : public UNiagaraRendererProperties
	{
	public:
		TArray<struct FNiagaraGeometryCacheReference>              GeometryCaches;                                          // 0x00E0(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       bIsLooping;                                              // 0x00F0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FO8C[0x3];                                   // 0x00F1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		uint32_t                                                   ComponentCountLimit;                                     // 0x00F4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FNiagaraVariableAttributeBinding                    PositionBinding;                                         // 0x00F8(0x0058) Edit, NativeAccessSpecifierPublic
		struct FNiagaraVariableAttributeBinding                    RotationBinding;                                         // 0x0150(0x0058) Edit, NativeAccessSpecifierPublic
		struct FNiagaraVariableAttributeBinding                    ScaleBinding;                                            // 0x01A8(0x0058) Edit, NativeAccessSpecifierPublic
		struct FNiagaraVariableAttributeBinding                    ElapsedTimeBinding;                                      // 0x0200(0x0058) Edit, NativeAccessSpecifierPublic
		struct FNiagaraVariableAttributeBinding                    EnabledBinding;                                          // 0x0258(0x0058) Edit, NativeAccessSpecifierPublic
		struct FNiagaraVariableAttributeBinding                    ArrayIndexBinding;                                       // 0x02B0(0x0058) Edit, NativeAccessSpecifierPublic
		struct FNiagaraVariableAttributeBinding                    RendererVisibilityTagBinding;                            // 0x0308(0x0058) Edit, NativeAccessSpecifierPublic
		int32_t                                                    RendererVisibility;                                      // 0x0360(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAssignComponentsOnParticleID;                           // 0x0364(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_336Y[0x3];                                   // 0x0365(0x0003) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
