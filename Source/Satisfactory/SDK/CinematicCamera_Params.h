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
	 * Function CinematicCamera.CameraRig_Rail.GetRailSplineComponent
	 */
	struct ACameraRig_Rail_GetRailSplineComponent_Params
	{
	public:
		class USplineComponent*                                    ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CinematicCamera.CineCameraActor.GetCineCameraComponent
	 */
	struct ACineCameraActor_GetCineCameraComponent_Params
	{
	public:
		class UCineCameraComponent*                                ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CinematicCamera.CineCameraComponent.SetLensSettings
	 */
	struct UCineCameraComponent_SetLensSettings_Params
	{
	public:
		struct FCameraLensSettings                                 NewLensSettings;                                         // 0x0000(0x001C)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CinematicCamera.CineCameraComponent.SetLensPresetByName
	 */
	struct UCineCameraComponent_SetLensPresetByName_Params
	{
	public:
		class FString                                              InPresetName;                                            // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CinematicCamera.CineCameraComponent.SetFocusSettings
	 */
	struct UCineCameraComponent_SetFocusSettings_Params
	{
	public:
		struct FCameraFocusSettings                                NewFocusSettings;                                        // 0x0000(0x0068)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CinematicCamera.CineCameraComponent.SetFilmbackPresetByName
	 */
	struct UCineCameraComponent_SetFilmbackPresetByName_Params
	{
	public:
		class FString                                              InPresetName;                                            // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CinematicCamera.CineCameraComponent.SetFilmback
	 */
	struct UCineCameraComponent_SetFilmback_Params
	{
	public:
		struct FCameraFilmbackSettings                             NewFilmback;                                             // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CinematicCamera.CineCameraComponent.SetCustomNearClippingPlane
	 */
	struct UCineCameraComponent_SetCustomNearClippingPlane_Params
	{
	public:
		float                                                      NewCustomNearClippingPlane;                              // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CinematicCamera.CineCameraComponent.SetCurrentFocalLength
	 */
	struct UCineCameraComponent_SetCurrentFocalLength_Params
	{
	public:
		float                                                      InFocalLength;                                           // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CinematicCamera.CineCameraComponent.SetCurrentAperture
	 */
	struct UCineCameraComponent_SetCurrentAperture_Params
	{
	public:
		float                                                      NewCurrentAperture;                                      // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CinematicCamera.CineCameraComponent.SetCropSettings
	 */
	struct UCineCameraComponent_SetCropSettings_Params
	{
	public:
		struct FPlateCropSettings                                  NewCropSettings;                                         // 0x0000(0x0004)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CinematicCamera.CineCameraComponent.SetCropPresetByName
	 */
	struct UCineCameraComponent_SetCropPresetByName_Params
	{
	public:
		class FString                                              InPresetName;                                            // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CinematicCamera.CineCameraComponent.GetVerticalFieldOfView
	 */
	struct UCineCameraComponent_GetVerticalFieldOfView_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CinematicCamera.CineCameraComponent.GetLensPresetsCopy
	 */
	struct UCineCameraComponent_GetLensPresetsCopy_Params
	{
	public:
		TArray<struct FNamedLensPreset>                            ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CinematicCamera.CineCameraComponent.GetLensPresetName
	 */
	struct UCineCameraComponent_GetLensPresetName_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CinematicCamera.CineCameraComponent.GetHorizontalFieldOfView
	 */
	struct UCineCameraComponent_GetHorizontalFieldOfView_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CinematicCamera.CineCameraComponent.GetFilmbackPresetsCopy
	 */
	struct UCineCameraComponent_GetFilmbackPresetsCopy_Params
	{
	public:
		TArray<struct FNamedFilmbackPreset>                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CinematicCamera.CineCameraComponent.GetFilmbackPresetName
	 */
	struct UCineCameraComponent_GetFilmbackPresetName_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CinematicCamera.CineCameraComponent.GetDefaultFilmbackPresetName
	 */
	struct UCineCameraComponent_GetDefaultFilmbackPresetName_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CinematicCamera.CineCameraComponent.GetCropPresetName
	 */
	struct UCineCameraComponent_GetCropPresetName_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CinematicCamera.CineCameraSettings.SetLensPresets
	 */
	struct UCineCameraSettings_SetLensPresets_Params
	{
	public:
		TArray<struct FNamedLensPreset>                            InLensPresets;                                           // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CinematicCamera.CineCameraSettings.SetFilmbackPresets
	 */
	struct UCineCameraSettings_SetFilmbackPresets_Params
	{
	public:
		TArray<struct FNamedFilmbackPreset>                        InFilmbackPresets;                                       // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CinematicCamera.CineCameraSettings.SetDefaultLensPresetName
	 */
	struct UCineCameraSettings_SetDefaultLensPresetName_Params
	{
	public:
		class FString                                              InDefaultLensPresetName;                                 // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CinematicCamera.CineCameraSettings.SetDefaultLensFStop
	 */
	struct UCineCameraSettings_SetDefaultLensFStop_Params
	{
	public:
		float                                                      InDefaultLensFStop;                                      // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CinematicCamera.CineCameraSettings.SetDefaultLensFocalLength
	 */
	struct UCineCameraSettings_SetDefaultLensFocalLength_Params
	{
	public:
		float                                                      InDefaultLensFocalLength;                                // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CinematicCamera.CineCameraSettings.SetDefaultFilmbackPreset
	 */
	struct UCineCameraSettings_SetDefaultFilmbackPreset_Params
	{
	public:
		class FString                                              InDefaultFilmbackPreset;                                 // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CinematicCamera.CineCameraSettings.SetDefaultCropPresetName
	 */
	struct UCineCameraSettings_SetDefaultCropPresetName_Params
	{
	public:
		class FString                                              InDefaultCropPresetName;                                 // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CinematicCamera.CineCameraSettings.SetCropPresets
	 */
	struct UCineCameraSettings_SetCropPresets_Params
	{
	public:
		TArray<struct FNamedPlateCropPreset>                       InCropPresets;                                           // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CinematicCamera.CineCameraSettings.GetLensPresetNames
	 */
	struct UCineCameraSettings_GetLensPresetNames_Params
	{
	public:
		TArray<class FString>                                      ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CinematicCamera.CineCameraSettings.GetLensPresetByName
	 */
	struct UCineCameraSettings_GetLensPresetByName_Params
	{
	public:
		class FString                                              PresetName;                                              // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FCameraLensSettings                                 LensSettings;                                            // 0x0010(0x001C)  (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x002C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CinematicCamera.CineCameraSettings.GetFilmbackPresetNames
	 */
	struct UCineCameraSettings_GetFilmbackPresetNames_Params
	{
	public:
		TArray<class FString>                                      ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CinematicCamera.CineCameraSettings.GetFilmbackPresetByName
	 */
	struct UCineCameraSettings_GetFilmbackPresetByName_Params
	{
	public:
		class FString                                              PresetName;                                              // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FCameraFilmbackSettings                             FilmbackSettings;                                        // 0x0010(0x000C)  (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x001C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CinematicCamera.CineCameraSettings.GetCropPresetNames
	 */
	struct UCineCameraSettings_GetCropPresetNames_Params
	{
	public:
		TArray<class FString>                                      ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CinematicCamera.CineCameraSettings.GetCropPresetByName
	 */
	struct UCineCameraSettings_GetCropPresetByName_Params
	{
	public:
		class FString                                              PresetName;                                              // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FPlateCropSettings                                  CropSettings;                                            // 0x0010(0x0004)  (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0014(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CinematicCamera.CineCameraSettings.GetCineCameraSettings
	 */
	struct UCineCameraSettings_GetCineCameraSettings_Params
	{
	public:
		class UCineCameraSettings*                                 ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
