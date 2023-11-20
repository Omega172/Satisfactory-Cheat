/**
 * Name: Satisfactory
 * Version: Early_Access_CL#264901
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ACameraRig_Crane.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ACameraRig_Crane::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CinematicCamera.CameraRig_Crane");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4BD1290E0
	 * 		Name   -> Function CinematicCamera.CameraRig_Rail.GetRailSplineComponent
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
	 */
	class USplineComponent* ACameraRig_Rail::GetRailSplineComponent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CinematicCamera.CameraRig_Rail.GetRailSplineComponent");
		
		ACameraRig_Rail_GetRailSplineComponent_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ACameraRig_Rail.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ACameraRig_Rail::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CinematicCamera.CameraRig_Rail");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4BD1284E0
	 * 		Name   -> Function CinematicCamera.CineCameraActor.GetCineCameraComponent
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class UCineCameraComponent* ACineCameraActor::GetCineCameraComponent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CinematicCamera.CineCameraActor.GetCineCameraComponent");
		
		ACineCameraActor_GetCineCameraComponent_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ACineCameraActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ACineCameraActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CinematicCamera.CineCameraActor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4BD129DC0
	 * 		Name   -> Function CinematicCamera.CineCameraComponent.SetLensSettings
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FCameraLensSettings                         NewLensSettings                                            (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UCineCameraComponent::SetLensSettings(const struct FCameraLensSettings& NewLensSettings)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CinematicCamera.CineCameraComponent.SetLensSettings");
		
		UCineCameraComponent_SetLensSettings_Params params {};
		params.NewLensSettings = NewLensSettings;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4BD129C50
	 * 		Name   -> Function CinematicCamera.CineCameraComponent.SetLensPresetByName
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      InPresetName                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCineCameraComponent::SetLensPresetByName(const class FString& InPresetName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CinematicCamera.CineCameraComponent.SetLensPresetByName");
		
		UCineCameraComponent_SetLensPresetByName_Params params {};
		params.InPresetName = InPresetName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4BD129B30
	 * 		Name   -> Function CinematicCamera.CineCameraComponent.SetFocusSettings
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FCameraFocusSettings                        NewFocusSettings                                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UCineCameraComponent::SetFocusSettings(const struct FCameraFocusSettings& NewFocusSettings)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CinematicCamera.CineCameraComponent.SetFocusSettings");
		
		UCineCameraComponent_SetFocusSettings_Params params {};
		params.NewFocusSettings = NewFocusSettings;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4BD1299B0
	 * 		Name   -> Function CinematicCamera.CineCameraComponent.SetFilmbackPresetByName
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      InPresetName                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCineCameraComponent::SetFilmbackPresetByName(const class FString& InPresetName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CinematicCamera.CineCameraComponent.SetFilmbackPresetByName");
		
		UCineCameraComponent_SetFilmbackPresetByName_Params params {};
		params.InPresetName = InPresetName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4BD1298E0
	 * 		Name   -> Function CinematicCamera.CineCameraComponent.SetFilmback
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FCameraFilmbackSettings                     NewFilmback                                                (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UCineCameraComponent::SetFilmback(const struct FCameraFilmbackSettings& NewFilmback)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CinematicCamera.CineCameraComponent.SetFilmback");
		
		UCineCameraComponent_SetFilmback_Params params {};
		params.NewFilmback = NewFilmback;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4BD129470
	 * 		Name   -> Function CinematicCamera.CineCameraComponent.SetCustomNearClippingPlane
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              NewCustomNearClippingPlane                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCineCameraComponent::SetCustomNearClippingPlane(float NewCustomNearClippingPlane)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CinematicCamera.CineCameraComponent.SetCustomNearClippingPlane");
		
		UCineCameraComponent_SetCustomNearClippingPlane_Params params {};
		params.NewCustomNearClippingPlane = NewCustomNearClippingPlane;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4BD1293E0
	 * 		Name   -> Function CinematicCamera.CineCameraComponent.SetCurrentFocalLength
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              InFocalLength                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCineCameraComponent::SetCurrentFocalLength(float InFocalLength)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CinematicCamera.CineCameraComponent.SetCurrentFocalLength");
		
		UCineCameraComponent_SetCurrentFocalLength_Params params {};
		params.InFocalLength = InFocalLength;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4BD129350
	 * 		Name   -> Function CinematicCamera.CineCameraComponent.SetCurrentAperture
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              NewCurrentAperture                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCineCameraComponent::SetCurrentAperture(float NewCurrentAperture)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CinematicCamera.CineCameraComponent.SetCurrentAperture");
		
		UCineCameraComponent_SetCurrentAperture_Params params {};
		params.NewCurrentAperture = NewCurrentAperture;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4BD1292A0
	 * 		Name   -> Function CinematicCamera.CineCameraComponent.SetCropSettings
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FPlateCropSettings                          NewCropSettings                                            (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UCineCameraComponent::SetCropSettings(const struct FPlateCropSettings& NewCropSettings)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CinematicCamera.CineCameraComponent.SetCropSettings");
		
		UCineCameraComponent_SetCropSettings_Params params {};
		params.NewCropSettings = NewCropSettings;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4BD129130
	 * 		Name   -> Function CinematicCamera.CineCameraComponent.SetCropPresetByName
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      InPresetName                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCineCameraComponent::SetCropPresetByName(const class FString& InPresetName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CinematicCamera.CineCameraComponent.SetCropPresetByName");
		
		UCineCameraComponent_SetCropPresetByName_Params params {};
		params.InPresetName = InPresetName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4BD129100
	 * 		Name   -> Function CinematicCamera.CineCameraComponent.GetVerticalFieldOfView
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float UCineCameraComponent::GetVerticalFieldOfView()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CinematicCamera.CineCameraComponent.GetVerticalFieldOfView");
		
		UCineCameraComponent_GetVerticalFieldOfView_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4BD129000
	 * 		Name   -> Function CinematicCamera.CineCameraComponent.GetLensPresetsCopy
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	TArray<struct FNamedLensPreset> UCineCameraComponent::STATIC_GetLensPresetsCopy()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CinematicCamera.CineCameraComponent.GetLensPresetsCopy");
		
		UCineCameraComponent_GetLensPresetsCopy_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4BD128E70
	 * 		Name   -> Function CinematicCamera.CineCameraComponent.GetLensPresetName
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class FString UCineCameraComponent::GetLensPresetName()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CinematicCamera.CineCameraComponent.GetLensPresetName");
		
		UCineCameraComponent_GetLensPresetName_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4BD128CF0
	 * 		Name   -> Function CinematicCamera.CineCameraComponent.GetHorizontalFieldOfView
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float UCineCameraComponent::GetHorizontalFieldOfView()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CinematicCamera.CineCameraComponent.GetHorizontalFieldOfView");
		
		UCineCameraComponent_GetHorizontalFieldOfView_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4BD128C10
	 * 		Name   -> Function CinematicCamera.CineCameraComponent.GetFilmbackPresetsCopy
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	TArray<struct FNamedFilmbackPreset> UCineCameraComponent::STATIC_GetFilmbackPresetsCopy()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CinematicCamera.CineCameraComponent.GetFilmbackPresetsCopy");
		
		UCineCameraComponent_GetFilmbackPresetsCopy_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4BD128A80
	 * 		Name   -> Function CinematicCamera.CineCameraComponent.GetFilmbackPresetName
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class FString UCineCameraComponent::GetFilmbackPresetName()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CinematicCamera.CineCameraComponent.GetFilmbackPresetName");
		
		UCineCameraComponent_GetFilmbackPresetName_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4BD1288A0
	 * 		Name   -> Function CinematicCamera.CineCameraComponent.GetDefaultFilmbackPresetName
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class FString UCineCameraComponent::GetDefaultFilmbackPresetName()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CinematicCamera.CineCameraComponent.GetDefaultFilmbackPresetName");
		
		UCineCameraComponent_GetDefaultFilmbackPresetName_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4BD128690
	 * 		Name   -> Function CinematicCamera.CineCameraComponent.GetCropPresetName
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class FString UCineCameraComponent::GetCropPresetName()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CinematicCamera.CineCameraComponent.GetCropPresetName");
		
		UCineCameraComponent_GetCropPresetName_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCineCameraComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCineCameraComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CinematicCamera.CineCameraComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4BD129CF0
	 * 		Name   -> Function CinematicCamera.CineCameraSettings.SetLensPresets
	 * 		Flags  -> (Final, Native, Private, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<struct FNamedLensPreset>                    InLensPresets                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UCineCameraSettings::SetLensPresets(TArray<struct FNamedLensPreset> InLensPresets)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CinematicCamera.CineCameraSettings.SetLensPresets");
		
		UCineCameraSettings_SetLensPresets_Params params {};
		params.InLensPresets = InLensPresets;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4BD129A60
	 * 		Name   -> Function CinematicCamera.CineCameraSettings.SetFilmbackPresets
	 * 		Flags  -> (Final, Native, Private, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<struct FNamedFilmbackPreset>                InFilmbackPresets                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UCineCameraSettings::SetFilmbackPresets(TArray<struct FNamedFilmbackPreset> InFilmbackPresets)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CinematicCamera.CineCameraSettings.SetFilmbackPresets");
		
		UCineCameraSettings_SetFilmbackPresets_Params params {};
		params.InFilmbackPresets = InFilmbackPresets;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4BD129800
	 * 		Name   -> Function CinematicCamera.CineCameraSettings.SetDefaultLensPresetName
	 * 		Flags  -> (Final, Native, Private, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      InDefaultLensPresetName                                    (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCineCameraSettings::SetDefaultLensPresetName(const class FString& InDefaultLensPresetName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CinematicCamera.CineCameraSettings.SetDefaultLensPresetName");
		
		UCineCameraSettings_SetDefaultLensPresetName_Params params {};
		params.InDefaultLensPresetName = InDefaultLensPresetName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4BD1296C0
	 * 		Name   -> Function CinematicCamera.CineCameraSettings.SetDefaultLensFStop
	 * 		Flags  -> (Final, Native, Private, BlueprintCallable)
	 * Parameters:
	 * 		float                                              InDefaultLensFStop                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCineCameraSettings::SetDefaultLensFStop(float InDefaultLensFStop)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CinematicCamera.CineCameraSettings.SetDefaultLensFStop");
		
		UCineCameraSettings_SetDefaultLensFStop_Params params {};
		params.InDefaultLensFStop = InDefaultLensFStop;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4BD129760
	 * 		Name   -> Function CinematicCamera.CineCameraSettings.SetDefaultLensFocalLength
	 * 		Flags  -> (Final, Native, Private, BlueprintCallable)
	 * Parameters:
	 * 		float                                              InDefaultLensFocalLength                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCineCameraSettings::SetDefaultLensFocalLength(float InDefaultLensFocalLength)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CinematicCamera.CineCameraSettings.SetDefaultLensFocalLength");
		
		UCineCameraSettings_SetDefaultLensFocalLength_Params params {};
		params.InDefaultLensFocalLength = InDefaultLensFocalLength;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4BD1295E0
	 * 		Name   -> Function CinematicCamera.CineCameraSettings.SetDefaultFilmbackPreset
	 * 		Flags  -> (Final, Native, Private, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      InDefaultFilmbackPreset                                    (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCineCameraSettings::SetDefaultFilmbackPreset(const class FString& InDefaultFilmbackPreset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CinematicCamera.CineCameraSettings.SetDefaultFilmbackPreset");
		
		UCineCameraSettings_SetDefaultFilmbackPreset_Params params {};
		params.InDefaultFilmbackPreset = InDefaultFilmbackPreset;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4BD129500
	 * 		Name   -> Function CinematicCamera.CineCameraSettings.SetDefaultCropPresetName
	 * 		Flags  -> (Final, Native, Private, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      InDefaultCropPresetName                                    (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCineCameraSettings::SetDefaultCropPresetName(const class FString& InDefaultCropPresetName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CinematicCamera.CineCameraSettings.SetDefaultCropPresetName");
		
		UCineCameraSettings_SetDefaultCropPresetName_Params params {};
		params.InDefaultCropPresetName = InDefaultCropPresetName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4BD1291D0
	 * 		Name   -> Function CinematicCamera.CineCameraSettings.SetCropPresets
	 * 		Flags  -> (Final, Native, Private, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<struct FNamedPlateCropPreset>               InCropPresets                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UCineCameraSettings::SetCropPresets(TArray<struct FNamedPlateCropPreset> InCropPresets)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CinematicCamera.CineCameraSettings.SetCropPresets");
		
		UCineCameraSettings_SetCropPresets_Params params {};
		params.InCropPresets = InCropPresets;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4BD128EC0
	 * 		Name   -> Function CinematicCamera.CineCameraSettings.GetLensPresetNames
	 * 		Flags  -> (Final, Native, Private, Const)
	 */
	TArray<class FString> UCineCameraSettings::GetLensPresetNames()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CinematicCamera.CineCameraSettings.GetLensPresetNames");
		
		UCineCameraSettings_GetLensPresetNames_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4BD128D20
	 * 		Name   -> Function CinematicCamera.CineCameraSettings.GetLensPresetByName
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      PresetName                                                 (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FCameraLensSettings                         LensSettings                                               (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	bool UCineCameraSettings::GetLensPresetByName(const class FString& PresetName, struct FCameraLensSettings* LensSettings)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CinematicCamera.CineCameraSettings.GetLensPresetByName");
		
		UCineCameraSettings_GetLensPresetByName_Params params {};
		params.PresetName = PresetName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (LensSettings != nullptr)
			*LensSettings = params.LensSettings;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4BD128AD0
	 * 		Name   -> Function CinematicCamera.CineCameraSettings.GetFilmbackPresetNames
	 * 		Flags  -> (Final, Native, Private, Const)
	 */
	TArray<class FString> UCineCameraSettings::GetFilmbackPresetNames()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CinematicCamera.CineCameraSettings.GetFilmbackPresetNames");
		
		UCineCameraSettings_GetFilmbackPresetNames_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4BD128930
	 * 		Name   -> Function CinematicCamera.CineCameraSettings.GetFilmbackPresetByName
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      PresetName                                                 (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FCameraFilmbackSettings                     FilmbackSettings                                           (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	bool UCineCameraSettings::GetFilmbackPresetByName(const class FString& PresetName, struct FCameraFilmbackSettings* FilmbackSettings)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CinematicCamera.CineCameraSettings.GetFilmbackPresetByName");
		
		UCineCameraSettings_GetFilmbackPresetByName_Params params {};
		params.PresetName = PresetName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FilmbackSettings != nullptr)
			*FilmbackSettings = params.FilmbackSettings;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4BD128760
	 * 		Name   -> Function CinematicCamera.CineCameraSettings.GetCropPresetNames
	 * 		Flags  -> (Final, Native, Private, Const)
	 */
	TArray<class FString> UCineCameraSettings::GetCropPresetNames()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CinematicCamera.CineCameraSettings.GetCropPresetNames");
		
		UCineCameraSettings_GetCropPresetNames_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4BD128570
	 * 		Name   -> Function CinematicCamera.CineCameraSettings.GetCropPresetByName
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      PresetName                                                 (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FPlateCropSettings                          CropSettings                                               (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	bool UCineCameraSettings::GetCropPresetByName(const class FString& PresetName, struct FPlateCropSettings* CropSettings)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CinematicCamera.CineCameraSettings.GetCropPresetByName");
		
		UCineCameraSettings_GetCropPresetByName_Params params {};
		params.PresetName = PresetName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CropSettings != nullptr)
			*CropSettings = params.CropSettings;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4BD128500
	 * 		Name   -> Function CinematicCamera.CineCameraSettings.GetCineCameraSettings
	 * 		Flags  -> (Final, Native, Static, Private, BlueprintCallable)
	 */
	class UCineCameraSettings* UCineCameraSettings::STATIC_GetCineCameraSettings()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CinematicCamera.CineCameraSettings.GetCineCameraSettings");
		
		UCineCameraSettings_GetCineCameraSettings_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCineCameraSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCineCameraSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CinematicCamera.CineCameraSettings");
		return ptr;
	}

}


