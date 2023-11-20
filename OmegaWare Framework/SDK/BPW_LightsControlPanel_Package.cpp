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
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_LightsControlPanel.BPW_LightsControlPanel_C.PlayPasteSFX
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_LightsControlPanel_C::PlayPasteSFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_LightsControlPanel.BPW_LightsControlPanel_C.PlayPasteSFX");
		
		UBPW_LightsControlPanel_C_PlayPasteSFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_LightsControlPanel.BPW_LightsControlPanel_C.PlayCopySFX
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_LightsControlPanel_C::PlayCopySFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_LightsControlPanel.BPW_LightsControlPanel_C.PlayCopySFX");
		
		UBPW_LightsControlPanel_C_PlayCopySFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_LightsControlPanel.BPW_LightsControlPanel_C.PlaySliderSFX
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		double                                             mSliderValue                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_LightsControlPanel_C::PlaySliderSFX(double mSliderValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_LightsControlPanel.BPW_LightsControlPanel_C.PlaySliderSFX");
		
		UBPW_LightsControlPanel_C_PlaySliderSFX_Params params {};
		params.mSliderValue = mSliderValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_LightsControlPanel.BPW_LightsControlPanel_C.IsLightEnabled
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsEnabled                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_LightsControlPanel_C::IsLightEnabled(bool* IsEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_LightsControlPanel.BPW_LightsControlPanel_C.IsLightEnabled");
		
		UBPW_LightsControlPanel_C_IsLightEnabled_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsEnabled != nullptr)
			*IsEnabled = params.IsEnabled;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_LightsControlPanel.BPW_LightsControlPanel_C.Set Light Enabled
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsEnabled                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_LightsControlPanel_C::SetLightEnabled(bool IsEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_LightsControlPanel.BPW_LightsControlPanel_C.Set Light Enabled");
		
		UBPW_LightsControlPanel_C_SetLightEnabled_Params params {};
		params.IsEnabled = IsEnabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_LightsControlPanel.BPW_LightsControlPanel_C.SetColorArray
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_LightsControlPanel_C::SetColorArray()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_LightsControlPanel.BPW_LightsControlPanel_C.SetColorArray");
		
		UBPW_LightsControlPanel_C_SetColorArray_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_LightsControlPanel.BPW_LightsControlPanel_C.CreateColorPicker
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FLinearColor                                StartupColor                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_LightsControlPanel_C::CreateColorPicker(const struct FLinearColor& StartupColor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_LightsControlPanel.BPW_LightsControlPanel_C.CreateColorPicker");
		
		UBPW_LightsControlPanel_C_CreateColorPicker_Params params {};
		params.StartupColor = StartupColor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_LightsControlPanel.BPW_LightsControlPanel_C.UpdateNightModeSelector
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_LightsControlPanel_C::UpdateNightModeSelector()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_LightsControlPanel.BPW_LightsControlPanel_C.UpdateNightModeSelector");
		
		UBPW_LightsControlPanel_C_UpdateNightModeSelector_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_LightsControlPanel.BPW_LightsControlPanel_C.SetTimeOfDayAware
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsTimeOfDayAware                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_LightsControlPanel_C::SetTimeOfDayAware(bool IsTimeOfDayAware)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_LightsControlPanel.BPW_LightsControlPanel_C.SetTimeOfDayAware");
		
		UBPW_LightsControlPanel_C_SetTimeOfDayAware_Params params {};
		params.IsTimeOfDayAware = IsTimeOfDayAware;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_LightsControlPanel.BPW_LightsControlPanel_C.SetControlData
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FLightSourceControlData                     mControlData                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UBPW_LightsControlPanel_C::SetControlData(const struct FLightSourceControlData& mControlData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_LightsControlPanel.BPW_LightsControlPanel_C.SetControlData");
		
		UBPW_LightsControlPanel_C_SetControlData_Params params {};
		params.mControlData = mControlData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_LightsControlPanel.BPW_LightsControlPanel_C.GetControlData
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_LightsControlPanel_C::GetControlData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_LightsControlPanel.BPW_LightsControlPanel_C.GetControlData");
		
		UBPW_LightsControlPanel_C_GetControlData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_LightsControlPanel.BPW_LightsControlPanel_C.InitStandbyButton
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_LightsControlPanel_C::InitStandbyButton()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_LightsControlPanel.BPW_LightsControlPanel_C.InitStandbyButton");
		
		UBPW_LightsControlPanel_C_InitStandbyButton_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_LightsControlPanel.BPW_LightsControlPanel_C.SetLightIntensity
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		double                                             Intensity                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_LightsControlPanel_C::SetLightIntensity(double Intensity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_LightsControlPanel.BPW_LightsControlPanel_C.SetLightIntensity");
		
		UBPW_LightsControlPanel_C_SetLightIntensity_Params params {};
		params.Intensity = Intensity;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_LightsControlPanel.BPW_LightsControlPanel_C.SetLightColor
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            ColorSlotIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_LightsControlPanel_C::SetLightColor(int32_t ColorSlotIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_LightsControlPanel.BPW_LightsControlPanel_C.SetLightColor");
		
		UBPW_LightsControlPanel_C_SetLightColor_Params params {};
		params.ColorSlotIndex = ColorSlotIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_LightsControlPanel.BPW_LightsControlPanel_C.UpdatePreviewMaterial
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_LightsControlPanel_C::UpdatePreviewMaterial()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_LightsControlPanel.BPW_LightsControlPanel_C.UpdatePreviewMaterial");
		
		UBPW_LightsControlPanel_C_UpdatePreviewMaterial_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_LightsControlPanel.BPW_LightsControlPanel_C.UpdatePreviewNightMode
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               NightModeOn                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_LightsControlPanel_C::UpdatePreviewNightMode(bool NightModeOn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_LightsControlPanel.BPW_LightsControlPanel_C.UpdatePreviewNightMode");
		
		UBPW_LightsControlPanel_C_UpdatePreviewNightMode_Params params {};
		params.NightModeOn = NightModeOn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_LightsControlPanel.BPW_LightsControlPanel_C.UpdatePreviewIntensity
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		double                                             Intensity                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_LightsControlPanel_C::UpdatePreviewIntensity(double Intensity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_LightsControlPanel.BPW_LightsControlPanel_C.UpdatePreviewIntensity");
		
		UBPW_LightsControlPanel_C_UpdatePreviewIntensity_Params params {};
		params.Intensity = Intensity;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_LightsControlPanel.BPW_LightsControlPanel_C.UpdatePreviewColor
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_LightsControlPanel_C::UpdatePreviewColor(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_LightsControlPanel.BPW_LightsControlPanel_C.UpdatePreviewColor");
		
		UBPW_LightsControlPanel_C_UpdatePreviewColor_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_LightsControlPanel.BPW_LightsControlPanel_C.UpdateIntensitySelector
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_LightsControlPanel_C::UpdateIntensitySelector()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_LightsControlPanel.BPW_LightsControlPanel_C.UpdateIntensitySelector");
		
		UBPW_LightsControlPanel_C_UpdateIntensitySelector_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_LightsControlPanel.BPW_LightsControlPanel_C.UpdateColorSelector
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               mPlayButtonSound                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_LightsControlPanel_C::UpdateColorSelector(bool mPlayButtonSound)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_LightsControlPanel.BPW_LightsControlPanel_C.UpdateColorSelector");
		
		UBPW_LightsControlPanel_C_UpdateColorSelector_Params params {};
		params.mPlayButtonSound = mPlayButtonSound;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_LightsControlPanel.BPW_LightsControlPanel_C.DisplayControlledBuildables
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_LightsControlPanel_C::DisplayControlledBuildables()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_LightsControlPanel.BPW_LightsControlPanel_C.DisplayControlledBuildables");
		
		UBPW_LightsControlPanel_C_DisplayControlledBuildables_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_LightsControlPanel.BPW_LightsControlPanel_C.Event OnControlledBuildablesChanged
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_LightsControlPanel_C::EventOnControlledBuildablesChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_LightsControlPanel.BPW_LightsControlPanel_C.Event OnControlledBuildablesChanged");
		
		UBPW_LightsControlPanel_C_EventOnControlledBuildablesChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_LightsControlPanel.BPW_LightsControlPanel_C.BndEvt__mColorSelector_K2Node_ComponentBoundEvent_1_OnTogglableButtonClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_LightsControlPanel_C::BndEvt__mColorSelector_K2Node_ComponentBoundEvent_1_OnTogglableButtonClicked__DelegateSignature(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_LightsControlPanel.BPW_LightsControlPanel_C.BndEvt__mColorSelector_K2Node_ComponentBoundEvent_1_OnTogglableButtonClicked__DelegateSignature");
		
		UBPW_LightsControlPanel_C_BndEvt__mColorSelector_K2Node_ComponentBoundEvent_1_OnTogglableButtonClicked__DelegateSignature_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_LightsControlPanel.BPW_LightsControlPanel_C.Init
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UBPW_LightsControlPanel_C::Init()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_LightsControlPanel.BPW_LightsControlPanel_C.Init");
		
		UBPW_LightsControlPanel_C_Init_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_LightsControlPanel.BPW_LightsControlPanel_C.BndEvt__mNightOnlyMode_K2Node_ComponentBoundEvent_4_OnIsSelectedChanged__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsSelected                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_LightsControlPanel_C::BndEvt__mNightOnlyMode_K2Node_ComponentBoundEvent_4_OnIsSelectedChanged__DelegateSignature(bool IsSelected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_LightsControlPanel.BPW_LightsControlPanel_C.BndEvt__mNightOnlyMode_K2Node_ComponentBoundEvent_4_OnIsSelectedChanged__DelegateSignature");
		
		UBPW_LightsControlPanel_C_BndEvt__mNightOnlyMode_K2Node_ComponentBoundEvent_4_OnIsSelectedChanged__DelegateSignature_Params params {};
		params.IsSelected = IsSelected;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_LightsControlPanel.BPW_LightsControlPanel_C.BndEvt__Widget_Window_DarkMode_K2Node_ComponentBoundEvent_0_OnClose__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBPW_LightsControlPanel_C::BndEvt__Widget_Window_DarkMode_K2Node_ComponentBoundEvent_0_OnClose__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_LightsControlPanel.BPW_LightsControlPanel_C.BndEvt__Widget_Window_DarkMode_K2Node_ComponentBoundEvent_0_OnClose__DelegateSignature");
		
		UBPW_LightsControlPanel_C_BndEvt__Widget_Window_DarkMode_K2Node_ComponentBoundEvent_0_OnClose__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_LightsControlPanel.BPW_LightsControlPanel_C.BndEvt__mStandbyButton_K2Node_ComponentBoundEvent_3_OnStandbyClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBPW_LightsControlPanel_C::BndEvt__mStandbyButton_K2Node_ComponentBoundEvent_3_OnStandbyClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_LightsControlPanel.BPW_LightsControlPanel_C.BndEvt__mStandbyButton_K2Node_ComponentBoundEvent_3_OnStandbyClicked__DelegateSignature");
		
		UBPW_LightsControlPanel_C_BndEvt__mStandbyButton_K2Node_ComponentBoundEvent_3_OnStandbyClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_LightsControlPanel.BPW_LightsControlPanel_C.BndEvt__mColorPreviewManager_K2Node_ComponentBoundEvent_5_OnColorClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_LightsControlPanel_C::BndEvt__mColorPreviewManager_K2Node_ComponentBoundEvent_5_OnColorClicked__DelegateSignature(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_LightsControlPanel.BPW_LightsControlPanel_C.BndEvt__mColorPreviewManager_K2Node_ComponentBoundEvent_5_OnColorClicked__DelegateSignature");
		
		UBPW_LightsControlPanel_C_BndEvt__mColorPreviewManager_K2Node_ComponentBoundEvent_5_OnColorClicked__DelegateSignature_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_LightsControlPanel.BPW_LightsControlPanel_C.OnColorPickerClosed
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<struct FLinearColor>                        Color                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UBPW_LightsControlPanel_C::OnColorPickerClosed(TArray<struct FLinearColor> Color)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_LightsControlPanel.BPW_LightsControlPanel_C.OnColorPickerClosed");
		
		UBPW_LightsControlPanel_C_OnColorPickerClosed_Params params {};
		params.Color = Color;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_LightsControlPanel.BPW_LightsControlPanel_C.OnColorArrayUpdated
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_LightsControlPanel_C::OnColorArrayUpdated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_LightsControlPanel.BPW_LightsControlPanel_C.OnColorArrayUpdated");
		
		UBPW_LightsControlPanel_C_OnColorArrayUpdated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_LightsControlPanel.BPW_LightsControlPanel_C.BndEvt__Slider_170_K2Node_ComponentBoundEvent_6_OnFloatValueChangedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_LightsControlPanel_C::BndEvt__Slider_170_K2Node_ComponentBoundEvent_6_OnFloatValueChangedEvent__DelegateSignature(float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_LightsControlPanel.BPW_LightsControlPanel_C.BndEvt__Slider_170_K2Node_ComponentBoundEvent_6_OnFloatValueChangedEvent__DelegateSignature");
		
		UBPW_LightsControlPanel_C_BndEvt__Slider_170_K2Node_ComponentBoundEvent_6_OnFloatValueChangedEvent__DelegateSignature_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_LightsControlPanel.BPW_LightsControlPanel_C.BndEvt__FGEditableText_120_K2Node_ComponentBoundEvent_8_OnEditableTextCommittedEvent__DelegateSignature
	 * 		Flags  -> (HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        Text                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		ETextCommit                                        CommitMethod                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_LightsControlPanel_C::BndEvt__FGEditableText_120_K2Node_ComponentBoundEvent_8_OnEditableTextCommittedEvent__DelegateSignature(const class FText& Text, ETextCommit CommitMethod)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_LightsControlPanel.BPW_LightsControlPanel_C.BndEvt__FGEditableText_120_K2Node_ComponentBoundEvent_8_OnEditableTextCommittedEvent__DelegateSignature");
		
		UBPW_LightsControlPanel_C_BndEvt__FGEditableText_120_K2Node_ComponentBoundEvent_8_OnEditableTextCommittedEvent__DelegateSignature_Params params {};
		params.Text = Text;
		params.CommitMethod = CommitMethod;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_LightsControlPanel.BPW_LightsControlPanel_C.OnColorPickerCancel
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_LightsControlPanel_C::OnColorPickerCancel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_LightsControlPanel.BPW_LightsControlPanel_C.OnColorPickerCancel");
		
		UBPW_LightsControlPanel_C_OnColorPickerCancel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_LightsControlPanel.BPW_LightsControlPanel_C.OnLightStateChanged
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsEnabled                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_LightsControlPanel_C::OnLightStateChanged(bool IsEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_LightsControlPanel.BPW_LightsControlPanel_C.OnLightStateChanged");
		
		UBPW_LightsControlPanel_C_OnLightStateChanged_Params params {};
		params.IsEnabled = IsEnabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_LightsControlPanel.BPW_LightsControlPanel_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UBPW_LightsControlPanel_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_LightsControlPanel.BPW_LightsControlPanel_C.Construct");
		
		UBPW_LightsControlPanel_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_LightsControlPanel.BPW_LightsControlPanel_C.OnFactoryClipboardPasted
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     interactObject                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		class UFGFactoryClipboardSettings*                 factoryClipboardSettings                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_LightsControlPanel_C::OnFactoryClipboardPasted(class UObject* interactObject, class UFGFactoryClipboardSettings* factoryClipboardSettings)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_LightsControlPanel.BPW_LightsControlPanel_C.OnFactoryClipboardPasted");
		
		UBPW_LightsControlPanel_C_OnFactoryClipboardPasted_Params params {};
		params.interactObject = interactObject;
		params.factoryClipboardSettings = factoryClipboardSettings;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_LightsControlPanel.BPW_LightsControlPanel_C.OnFactoryClipboardCopied
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     interactObject                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		class UFGFactoryClipboardSettings*                 factoryClipboardSettings                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_LightsControlPanel_C::OnFactoryClipboardCopied(class UObject* interactObject, class UFGFactoryClipboardSettings* factoryClipboardSettings)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_LightsControlPanel.BPW_LightsControlPanel_C.OnFactoryClipboardCopied");
		
		UBPW_LightsControlPanel_C_OnFactoryClipboardCopied_Params params {};
		params.interactObject = interactObject;
		params.factoryClipboardSettings = factoryClipboardSettings;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_LightsControlPanel.BPW_LightsControlPanel_C.ExecuteUbergraph_BPW_LightsControlPanel
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_LightsControlPanel_C::ExecuteUbergraph_BPW_LightsControlPanel(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_LightsControlPanel.BPW_LightsControlPanel_C.ExecuteUbergraph_BPW_LightsControlPanel");
		
		UBPW_LightsControlPanel_C_ExecuteUbergraph_BPW_LightsControlPanel_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPW_LightsControlPanel_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPW_LightsControlPanel_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BPW_LightsControlPanel.BPW_LightsControlPanel_C");
		return ptr;
	}

}


