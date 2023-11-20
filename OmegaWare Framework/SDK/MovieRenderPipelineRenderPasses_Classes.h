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
	 * Class MovieRenderPipelineRenderPasses.MoviePipelineImagePassBase
	 * Size -> 0x0130 (FullSize[0x0178] - InheritedSize[0x0048])
	 */
	class UMoviePipelineImagePassBase : public UMoviePipelineRenderPass
	{
	public:
		unsigned char                                              UnknownData_1OYY[0x130];                                 // 0x0048(0x0130) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieRenderPipelineRenderPasses.MoviePipelineDeferredPassBase
	 * Size -> 0x00C0 (FullSize[0x0238] - InheritedSize[0x0178])
	 */
	class UMoviePipelineDeferredPassBase : public UMoviePipelineImagePassBase
	{
	public:
		bool                                                       bAccumulatorIncludesAlpha;                               // 0x0178(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDisableMultisampleEffects;                              // 0x0179(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUse32BitPostProcessMaterials;                           // 0x017A(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6E4E[0x5];                                   // 0x017B(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FMoviePipelinePostProcessPass>               AdditionalPostProcessMaterials;                          // 0x0180(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       bRenderMainPass;                                         // 0x0190(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAddDefaultLayer;                                        // 0x0191(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_J16N[0x6];                                   // 0x0192(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FActorLayer>                                 ActorLayers;                                             // 0x0198(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5YYQ[0x10];                                  // 0x01A8(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FSoftObjectPath>                             DataLayers;                                              // 0x01B8(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class UMaterialInterface*>                          ActivePostProcessMaterials;                              // 0x01C8(0x0010) ZeroConstructor, Transient, DuplicateTransient, Protected, UObjectWrapper, NativeAccessSpecifierProtected
		class UMaterialInterface*                                  StencilLayerMaterial;                                    // 0x01D8(0x0008) ZeroConstructor, Transient, DuplicateTransient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_KDBD[0x58];                                  // 0x01E0(0x0058) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieRenderPipelineRenderPasses.MoviePipelineDeferredPass_Unlit
	 * Size -> 0x0000 (FullSize[0x0238] - InheritedSize[0x0238])
	 */
	class UMoviePipelineDeferredPass_Unlit : public UMoviePipelineDeferredPassBase
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieRenderPipelineRenderPasses.MoviePipelineDeferredPass_DetailLighting
	 * Size -> 0x0000 (FullSize[0x0238] - InheritedSize[0x0238])
	 */
	class UMoviePipelineDeferredPass_DetailLighting : public UMoviePipelineDeferredPassBase
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieRenderPipelineRenderPasses.MoviePipelineDeferredPass_LightingOnly
	 * Size -> 0x0000 (FullSize[0x0238] - InheritedSize[0x0238])
	 */
	class UMoviePipelineDeferredPass_LightingOnly : public UMoviePipelineDeferredPassBase
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieRenderPipelineRenderPasses.MoviePipelineDeferredPass_ReflectionsOnly
	 * Size -> 0x0000 (FullSize[0x0238] - InheritedSize[0x0238])
	 */
	class UMoviePipelineDeferredPass_ReflectionsOnly : public UMoviePipelineDeferredPassBase
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieRenderPipelineRenderPasses.MoviePipelineDeferredPass_PathTracer
	 * Size -> 0x0008 (FullSize[0x0240] - InheritedSize[0x0238])
	 */
	class UMoviePipelineDeferredPass_PathTracer : public UMoviePipelineDeferredPassBase
	{
	public:
		bool                                                       bReferenceMotionBlur;                                    // 0x0238(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0SBX[0x7];                                   // 0x0239(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieRenderPipelineRenderPasses.MoviePipelineImageSequenceOutputBase
	 * Size -> 0x0020 (FullSize[0x0068] - InheritedSize[0x0048])
	 */
	class UMoviePipelineImageSequenceOutputBase : public UMoviePipelineOutputBase
	{
	public:
		unsigned char                                              UnknownData_GNLS[0x20];                                  // 0x0048(0x0020) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieRenderPipelineRenderPasses.MoviePipelineImageSequenceOutput_EXR
	 * Size -> 0x0008 (FullSize[0x0070] - InheritedSize[0x0068])
	 */
	class UMoviePipelineImageSequenceOutput_EXR : public UMoviePipelineImageSequenceOutputBase
	{
	public:
		EEXRCompressionFormat                                      Compression;                                             // 0x0068(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bMultilayer;                                             // 0x0069(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PUM7[0x6];                                   // 0x006A(0x0006) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieRenderPipelineRenderPasses.MoviePipelineImageSequenceOutput_BMP
	 * Size -> 0x0000 (FullSize[0x0068] - InheritedSize[0x0068])
	 */
	class UMoviePipelineImageSequenceOutput_BMP : public UMoviePipelineImageSequenceOutputBase
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieRenderPipelineRenderPasses.MoviePipelineImageSequenceOutput_PNG
	 * Size -> 0x0008 (FullSize[0x0070] - InheritedSize[0x0068])
	 */
	class UMoviePipelineImageSequenceOutput_PNG : public UMoviePipelineImageSequenceOutputBase
	{
	public:
		bool                                                       bWriteAlpha;                                             // 0x0068(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GA74[0x7];                                   // 0x0069(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieRenderPipelineRenderPasses.MoviePipelineImageSequenceOutput_JPG
	 * Size -> 0x0000 (FullSize[0x0068] - InheritedSize[0x0068])
	 */
	class UMoviePipelineImageSequenceOutput_JPG : public UMoviePipelineImageSequenceOutputBase
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieRenderPipelineRenderPasses.MoviePipelineWaveOutput
	 * Size -> 0x0070 (FullSize[0x00B8] - InheritedSize[0x0048])
	 */
	class UMoviePipelineWaveOutput : public UMoviePipelineOutputBase
	{
	public:
		class FString                                              FileNameFormatOverride;                                  // 0x0048(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_T5ZL[0x60];                                  // 0x0058(0x0060) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
