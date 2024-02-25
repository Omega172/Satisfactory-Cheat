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
	 * 		Name   -> Function BPW_Option_MaxFPS.BPW_Option_MaxFPS_C.IsPendingApply
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	bool UBPW_Option_MaxFPS_C::IsPendingApply()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Option_MaxFPS.BPW_Option_MaxFPS_C.IsPendingApply");
		
		UBPW_Option_MaxFPS_C_IsPendingApply_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_Option_MaxFPS.BPW_Option_MaxFPS_C.UpdateDropdownVisibility
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               ShouldShowDropdown                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_Option_MaxFPS_C::UpdateDropdownVisibility(bool ShouldShowDropdown)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Option_MaxFPS.BPW_Option_MaxFPS_C.UpdateDropdownVisibility");
		
		UBPW_Option_MaxFPS_C_UpdateDropdownVisibility_Params params {};
		params.ShouldShowDropdown = ShouldShowDropdown;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_Option_MaxFPS.BPW_Option_MaxFPS_C.UpdateSliderValue
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_Option_MaxFPS_C::UpdateSliderValue()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Option_MaxFPS.BPW_Option_MaxFPS_C.UpdateSliderValue");
		
		UBPW_Option_MaxFPS_C_UpdateSliderValue_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_Option_MaxFPS.BPW_Option_MaxFPS_C.HandleSlider
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_Option_MaxFPS_C::HandleSlider()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Option_MaxFPS.BPW_Option_MaxFPS_C.HandleSlider");
		
		UBPW_Option_MaxFPS_C_HandleSlider_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_Option_MaxFPS.BPW_Option_MaxFPS_C.SetupSlider
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_Option_MaxFPS_C::SetupSlider()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Option_MaxFPS.BPW_Option_MaxFPS_C.SetupSlider");
		
		UBPW_Option_MaxFPS_C_SetupSlider_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_Option_MaxFPS.BPW_Option_MaxFPS_C.GetDisplayValue
	 * 		Flags  -> (Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		double                                             DisplayValue                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_Option_MaxFPS_C::GetDisplayValue(double* DisplayValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Option_MaxFPS.BPW_Option_MaxFPS_C.GetDisplayValue");
		
		UBPW_Option_MaxFPS_C_GetDisplayValue_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (DisplayValue != nullptr)
			*DisplayValue = params.DisplayValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_Option_MaxFPS.BPW_Option_MaxFPS_C.SetNormalizedValue
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		double                                             CurrentUnadjustedValue                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_Option_MaxFPS_C::SetNormalizedValue(double CurrentUnadjustedValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Option_MaxFPS.BPW_Option_MaxFPS_C.SetNormalizedValue");
		
		UBPW_Option_MaxFPS_C_SetNormalizedValue_Params params {};
		params.CurrentUnadjustedValue = CurrentUnadjustedValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_Option_MaxFPS.BPW_Option_MaxFPS_C.GetAdjustedValue
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		double                                             AdjustedValue                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_Option_MaxFPS_C::GetAdjustedValue(double* AdjustedValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Option_MaxFPS.BPW_Option_MaxFPS_C.GetAdjustedValue");
		
		UBPW_Option_MaxFPS_C_GetAdjustedValue_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AdjustedValue != nullptr)
			*AdjustedValue = params.AdjustedValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_Option_MaxFPS.BPW_Option_MaxFPS_C.SetProgressBarPercentage
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		double                                             Percent                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_Option_MaxFPS_C::SetProgressBarPercentage(double Percent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Option_MaxFPS.BPW_Option_MaxFPS_C.SetProgressBarPercentage");
		
		UBPW_Option_MaxFPS_C_SetProgressBarPercentage_Params params {};
		params.Percent = Percent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_Option_MaxFPS.BPW_Option_MaxFPS_C.GetProgressBarPercentage
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	float UBPW_Option_MaxFPS_C::GetProgressBarPercentage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Option_MaxFPS.BPW_Option_MaxFPS_C.GetProgressBarPercentage");
		
		UBPW_Option_MaxFPS_C_GetProgressBarPercentage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_Option_MaxFPS.BPW_Option_MaxFPS_C.GetValueText
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	class FText UBPW_Option_MaxFPS_C::GetValueText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Option_MaxFPS.BPW_Option_MaxFPS_C.GetValueText");
		
		UBPW_Option_MaxFPS_C_GetValueText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_Option_MaxFPS.BPW_Option_MaxFPS_C.BndEvt__OptionSlider_K2Node_ComponentBoundEvent_104_OnFloatValueChangedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_Option_MaxFPS_C::BndEvt__OptionSlider_K2Node_ComponentBoundEvent_104_OnFloatValueChangedEvent__DelegateSignature(float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Option_MaxFPS.BPW_Option_MaxFPS_C.BndEvt__OptionSlider_K2Node_ComponentBoundEvent_104_OnFloatValueChangedEvent__DelegateSignature");
		
		UBPW_Option_MaxFPS_C_BndEvt__OptionSlider_K2Node_ComponentBoundEvent_104_OnFloatValueChangedEvent__DelegateSignature_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_Option_MaxFPS.BPW_Option_MaxFPS_C.OnRowHovered
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_Option_MaxFPS_C::OnRowHovered()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Option_MaxFPS.BPW_Option_MaxFPS_C.OnRowHovered");
		
		UBPW_Option_MaxFPS_C_OnRowHovered_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_Option_MaxFPS.BPW_Option_MaxFPS_C.OnRowUnhovered
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_Option_MaxFPS_C::OnRowUnhovered()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Option_MaxFPS.BPW_Option_MaxFPS_C.OnRowUnhovered");
		
		UBPW_Option_MaxFPS_C_OnRowUnhovered_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_Option_MaxFPS.BPW_Option_MaxFPS_C.OnInitValueController
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UBPW_Option_MaxFPS_C::OnInitValueController()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Option_MaxFPS.BPW_Option_MaxFPS_C.OnInitValueController");
		
		UBPW_Option_MaxFPS_C_OnInitValueController_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_Option_MaxFPS.BPW_Option_MaxFPS_C.BndEvt__EditableTextBox_0_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature
	 * 		Flags  -> (HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        Text                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		ETextCommit                                        CommitMethod                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_Option_MaxFPS_C::BndEvt__EditableTextBox_0_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature(const class FText& Text, ETextCommit CommitMethod)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Option_MaxFPS.BPW_Option_MaxFPS_C.BndEvt__EditableTextBox_0_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature");
		
		UBPW_Option_MaxFPS_C_BndEvt__EditableTextBox_0_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature_Params params {};
		params.Text = Text;
		params.CommitMethod = CommitMethod;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_Option_MaxFPS.BPW_Option_MaxFPS_C.OnOptionValueUpdated
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_Option_MaxFPS_C::OnOptionValueUpdated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Option_MaxFPS.BPW_Option_MaxFPS_C.OnOptionValueUpdated");
		
		UBPW_Option_MaxFPS_C_OnOptionValueUpdated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_Option_MaxFPS.BPW_Option_MaxFPS_C.BndEvt__mFakeButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBPW_Option_MaxFPS_C::BndEvt__mFakeButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Option_MaxFPS.BPW_Option_MaxFPS_C.BndEvt__mFakeButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");
		
		UBPW_Option_MaxFPS_C_BndEvt__mFakeButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_Option_MaxFPS.BPW_Option_MaxFPS_C.BndEvt__mDropdownBox_K2Node_ComponentBoundEvent_2_OnSelectionChangedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      SelectedItem                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		ESelectInfo                                        SelectionType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_Option_MaxFPS_C::BndEvt__mDropdownBox_K2Node_ComponentBoundEvent_2_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, ESelectInfo SelectionType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Option_MaxFPS.BPW_Option_MaxFPS_C.BndEvt__mDropdownBox_K2Node_ComponentBoundEvent_2_OnSelectionChangedEvent__DelegateSignature");
		
		UBPW_Option_MaxFPS_C_BndEvt__mDropdownBox_K2Node_ComponentBoundEvent_2_OnSelectionChangedEvent__DelegateSignature_Params params {};
		params.SelectedItem = SelectedItem;
		params.SelectionType = SelectionType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_Option_MaxFPS.BPW_Option_MaxFPS_C.BndEvt__mDropdownBox_K2Node_ComponentBoundEvent_3_OnOpeningEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBPW_Option_MaxFPS_C::BndEvt__mDropdownBox_K2Node_ComponentBoundEvent_3_OnOpeningEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Option_MaxFPS.BPW_Option_MaxFPS_C.BndEvt__mDropdownBox_K2Node_ComponentBoundEvent_3_OnOpeningEvent__DelegateSignature");
		
		UBPW_Option_MaxFPS_C_BndEvt__mDropdownBox_K2Node_ComponentBoundEvent_3_OnOpeningEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_Option_MaxFPS.BPW_Option_MaxFPS_C.StartCloseTimer
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_Option_MaxFPS_C::StartCloseTimer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Option_MaxFPS.BPW_Option_MaxFPS_C.StartCloseTimer");
		
		UBPW_Option_MaxFPS_C_StartCloseTimer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_Option_MaxFPS.BPW_Option_MaxFPS_C.CloseDropdownBox
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_Option_MaxFPS_C::CloseDropdownBox()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Option_MaxFPS.BPW_Option_MaxFPS_C.CloseDropdownBox");
		
		UBPW_Option_MaxFPS_C_CloseDropdownBox_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_Option_MaxFPS.BPW_Option_MaxFPS_C.ToggleDropdownVisibilty
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_Option_MaxFPS_C::ToggleDropdownVisibilty()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Option_MaxFPS.BPW_Option_MaxFPS_C.ToggleDropdownVisibilty");
		
		UBPW_Option_MaxFPS_C_ToggleDropdownVisibilty_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_Option_MaxFPS.BPW_Option_MaxFPS_C.ExecuteUbergraph_BPW_Option_MaxFPS
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_Option_MaxFPS_C::ExecuteUbergraph_BPW_Option_MaxFPS(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Option_MaxFPS.BPW_Option_MaxFPS_C.ExecuteUbergraph_BPW_Option_MaxFPS");
		
		UBPW_Option_MaxFPS_C_ExecuteUbergraph_BPW_Option_MaxFPS_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPW_Option_MaxFPS_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPW_Option_MaxFPS_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BPW_Option_MaxFPS.BPW_Option_MaxFPS_C");
		return ptr;
	}

}


