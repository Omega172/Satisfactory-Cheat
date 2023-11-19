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
	 * Class MovieRenderPipelineSettings.MoviePipelineBurnInWidget
	 * Size -> 0x0000 (FullSize[0x0280] - InheritedSize[0x0280])
	 */
	class UMoviePipelineBurnInWidget : public UUserWidget
	{
	public:
		void OnOutputFrameStarted(class UMoviePipeline* ForPipeline);
		static UClass* StaticClass();
	};

	/**
	 * Class MovieRenderPipelineSettings.MoviePipelineBurnInSetting
	 * Size -> 0x0068 (FullSize[0x00B0] - InheritedSize[0x0048])
	 */
	class UMoviePipelineBurnInSetting : public UMoviePipelineRenderPass
	{
	public:
		struct FSoftClassPath                                      BurnInClass;                                             // 0x0048(0x0020) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCompositeOntoFinalImage;                                // 0x0068(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_05VP[0x2F];                                  // 0x0069(0x002F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTextureRenderTarget2D*                              RenderTarget;                                            // 0x0098(0x0008) ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<class UMoviePipelineBurnInWidget*>                  BurnInWidgetInstances;                                   // 0x00A0(0x0010) ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieRenderPipelineSettings.MoviePipelineConsoleVariableSetting
	 * Size -> 0x00B0 (FullSize[0x00F8] - InheritedSize[0x0048])
	 */
	class UMoviePipelineConsoleVariableSetting : public UMoviePipelineSetting
	{
	public:
		unsigned char                                              ConsoleVariablePresets[0x10];                            // 0x0048(0x0010) UNKNOWN PROPERTY: ArrayProperty
		TMap<class FString, float>                                 ConsoleVariables;                                        // 0x0058(0x0050) Deprecated, NativeAccessSpecifierPublic
		TArray<class FString>                                      StartConsoleCommands;                                    // 0x00A8(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class FString>                                      EndConsoleCommands;                                      // 0x00B8(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FMoviePipelineConsoleVariableEntry>          CVars;                                                   // 0x00C8(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_HQQT[0x20];                                  // 0x00D8(0x0020) MISSED OFFSET (PADDING)

	public:
		bool UpdateConsoleVariableEnableState(const class FString& Name, bool bIsEnabled);
		bool RemoveConsoleVariable(const class FString& Name, bool bRemoveAllInstances);
		TArray<struct FMoviePipelineConsoleVariableEntry> GetConsoleVariables();
		bool AddOrUpdateConsoleVariable(const class FString& Name, float Value);
		bool AddConsoleVariable(const class FString& Name, float Value);
		static UClass* StaticClass();
	};

	/**
	 * Class MovieRenderPipelineSettings.MoviePipelineWidgetRenderer
	 * Size -> 0x0020 (FullSize[0x0068] - InheritedSize[0x0048])
	 */
	class UMoviePipelineWidgetRenderer : public UMoviePipelineRenderPass
	{
	public:
		bool                                                       bCompositeOntoFinalImage;                                // 0x0048(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_S0P8[0x17];                                  // 0x0049(0x0017) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTextureRenderTarget2D*                              RenderTarget;                                            // 0x0060(0x0008) ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
