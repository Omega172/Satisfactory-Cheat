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
	// # Structs
	// --------------------------------------------------
	/**
	 * Function MovieRenderPipelineCore.MoviePipelineSetting.SetIsEnabled
	 */
	struct UMoviePipelineSetting_SetIsEnabled_Params
	{
	public:
		bool                                                       bInEnabled;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MovieRenderPipelineCore.MoviePipelineSetting.IsEnabled
	 */
	struct UMoviePipelineSetting_IsEnabled_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MovieRenderPipelineCore.MoviePipelineSetting.BuildNewProcessCommandLineArgs
	 */
	struct UMoviePipelineSetting_BuildNewProcessCommandLineArgs_Params
	{
	public:
		TArray<class FString>                                      InOutUnrealURLParams;                                    // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		TArray<class FString>                                      InOutCommandLineArgs;                                    // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		TArray<class FString>                                      InOutDeviceProfileCvars;                                 // 0x0020(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		TArray<class FString>                                      InOutExecCmds;                                           // 0x0030(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MovieRenderPipelineCore.MoviePipelineSetting.BuildNewProcessCommandLine
	 */
	struct UMoviePipelineSetting_BuildNewProcessCommandLine_Params
	{
	public:
		class FString                                              InOutUnrealURLParams;                                    // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              InOutCommandLineArgs;                                    // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MovieRenderPipelineCore.MoviePipelineSetting_BlueprintBase.ReceiveTeardownForPipelineImpl
	 */
	struct UMoviePipelineSetting_BlueprintBase_ReceiveTeardownForPipelineImpl_Params
	{
	public:
		class UMoviePipeline*                                      InPipeline;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MovieRenderPipelineCore.MoviePipelineSetting_BlueprintBase.ReceiveSetupForPipelineImpl
	 */
	struct UMoviePipelineSetting_BlueprintBase_ReceiveSetupForPipelineImpl_Params
	{
	public:
		class UMoviePipeline*                                      InPipeline;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MovieRenderPipelineCore.MoviePipelineSetting_BlueprintBase.ReceiveGetFormatArguments
	 */
	struct UMoviePipelineSetting_BlueprintBase_ReceiveGetFormatArguments_Params
	{
	public:
		struct FMoviePipelineFormatArgs                            InOutFormatArgs;                                         // 0x0000(0x00A8)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FMoviePipelineFormatArgs                            ReturnValue;                                             // 0x00A8(0x00A8)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MovieRenderPipelineCore.MoviePipelineSetting_BlueprintBase.OnEngineTickBeginFrame
	 */
	struct UMoviePipelineSetting_BlueprintBase_OnEngineTickBeginFrame_Params
	{	};

	/**
	 * Function MovieRenderPipelineCore.MovieRenderDebugWidget.OnInitializedForPipeline
	 */
	struct UMovieRenderDebugWidget_OnInitializedForPipeline_Params
	{
	public:
		class UMoviePipeline*                                      ForPipeline;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MovieRenderPipelineCore.MoviePipeline.Shutdown
	 */
	struct UMoviePipeline_Shutdown_Params
	{
	public:
		bool                                                       bError;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MovieRenderPipelineCore.MoviePipeline.SetInitializationTime
	 */
	struct UMoviePipeline_SetInitializationTime_Params
	{
	public:
		struct FDateTime                                           InDateTime;                                              // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MovieRenderPipelineCore.MoviePipeline.RequestShutdown
	 */
	struct UMoviePipeline_RequestShutdown_Params
	{
	public:
		bool                                                       bIsError;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MovieRenderPipelineCore.MoviePipeline.OnMoviePipelineFinishedImpl
	 */
	struct UMoviePipeline_OnMoviePipelineFinishedImpl_Params
	{	};

	/**
	 * Function MovieRenderPipelineCore.MoviePipeline.IsShutdownRequested
	 */
	struct UMoviePipeline_IsShutdownRequested_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MovieRenderPipelineCore.MoviePipeline.Initialize
	 */
	struct UMoviePipeline_Initialize_Params
	{
	public:
		class UMoviePipelineExecutorJob*                           InJob;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MovieRenderPipelineCore.MoviePipeline.GetPreviewTexture
	 */
	struct UMoviePipeline_GetPreviewTexture_Params
	{
	public:
		class UTexture*                                            ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MovieRenderPipelineCore.MoviePipeline.GetPipelinePrimaryConfig
	 */
	struct UMoviePipeline_GetPipelinePrimaryConfig_Params
	{
	public:
		class UMoviePipelinePrimaryConfig*                         ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MovieRenderPipelineCore.MoviePipeline.GetPipelineMasterConfig
	 */
	struct UMoviePipeline_GetPipelineMasterConfig_Params
	{
	public:
		class UMoviePipelinePrimaryConfig*                         ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MovieRenderPipelineCore.MoviePipeline.GetInitializationTime
	 */
	struct UMoviePipeline_GetInitializationTime_Params
	{
	public:
		struct FDateTime                                           ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MovieRenderPipelineCore.MoviePipeline.GetCurrentJob
	 */
	struct UMoviePipeline_GetCurrentJob_Params
	{
	public:
		class UMoviePipelineExecutorJob*                           ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.UpdateJobShotListFromSequence
	 */
	struct UMoviePipelineBlueprintLibrary_UpdateJobShotListFromSequence_Params
	{
	public:
		class ULevelSequence*                                      InSequence;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UMoviePipelineExecutorJob*                           InJob;                                                   // 0x0008(0x0008)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bShotsChanged;                                           // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.ResolveVersionNumber
	 */
	struct UMoviePipelineBlueprintLibrary_ResolveVersionNumber_Params
	{
	public:
		struct FMoviePipelineFilenameResolveParams                 InParams;                                                // 0x0000(0x0118)  (Parm, NativeAccessSpecifierPublic)
		bool                                                       bGetNextVersion;                                         // 0x0118(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_0DH6[0x3];                                   // 0x0119(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ReturnValue;                                             // 0x011C(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.ResolveFilenameFormatArguments
	 */
	struct UMoviePipelineBlueprintLibrary_ResolveFilenameFormatArguments_Params
	{
	public:
		class FString                                              InFormatString;                                          // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FMoviePipelineFilenameResolveParams                 InParams;                                                // 0x0010(0x0118)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              OutFinalPath;                                            // 0x0128(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FMoviePipelineFormatArgs                            OutMergedFormatArgs;                                     // 0x0138(0x00A8)  (Parm, OutParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.LoadManifestFileFromString
	 */
	struct UMoviePipelineBlueprintLibrary_LoadManifestFileFromString_Params
	{
	public:
		class FString                                              InManifestFilePath;                                      // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UMoviePipelineQueue*                                 ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetRootTimecode
	 */
	struct UMoviePipelineBlueprintLibrary_GetRootTimecode_Params
	{
	public:
		class UMoviePipeline*                                      InMoviePipeline;                                         // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FTimecode                                           ReturnValue;                                             // 0x0008(0x0014)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetRootFrameNumber
	 */
	struct UMoviePipelineBlueprintLibrary_GetRootFrameNumber_Params
	{
	public:
		class UMoviePipeline*                                      InMoviePipeline;                                         // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FFrameNumber                                        ReturnValue;                                             // 0x0008(0x0004)  (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetPipelineState
	 */
	struct UMoviePipelineBlueprintLibrary_GetPipelineState_Params
	{
	public:
		class UMoviePipeline*                                      InPipeline;                                              // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EMovieRenderPipelineState                                  ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetOverallSegmentCounts
	 */
	struct UMoviePipelineBlueprintLibrary_GetOverallSegmentCounts_Params
	{
	public:
		class UMoviePipeline*                                      InMoviePipeline;                                         // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    OutCurrentIndex;                                         // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    OutTotalCount;                                           // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetOverallOutputFrames
	 */
	struct UMoviePipelineBlueprintLibrary_GetOverallOutputFrames_Params
	{
	public:
		class UMoviePipeline*                                      InMoviePipeline;                                         // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    OutCurrentIndex;                                         // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    OutTotalCount;                                           // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetMoviePipelineEngineChangelistLabel
	 */
	struct UMoviePipelineBlueprintLibrary_GetMoviePipelineEngineChangelistLabel_Params
	{
	public:
		class UMoviePipeline*                                      InMoviePipeline;                                         // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FText                                                ReturnValue;                                             // 0x0008(0x0018)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetMasterTimecode
	 */
	struct UMoviePipelineBlueprintLibrary_GetMasterTimecode_Params
	{
	public:
		class UMoviePipeline*                                      InMoviePipeline;                                         // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FTimecode                                           ReturnValue;                                             // 0x0008(0x0014)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetMasterFrameNumber
	 */
	struct UMoviePipelineBlueprintLibrary_GetMasterFrameNumber_Params
	{
	public:
		class UMoviePipeline*                                      InMoviePipeline;                                         // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FFrameNumber                                        ReturnValue;                                             // 0x0008(0x0004)  (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetMapPackageName
	 */
	struct UMoviePipelineBlueprintLibrary_GetMapPackageName_Params
	{
	public:
		class UMoviePipelineExecutorJob*                           InJob;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetJobName
	 */
	struct UMoviePipelineBlueprintLibrary_GetJobName_Params
	{
	public:
		class UMoviePipeline*                                      InMoviePipeline;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FText                                                ReturnValue;                                             // 0x0008(0x0018)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetJobInitializationTime
	 */
	struct UMoviePipelineBlueprintLibrary_GetJobInitializationTime_Params
	{
	public:
		class UMoviePipeline*                                      InMoviePipeline;                                         // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FDateTime                                           ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetJobAuthor
	 */
	struct UMoviePipelineBlueprintLibrary_GetJobAuthor_Params
	{
	public:
		class UMoviePipeline*                                      InMoviePipeline;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FText                                                ReturnValue;                                             // 0x0008(0x0018)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetEstimatedTimeRemaining
	 */
	struct UMoviePipelineBlueprintLibrary_GetEstimatedTimeRemaining_Params
	{
	public:
		class UMoviePipeline*                                      InPipeline;                                              // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FTimespan                                           OutEstimate;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetEffectiveOutputResolution
	 */
	struct UMoviePipelineBlueprintLibrary_GetEffectiveOutputResolution_Params
	{
	public:
		class UMoviePipelinePrimaryConfig*                         InPrimaryConfig;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UMoviePipelineExecutorShot*                          InPipelineExecutorShot;                                  // 0x0008(0x0008)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FIntPoint                                           ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetCurrentShotTimecode
	 */
	struct UMoviePipelineBlueprintLibrary_GetCurrentShotTimecode_Params
	{
	public:
		class UMoviePipeline*                                      InMoviePipeline;                                         // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FTimecode                                           ReturnValue;                                             // 0x0008(0x0014)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetCurrentShotFrameNumber
	 */
	struct UMoviePipelineBlueprintLibrary_GetCurrentShotFrameNumber_Params
	{
	public:
		class UMoviePipeline*                                      InMoviePipeline;                                         // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FFrameNumber                                        ReturnValue;                                             // 0x0008(0x0004)  (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetCurrentSequence
	 */
	struct UMoviePipelineBlueprintLibrary_GetCurrentSequence_Params
	{
	public:
		class UMoviePipeline*                                      InMoviePipeline;                                         // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class ULevelSequence*                                      ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetCurrentSegmentWorkMetrics
	 */
	struct UMoviePipelineBlueprintLibrary_GetCurrentSegmentWorkMetrics_Params
	{
	public:
		class UMoviePipeline*                                      InMoviePipeline;                                         // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FMoviePipelineSegmentWorkMetrics                    ReturnValue;                                             // 0x0008(0x0028)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetCurrentSegmentState
	 */
	struct UMoviePipelineBlueprintLibrary_GetCurrentSegmentState_Params
	{
	public:
		class UMoviePipeline*                                      InMoviePipeline;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EMovieRenderShotState                                      ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetCurrentSegmentName
	 */
	struct UMoviePipelineBlueprintLibrary_GetCurrentSegmentName_Params
	{
	public:
		class UMoviePipeline*                                      InMoviePipeline;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FText                                                OutOuterName;                                            // 0x0008(0x0018)  (Parm, OutParm, NativeAccessSpecifierPublic)
		class FText                                                OutInnerName;                                            // 0x0020(0x0018)  (Parm, OutParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetCurrentFocusDistance
	 */
	struct UMoviePipelineBlueprintLibrary_GetCurrentFocusDistance_Params
	{
	public:
		class UMoviePipeline*                                      InMoviePipeline;                                         // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetCurrentFocalLength
	 */
	struct UMoviePipelineBlueprintLibrary_GetCurrentFocalLength_Params
	{
	public:
		class UMoviePipeline*                                      InMoviePipeline;                                         // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetCurrentExecutorShot
	 */
	struct UMoviePipelineBlueprintLibrary_GetCurrentExecutorShot_Params
	{
	public:
		class UMoviePipeline*                                      InMoviePipeline;                                         // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UMoviePipelineExecutorShot*                          ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetCurrentAperture
	 */
	struct UMoviePipelineBlueprintLibrary_GetCurrentAperture_Params
	{
	public:
		class UMoviePipeline*                                      InMoviePipeline;                                         // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetCompletionPercentage
	 */
	struct UMoviePipelineBlueprintLibrary_GetCompletionPercentage_Params
	{
	public:
		class UMoviePipeline*                                      InPipeline;                                              // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.FindOrGetDefaultSettingForShot
	 */
	struct UMoviePipelineBlueprintLibrary_FindOrGetDefaultSettingForShot_Params
	{
	public:
		class UClass*                                              InSettingType;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UMoviePipelinePrimaryConfig*                         InPrimaryConfig;                                         // 0x0008(0x0008)  (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UMoviePipelineExecutorShot*                          InShot;                                                  // 0x0010(0x0008)  (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UMoviePipelineSetting*                               ReturnValue;                                             // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.DuplicateSequence
	 */
	struct UMoviePipelineBlueprintLibrary_DuplicateSequence_Params
	{
	public:
		class UObject*                                             Outer;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UMovieSceneSequence*                                 InSequence;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UMovieSceneSequence*                                 ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MovieRenderPipelineCore.MoviePipelineConfigBase.SetConfigOrigin
	 */
	struct UMoviePipelineConfigBase_SetConfigOrigin_Params
	{
	public:
		class UMoviePipelineConfigBase*                            InConfig;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MovieRenderPipelineCore.MoviePipelineConfigBase.RemoveSetting
	 */
	struct UMoviePipelineConfigBase_RemoveSetting_Params
	{
	public:
		class UMoviePipelineSetting*                               InSetting;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MovieRenderPipelineCore.MoviePipelineConfigBase.GetUserSettings
	 */
	struct UMoviePipelineConfigBase_GetUserSettings_Params
	{
	public:
		TArray<class UMoviePipelineSetting*>                       ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MovieRenderPipelineCore.MoviePipelineConfigBase.GetConfigOrigin
	 */
	struct UMoviePipelineConfigBase_GetConfigOrigin_Params
	{
	public:
		class UMoviePipelineConfigBase*                            ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MovieRenderPipelineCore.MoviePipelineConfigBase.FindSettingsByClass
	 */
	struct UMoviePipelineConfigBase_FindSettingsByClass_Params
	{
	public:
		class UClass*                                              InClass;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bIncludeDisabledSettings;                                // 0x0008(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bExactMatch;                                             // 0x0009(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_4LKH[0x6];                                   // 0x000A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<class UMoviePipelineSetting*>                       ReturnValue;                                             // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MovieRenderPipelineCore.MoviePipelineConfigBase.FindSettingByClass
	 */
	struct UMoviePipelineConfigBase_FindSettingByClass_Params
	{
	public:
		class UClass*                                              InClass;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bIncludeDisabledSettings;                                // 0x0008(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bExactMatch;                                             // 0x0009(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_IRL3[0x6];                                   // 0x000A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UMoviePipelineSetting*                               ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MovieRenderPipelineCore.MoviePipelineConfigBase.FindOrAddSettingByClass
	 */
	struct UMoviePipelineConfigBase_FindOrAddSettingByClass_Params
	{
	public:
		class UClass*                                              InClass;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bIncludeDisabledSettings;                                // 0x0008(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bExactMatch;                                             // 0x0009(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_9LME[0x6];                                   // 0x000A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UMoviePipelineSetting*                               ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MovieRenderPipelineCore.MoviePipelineConfigBase.CopyFrom
	 */
	struct UMoviePipelineConfigBase_CopyFrom_Params
	{
	public:
		class UMoviePipelineConfigBase*                            InConfig;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MovieRenderPipelineCore.MoviePipelineExecutorBase.SetStatusProgress
	 */
	struct UMoviePipelineExecutorBase_SetStatusProgress_Params
	{
	public:
		float                                                      InProgress;                                              // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MovieRenderPipelineCore.MoviePipelineExecutorBase.SetStatusMessage
	 */
	struct UMoviePipelineExecutorBase_SetStatusMessage_Params
	{
	public:
		class FString                                              InStatus;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MovieRenderPipelineCore.MoviePipelineExecutorBase.SetMoviePipelineClass
	 */
	struct UMoviePipelineExecutorBase_SetMoviePipelineClass_Params
	{
	public:
		class UClass*                                              InPipelineClass;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MovieRenderPipelineCore.MoviePipelineExecutorBase.SendSocketMessage
	 */
	struct UMoviePipelineExecutorBase_SendSocketMessage_Params
	{
	public:
		class FString                                              InMessage;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MovieRenderPipelineCore.MoviePipelineExecutorBase.SendHTTPRequest
	 */
	struct UMoviePipelineExecutorBase_SendHTTPRequest_Params
	{
	public:
		class FString                                              InURL;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              InVerb;                                                  // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              InMessage;                                               // 0x0020(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TMap<class FString, class FString>                         InHeaders;                                               // 0x0030(0x0050)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0080(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MovieRenderPipelineCore.MoviePipelineExecutorBase.OnExecutorFinishedImpl
	 */
	struct UMoviePipelineExecutorBase_OnExecutorFinishedImpl_Params
	{	};

	/**
	 * Function MovieRenderPipelineCore.MoviePipelineExecutorBase.OnExecutorErroredImpl
	 */
	struct UMoviePipelineExecutorBase_OnExecutorErroredImpl_Params
	{
	public:
		class UMoviePipeline*                                      ErroredPipeline;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bFatal;                                                  // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_EGLF[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FText                                                ErrorReason;                                             // 0x0010(0x0018)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MovieRenderPipelineCore.MoviePipelineExecutorBase.OnBeginFrame
	 */
	struct UMoviePipelineExecutorBase_OnBeginFrame_Params
	{	};

	/**
	 * Function MovieRenderPipelineCore.MoviePipelineExecutorBase.IsSocketConnected
	 */
	struct UMoviePipelineExecutorBase_IsSocketConnected_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MovieRenderPipelineCore.MoviePipelineExecutorBase.IsRendering
	 */
	struct UMoviePipelineExecutorBase_IsRendering_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MovieRenderPipelineCore.MoviePipelineExecutorBase.GetStatusProgress
	 */
	struct UMoviePipelineExecutorBase_GetStatusProgress_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MovieRenderPipelineCore.MoviePipelineExecutorBase.GetStatusMessage
	 */
	struct UMoviePipelineExecutorBase_GetStatusMessage_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MovieRenderPipelineCore.MoviePipelineExecutorBase.Execute
	 */
	struct UMoviePipelineExecutorBase_Execute_Params
	{
	public:
		class UMoviePipelineQueue*                                 InPipelineQueue;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MovieRenderPipelineCore.MoviePipelineExecutorBase.DisconnectSocket
	 */
	struct UMoviePipelineExecutorBase_DisconnectSocket_Params
	{	};

	/**
	 * Function MovieRenderPipelineCore.MoviePipelineExecutorBase.ConnectSocket
	 */
	struct UMoviePipelineExecutorBase_ConnectSocket_Params
	{
	public:
		class FString                                              InHostName;                                              // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    InPort;                                                  // 0x0010(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0014(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MovieRenderPipelineCore.MoviePipelineExecutorBase.CancelCurrentJob
	 */
	struct UMoviePipelineExecutorBase_CancelCurrentJob_Params
	{	};

	/**
	 * Function MovieRenderPipelineCore.MoviePipelineExecutorBase.CancelAllJobs
	 */
	struct UMoviePipelineExecutorBase_CancelAllJobs_Params
	{	};

	/**
	 * Function MovieRenderPipelineCore.MoviePipelinePrimaryConfig.InitializeTransientSettings
	 */
	struct UMoviePipelinePrimaryConfig_InitializeTransientSettings_Params
	{	};

	/**
	 * Function MovieRenderPipelineCore.MoviePipelinePrimaryConfig.GetTransientSettings
	 */
	struct UMoviePipelinePrimaryConfig_GetTransientSettings_Params
	{
	public:
		TArray<class UMoviePipelineSetting*>                       ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MovieRenderPipelineCore.MoviePipelinePrimaryConfig.GetEffectiveFrameRate
	 */
	struct UMoviePipelinePrimaryConfig_GetEffectiveFrameRate_Params
	{
	public:
		class ULevelSequence*                                      InSequence;                                              // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FFrameRate                                          ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MovieRenderPipelineCore.MoviePipelinePrimaryConfig.GetAllSettings
	 */
	struct UMoviePipelinePrimaryConfig_GetAllSettings_Params
	{
	public:
		bool                                                       bIncludeDisabledSettings;                                // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bIncludeTransientSettings;                               // 0x0001(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_TZ7A[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<class UMoviePipelineSetting*>                       ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MovieRenderPipelineCore.MoviePipelinePythonHostExecutor.OnMapLoad
	 */
	struct UMoviePipelinePythonHostExecutor_OnMapLoad_Params
	{
	public:
		class UWorld*                                              InWorld;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MovieRenderPipelineCore.MoviePipelinePythonHostExecutor.GetLastLoadedWorld
	 */
	struct UMoviePipelinePythonHostExecutor_GetLastLoadedWorld_Params
	{
	public:
		class UWorld*                                              ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MovieRenderPipelineCore.MoviePipelinePythonHostExecutor.ExecuteDelayed
	 */
	struct UMoviePipelinePythonHostExecutor_ExecuteDelayed_Params
	{
	public:
		class UMoviePipelineQueue*                                 InPipelineQueue;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MovieRenderPipelineCore.MoviePipelineExecutorShot.ShouldRender
	 */
	struct UMoviePipelineExecutorShot_ShouldRender_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MovieRenderPipelineCore.MoviePipelineExecutorShot.SetStatusProgress
	 */
	struct UMoviePipelineExecutorShot_SetStatusProgress_Params
	{
	public:
		float                                                      InProgress;                                              // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MovieRenderPipelineCore.MoviePipelineExecutorShot.SetStatusMessage
	 */
	struct UMoviePipelineExecutorShot_SetStatusMessage_Params
	{
	public:
		class FString                                              InStatus;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MovieRenderPipelineCore.MoviePipelineExecutorShot.SetShotOverridePresetOrigin
	 */
	struct UMoviePipelineExecutorShot_SetShotOverridePresetOrigin_Params
	{
	public:
		class UMoviePipelineShotConfig*                            InPreset;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MovieRenderPipelineCore.MoviePipelineExecutorShot.SetShotOverrideConfiguration
	 */
	struct UMoviePipelineExecutorShot_SetShotOverrideConfiguration_Params
	{
	public:
		class UMoviePipelineShotConfig*                            InPreset;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MovieRenderPipelineCore.MoviePipelineExecutorShot.GetStatusProgress
	 */
	struct UMoviePipelineExecutorShot_GetStatusProgress_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MovieRenderPipelineCore.MoviePipelineExecutorShot.GetStatusMessage
	 */
	struct UMoviePipelineExecutorShot_GetStatusMessage_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MovieRenderPipelineCore.MoviePipelineExecutorShot.GetShotOverridePresetOrigin
	 */
	struct UMoviePipelineExecutorShot_GetShotOverridePresetOrigin_Params
	{
	public:
		class UMoviePipelineShotConfig*                            ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MovieRenderPipelineCore.MoviePipelineExecutorShot.GetShotOverrideConfiguration
	 */
	struct UMoviePipelineExecutorShot_GetShotOverrideConfiguration_Params
	{
	public:
		class UMoviePipelineShotConfig*                            ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MovieRenderPipelineCore.MoviePipelineExecutorShot.GetCameraName
	 */
	struct UMoviePipelineExecutorShot_GetCameraName_Params
	{
	public:
		int32_t                                                    InCameraIndex;                                           // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_A0XD[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MovieRenderPipelineCore.MoviePipelineExecutorShot.AllocateNewShotOverrideConfig
	 */
	struct UMoviePipelineExecutorShot_AllocateNewShotOverrideConfig_Params
	{
	public:
		class UClass*                                              InConfigType;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UMoviePipelineShotConfig*                            ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MovieRenderPipelineCore.MoviePipelineExecutorJob.SetStatusProgress
	 */
	struct UMoviePipelineExecutorJob_SetStatusProgress_Params
	{
	public:
		float                                                      InProgress;                                              // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MovieRenderPipelineCore.MoviePipelineExecutorJob.SetStatusMessage
	 */
	struct UMoviePipelineExecutorJob_SetStatusMessage_Params
	{
	public:
		class FString                                              InStatus;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MovieRenderPipelineCore.MoviePipelineExecutorJob.SetSequence
	 */
	struct UMoviePipelineExecutorJob_SetSequence_Params
	{
	public:
		struct FSoftObjectPath                                     InSequence;                                              // 0x0000(0x0020)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MovieRenderPipelineCore.MoviePipelineExecutorJob.SetPresetOrigin
	 */
	struct UMoviePipelineExecutorJob_SetPresetOrigin_Params
	{
	public:
		class UMoviePipelinePrimaryConfig*                         InPreset;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MovieRenderPipelineCore.MoviePipelineExecutorJob.SetIsEnabled
	 */
	struct UMoviePipelineExecutorJob_SetIsEnabled_Params
	{
	public:
		bool                                                       bInEnabled;                                              // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MovieRenderPipelineCore.MoviePipelineExecutorJob.SetConsumed
	 */
	struct UMoviePipelineExecutorJob_SetConsumed_Params
	{
	public:
		bool                                                       bInConsumed;                                             // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MovieRenderPipelineCore.MoviePipelineExecutorJob.SetConfiguration
	 */
	struct UMoviePipelineExecutorJob_SetConfiguration_Params
	{
	public:
		class UMoviePipelinePrimaryConfig*                         InPreset;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MovieRenderPipelineCore.MoviePipelineExecutorJob.OnDuplicated
	 */
	struct UMoviePipelineExecutorJob_OnDuplicated_Params
	{	};

	/**
	 * Function MovieRenderPipelineCore.MoviePipelineExecutorJob.IsEnabled
	 */
	struct UMoviePipelineExecutorJob_IsEnabled_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MovieRenderPipelineCore.MoviePipelineExecutorJob.IsConsumed
	 */
	struct UMoviePipelineExecutorJob_IsConsumed_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MovieRenderPipelineCore.MoviePipelineExecutorJob.GetStatusProgress
	 */
	struct UMoviePipelineExecutorJob_GetStatusProgress_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MovieRenderPipelineCore.MoviePipelineExecutorJob.GetStatusMessage
	 */
	struct UMoviePipelineExecutorJob_GetStatusMessage_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MovieRenderPipelineCore.MoviePipelineExecutorJob.GetPresetOrigin
	 */
	struct UMoviePipelineExecutorJob_GetPresetOrigin_Params
	{
	public:
		class UMoviePipelinePrimaryConfig*                         ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MovieRenderPipelineCore.MoviePipelineExecutorJob.GetConfiguration
	 */
	struct UMoviePipelineExecutorJob_GetConfiguration_Params
	{
	public:
		class UMoviePipelinePrimaryConfig*                         ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MovieRenderPipelineCore.MoviePipelineQueue.SetQueueOrigin
	 */
	struct UMoviePipelineQueue_SetQueueOrigin_Params
	{
	public:
		class UMoviePipelineQueue*                                 InConfig;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MovieRenderPipelineCore.MoviePipelineQueue.SetJobIndex
	 */
	struct UMoviePipelineQueue_SetJobIndex_Params
	{
	public:
		class UMoviePipelineExecutorJob*                           InJob;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Index;                                                   // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MovieRenderPipelineCore.MoviePipelineQueue.GetQueueOrigin
	 */
	struct UMoviePipelineQueue_GetQueueOrigin_Params
	{
	public:
		class UMoviePipelineQueue*                                 ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MovieRenderPipelineCore.MoviePipelineQueue.GetJobs
	 */
	struct UMoviePipelineQueue_GetJobs_Params
	{
	public:
		TArray<class UMoviePipelineExecutorJob*>                   ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MovieRenderPipelineCore.MoviePipelineQueue.DuplicateJob
	 */
	struct UMoviePipelineQueue_DuplicateJob_Params
	{
	public:
		class UMoviePipelineExecutorJob*                           InJob;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UMoviePipelineExecutorJob*                           ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MovieRenderPipelineCore.MoviePipelineQueue.DeleteJob
	 */
	struct UMoviePipelineQueue_DeleteJob_Params
	{
	public:
		class UMoviePipelineExecutorJob*                           InJob;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MovieRenderPipelineCore.MoviePipelineQueue.DeleteAllJobs
	 */
	struct UMoviePipelineQueue_DeleteAllJobs_Params
	{	};

	/**
	 * Function MovieRenderPipelineCore.MoviePipelineQueue.CopyFrom
	 */
	struct UMoviePipelineQueue_CopyFrom_Params
	{
	public:
		class UMoviePipelineQueue*                                 InQueue;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MovieRenderPipelineCore.MoviePipelineQueue.AllocateNewJob
	 */
	struct UMoviePipelineQueue_AllocateNewJob_Params
	{
	public:
		class UClass*                                              InJobType;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UMoviePipelineExecutorJob*                           ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MovieRenderPipelineCore.MoviePipelineQueueEngineSubsystem.SetConfiguration
	 */
	struct UMoviePipelineQueueEngineSubsystem_SetConfiguration_Params
	{
	public:
		class UClass*                                              InProgressWidgetClass;                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bRenderPlayerViewport;                                   // 0x0008(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MovieRenderPipelineCore.MoviePipelineQueueEngineSubsystem.RenderQueueWithExecutorInstance
	 */
	struct UMoviePipelineQueueEngineSubsystem_RenderQueueWithExecutorInstance_Params
	{
	public:
		class UMoviePipelineExecutorBase*                          InExecutor;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MovieRenderPipelineCore.MoviePipelineQueueEngineSubsystem.RenderQueueWithExecutor
	 */
	struct UMoviePipelineQueueEngineSubsystem_RenderQueueWithExecutor_Params
	{
	public:
		class UClass*                                              InExecutorType;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UMoviePipelineExecutorBase*                          ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MovieRenderPipelineCore.MoviePipelineQueueEngineSubsystem.RenderJob
	 */
	struct UMoviePipelineQueueEngineSubsystem_RenderJob_Params
	{
	public:
		class UMoviePipelineExecutorJob*                           InJob;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MovieRenderPipelineCore.MoviePipelineQueueEngineSubsystem.IsRendering
	 */
	struct UMoviePipelineQueueEngineSubsystem_IsRendering_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MovieRenderPipelineCore.MoviePipelineQueueEngineSubsystem.GetQueue
	 */
	struct UMoviePipelineQueueEngineSubsystem_GetQueue_Params
	{
	public:
		class UMoviePipelineQueue*                                 ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MovieRenderPipelineCore.MoviePipelineQueueEngineSubsystem.GetActiveExecutor
	 */
	struct UMoviePipelineQueueEngineSubsystem_GetActiveExecutor_Params
	{
	public:
		class UMoviePipelineExecutorBase*                          ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MovieRenderPipelineCore.MoviePipelineQueueEngineSubsystem.AllocateJob
	 */
	struct UMoviePipelineQueueEngineSubsystem_AllocateJob_Params
	{
	public:
		class ULevelSequence*                                      InSequence;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UMoviePipelineExecutorJob*                           ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
