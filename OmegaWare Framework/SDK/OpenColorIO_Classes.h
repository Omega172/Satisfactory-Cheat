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
	 * Class OpenColorIO.OpenColorIOSettings
	 * Size -> 0x0008 (FullSize[0x0040] - InheritedSize[0x0038])
	 */
	class UOpenColorIOSettings : public UDeveloperSettings
	{
	public:
		bool                                                       bUseLegacyProcessor : 1;                                 // 0x0038(0x0001) BIT_FIELD Edit, Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUse32fLUT : 1;                                          // 0x0038(0x0001) BIT_FIELD Edit, Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSupportInverseViewTransforms : 1;                       // 0x0038(0x0001) BIT_FIELD Edit, Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DFRJ[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OpenColorIO.OpenColorIOBlueprintLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UOpenColorIOBlueprintLibrary : public UBlueprintFunctionLibrary
	{
	public:
		bool STATIC_ApplyColorSpaceTransform(class UObject* WorldContextObject, const struct FOpenColorIOColorConversionSettings& ConversionSettings, class UTexture* InputTexture, class UTextureRenderTarget2D* OutputRenderTarget);
		static UClass* StaticClass();
	};

	/**
	 * Class OpenColorIO.OpenColorIOColorTransform
	 * Size -> 0x0140 (FullSize[0x0168] - InheritedSize[0x0028])
	 */
	class UOpenColorIOColorTransform : public UObject
	{
	public:
		class UOpenColorIOConfiguration*                           ConfigurationOwner;                                      // 0x0028(0x0008) ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsDisplayViewType;                                      // 0x0030(0x0001) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DMRL[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              SourceColorSpace;                                        // 0x0038(0x0010) Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              DestinationColorSpace;                                   // 0x0048(0x0010) Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Display;                                                 // 0x0058(0x0010) Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              View;                                                    // 0x0068(0x0010) Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EOpenColorIOViewTransformDirection                         DisplayViewDirection;                                    // 0x0078(0x0001) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_I80H[0x7];                                   // 0x0079(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<int32_t, class UTexture*>                             Textures;                                                // 0x0080(0x0050) Transient, UObjectWrapper, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_GC50[0x98];                                  // 0x00D0(0x0098) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OpenColorIO.OpenColorIOConfiguration
	 * Size -> 0x0070 (FullSize[0x0098] - InheritedSize[0x0028])
	 */
	class UOpenColorIOConfiguration : public UObject
	{
	public:
		struct FFilePath                                           ConfigurationFile;                                       // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FOpenColorIOColorSpace>                      DesiredColorSpaces;                                      // 0x0038(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FOpenColorIODisplayView>                     DesiredDisplayViews;                                     // 0x0048(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class UOpenColorIOColorTransform*>                  ColorTransforms;                                         // 0x0058(0x0010) ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_EKNL[0x30];                                  // 0x0068(0x0030) MISSED OFFSET (PADDING)

	public:
		void ReloadExistingColorspaces();
		static UClass* StaticClass();
	};

	/**
	 * Class OpenColorIO.OpenColorIODisplayExtensionWrapper
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UOpenColorIODisplayExtensionWrapper : public UObject
	{
	public:
		unsigned char                                              UnknownData_2FWA[0x10];                                  // 0x0028(0x0010) MISSED OFFSET (PADDING)

	public:
		void SetSceneExtensionIsActiveFunctions(TArray<struct FSceneViewExtensionIsActiveFunctor> IsActiveFunctions);
		void SetSceneExtensionIsActiveFunction(const struct FSceneViewExtensionIsActiveFunctor& IsActiveFunction);
		void SetOpenColorIOConfiguration(const struct FOpenColorIODisplayConfiguration& InDisplayConfiguration);
		void RemoveSceneExtension();
		struct FOpenColorIODisplayConfiguration GetOpenColorIOConfiguration();
		class UOpenColorIODisplayExtensionWrapper* STATIC_CreateOpenColorIODisplayExtension(const struct FOpenColorIODisplayConfiguration& InDisplayConfiguration, const struct FSceneViewExtensionIsActiveFunctor& IsActiveFunction);
		class UOpenColorIODisplayExtensionWrapper* STATIC_CreateInGameOpenColorIODisplayExtension(const struct FOpenColorIODisplayConfiguration& InDisplayConfiguration);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
