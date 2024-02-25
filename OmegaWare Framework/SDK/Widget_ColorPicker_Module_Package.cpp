/**
 * Name: Satisfactory
 * Version: Early_Access_CL#273254
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_ColorPicker_Module.Widget_ColorPicker_Module_C.UpdatePresets
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_ColorPicker_Module_C::UpdatePresets()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_ColorPicker_Module.Widget_ColorPicker_Module_C.UpdatePresets");
		
		UWidget_ColorPicker_Module_C_UpdatePresets_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_ColorPicker_Module.Widget_ColorPicker_Module_C.UpdateColor
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FLinearColor                                CurrentColor                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_ColorPicker_Module_C::UpdateColor(const struct FLinearColor& CurrentColor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_ColorPicker_Module.Widget_ColorPicker_Module_C.UpdateColor");
		
		UWidget_ColorPicker_Module_C_UpdateColor_Params params {};
		params.CurrentColor = CurrentColor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_ColorPicker_Module.Widget_ColorPicker_Module_C.SetHideBrightnessSlider
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               mHideBrightnessSlider                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_ColorPicker_Module_C::SetHideBrightnessSlider(bool mHideBrightnessSlider)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_ColorPicker_Module.Widget_ColorPicker_Module_C.SetHideBrightnessSlider");
		
		UWidget_ColorPicker_Module_C_SetHideBrightnessSlider_Params params {};
		params.mHideBrightnessSlider = mHideBrightnessSlider;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_ColorPicker_Module.Widget_ColorPicker_Module_C.SetAndUpdateColor
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_ColorPicker_Module_C::SetAndUpdateColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_ColorPicker_Module.Widget_ColorPicker_Module_C.SetAndUpdateColor");
		
		UWidget_ColorPicker_Module_C_SetAndUpdateColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_ColorPicker_Module.Widget_ColorPicker_Module_C.BndEvt__mBrightnessSlider_K2Node_ComponentBoundEvent_1_OnValueChanged__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		double                                             Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_ColorPicker_Module_C::BndEvt__mBrightnessSlider_K2Node_ComponentBoundEvent_1_OnValueChanged__DelegateSignature(double Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_ColorPicker_Module.Widget_ColorPicker_Module_C.BndEvt__mBrightnessSlider_K2Node_ComponentBoundEvent_1_OnValueChanged__DelegateSignature");
		
		UWidget_ColorPicker_Module_C_BndEvt__mBrightnessSlider_K2Node_ComponentBoundEvent_1_OnValueChanged__DelegateSignature_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_ColorPicker_Module.Widget_ColorPicker_Module_C.BndEvt__mSaturationSlider_K2Node_ComponentBoundEvent_2_OnValueChanged__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		double                                             Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_ColorPicker_Module_C::BndEvt__mSaturationSlider_K2Node_ComponentBoundEvent_2_OnValueChanged__DelegateSignature(double Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_ColorPicker_Module.Widget_ColorPicker_Module_C.BndEvt__mSaturationSlider_K2Node_ComponentBoundEvent_2_OnValueChanged__DelegateSignature");
		
		UWidget_ColorPicker_Module_C_BndEvt__mSaturationSlider_K2Node_ComponentBoundEvent_2_OnValueChanged__DelegateSignature_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_ColorPicker_Module.Widget_ColorPicker_Module_C.SetupColorAndSliders
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FLinearColor                                Color                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_ColorPicker_Module_C::SetupColorAndSliders(const struct FLinearColor& Color)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_ColorPicker_Module.Widget_ColorPicker_Module_C.SetupColorAndSliders");
		
		UWidget_ColorPicker_Module_C_SetupColorAndSliders_Params params {};
		params.Color = Color;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_ColorPicker_Module.Widget_ColorPicker_Module_C.BndEvt__mHexText_K2Node_ComponentBoundEvent_3_OnEditableTextCommittedEvent__DelegateSignature
	 * 		Flags  -> (HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        Text                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		ETextCommit                                        CommitMethod                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_ColorPicker_Module_C::BndEvt__mHexText_K2Node_ComponentBoundEvent_3_OnEditableTextCommittedEvent__DelegateSignature(const class FText& Text, ETextCommit CommitMethod)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_ColorPicker_Module.Widget_ColorPicker_Module_C.BndEvt__mHexText_K2Node_ComponentBoundEvent_3_OnEditableTextCommittedEvent__DelegateSignature");
		
		UWidget_ColorPicker_Module_C_BndEvt__mHexText_K2Node_ComponentBoundEvent_3_OnEditableTextCommittedEvent__DelegateSignature_Params params {};
		params.Text = Text;
		params.CommitMethod = CommitMethod;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_ColorPicker_Module.Widget_ColorPicker_Module_C.BndEvt__mPresets_K2Node_ComponentBoundEvent_4_OnEntryCreated__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UBPW_Combobox_Entry_C*                       CreatedEntry                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_ColorPicker_Module_C::BndEvt__mPresets_K2Node_ComponentBoundEvent_4_OnEntryCreated__DelegateSignature(class UBPW_Combobox_Entry_C* CreatedEntry, int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_ColorPicker_Module.Widget_ColorPicker_Module_C.BndEvt__mPresets_K2Node_ComponentBoundEvent_4_OnEntryCreated__DelegateSignature");
		
		UWidget_ColorPicker_Module_C_BndEvt__mPresets_K2Node_ComponentBoundEvent_4_OnEntryCreated__DelegateSignature_Params params {};
		params.CreatedEntry = CreatedEntry;
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_ColorPicker_Module.Widget_ColorPicker_Module_C.OnPresetRemovedClicked
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_ColorPicker_Module_C::OnPresetRemovedClicked(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_ColorPicker_Module.Widget_ColorPicker_Module_C.OnPresetRemovedClicked");
		
		UWidget_ColorPicker_Module_C_OnPresetRemovedClicked_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_ColorPicker_Module.Widget_ColorPicker_Module_C.OnRemovePopupClosed
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               ConfirmClicked                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_ColorPicker_Module_C::OnRemovePopupClosed(bool ConfirmClicked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_ColorPicker_Module.Widget_ColorPicker_Module_C.OnRemovePopupClosed");
		
		UWidget_ColorPicker_Module_C_OnRemovePopupClosed_Params params {};
		params.ConfirmClicked = ConfirmClicked;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_ColorPicker_Module.Widget_ColorPicker_Module_C.BndEvt__Widget_ColorPicker_Slider_K2Node_ComponentBoundEvent_0_OnValueChanged__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		double                                             Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_ColorPicker_Module_C::BndEvt__Widget_ColorPicker_Slider_K2Node_ComponentBoundEvent_0_OnValueChanged__DelegateSignature(double Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_ColorPicker_Module.Widget_ColorPicker_Module_C.BndEvt__Widget_ColorPicker_Slider_K2Node_ComponentBoundEvent_0_OnValueChanged__DelegateSignature");
		
		UWidget_ColorPicker_Module_C_BndEvt__Widget_ColorPicker_Slider_K2Node_ComponentBoundEvent_0_OnValueChanged__DelegateSignature_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_ColorPicker_Module.Widget_ColorPicker_Module_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UWidget_ColorPicker_Module_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_ColorPicker_Module.Widget_ColorPicker_Module_C.Construct");
		
		UWidget_ColorPicker_Module_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_ColorPicker_Module.Widget_ColorPicker_Module_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_ColorPicker_Module_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_ColorPicker_Module.Widget_ColorPicker_Module_C.PreConstruct");
		
		UWidget_ColorPicker_Module_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_ColorPicker_Module.Widget_ColorPicker_Module_C.BndEvt__mPresets_K2Node_ComponentBoundEvent_5_OnSelectionChanged__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      SelectedOption                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		int32_t                                            selectedIndex                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_ColorPicker_Module_C::BndEvt__mPresets_K2Node_ComponentBoundEvent_5_OnSelectionChanged__DelegateSignature(const class FString& SelectedOption, int32_t selectedIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_ColorPicker_Module.Widget_ColorPicker_Module_C.BndEvt__mPresets_K2Node_ComponentBoundEvent_5_OnSelectionChanged__DelegateSignature");
		
		UWidget_ColorPicker_Module_C_BndEvt__mPresets_K2Node_ComponentBoundEvent_5_OnSelectionChanged__DelegateSignature_Params params {};
		params.SelectedOption = SelectedOption;
		params.selectedIndex = selectedIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_ColorPicker_Module.Widget_ColorPicker_Module_C.BndEvt__mSaavePreset_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UWidget_ColorPicker_Module_C::BndEvt__mSaavePreset_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_ColorPicker_Module.Widget_ColorPicker_Module_C.BndEvt__mSaavePreset_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature");
		
		UWidget_ColorPicker_Module_C_BndEvt__mSaavePreset_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_ColorPicker_Module.Widget_ColorPicker_Module_C.ResetInput
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_ColorPicker_Module_C::ResetInput()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_ColorPicker_Module.Widget_ColorPicker_Module_C.ResetInput");
		
		UWidget_ColorPicker_Module_C_ResetInput_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_ColorPicker_Module.Widget_ColorPicker_Module_C.BndEvt__mPresets_K2Node_ComponentBoundEvent_8_OnPreOpening__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UWidget_ColorPicker_Module_C::BndEvt__mPresets_K2Node_ComponentBoundEvent_8_OnPreOpening__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_ColorPicker_Module.Widget_ColorPicker_Module_C.BndEvt__mPresets_K2Node_ComponentBoundEvent_8_OnPreOpening__DelegateSignature");
		
		UWidget_ColorPicker_Module_C_BndEvt__mPresets_K2Node_ComponentBoundEvent_8_OnPreOpening__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_ColorPicker_Module.Widget_ColorPicker_Module_C.PresetSaved
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        mPresetName                                                (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		bool                                               mDidSave                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_ColorPicker_Module_C::PresetSaved(const class FText& mPresetName, bool mDidSave)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_ColorPicker_Module.Widget_ColorPicker_Module_C.PresetSaved");
		
		UWidget_ColorPicker_Module_C_PresetSaved_Params params {};
		params.mPresetName = mPresetName;
		params.mDidSave = mDidSave;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_ColorPicker_Module.Widget_ColorPicker_Module_C.ExecuteUbergraph_Widget_ColorPicker_Module
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_ColorPicker_Module_C::ExecuteUbergraph_Widget_ColorPicker_Module(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_ColorPicker_Module.Widget_ColorPicker_Module_C.ExecuteUbergraph_Widget_ColorPicker_Module");
		
		UWidget_ColorPicker_Module_C_ExecuteUbergraph_Widget_ColorPicker_Module_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_ColorPicker_Module.Widget_ColorPicker_Module_C.OnCloseSavePreset__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_ColorPicker_Module_C::OnCloseSavePreset__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_ColorPicker_Module.Widget_ColorPicker_Module_C.OnCloseSavePreset__DelegateSignature");
		
		UWidget_ColorPicker_Module_C_OnCloseSavePreset__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_ColorPicker_Module.Widget_ColorPicker_Module_C.OnOpenSavePreset__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UBPW_ColorPickerPreset_Save_C*               SaveWidget                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_ColorPicker_Module_C::OnOpenSavePreset__DelegateSignature(class UBPW_ColorPickerPreset_Save_C* SaveWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_ColorPicker_Module.Widget_ColorPicker_Module_C.OnOpenSavePreset__DelegateSignature");
		
		UWidget_ColorPicker_Module_C_OnOpenSavePreset__DelegateSignature_Params params {};
		params.SaveWidget = SaveWidget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_ColorPicker_Module.Widget_ColorPicker_Module_C.OnPresetOpen__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FLinearColor                                InputColor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_ColorPicker_Module_C::OnPresetOpen__DelegateSignature(const struct FLinearColor& InputColor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_ColorPicker_Module.Widget_ColorPicker_Module_C.OnPresetOpen__DelegateSignature");
		
		UWidget_ColorPicker_Module_C_OnPresetOpen__DelegateSignature_Params params {};
		params.InputColor = InputColor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_ColorPicker_Module.Widget_ColorPicker_Module_C.OnValueChanged__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_ColorPicker_Module_C::OnValueChanged__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_ColorPicker_Module.Widget_ColorPicker_Module_C.OnValueChanged__DelegateSignature");
		
		UWidget_ColorPicker_Module_C_OnValueChanged__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWidget_ColorPicker_Module_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWidget_ColorPicker_Module_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_ColorPicker_Module.Widget_ColorPicker_Module_C");
		return ptr;
	}

}


