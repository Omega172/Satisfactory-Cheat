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
	 * Function OpenColorIO.OpenColorIOBlueprintLibrary.ApplyColorSpaceTransform
	 */
	struct UOpenColorIOBlueprintLibrary_ApplyColorSpaceTransform_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FOpenColorIOColorConversionSettings                 ConversionSettings;                                      // 0x0008(0x0098)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class UTexture*                                            InputTexture;                                            // 0x00A0(0x0008)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UTextureRenderTarget2D*                              OutputRenderTarget;                                      // 0x00A8(0x0008)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x00B0(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OpenColorIO.OpenColorIOConfiguration.ReloadExistingColorspaces
	 */
	struct UOpenColorIOConfiguration_ReloadExistingColorspaces_Params
	{	};

	/**
	 * Function OpenColorIO.OpenColorIODisplayExtensionWrapper.SetSceneExtensionIsActiveFunctions
	 */
	struct UOpenColorIODisplayExtensionWrapper_SetSceneExtensionIsActiveFunctions_Params
	{
	public:
		TArray<struct FSceneViewExtensionIsActiveFunctor>          IsActiveFunctions;                                       // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OpenColorIO.OpenColorIODisplayExtensionWrapper.SetSceneExtensionIsActiveFunction
	 */
	struct UOpenColorIODisplayExtensionWrapper_SetSceneExtensionIsActiveFunction_Params
	{
	public:
		struct FSceneViewExtensionIsActiveFunctor                  IsActiveFunction;                                        // 0x0000(0x0050)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OpenColorIO.OpenColorIODisplayExtensionWrapper.SetOpenColorIOConfiguration
	 */
	struct UOpenColorIODisplayExtensionWrapper_SetOpenColorIOConfiguration_Params
	{
	public:
		struct FOpenColorIODisplayConfiguration                    InDisplayConfiguration;                                  // 0x0000(0x00A0)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OpenColorIO.OpenColorIODisplayExtensionWrapper.RemoveSceneExtension
	 */
	struct UOpenColorIODisplayExtensionWrapper_RemoveSceneExtension_Params
	{	};

	/**
	 * Function OpenColorIO.OpenColorIODisplayExtensionWrapper.GetOpenColorIOConfiguration
	 */
	struct UOpenColorIODisplayExtensionWrapper_GetOpenColorIOConfiguration_Params
	{
	public:
		struct FOpenColorIODisplayConfiguration                    ReturnValue;                                             // 0x0000(0x00A0)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OpenColorIO.OpenColorIODisplayExtensionWrapper.CreateOpenColorIODisplayExtension
	 */
	struct UOpenColorIODisplayExtensionWrapper_CreateOpenColorIODisplayExtension_Params
	{
	public:
		struct FOpenColorIODisplayConfiguration                    InDisplayConfiguration;                                  // 0x0000(0x00A0)  (Parm, NativeAccessSpecifierPublic)
		struct FSceneViewExtensionIsActiveFunctor                  IsActiveFunction;                                        // 0x00A0(0x0050)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class UOpenColorIODisplayExtensionWrapper*                 ReturnValue;                                             // 0x00F0(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OpenColorIO.OpenColorIODisplayExtensionWrapper.CreateInGameOpenColorIODisplayExtension
	 */
	struct UOpenColorIODisplayExtensionWrapper_CreateInGameOpenColorIODisplayExtension_Params
	{
	public:
		struct FOpenColorIODisplayConfiguration                    InDisplayConfiguration;                                  // 0x0000(0x00A0)  (Parm, NativeAccessSpecifierPublic)
		class UOpenColorIODisplayExtensionWrapper*                 ReturnValue;                                             // 0x00A0(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
