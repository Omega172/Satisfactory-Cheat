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
	 * Class MovieRenderPipelineCore.MoviePipelineSetting
	 * Size -> 0x0020 (FullSize[0x0048] - InheritedSize[0x0028])
	 */
	class UMoviePipelineSetting : public UObject
	{
	public:
		TWeakObjectPtr<class UMoviePipeline>                       CachedPipeline;                                          // 0x0028(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bEnabled;                                                // 0x0030(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_28AI[0x17];                                  // 0x0031(0x0017) MISSED OFFSET (PADDING)

	public:
		void SetIsEnabled(bool bInEnabled);
		bool IsEnabled();
		void BuildNewProcessCommandLineArgs(TArray<class FString>* InOutUnrealURLParams, TArray<class FString>* InOutCommandLineArgs, TArray<class FString>* InOutDeviceProfileCvars, TArray<class FString>* InOutExecCmds);
		void BuildNewProcessCommandLine(class FString* InOutUnrealURLParams, class FString* InOutCommandLineArgs);
		static UClass* StaticClass();
	};

	/**
	 * Class MovieRenderPipelineCore.MoviePipelineCameraSetting
	 * Size -> 0x0010 (FullSize[0x0058] - InheritedSize[0x0048])
	 */
	class UMoviePipelineCameraSetting : public UMoviePipelineSetting
	{
	public:
		EMoviePipelineShutterTiming                                ShutterTiming;                                           // 0x0048(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Y2J9[0x3];                                   // 0x0049(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      OverscanPercentage;                                      // 0x004C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bRenderAllCameras;                                       // 0x0050(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FN79[0x7];                                   // 0x0051(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieRenderPipelineCore.MoviePipelineGameMode
	 * Size -> 0x0008 (FullSize[0x03A0] - InheritedSize[0x0398])
	 */
	class AMoviePipelineGameMode : public AGameModeBase
	{
	public:
		unsigned char                                              UnknownData_6OLZ[0x8];                                   // 0x0398(0x0008) Fix Super Size

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieRenderPipelineCore.MoviePipelineHighResSetting
	 * Size -> 0x0020 (FullSize[0x0068] - InheritedSize[0x0048])
	 */
	class UMoviePipelineHighResSetting : public UMoviePipelineSetting
	{
	public:
		int32_t                                                    TileCount;                                               // 0x0048(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TextureSharpnessBias;                                    // 0x004C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      OverlapRatio;                                            // 0x0050(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOverrideSubSurfaceScattering;                           // 0x0054(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VP0J[0x3];                                   // 0x0055(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    BurleySampleCount;                                       // 0x0058(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAllocateHistoryPerTile;                                 // 0x005C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FWA1[0xB];                                   // 0x005D(0x000B) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieRenderPipelineCore.MoviePipelineInProcessExecutorSettings
	 * Size -> 0x0030 (FullSize[0x0068] - InheritedSize[0x0038])
	 */
	class UMoviePipelineInProcessExecutorSettings : public UDeveloperSettings
	{
	public:
		bool                                                       bCloseEditor;                                            // 0x0038(0x0001) Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FFWP[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              AdditionalCommandLineArguments;                          // 0x0040(0x0010) Edit, BlueprintVisible, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              InheritedCommandLineArguments;                           // 0x0050(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, Config, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    InitialDelayFrameCount;                                  // 0x0060(0x0004) Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MLK0[0x4];                                   // 0x0064(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieRenderPipelineCore.MoviePipelineOutputBase
	 * Size -> 0x0000 (FullSize[0x0048] - InheritedSize[0x0048])
	 */
	class UMoviePipelineOutputBase : public UMoviePipelineSetting
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieRenderPipelineCore.MoviePipelineSetting_BlueprintBase
	 * Size -> 0x0020 (FullSize[0x0068] - InheritedSize[0x0048])
	 */
	class UMoviePipelineSetting_BlueprintBase : public UMoviePipelineSetting
	{
	public:
		class FText                                                CategoryText;                                            // 0x0048(0x0018) Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected
		bool                                                       bIsValidOnPrimary;                                       // 0x0060(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bIsValidOnShots;                                         // 0x0061(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bCanBeDisabled;                                          // 0x0062(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_EU67[0x5];                                   // 0x0063(0x0005) MISSED OFFSET (PADDING)

	public:
		void ReceiveTeardownForPipelineImpl(class UMoviePipeline* InPipeline);
		void ReceiveSetupForPipelineImpl(class UMoviePipeline* InPipeline);
		struct FMoviePipelineFormatArgs ReceiveGetFormatArguments(struct FMoviePipelineFormatArgs* InOutFormatArgs);
		void OnEngineTickBeginFrame();
		static UClass* StaticClass();
	};

	/**
	 * Class MovieRenderPipelineCore.MoviePipelineViewFamilySetting
	 * Size -> 0x0000 (FullSize[0x0048] - InheritedSize[0x0048])
	 */
	class UMoviePipelineViewFamilySetting : public UMoviePipelineSetting
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieRenderPipelineCore.MovieRenderDebugWidget
	 * Size -> 0x0000 (FullSize[0x0280] - InheritedSize[0x0280])
	 */
	class UMovieRenderDebugWidget : public UUserWidget
	{
	public:
		void OnInitializedForPipeline(class UMoviePipeline* ForPipeline);
		static UClass* StaticClass();
	};

	/**
	 * Class MovieRenderPipelineCore.MoviePipeline
	 * Size -> 0x03E8 (FullSize[0x0410] - InheritedSize[0x0028])
	 */
	class UMoviePipeline : public UObject
	{
	public:
		class FScriptMulticastDelegate                             OnMoviePipelineFinishedDelegate;                         // 0x0028(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnMoviePipelineWorkFinishedDelegate;                     // 0x0038(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnMoviePipelineShotWorkFinishedDelegate;                 // 0x0048(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class UMoviePipelineCustomTimeStep*                        CustomTimeStep;                                          // 0x0058(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_YH24[0x10];                                  // 0x0060(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UEngineCustomTimeStep*                               CachedPrevCustomTimeStep;                                // 0x0070(0x0008) ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class ULevelSequence*                                      TargetSequence;                                          // 0x0078(0x0008) ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class ALevelSequenceActor*                                 LevelSequenceActor;                                      // 0x0080(0x0008) ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UMovieRenderDebugWidget*                             DebugWidget;                                             // 0x0088(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UTexture*                                            PreviewTexture;                                          // 0x0090(0x0008) ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_FOJJ[0x288];                                 // 0x0098(0x0288) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              DebugWidgetClass;                                        // 0x0320(0x0008) ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMoviePipelineExecutorJob*                           CurrentJob;                                              // 0x0328(0x0008) ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_QX84[0xE0];                                  // 0x0330(0x00E0) MISSED OFFSET (PADDING)

	public:
		void Shutdown(bool bError);
		void SetInitializationTime(const struct FDateTime& InDateTime);
		void RequestShutdown(bool bIsError);
		void OnMoviePipelineFinishedImpl();
		bool IsShutdownRequested();
		void Initialize(class UMoviePipelineExecutorJob* InJob);
		class UTexture* GetPreviewTexture();
		class UMoviePipelinePrimaryConfig* GetPipelinePrimaryConfig();
		class UMoviePipelinePrimaryConfig* GetPipelineMasterConfig();
		struct FDateTime GetInitializationTime();
		class UMoviePipelineExecutorJob* GetCurrentJob();
		static UClass* StaticClass();
	};

	/**
	 * Class MovieRenderPipelineCore.MoviePipelineCustomTimeStep
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UMoviePipelineCustomTimeStep : public UEngineCustomTimeStep
	{
	public:
		unsigned char                                              UnknownData_HG5V[0x10];                                  // 0x0028(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieRenderPipelineCore.MoviePipelineAntiAliasingSetting
	 * Size -> 0x0020 (FullSize[0x0068] - InheritedSize[0x0048])
	 */
	class UMoviePipelineAntiAliasingSetting : public UMoviePipelineSetting
	{
	public:
		int32_t                                                    SpatialSampleCount;                                      // 0x0048(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    TemporalSampleCount;                                     // 0x004C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOverrideAntiAliasing;                                   // 0x0050(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EAntiAliasingMethod                                        AntiAliasingMethod;                                      // 0x0051(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OXI5[0x2];                                   // 0x0052(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    RenderWarmUpCount;                                       // 0x0054(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseCameraCutForWarmUp;                                  // 0x0058(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_J87A[0x3];                                   // 0x0059(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    EngineWarmUpCount;                                       // 0x005C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bRenderWarmUpFrames;                                     // 0x0060(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HHUF[0x7];                                   // 0x0061(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieRenderPipelineCore.MoviePipelineBlueprintLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UMoviePipelineBlueprintLibrary : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_UpdateJobShotListFromSequence(class ULevelSequence* InSequence, class UMoviePipelineExecutorJob* InJob, bool* bShotsChanged);
		int32_t STATIC_ResolveVersionNumber(const struct FMoviePipelineFilenameResolveParams& InParams, bool bGetNextVersion);
		void STATIC_ResolveFilenameFormatArguments(const class FString& InFormatString, const struct FMoviePipelineFilenameResolveParams& InParams, class FString* OutFinalPath, struct FMoviePipelineFormatArgs* OutMergedFormatArgs);
		class UMoviePipelineQueue* STATIC_LoadManifestFileFromString(const class FString& InManifestFilePath);
		struct FTimecode STATIC_GetRootTimecode(class UMoviePipeline* InMoviePipeline);
		struct FFrameNumber STATIC_GetRootFrameNumber(class UMoviePipeline* InMoviePipeline);
		EMovieRenderPipelineState STATIC_GetPipelineState(class UMoviePipeline* InPipeline);
		void STATIC_GetOverallSegmentCounts(class UMoviePipeline* InMoviePipeline, int32_t* OutCurrentIndex, int32_t* OutTotalCount);
		void STATIC_GetOverallOutputFrames(class UMoviePipeline* InMoviePipeline, int32_t* OutCurrentIndex, int32_t* OutTotalCount);
		class FText STATIC_GetMoviePipelineEngineChangelistLabel(class UMoviePipeline* InMoviePipeline);
		struct FTimecode STATIC_GetMasterTimecode(class UMoviePipeline* InMoviePipeline);
		struct FFrameNumber STATIC_GetMasterFrameNumber(class UMoviePipeline* InMoviePipeline);
		class FString STATIC_GetMapPackageName(class UMoviePipelineExecutorJob* InJob);
		class FText STATIC_GetJobName(class UMoviePipeline* InMoviePipeline);
		struct FDateTime STATIC_GetJobInitializationTime(class UMoviePipeline* InMoviePipeline);
		class FText STATIC_GetJobAuthor(class UMoviePipeline* InMoviePipeline);
		bool STATIC_GetEstimatedTimeRemaining(class UMoviePipeline* InPipeline, struct FTimespan* OutEstimate);
		struct FIntPoint STATIC_GetEffectiveOutputResolution(class UMoviePipelinePrimaryConfig* InPrimaryConfig, class UMoviePipelineExecutorShot* InPipelineExecutorShot);
		struct FTimecode STATIC_GetCurrentShotTimecode(class UMoviePipeline* InMoviePipeline);
		struct FFrameNumber STATIC_GetCurrentShotFrameNumber(class UMoviePipeline* InMoviePipeline);
		class ULevelSequence* STATIC_GetCurrentSequence(class UMoviePipeline* InMoviePipeline);
		struct FMoviePipelineSegmentWorkMetrics STATIC_GetCurrentSegmentWorkMetrics(class UMoviePipeline* InMoviePipeline);
		EMovieRenderShotState STATIC_GetCurrentSegmentState(class UMoviePipeline* InMoviePipeline);
		void STATIC_GetCurrentSegmentName(class UMoviePipeline* InMoviePipeline, class FText* OutOuterName, class FText* OutInnerName);
		float STATIC_GetCurrentFocusDistance(class UMoviePipeline* InMoviePipeline);
		float STATIC_GetCurrentFocalLength(class UMoviePipeline* InMoviePipeline);
		class UMoviePipelineExecutorShot* STATIC_GetCurrentExecutorShot(class UMoviePipeline* InMoviePipeline);
		float STATIC_GetCurrentAperture(class UMoviePipeline* InMoviePipeline);
		float STATIC_GetCompletionPercentage(class UMoviePipeline* InPipeline);
		class UMoviePipelineSetting* STATIC_FindOrGetDefaultSettingForShot(class UClass* InSettingType, class UMoviePipelinePrimaryConfig* InPrimaryConfig, class UMoviePipelineExecutorShot* InShot);
		class UMovieSceneSequence* STATIC_DuplicateSequence(class UObject* Outer, class UMovieSceneSequence* InSequence);
		static UClass* StaticClass();
	};

	/**
	 * Class MovieRenderPipelineCore.MoviePipelineColorSetting
	 * Size -> 0x00A8 (FullSize[0x00F0] - InheritedSize[0x0048])
	 */
	class UMoviePipelineColorSetting : public UMoviePipelineSetting
	{
	public:
		struct FOpenColorIODisplayConfiguration                    OCIOConfiguration;                                       // 0x0048(0x00A0) Edit, BlueprintVisible, AdvancedDisplay, NativeAccessSpecifierPublic
		bool                                                       bDisableToneCurve;                                       // 0x00E8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0APF[0x7];                                   // 0x00E9(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieRenderPipelineCore.MoviePipelineCommandLineEncoder
	 * Size -> 0x0040 (FullSize[0x0088] - InheritedSize[0x0048])
	 */
	class UMoviePipelineCommandLineEncoder : public UMoviePipelineSetting
	{
	public:
		class FString                                              FileNameFormatOverride;                                  // 0x0048(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EMoviePipelineEncodeQuality                                Quality;                                                 // 0x0058(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IFQD[0x7];                                   // 0x0059(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              AdditionalCommandLineArgs;                               // 0x0060(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDeleteSourceFiles;                                      // 0x0070(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSkipEncodeOnRenderCanceled;                             // 0x0071(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bWriteEachFrameDuration;                                 // 0x0072(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WB7M[0x15];                                  // 0x0073(0x0015) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieRenderPipelineCore.MoviePipelineCommandLineEncoderSettings
	 * Size -> 0x00C8 (FullSize[0x0100] - InheritedSize[0x0038])
	 */
	class UMoviePipelineCommandLineEncoderSettings : public UDeveloperSettings
	{
	public:
		class FString                                              ExecutablePath;                                          // 0x0038(0x0010) Edit, BlueprintVisible, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FText                                                CodecHelpText;                                           // 0x0048(0x0018) Edit, NativeAccessSpecifierPublic
		class FString                                              VideoCodec;                                              // 0x0060(0x0010) Edit, BlueprintVisible, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              AudioCodec;                                              // 0x0070(0x0010) Edit, BlueprintVisible, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              OutputFileExtension;                                     // 0x0080(0x0010) Edit, BlueprintVisible, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              CommandLineFormat;                                       // 0x0090(0x0010) Edit, BlueprintVisible, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              VideoInputStringFormat;                                  // 0x00A0(0x0010) Edit, BlueprintVisible, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              AudioInputStringFormat;                                  // 0x00B0(0x0010) Edit, BlueprintVisible, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              EncodeSettings_Low;                                      // 0x00C0(0x0010) Edit, BlueprintVisible, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              EncodeSettings_Med;                                      // 0x00D0(0x0010) Edit, BlueprintVisible, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              EncodeSettings_High;                                     // 0x00E0(0x0010) Edit, BlueprintVisible, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              EncodeSettings_Epic;                                     // 0x00F0(0x0010) Edit, BlueprintVisible, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieRenderPipelineCore.MoviePipelineConfigBase
	 * Size -> 0x0058 (FullSize[0x0080] - InheritedSize[0x0028])
	 */
	class UMoviePipelineConfigBase : public UObject
	{
	public:
		class FString                                              DisplayName;                                             // 0x0028(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UMoviePipelineSetting*>                       Settings;                                                // 0x0038(0x0010) Edit, ExportObject, ZeroConstructor, EditConst, ContainsInstancedReference, Protected, UObjectWrapper, NativeAccessSpecifierProtected
		unsigned char                                              ConfigOrigin[0x30];                                      // 0x0048(0x0030) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              UnknownData_UIR5[0x8];                                   // 0x0078(0x0008) MISSED OFFSET (PADDING)

	public:
		void SetConfigOrigin(class UMoviePipelineConfigBase* InConfig);
		void RemoveSetting(class UMoviePipelineSetting* InSetting);
		TArray<class UMoviePipelineSetting*> GetUserSettings();
		class UMoviePipelineConfigBase* GetConfigOrigin();
		TArray<class UMoviePipelineSetting*> FindSettingsByClass(class UClass* InClass, bool bIncludeDisabledSettings, bool bExactMatch);
		class UMoviePipelineSetting* FindSettingByClass(class UClass* InClass, bool bIncludeDisabledSettings, bool bExactMatch);
		class UMoviePipelineSetting* FindOrAddSettingByClass(class UClass* InClass, bool bIncludeDisabledSettings, bool bExactMatch);
		void CopyFrom(class UMoviePipelineConfigBase* InConfig);
		static UClass* StaticClass();
	};

	/**
	 * Class MovieRenderPipelineCore.MoviePipelineDebugSettings
	 * Size -> 0x0010 (FullSize[0x0058] - InheritedSize[0x0048])
	 */
	class UMoviePipelineDebugSettings : public UMoviePipelineSetting
	{
	public:
		bool                                                       bWriteAllSamples;                                        // 0x0048(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCaptureFramesWithRenderDoc;                             // 0x0049(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WJOC[0x2];                                   // 0x004A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    CaptureFrame;                                            // 0x004C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCaptureUnrealInsightsTrace;                             // 0x0050(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NCXS[0x7];                                   // 0x0051(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieRenderPipelineCore.MoviePipelineExecutorBase
	 * Size -> 0x00F0 (FullSize[0x0118] - InheritedSize[0x0028])
	 */
	class UMoviePipelineExecutorBase : public UObject
	{
	public:
		class FScriptMulticastDelegate                             OnExecutorFinishedDelegate;                              // 0x0028(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_4YVZ[0x18];                                  // 0x0038(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnExecutorErroredDelegate;                               // 0x0050(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_1WGR[0x20];                                  // 0x0060(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             SocketMessageRecievedDelegate;                           // 0x0080(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected
		class FScriptMulticastDelegate                             HTTPResponseRecievedDelegate;                            // 0x0090(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected
		class UClass*                                              DebugWidgetClass;                                        // 0x00A0(0x0008) BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UD0J[0x10];                                  // 0x00A8(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              UserData;                                                // 0x00B8(0x0010) BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              TargetPipelineClass;                                     // 0x00C8(0x0008) BlueprintVisible, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_UXJ9[0x48];                                  // 0x00D0(0x0048) MISSED OFFSET (PADDING)

	public:
		void SetStatusProgress(float InProgress);
		void SetStatusMessage(const class FString& InStatus);
		void SetMoviePipelineClass(class UClass* InPipelineClass);
		bool SendSocketMessage(const class FString& InMessage);
		int32_t SendHTTPRequest(const class FString& InURL, const class FString& InVerb, const class FString& InMessage, TMap<class FString, class FString> InHeaders);
		void OnExecutorFinishedImpl();
		void OnExecutorErroredImpl(class UMoviePipeline* ErroredPipeline, bool bFatal, const class FText& ErrorReason);
		void OnBeginFrame();
		bool IsSocketConnected();
		bool IsRendering();
		float GetStatusProgress();
		class FString GetStatusMessage();
		void Execute(class UMoviePipelineQueue* InPipelineQueue);
		void DisconnectSocket();
		bool ConnectSocket(const class FString& InHostName, int32_t InPort);
		void CancelCurrentJob();
		void CancelAllJobs();
		static UClass* StaticClass();
	};

	/**
	 * Class MovieRenderPipelineCore.MoviePipelineFCPXMLExporter
	 * Size -> 0x0038 (FullSize[0x0080] - InheritedSize[0x0048])
	 */
	class UMoviePipelineFCPXMLExporter : public UMoviePipelineOutputBase
	{
	public:
		unsigned char                                              UnknownData_I67V[0x8];                                   // 0x0048(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              FileNameFormatOverride;                                  // 0x0050(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EFCPXMLExportDataSource                                    DataSource;                                              // 0x0060(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_W8YH[0x1F];                                  // 0x0061(0x001F) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieRenderPipelineCore.MoviePipelineGameOverrideSetting
	 * Size -> 0x00F8 (FullSize[0x0140] - InheritedSize[0x0048])
	 */
	class UMoviePipelineGameOverrideSetting : public UMoviePipelineSetting
	{
	public:
		class UClass*                                              GameModeOverride;                                        // 0x0048(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              AdditionalParameters;                                    // 0x0050(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCinematicQualitySettings;                               // 0x0060(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EMoviePipelineTextureStreamingMethod                       TextureStreaming;                                        // 0x0061(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseLODZero;                                             // 0x0062(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDisableHLODs;                                           // 0x0063(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseHighQualityShadows;                                  // 0x0064(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_I16T[0x3];                                   // 0x0065(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    ShadowDistanceScale;                                     // 0x0068(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ShadowRadiusThreshold;                                   // 0x006C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOverrideViewDistanceScale;                              // 0x0070(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Z990[0x3];                                   // 0x0071(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    ViewDistanceScale;                                       // 0x0074(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bFlushGrassStreaming;                                    // 0x0078(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bFlushStreamingManagers;                                 // 0x0079(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOverrideVirtualTextureFeedbackFactor;                   // 0x007A(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_W7ZH[0x1];                                   // 0x007B(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    VirtualTextureFeedbackFactor;                            // 0x007C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HZBA[0xC0];                                  // 0x0080(0x00C0) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieRenderPipelineCore.MoviePipelineLinearExecutorBase
	 * Size -> 0x0028 (FullSize[0x0140] - InheritedSize[0x0118])
	 */
	class UMoviePipelineLinearExecutorBase : public UMoviePipelineExecutorBase
	{
	public:
		class UMoviePipelineQueue*                                 Queue;                                                   // 0x0118(0x0008) ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UMoviePipeline*                                      ActiveMoviePipeline;                                     // 0x0120(0x0008) ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_DWQ3[0x18];                                  // 0x0128(0x0018) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieRenderPipelineCore.MoviePipelineInProcessExecutor
	 * Size -> 0x0050 (FullSize[0x0190] - InheritedSize[0x0140])
	 */
	class UMoviePipelineInProcessExecutor : public UMoviePipelineLinearExecutorBase
	{
	public:
		bool                                                       bUseCurrentLevel;                                        // 0x0140(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_D018[0x4F];                                  // 0x0141(0x004F) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieRenderPipelineCore.MoviePipelineOutputSetting
	 * Size -> 0x0068 (FullSize[0x00B0] - InheritedSize[0x0048])
	 */
	class UMoviePipelineOutputSetting : public UMoviePipelineSetting
	{
	public:
		struct FDirectoryPath                                      OutputDirectory;                                         // 0x0048(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              FileNameFormat;                                          // 0x0058(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FIntPoint                                           OutputResolution;                                        // 0x0068(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseCustomFrameRate;                                     // 0x0070(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ODQE[0x3];                                   // 0x0071(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FFrameRate                                          OutputFrameRate;                                         // 0x0074(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_63F9[0x4];                                   // 0x007C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bOverrideExistingOutput;                                 // 0x0080(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KFYK[0x3];                                   // 0x0081(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    HandleFrameCount;                                        // 0x0084(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    OutputFrameStep;                                         // 0x0088(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseCustomPlaybackRange;                                 // 0x008C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_V74C[0x3];                                   // 0x008D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    CustomStartFrame;                                        // 0x0090(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    CustomEndFrame;                                          // 0x0094(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    VersionNumber;                                           // 0x0098(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAutoVersion;                                            // 0x009C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8MB3[0x3];                                   // 0x009D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    ZeroPadFrameNumbers;                                     // 0x00A0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    FrameNumberOffset;                                       // 0x00A4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bFlushDiskWritesPerShot;                                 // 0x00A8(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6R2P[0x7];                                   // 0x00A9(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieRenderPipelineCore.MoviePipelinePrimaryConfig
	 * Size -> 0x0068 (FullSize[0x00E8] - InheritedSize[0x0080])
	 */
	class UMoviePipelinePrimaryConfig : public UMoviePipelineConfigBase
	{
	public:
		TMap<class FString, class UMoviePipelineShotConfig*>       PerShotConfigMapping;                                    // 0x0080(0x0050) ExportObject, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPublic
		class UMoviePipelineOutputSetting*                         OutputSetting;                                           // 0x00D0(0x0008) ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<class UMoviePipelineSetting*>                       TransientSettings;                                       // 0x00D8(0x0010) ZeroConstructor, Transient, UObjectWrapper, NativeAccessSpecifierPrivate

	public:
		void InitializeTransientSettings();
		TArray<class UMoviePipelineSetting*> GetTransientSettings();
		struct FFrameRate GetEffectiveFrameRate(class ULevelSequence* InSequence);
		TArray<class UMoviePipelineSetting*> GetAllSettings(bool bIncludeDisabledSettings, bool bIncludeTransientSettings);
		static UClass* StaticClass();
	};

	/**
	 * Class MovieRenderPipelineCore.MoviePipelinePythonHostExecutor
	 * Size -> 0x0018 (FullSize[0x0130] - InheritedSize[0x0118])
	 */
	class UMoviePipelinePythonHostExecutor : public UMoviePipelineExecutorBase
	{
	public:
		class UClass*                                              ExecutorClass;                                           // 0x0118(0x0008) BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMoviePipelineQueue*                                 PipelineQueue;                                           // 0x0120(0x0008) BlueprintVisible, ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UWorld*                                              LastLoadedWorld;                                         // 0x0128(0x0008) ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		void OnMapLoad(class UWorld* InWorld);
		class UWorld* GetLastLoadedWorld();
		void ExecuteDelayed(class UMoviePipelineQueue* InPipelineQueue);
		static UClass* StaticClass();
	};

	/**
	 * Class MovieRenderPipelineCore.MoviePipelineExecutorShot
	 * Size -> 0x0130 (FullSize[0x0158] - InheritedSize[0x0028])
	 */
	class UMoviePipelineExecutorShot : public UObject
	{
	public:
		bool                                                       bEnabled;                                                // 0x0028(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CW6T[0x7];                                   // 0x0029(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              OuterName;                                               // 0x0030(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              InnerName;                                               // 0x0040(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FMoviePipelineSidecarCamera>                 SidecarCameras;                                          // 0x0050(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AM8K[0xA8];                                  // 0x0060(0x00A8) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Progress;                                                // 0x0108(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_MO48[0x4];                                   // 0x010C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              StatusMessage;                                           // 0x0110(0x0010) ZeroConstructor, Transient, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UMoviePipelineShotConfig*                            ShotOverrideConfig;                                      // 0x0120(0x0008) ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              ShotOverridePresetOrigin[0x30];                          // 0x0128(0x0030) UNKNOWN PROPERTY: SoftObjectProperty

	public:
		bool ShouldRender();
		void SetStatusProgress(float InProgress);
		void SetStatusMessage(const class FString& InStatus);
		void SetShotOverridePresetOrigin(class UMoviePipelineShotConfig* InPreset);
		void SetShotOverrideConfiguration(class UMoviePipelineShotConfig* InPreset);
		float GetStatusProgress();
		class FString GetStatusMessage();
		class UMoviePipelineShotConfig* GetShotOverridePresetOrigin();
		class UMoviePipelineShotConfig* GetShotOverrideConfiguration();
		class FString GetCameraName(int32_t InCameraIndex);
		class UMoviePipelineShotConfig* AllocateNewShotOverrideConfig(class UClass* InConfigType);
		static UClass* StaticClass();
	};

	/**
	 * Class MovieRenderPipelineCore.MoviePipelineExecutorJob
	 * Size -> 0x00E8 (FullSize[0x0110] - InheritedSize[0x0028])
	 */
	class UMoviePipelineExecutorJob : public UObject
	{
	public:
		class FString                                              JobName;                                                 // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSoftObjectPath                                     Sequence;                                                // 0x0038(0x0020) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSoftObjectPath                                     Map;                                                     // 0x0058(0x0020) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Author;                                                  // 0x0078(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Comment;                                                 // 0x0088(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UMoviePipelineExecutorShot*>                  ShotInfo;                                                // 0x0098(0x0010) BlueprintVisible, ExportObject, ZeroConstructor, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPublic
		class FString                                              UserData;                                                // 0x00A8(0x0010) BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              StatusMessage;                                           // 0x00B8(0x0010) ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      StatusProgress;                                          // 0x00C8(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bIsConsumed;                                             // 0x00CC(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_LVBH[0x3];                                   // 0x00CD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMoviePipelinePrimaryConfig*                         Configuration;                                           // 0x00D0(0x0008) ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              PresetOrigin[0x30];                                      // 0x00D8(0x0030) UNKNOWN PROPERTY: SoftObjectProperty
		bool                                                       bEnabled;                                                // 0x0108(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_G0XA[0x7];                                   // 0x0109(0x0007) MISSED OFFSET (PADDING)

	public:
		void SetStatusProgress(float InProgress);
		void SetStatusMessage(const class FString& InStatus);
		void SetSequence(const struct FSoftObjectPath& InSequence);
		void SetPresetOrigin(class UMoviePipelinePrimaryConfig* InPreset);
		void SetIsEnabled(bool bInEnabled);
		void SetConsumed(bool bInConsumed);
		void SetConfiguration(class UMoviePipelinePrimaryConfig* InPreset);
		void OnDuplicated();
		bool IsEnabled();
		bool IsConsumed();
		float GetStatusProgress();
		class FString GetStatusMessage();
		class UMoviePipelinePrimaryConfig* GetPresetOrigin();
		class UMoviePipelinePrimaryConfig* GetConfiguration();
		static UClass* StaticClass();
	};

	/**
	 * Class MovieRenderPipelineCore.MoviePipelineQueue
	 * Size -> 0x0048 (FullSize[0x0070] - InheritedSize[0x0028])
	 */
	class UMoviePipelineQueue : public UObject
	{
	public:
		TArray<class UMoviePipelineExecutorJob*>                   Jobs;                                                    // 0x0028(0x0010) ExportObject, ZeroConstructor, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPrivate
		unsigned char                                              QueueOrigin[0x30];                                       // 0x0038(0x0030) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              UnknownData_O98Q[0x8];                                   // 0x0068(0x0008) MISSED OFFSET (PADDING)

	public:
		void SetQueueOrigin(class UMoviePipelineQueue* InConfig);
		void SetJobIndex(class UMoviePipelineExecutorJob* InJob, int32_t Index);
		class UMoviePipelineQueue* GetQueueOrigin();
		TArray<class UMoviePipelineExecutorJob*> GetJobs();
		class UMoviePipelineExecutorJob* DuplicateJob(class UMoviePipelineExecutorJob* InJob);
		void DeleteJob(class UMoviePipelineExecutorJob* InJob);
		void DeleteAllJobs();
		void CopyFrom(class UMoviePipelineQueue* InQueue);
		class UMoviePipelineExecutorJob* AllocateNewJob(class UClass* InJobType);
		static UClass* StaticClass();
	};

	/**
	 * Class MovieRenderPipelineCore.MoviePipelineQueueEngineSubsystem
	 * Size -> 0x0060 (FullSize[0x0090] - InheritedSize[0x0030])
	 */
	class UMoviePipelineQueueEngineSubsystem : public UEngineSubsystem
	{
	public:
		class FScriptMulticastDelegate                             OnRenderFinished;                                        // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class UMoviePipelineExecutorBase*                          ActiveExecutor;                                          // 0x0040(0x0008) ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UMoviePipelineQueue*                                 CurrentQueue;                                            // 0x0048(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_PJ35[0x40];                                  // 0x0050(0x0040) MISSED OFFSET (PADDING)

	public:
		void SetConfiguration(class UClass* InProgressWidgetClass, bool bRenderPlayerViewport);
		void RenderQueueWithExecutorInstance(class UMoviePipelineExecutorBase* InExecutor);
		class UMoviePipelineExecutorBase* RenderQueueWithExecutor(class UClass* InExecutorType);
		void RenderJob(class UMoviePipelineExecutorJob* InJob);
		bool IsRendering();
		class UMoviePipelineQueue* GetQueue();
		class UMoviePipelineExecutorBase* GetActiveExecutor();
		class UMoviePipelineExecutorJob* AllocateJob(class ULevelSequence* InSequence);
		static UClass* StaticClass();
	};

	/**
	 * Class MovieRenderPipelineCore.MoviePipelineRenderPass
	 * Size -> 0x0000 (FullSize[0x0048] - InheritedSize[0x0048])
	 */
	class UMoviePipelineRenderPass : public UMoviePipelineSetting
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieRenderPipelineCore.MoviePipelineShotConfig
	 * Size -> 0x0000 (FullSize[0x0080] - InheritedSize[0x0080])
	 */
	class UMoviePipelineShotConfig : public UMoviePipelineConfigBase
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieRenderPipelineCore.MoviePipelineVideoOutputBase
	 * Size -> 0x0048 (FullSize[0x0090] - InheritedSize[0x0048])
	 */
	class UMoviePipelineVideoOutputBase : public UMoviePipelineOutputBase
	{
	public:
		unsigned char                                              UnknownData_KIN2[0x48];                                  // 0x0048(0x0048) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
