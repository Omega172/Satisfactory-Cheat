﻿#pragma once

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
	 * Class MovieScene.MovieSceneSignedObject
	 * Size -> 0x0030 (FullSize[0x0058] - InheritedSize[0x0028])
	 */
	class UMovieSceneSignedObject : public UObject
	{
	public:
		unsigned char                                              UnknownData_AKW4[0x4];                                   // 0x0028(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGuid                                               Signature;                                               // 0x002C(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_AIXY[0x1C];                                  // 0x003C(0x001C) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieScene.MovieSceneSequence
	 * Size -> 0x0010 (FullSize[0x0068] - InheritedSize[0x0058])
	 */
	class UMovieSceneSequence : public UMovieSceneSignedObject
	{
	public:
		class UMovieSceneCompiledData*                             CompiledData;                                            // 0x0058(0x0008) ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		EMovieSceneCompletionMode                                  DefaultCompletionMode;                                   // 0x0060(0x0001) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bParentContextsAreSignificant;                           // 0x0061(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bPlayableDirectly;                                       // 0x0062(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		EMovieSceneSequenceFlags                                   SequenceFlags;                                           // 0x0063(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_OPR9[0x4];                                   // 0x0064(0x0004) MISSED OFFSET (PADDING)

	public:
		struct FMovieSceneTimecodeSource GetEarliestTimecodeSource();
		TArray<struct FMovieSceneObjectBindingID> FindBindingsByTag(const class FName& InBindingName);
		struct FMovieSceneObjectBindingID FindBindingByTag(const class FName& InBindingName);
		static UClass* StaticClass();
	};

	/**
	 * Class MovieScene.MovieSceneChannelOverrideContainer
	 * Size -> 0x0000 (FullSize[0x0058] - InheritedSize[0x0058])
	 */
	class UMovieSceneChannelOverrideContainer : public UMovieSceneSignedObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieScene.MovieSceneEntitySystem
	 * Size -> 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
	 */
	class UMovieSceneEntitySystem : public UObject
	{
	public:
		class UMovieSceneEntitySystemLinker*                       Linker;                                                  // 0x0028(0x0008) ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_EAR6[0x10];                                  // 0x0030(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieScene.MovieSceneEntityInstantiatorSystem
	 * Size -> 0x0000 (FullSize[0x0040] - InheritedSize[0x0040])
	 */
	class UMovieSceneEntityInstantiatorSystem : public UMovieSceneEntitySystem
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieScene.MovieSceneSection
	 * Size -> 0x0098 (FullSize[0x00F0] - InheritedSize[0x0058])
	 */
	class UMovieSceneSection : public UMovieSceneSignedObject
	{
	public:
		struct FMovieSceneSectionEvalOptions                       EvalOptions;                                             // 0x0058(0x0002) Edit, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_F3U5[0x6];                                   // 0x005A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FMovieSceneEasingSettings                           Easing;                                                  // 0x0060(0x0038) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FMovieSceneFrameRange                               SectionRange;                                            // 0x0098(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FFrameNumber                                        PreRollFrames;                                           // 0x00A8(0x0004) Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FFrameNumber                                        PostRollFrames;                                          // 0x00AC(0x0004) Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		int32_t                                                    RowIndex;                                                // 0x00B0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		int32_t                                                    OverlapPriority;                                         // 0x00B4(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bIsActive : 1;                                           // 0x00B8(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bIsLocked : 1;                                           // 0x00B8(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_Q48W[0x3];                                   // 0x00B9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      StartTime;                                               // 0x00BC(0x0004) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      EndTime;                                                 // 0x00C0(0x0004) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      PrerollTime;                                             // 0x00C4(0x0004) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      PostrollTime;                                            // 0x00C8(0x0004) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bIsInfinite : 1;                                         // 0x00CC(0x0001) BIT_FIELD Deprecated, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_K4AF[0x3];                                   // 0x00CD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bSupportsInfiniteRange;                                  // 0x00D0(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FOptionalMovieSceneBlendType                        BlendType;                                               // 0x00D1(0x0002) NoDestructor, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_NJ6Z[0x1D];                                  // 0x00D3(0x001D) MISSED OFFSET (PADDING)

	public:
		void SetRowIndex(int32_t NewRowIndex);
		void SetPreRollFrames(int32_t InPreRollFrames);
		void SetPostRollFrames(int32_t InPostRollFrames);
		void SetOverlapPriority(int32_t NewPriority);
		void SetIsLocked(bool bInIsLocked);
		void SetIsActive(bool bInIsActive);
		void SetCompletionMode(EMovieSceneCompletionMode InCompletionMode);
		void SetColorTint(const struct FColor& InColorTint);
		void SetBlendType(EMovieSceneBlendType InBlendType);
		bool IsLocked();
		bool IsActive();
		int32_t GetRowIndex();
		int32_t GetPreRollFrames();
		int32_t GetPostRollFrames();
		int32_t GetOverlapPriority();
		EMovieSceneCompletionMode GetCompletionMode();
		struct FColor GetColorTint();
		struct FOptionalMovieSceneBlendType GetBlendType();
		static UClass* StaticClass();
	};

	/**
	 * Class MovieScene.MovieSceneSubSection
	 * Size -> 0x0048 (FullSize[0x0138] - InheritedSize[0x00F0])
	 */
	class UMovieSceneSubSection : public UMovieSceneSection
	{
	public:
		unsigned char                                              UnknownData_U58Z[0x8];                                   // 0x00F0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FMovieSceneSectionParameters                        Parameters;                                              // 0x00F8(0x0024) Edit, BlueprintVisible, Config, NoDestructor, NativeAccessSpecifierPublic
		float                                                      StartOffset;                                             // 0x011C(0x0004) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      TimeScale;                                               // 0x0120(0x0004) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      PrerollTime;                                             // 0x0124(0x0004) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              NetworkMask;                                             // 0x0128(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_PCUB[0x7];                                   // 0x0129(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMovieSceneSequence*                                 SubSequence;                                             // 0x0130(0x0008) Edit, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		void SetSequence(class UMovieSceneSequence* Sequence);
		class UMovieSceneSequence* GetSequence();
		static UClass* StaticClass();
	};

	/**
	 * Class MovieScene.MovieSceneBlenderSystem
	 * Size -> 0x0028 (FullSize[0x0068] - InheritedSize[0x0040])
	 */
	class UMovieSceneBlenderSystem : public UMovieSceneEntitySystem
	{
	public:
		unsigned char                                              UnknownData_NACR[0x28];                                  // 0x0040(0x0028) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieScene.MovieSceneTrackInstance
	 * Size -> 0x0028 (FullSize[0x0050] - InheritedSize[0x0028])
	 */
	class UMovieSceneTrackInstance : public UObject
	{
	public:
		class UObject*                                             AnimatedObject;                                          // 0x0028(0x0008) ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bIsRootTrackInstance;                                    // 0x0030(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_GOZH[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMovieSceneEntitySystemLinker*                       PrivateLinker;                                           // 0x0038(0x0008) ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<struct FMovieSceneTrackInstanceInput>               Inputs;                                                  // 0x0040(0x0010) ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieScene.MovieSceneTrack
	 * Size -> 0x0040 (FullSize[0x0098] - InheritedSize[0x0058])
	 */
	class UMovieSceneTrack : public UMovieSceneSignedObject
	{
	public:
		struct FMovieSceneTrackEvalOptions                         EvalOptions;                                             // 0x0058(0x0004) Edit, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EO8U[0x1];                                   // 0x005C(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bIsEvalDisabled;                                         // 0x005D(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_Y62U[0x2];                                   // 0x005E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<int32_t>                                            RowsDisabled;                                            // 0x0060(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_LNCM[0x4];                                   // 0x0070(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGuid                                               EvaluationFieldGuid;                                     // 0x0074(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_OVJC[0x4];                                   // 0x0084(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FMovieSceneTrackEvaluationField                     EvaluationField;                                         // 0x0088(0x0010) ContainsInstancedReference, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieScene.MovieSceneNameableTrack
	 * Size -> 0x0000 (FullSize[0x0098] - InheritedSize[0x0098])
	 */
	class UMovieSceneNameableTrack : public UMovieSceneTrack
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieScene.MovieSceneSubTrack
	 * Size -> 0x0010 (FullSize[0x00A8] - InheritedSize[0x0098])
	 */
	class UMovieSceneSubTrack : public UMovieSceneNameableTrack
	{
	public:
		TArray<class UMovieSceneSection*>                          Sections;                                                // 0x0098(0x0010) ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, UObjectWrapper, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieScene.MovieSceneBlenderSystemSupport
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UMovieSceneBlenderSystemSupport : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieScene.MovieSceneChannelOverrideProvider
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UMovieSceneChannelOverrideProvider : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieScene.MovieSceneDeterminismSource
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UMovieSceneDeterminismSource : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieScene.MovieSceneEvaluationHook
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UMovieSceneEvaluationHook : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieScene.MovieScenePlaybackClient
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UMovieScenePlaybackClient : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieScene.MovieSceneSequencePlayerObserver
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UMovieSceneSequencePlayerObserver : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieScene.MovieSceneBindingOwnerInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UMovieSceneBindingOwnerInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieScene.MovieSceneCachedTrack
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UMovieSceneCachedTrack : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieScene.MovieSceneEasingFunction
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UMovieSceneEasingFunction : public UInterface
	{
	public:
		float OnEvaluate(float Interp);
		static UClass* StaticClass();
	};

	/**
	 * Class MovieScene.MovieSceneKeyProxy
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UMovieSceneKeyProxy : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieScene.MovieSceneSequenceTickManagerClient
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UMovieSceneSequenceTickManagerClient : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieScene.MovieSceneSectionChannelOverrideRegistry
	 * Size -> 0x0050 (FullSize[0x0078] - InheritedSize[0x0028])
	 */
	class UMovieSceneSectionChannelOverrideRegistry : public UObject
	{
	public:
		TMap<class FName, class UMovieSceneChannelOverrideContainer*> Overrides;                                               // 0x0028(0x0050) UObjectWrapper, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieScene.MovieSceneTrackTemplateProducer
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UMovieSceneTrackTemplateProducer : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieScene.MovieSceneCompiledData
	 * Size -> 0x03D0 (FullSize[0x03F8] - InheritedSize[0x0028])
	 */
	class UMovieSceneCompiledData : public UObject
	{
	public:
		struct FMovieSceneEvaluationTemplate                       EvaluationTemplate;                                      // 0x0028(0x0160) ContainsInstancedReference, NativeAccessSpecifierPrivate
		struct FMovieSceneSequenceHierarchy                        Hierarchy;                                               // 0x0188(0x0118) NativeAccessSpecifierPrivate
		struct FMovieSceneEntityComponentField                     EntityComponentField;                                    // 0x02A0(0x00F0) NativeAccessSpecifierPrivate
		struct FMovieSceneEvaluationField                          TrackTemplateField;                                      // 0x0390(0x0030) NativeAccessSpecifierPrivate
		TArray<struct FFrameTime>                                  DeterminismFences;                                       // 0x03C0(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		struct FGuid                                               CompiledSignature;                                       // 0x03D0(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FGuid                                               CompilerVersion;                                         // 0x03E0(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FMovieSceneSequenceCompilerMaskStruct               AccumulatedMask;                                         // 0x03F0(0x0001) NoDestructor, NativeAccessSpecifierPrivate
		struct FMovieSceneSequenceCompilerMaskStruct               AllocatedMask;                                           // 0x03F1(0x0001) NoDestructor, NativeAccessSpecifierPrivate
		EMovieSceneSequenceFlags                                   AccumulatedFlags;                                        // 0x03F2(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_2GH4[0x5];                                   // 0x03F3(0x0005) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieScene.MovieSceneCompiledDataManager
	 * Size -> 0x0208 (FullSize[0x0230] - InheritedSize[0x0028])
	 */
	class UMovieSceneCompiledDataManager : public UObject
	{
	public:
		unsigned char                                              UnknownData_11BG[0xB0];                                  // 0x0028(0x00B0) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<int32_t, struct FMovieSceneSequenceHierarchy>         Hierarchies;                                             // 0x00D8(0x0050) NativeAccessSpecifierPrivate
		TMap<int32_t, struct FMovieSceneEvaluationTemplate>        TrackTemplates;                                          // 0x0128(0x0050) ContainsInstancedReference, NativeAccessSpecifierPrivate
		TMap<int32_t, struct FMovieSceneEvaluationField>           TrackTemplateFields;                                     // 0x0178(0x0050) NativeAccessSpecifierPrivate
		TMap<int32_t, struct FMovieSceneEntityComponentField>      EntityComponentFields;                                   // 0x01C8(0x0050) NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_98BD[0x18];                                  // 0x0218(0x0018) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieScene.MovieSceneEntityProvider
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UMovieSceneEntityProvider : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieScene.MovieSceneGenericBoundObjectInstantiator
	 * Size -> 0x0000 (FullSize[0x0040] - InheritedSize[0x0040])
	 */
	class UMovieSceneGenericBoundObjectInstantiator : public UMovieSceneEntityInstantiatorSystem
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieScene.MovieSceneBoundSceneComponentInstantiator
	 * Size -> 0x0000 (FullSize[0x0040] - InheritedSize[0x0040])
	 */
	class UMovieSceneBoundSceneComponentInstantiator : public UMovieSceneEntityInstantiatorSystem
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieScene.MovieSceneValueDecomposer
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UMovieSceneValueDecomposer : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieScene.MovieSceneEntitySystemLinker
	 * Size -> 0x06D0 (FullSize[0x06F8] - InheritedSize[0x0028])
	 */
	class UMovieSceneEntitySystemLinker : public UObject
	{
	public:
		unsigned char                                              UnknownData_JTYQ[0x278];                                 // 0x0028(0x0278) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FMovieSceneEntitySystemGraph                        SystemGraph;                                             // 0x02A0(0x0150) NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2NKJ[0x308];                                 // 0x03F0(0x0308) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieScene.MovieSceneEvalTimeSystem
	 * Size -> 0x0070 (FullSize[0x00B0] - InheritedSize[0x0040])
	 */
	class UMovieSceneEvalTimeSystem : public UMovieSceneEntitySystem
	{
	public:
		unsigned char                                              UnknownData_XH8L[0x70];                                  // 0x0040(0x0070) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieScene.MovieSceneEvaluationHookSystem
	 * Size -> 0x0050 (FullSize[0x0090] - InheritedSize[0x0040])
	 */
	class UMovieSceneEvaluationHookSystem : public UMovieSceneEntitySystem
	{
	public:
		TMap<struct FMovieSceneEvaluationInstanceKey, struct FMovieSceneEvaluationHookEventContainer> PendingEventsByRootInstance;                             // 0x0040(0x0050) NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieScene.MovieScenePreAnimatedStateSystemInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UMovieScenePreAnimatedStateSystemInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieScene.MovieSceneCachePreAnimatedStateSystem
	 * Size -> 0x0000 (FullSize[0x0040] - InheritedSize[0x0040])
	 */
	class UMovieSceneCachePreAnimatedStateSystem : public UMovieSceneEntityInstantiatorSystem
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieScene.MovieSceneRestorePreAnimatedStateSystem
	 * Size -> 0x0010 (FullSize[0x0050] - InheritedSize[0x0040])
	 */
	class UMovieSceneRestorePreAnimatedStateSystem : public UMovieSceneEntityInstantiatorSystem
	{
	public:
		unsigned char                                              UnknownData_YXLP[0x10];                                  // 0x0040(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieScene.MovieSceneRootInstantiatorSystem
	 * Size -> 0x0000 (FullSize[0x0040] - InheritedSize[0x0040])
	 */
	class UMovieSceneRootInstantiatorSystem : public UMovieSceneEntityInstantiatorSystem
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieScene.MovieSceneSpawnablesSystem
	 * Size -> 0x0000 (FullSize[0x0040] - InheritedSize[0x0040])
	 */
	class UMovieSceneSpawnablesSystem : public UMovieSceneEntitySystem
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieScene.MovieSceneTrackInstanceInstantiator
	 * Size -> 0x00B0 (FullSize[0x00F0] - InheritedSize[0x0040])
	 */
	class UMovieSceneTrackInstanceInstantiator : public UMovieSceneEntityInstantiatorSystem
	{
	public:
		unsigned char                                              UnknownData_HN2M[0xB0];                                  // 0x0040(0x00B0) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieScene.MovieSceneTrackInstanceSystem
	 * Size -> 0x0008 (FullSize[0x0048] - InheritedSize[0x0040])
	 */
	class UMovieSceneTrackInstanceSystem : public UMovieSceneEntitySystem
	{
	public:
		class UMovieSceneTrackInstanceInstantiator*                Instantiator;                                            // 0x0040(0x0008) ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieScene.MovieSceneCustomClockSource
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UMovieSceneCustomClockSource : public UInterface
	{
	public:
		void OnTick(float DeltaSeconds, float InPlayRate);
		void OnStopPlaying(const struct FQualifiedFrameTime& InStopTime);
		void OnStartPlaying(const struct FQualifiedFrameTime& InStartTime);
		struct FFrameTime OnRequestCurrentTime(const struct FQualifiedFrameTime& InCurrentTime, float InPlayRate);
		static UClass* StaticClass();
	};

	/**
	 * Class MovieScene.MovieSceneBuiltInEasingFunction
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UMovieSceneBuiltInEasingFunction : public UObject
	{
	public:
		unsigned char                                              UnknownData_SN1K[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		EMovieSceneBuiltInEasing                                   Type;                                                    // 0x0030(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7NYM[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieScene.MovieSceneEasingExternalCurve
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UMovieSceneEasingExternalCurve : public UObject
	{
	public:
		unsigned char                                              UnknownData_9MFH[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCurveFloat*                                         Curve;                                                   // 0x0030(0x0008) Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieScene.NodeAndChannelMappings
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UNodeAndChannelMappings : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieScene.MovieSceneNodeGroup
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UMovieSceneNodeGroup : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieScene.MovieSceneNodeGroupCollection
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UMovieSceneNodeGroupCollection : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieScene.MovieScene
	 * Size -> 0x0108 (FullSize[0x0160] - InheritedSize[0x0058])
	 */
	class UMovieScene : public UMovieSceneSignedObject
	{
	public:
		unsigned char                                              UnknownData_ISSX[0x8];                                   // 0x0058(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FMovieSceneSpawnable>                        Spawnables;                                              // 0x0060(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		TArray<struct FMovieScenePossessable>                      Possessables;                                            // 0x0070(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		TArray<struct FMovieSceneBinding>                          ObjectBindings;                                          // 0x0080(0x0010) ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate
		TMap<class FName, struct FMovieSceneObjectBindingIDs>      BindingGroups;                                           // 0x0090(0x0050) NativeAccessSpecifierPrivate
		TArray<class UMovieSceneTrack*>                            Tracks;                                                  // 0x00E0(0x0010) ExportObject, ZeroConstructor, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPrivate
		class UMovieSceneTrack*                                    CameraCutTrack;                                          // 0x00F0(0x0008) ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FMovieSceneFrameRange                               SelectionRange;                                          // 0x00F8(0x0010) NoDestructor, NativeAccessSpecifierPrivate
		struct FMovieSceneFrameRange                               PlaybackRange;                                           // 0x0108(0x0010) NoDestructor, NativeAccessSpecifierPrivate
		struct FFrameRate                                          TickResolution;                                          // 0x0118(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FFrameRate                                          DisplayRate;                                             // 0x0120(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		EMovieSceneEvaluationType                                  EvaluationType;                                          // 0x0128(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		EUpdateClockSource                                         ClockSource;                                             // 0x0129(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_4LQT[0x6];                                   // 0x012A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSoftObjectPath                                     CustomClockSourcePath;                                   // 0x0130(0x0020) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<struct FMovieSceneMarkedFrame>                      MarkedFrames;                                            // 0x0150(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieScene.MovieSceneBindingOverrides
	 * Size -> 0x0068 (FullSize[0x0090] - InheritedSize[0x0028])
	 */
	class UMovieSceneBindingOverrides : public UObject
	{
	public:
		TArray<struct FMovieSceneBindingOverrideData>              BindingData;                                             // 0x0028(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_LTZU[0x58];                                  // 0x0038(0x0058) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieScene.MovieSceneFolder
	 * Size -> 0x0050 (FullSize[0x0078] - InheritedSize[0x0028])
	 */
	class UMovieSceneFolder : public UObject
	{
	public:
		unsigned char                                              UnknownData_4VKC[0x4];                                   // 0x0028(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                FolderName;                                              // 0x002C(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_SXM3[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UMovieSceneFolder*>                           ChildFolders;                                            // 0x0038(0x0010) ExportObject, ZeroConstructor, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPrivate
		TArray<class UMovieSceneTrack*>                            ChildTracks;                                             // 0x0048(0x0010) ExportObject, ZeroConstructor, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPrivate
		TArray<class FString>                                      ChildObjectBindingStrings;                               // 0x0058(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_QGXP[0x10];                                  // 0x0068(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieScene.MovieSceneSequencePlayer
	 * Size -> 0x0490 (FullSize[0x04B8] - InheritedSize[0x0028])
	 */
	class UMovieSceneSequencePlayer : public UObject
	{
	public:
		unsigned char                                              UnknownData_25W5[0x200];                                 // 0x0028(0x0200) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              Observer[0x10];                                          // 0x0228(0x0010) UNKNOWN PROPERTY: InterfaceProperty
		class FScriptMulticastDelegate                             OnPlay;                                                  // 0x0238(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnPlayReverse;                                           // 0x0248(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnStop;                                                  // 0x0258(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnPause;                                                 // 0x0268(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnFinished;                                              // 0x0278(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		EMovieScenePlayerStatus                                    Status;                                                  // 0x0288(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_232X[0x3];                                   // 0x0289(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bReversePlayback : 1;                                    // 0x028C(0x0001) BIT_FIELD Net, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_2WE9[0x3];                                   // 0x028D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMovieSceneSequence*                                 Sequence;                                                // 0x0290(0x0008) ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FFrameNumber                                        StartTime;                                               // 0x0298(0x0004) Net, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    DurationFrames;                                          // 0x029C(0x0004) Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      DurationSubFrames;                                       // 0x02A0(0x0004) Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    CurrentNumLoops;                                         // 0x02A4(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FMovieSceneSequencePlaybackSettings                 PlaybackSettings;                                        // 0x02A8(0x0020) Net, NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FMovieSceneRootEvaluationTemplateInstance           RootTemplateInstance;                                    // 0x02C8(0x0088) Transient, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_2SC2[0x90];                                  // 0x0350(0x0090) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FMovieSceneSequenceReplProperties                   NetSyncProps;                                            // 0x03E0(0x0010) Net, NoDestructor, Protected, NativeAccessSpecifierProtected
		unsigned char                                              PlaybackClient[0x10];                                    // 0x03F0(0x0010) UNKNOWN PROPERTY: InterfaceProperty
		class UMovieSceneSequenceTickManager*                      TickManager;                                             // 0x0400(0x0008) ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_YJNV[0xB0];                                  // 0x0408(0x00B0) MISSED OFFSET (PADDING)

	public:
		void StopAtCurrentTime();
		void Stop();
		void SetWeight(double InWeight);
		void SetTimeRange(float StartTime, float Duration);
		void SetPlayRate(float PlayRate);
		void SetPlaybackPosition(const struct FMovieSceneSequencePlaybackParams& PlaybackParams);
		void SetFrameRate(const struct FFrameRate& FrameRate);
		void SetFrameRange(int32_t StartFrame, int32_t Duration, float SubFrames);
		void SetDisableCameraCuts(bool bInDisableCameraCuts);
		void ScrubToSeconds(float TimeInSeconds);
		bool ScrubToMarkedFrame(const class FString& InLabel);
		void ScrubToFrame(const struct FFrameTime& NewPosition);
		void Scrub();
		void RPC_OnStopEvent(const struct FFrameTime& StoppedTime);
		void RPC_OnFinishPlaybackEvent(const struct FFrameTime& StoppedTime);
		void RPC_ExplicitServerUpdateEvent(EUpdatePositionMethod Method, const struct FFrameTime& RelevantTime);
		void RestoreState();
		void RemoveWeight();
		void PlayToSeconds(float TimeInSeconds);
		bool PlayToMarkedFrame(const class FString& InLabel);
		void PlayToFrame(const struct FFrameTime& NewPosition);
		void PlayTo(const struct FMovieSceneSequencePlaybackParams& PlaybackParams, const struct FMovieSceneSequencePlayToParams& PlayToParams);
		void PlayReverse();
		void PlayLooping(int32_t NumLoops);
		void Play();
		void Pause();
		void JumpToSeconds(float TimeInSeconds);
		bool JumpToMarkedFrame(const class FString& InLabel);
		void JumpToFrame(const struct FFrameTime& NewPosition);
		bool IsReversed();
		bool IsPlaying();
		bool IsPaused();
		void GoToEndAndStop();
		struct FQualifiedFrameTime GetStartTime();
		class FString GetSequenceName(bool bAddClientInfo);
		class UMovieSceneSequence* GetSequence();
		float GetPlayRate();
		TArray<struct FMovieSceneObjectBindingID> GetObjectBindings(class UObject* InObject);
		struct FFrameRate GetFrameRate();
		int32_t GetFrameDuration();
		struct FQualifiedFrameTime GetEndTime();
		struct FQualifiedFrameTime GetDuration();
		bool GetDisableCameraCuts();
		struct FQualifiedFrameTime GetCurrentTime();
		TArray<class UObject*> GetBoundObjects(const struct FMovieSceneObjectBindingID& ObjectBinding);
		void ChangePlaybackDirection();
		static UClass* StaticClass();
	};

	/**
	 * Class MovieScene.MovieSceneSequenceTickManager
	 * Size -> 0x0070 (FullSize[0x0098] - InheritedSize[0x0028])
	 */
	class UMovieSceneSequenceTickManager : public UObject
	{
	public:
		unsigned char                                              UnknownData_WXM2[0x70];                                  // 0x0028(0x0070) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieScene.MovieSceneBoolSection
	 * Size -> 0x0108 (FullSize[0x01F8] - InheritedSize[0x00F0])
	 */
	class UMovieSceneBoolSection : public UMovieSceneSection
	{
	public:
		bool                                                       DefaultValue;                                            // 0x00F0(0x0001) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8B8U[0x7];                                   // 0x00F1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FMovieSceneBoolChannel                              BoolCurve;                                               // 0x00F8(0x0100) Protected, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieScene.MovieSceneHookSection
	 * Size -> 0x0018 (FullSize[0x0108] - InheritedSize[0x00F0])
	 */
	class UMovieSceneHookSection : public UMovieSceneSection
	{
	public:
		unsigned char                                              UnknownData_0X63[0x10];                                  // 0x00F0(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bRequiresRangedHook : 1;                                 // 0x0100(0x0001) BIT_FIELD NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bRequiresTriggerHooks : 1;                               // 0x0100(0x0001) BIT_FIELD NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_LL19[0x7];                                   // 0x0101(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieScene.MovieSceneSpawnSection
	 * Size -> 0x0008 (FullSize[0x0200] - InheritedSize[0x01F8])
	 */
	class UMovieSceneSpawnSection : public UMovieSceneBoolSection
	{
	public:
		unsigned char                                              UnknownData_U6O6[0x8];                                   // 0x01F8(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieScene.TestMovieSceneTrack
	 * Size -> 0x0020 (FullSize[0x00B8] - InheritedSize[0x0098])
	 */
	class UTestMovieSceneTrack : public UMovieSceneTrack
	{
	public:
		unsigned char                                              UnknownData_LUWU[0x8];                                   // 0x0098(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bHighPassFilter;                                         // 0x00A0(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SQV6[0x7];                                   // 0x00A1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UMovieSceneSection*>                          SectionArray;                                            // 0x00A8(0x0010) ExportObject, ZeroConstructor, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieScene.TestMovieSceneSection
	 * Size -> 0x0000 (FullSize[0x00F0] - InheritedSize[0x00F0])
	 */
	class UTestMovieSceneSection : public UMovieSceneSection
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieScene.TestMovieSceneSequence
	 * Size -> 0x0008 (FullSize[0x0070] - InheritedSize[0x0068])
	 */
	class UTestMovieSceneSequence : public UMovieSceneSequence
	{
	public:
		class UMovieScene*                                         MovieScene;                                              // 0x0068(0x0008) ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieScene.TestMovieSceneSubTrack
	 * Size -> 0x0010 (FullSize[0x00B8] - InheritedSize[0x00A8])
	 */
	class UTestMovieSceneSubTrack : public UMovieSceneSubTrack
	{
	public:
		TArray<class UMovieSceneSection*>                          SectionArray;                                            // 0x00A8(0x0010) ExportObject, ZeroConstructor, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieScene.TestMovieSceneSubSection
	 * Size -> 0x0000 (FullSize[0x0138] - InheritedSize[0x0138])
	 */
	class UTestMovieSceneSubSection : public UMovieSceneSubSection
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieScene.TestMovieSceneEvalHookTrack
	 * Size -> 0x0010 (FullSize[0x00A8] - InheritedSize[0x0098])
	 */
	class UTestMovieSceneEvalHookTrack : public UMovieSceneTrack
	{
	public:
		TArray<class UMovieSceneSection*>                          SectionArray;                                            // 0x0098(0x0010) ExportObject, ZeroConstructor, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieScene.TestMovieSceneEvalHookSection
	 * Size -> 0x0018 (FullSize[0x0120] - InheritedSize[0x0108])
	 */
	class UTestMovieSceneEvalHookSection : public UMovieSceneHookSection
	{
	public:
		unsigned char                                              UnknownData_7O1E[0x18];                                  // 0x0108(0x0018) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieScene.MovieSceneSpawnTrack
	 * Size -> 0x0020 (FullSize[0x00B8] - InheritedSize[0x0098])
	 */
	class UMovieSceneSpawnTrack : public UMovieSceneTrack
	{
	public:
		TArray<class UMovieSceneSection*>                          Sections;                                                // 0x0098(0x0010) ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, UObjectWrapper, NativeAccessSpecifierProtected
		struct FGuid                                               ObjectGuid;                                              // 0x00A8(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
