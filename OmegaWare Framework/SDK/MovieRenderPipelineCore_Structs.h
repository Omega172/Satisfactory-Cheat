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
	 * Enum MovieRenderPipelineCore.EMoviePipelineEncodeQuality
	 */
	enum class EMoviePipelineEncodeQuality : uint8_t
	{
		Low    = 0,
		Medium = 1,
		High   = 2,
		Epic   = 3,
		MAX    = 4
	};

	/**
	 * Enum MovieRenderPipelineCore.FCPXMLExportDataSource
	 */
	enum class EFCPXMLExportDataSource : uint8_t
	{
		FCPXMLExportDataSourceOutputMetadata             = 0,
		FCPXMLExportDataSourceSequenceData               = 1,
		FCPXMLExportDataSourceFCPXMLExportDataSource_MAX = 2
	};

	/**
	 * Enum MovieRenderPipelineCore.EMoviePipelineTextureStreamingMethod
	 */
	enum class EMoviePipelineTextureStreamingMethod : uint8_t
	{
		None      = 0,
		Disabled  = 1,
		FullyLoad = 2,
		MAX       = 3
	};

	/**
	 * Enum MovieRenderPipelineCore.EMovieRenderPipelineState
	 */
	enum class EMovieRenderPipelineState : uint8_t
	{
		Uninitialized   = 0,
		ProducingFrames = 1,
		Finalize        = 2,
		Export          = 3,
		Finished        = 4,
		MAX             = 5
	};

	/**
	 * Enum MovieRenderPipelineCore.EMovieRenderShotState
	 */
	enum class EMovieRenderShotState : uint8_t
	{
		Uninitialized = 0,
		WarmingUp     = 1,
		MotionBlur    = 2,
		Rendering     = 3,
		Finished      = 4,
		MAX           = 5
	};

	/**
	 * Enum MovieRenderPipelineCore.EMoviePipelineShutterTiming
	 */
	enum class EMoviePipelineShutterTiming : uint8_t
	{
		FrameOpen   = 0,
		FrameCenter = 1,
		FrameClose  = 2,
		MAX         = 3
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct MovieRenderPipelineCore.MoviePipelineSidecarCamera
	 * Size -> 0x0028
	 */
	struct FMoviePipelineSidecarCamera
	{
	public:
		struct FGuid                                               BindingID;                                               // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3KX9[0x8];                                   // 0x0010(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Name;                                                    // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct MovieRenderPipelineCore.MoviePipelinePassIdentifier
	 * Size -> 0x0020
	 */
	struct FMoviePipelinePassIdentifier
	{
	public:
		class FString                                              Name;                                                    // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              CameraName;                                              // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct MovieRenderPipelineCore.MoviePipelineRenderPassOutputData
	 * Size -> 0x0010
	 */
	struct FMoviePipelineRenderPassOutputData
	{
	public:
		TArray<class FString>                                      FilePaths;                                               // 0x0000(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct MovieRenderPipelineCore.MoviePipelineShotOutputData
	 * Size -> 0x0058
	 */
	struct FMoviePipelineShotOutputData
	{
	public:
		TWeakObjectPtr<class UMoviePipelineExecutorShot>           Shot;                                                    // 0x0000(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TMap<struct FMoviePipelinePassIdentifier, struct FMoviePipelineRenderPassOutputData> RenderPassData;                                          // 0x0008(0x0050) Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct MovieRenderPipelineCore.MoviePipelineOutputData
	 * Size -> 0x0028
	 */
	struct FMoviePipelineOutputData
	{
	public:
		class UMoviePipeline*                                      Pipeline;                                                // 0x0000(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMoviePipelineExecutorJob*                           Job;                                                     // 0x0008(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSuccess;                                                // 0x0010(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6SAD[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FMoviePipelineShotOutputData>                ShotData;                                                // 0x0018(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct MovieRenderPipelineCore.MoviePipelineSegmentWorkMetrics
	 * Size -> 0x0028
	 */
	struct FMoviePipelineSegmentWorkMetrics
	{
	public:
		class FString                                              SegmentName;                                             // 0x0000(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    OutputFrameIndex;                                        // 0x0010(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    TotalOutputFrameCount;                                   // 0x0014(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    OutputSubSampleIndex;                                    // 0x0018(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    TotalSubSampleCount;                                     // 0x001C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    EngineWarmUpFrameIndex;                                  // 0x0020(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    TotalEngineWarmUpFrameCount;                             // 0x0024(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct MovieRenderPipelineCore.MoviePipelineCameraCutInfo
	 * Size -> 0x00A8
	 */
	struct FMoviePipelineCameraCutInfo
	{
	public:
		unsigned char                                              UnknownData_HDO7[0xA8];                                  // 0x0000(0x00A8) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct MovieRenderPipelineCore.MoviePipelineFormatArgs
	 * Size -> 0x00A8
	 */
	struct FMoviePipelineFormatArgs
	{
	public:
		TMap<class FString, class FString>                         FilenameArguments;                                       // 0x0000(0x0050) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		TMap<class FString, class FString>                         FileMetadata;                                            // 0x0050(0x0050) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		class UMoviePipelineExecutorJob*                           InJob;                                                   // 0x00A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct MovieRenderPipelineCore.MoviePipelineFilenameResolveParams
	 * Size -> 0x0118
	 */
	struct FMoviePipelineFilenameResolveParams
	{
	public:
		int32_t                                                    FrameNumber;                                             // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    FrameNumberShot;                                         // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    FrameNumberRel;                                          // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    FrameNumberShotRel;                                      // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              CameraNameOverride;                                      // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ShotNameOverride;                                        // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ZeroPadFrameNumberCount;                                 // 0x0030(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bForceRelativeFrameNumbers;                              // 0x0034(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_P257[0x3];                                   // 0x0035(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              FileNameOverride;                                        // 0x0038(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TMap<class FString, class FString>                         FileNameFormatOverrides;                                 // 0x0048(0x0050) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		TMap<class FString, class FString>                         FileMetadata;                                            // 0x0098(0x0050) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FDateTime                                           InitializationTime;                                      // 0x00E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    InitializationVersion;                                   // 0x00F0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UDBE[0x4];                                   // 0x00F4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMoviePipelineExecutorJob*                           Job;                                                     // 0x00F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UZGS[0x8];                                   // 0x0100(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMoviePipelineExecutorShot*                          ShotOverride;                                            // 0x0108(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    AdditionalFrameNumberOffset;                             // 0x0110(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LASC[0x4];                                   // 0x0114(0x0004) MISSED OFFSET (PADDING)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
