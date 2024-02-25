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
	 * 		Name   -> Function BPW_OptionsCheckbox.BPW_OptionsCheckbox_C.SetEnabled
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Enabled                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_OptionsCheckbox_C::SetEnabled(bool Enabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_OptionsCheckbox.BPW_OptionsCheckbox_C.SetEnabled");
		
		UBPW_OptionsCheckbox_C_SetEnabled_Params params {};
		params.Enabled = Enabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_OptionsCheckbox.BPW_OptionsCheckbox_C.HandleChecked
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsChecked                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_OptionsCheckbox_C::HandleChecked(bool IsChecked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_OptionsCheckbox.BPW_OptionsCheckbox_C.HandleChecked");
		
		UBPW_OptionsCheckbox_C_HandleChecked_Params params {};
		params.IsChecked = IsChecked;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_OptionsCheckbox.BPW_OptionsCheckbox_C.UpdateCheckboxValue
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_OptionsCheckbox_C::UpdateCheckboxValue()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_OptionsCheckbox.BPW_OptionsCheckbox_C.UpdateCheckboxValue");
		
		UBPW_OptionsCheckbox_C_UpdateCheckboxValue_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_OptionsCheckbox.BPW_OptionsCheckbox_C.SetChecked
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               mIsChecked                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               TriggerCheckedEvent                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsChecked                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_OptionsCheckbox_C::SetChecked(bool mIsChecked, bool TriggerCheckedEvent, bool* IsChecked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_OptionsCheckbox.BPW_OptionsCheckbox_C.SetChecked");
		
		UBPW_OptionsCheckbox_C_SetChecked_Params params {};
		params.mIsChecked = mIsChecked;
		params.TriggerCheckedEvent = TriggerCheckedEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsChecked != nullptr)
			*IsChecked = params.IsChecked;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_OptionsCheckbox.BPW_OptionsCheckbox_C.BndEvt__mButton_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBPW_OptionsCheckbox_C::BndEvt__mButton_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_OptionsCheckbox.BPW_OptionsCheckbox_C.BndEvt__mButton_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature");
		
		UBPW_OptionsCheckbox_C_BndEvt__mButton_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_OptionsCheckbox.BPW_OptionsCheckbox_C.OnRowHovered
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_OptionsCheckbox_C::OnRowHovered()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_OptionsCheckbox.BPW_OptionsCheckbox_C.OnRowHovered");
		
		UBPW_OptionsCheckbox_C_OnRowHovered_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_OptionsCheckbox.BPW_OptionsCheckbox_C.OnRowUnhovered
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_OptionsCheckbox_C::OnRowUnhovered()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_OptionsCheckbox.BPW_OptionsCheckbox_C.OnRowUnhovered");
		
		UBPW_OptionsCheckbox_C_OnRowUnhovered_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_OptionsCheckbox.BPW_OptionsCheckbox_C.OnInitValueController
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UBPW_OptionsCheckbox_C::OnInitValueController()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_OptionsCheckbox.BPW_OptionsCheckbox_C.OnInitValueController");
		
		UBPW_OptionsCheckbox_C_OnInitValueController_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_OptionsCheckbox.BPW_OptionsCheckbox_C.OnOptionValueUpdated
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_OptionsCheckbox_C::OnOptionValueUpdated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_OptionsCheckbox.BPW_OptionsCheckbox_C.OnOptionValueUpdated");
		
		UBPW_OptionsCheckbox_C_OnOptionValueUpdated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_OptionsCheckbox.BPW_OptionsCheckbox_C.BndEvt__mButton_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBPW_OptionsCheckbox_C::BndEvt__mButton_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_OptionsCheckbox.BPW_OptionsCheckbox_C.BndEvt__mButton_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature");
		
		UBPW_OptionsCheckbox_C_BndEvt__mButton_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_OptionsCheckbox.BPW_OptionsCheckbox_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_OptionsCheckbox_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_OptionsCheckbox.BPW_OptionsCheckbox_C.PreConstruct");
		
		UBPW_OptionsCheckbox_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_OptionsCheckbox.BPW_OptionsCheckbox_C.BndEvt__mButton_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBPW_OptionsCheckbox_C::BndEvt__mButton_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_OptionsCheckbox.BPW_OptionsCheckbox_C.BndEvt__mButton_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature");
		
		UBPW_OptionsCheckbox_C_BndEvt__mButton_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_OptionsCheckbox.BPW_OptionsCheckbox_C.BndEvt__mButton_K2Node_ComponentBoundEvent_5_OnButtonPressedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBPW_OptionsCheckbox_C::BndEvt__mButton_K2Node_ComponentBoundEvent_5_OnButtonPressedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_OptionsCheckbox.BPW_OptionsCheckbox_C.BndEvt__mButton_K2Node_ComponentBoundEvent_5_OnButtonPressedEvent__DelegateSignature");
		
		UBPW_OptionsCheckbox_C_BndEvt__mButton_K2Node_ComponentBoundEvent_5_OnButtonPressedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_OptionsCheckbox.BPW_OptionsCheckbox_C.ExecuteUbergraph_BPW_OptionsCheckbox
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_OptionsCheckbox_C::ExecuteUbergraph_BPW_OptionsCheckbox(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_OptionsCheckbox.BPW_OptionsCheckbox_C.ExecuteUbergraph_BPW_OptionsCheckbox");
		
		UBPW_OptionsCheckbox_C_ExecuteUbergraph_BPW_OptionsCheckbox_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_OptionsCheckbox.BPW_OptionsCheckbox_C.OnCheckChanged__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsChecked                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_OptionsCheckbox_C::OnCheckChanged__DelegateSignature(bool IsChecked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_OptionsCheckbox.BPW_OptionsCheckbox_C.OnCheckChanged__DelegateSignature");
		
		UBPW_OptionsCheckbox_C_OnCheckChanged__DelegateSignature_Params params {};
		params.IsChecked = IsChecked;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPW_OptionsCheckbox_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPW_OptionsCheckbox_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BPW_OptionsCheckbox.BPW_OptionsCheckbox_C");
		return ptr;
	}

}


