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
	 * 		Name   -> Function BPW_NumericEntry_Labeled.BPW_NumericEntry_Labeled_C.UpdateTextAndValue
	 * 		Flags  -> (Private, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_NumericEntry_Labeled_C::UpdateTextAndValue()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_NumericEntry_Labeled.BPW_NumericEntry_Labeled_C.UpdateTextAndValue");
		
		UBPW_NumericEntry_Labeled_C_UpdateTextAndValue_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_NumericEntry_Labeled.BPW_NumericEntry_Labeled_C.SetNumericEntryValue
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		double                                             Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_NumericEntry_Labeled_C::SetNumericEntryValue(double Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_NumericEntry_Labeled.BPW_NumericEntry_Labeled_C.SetNumericEntryValue");
		
		UBPW_NumericEntry_Labeled_C_SetNumericEntryValue_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_NumericEntry_Labeled.BPW_NumericEntry_Labeled_C.SetLabel
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        Label                                                      (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UBPW_NumericEntry_Labeled_C::SetLabel(const class FText& Label)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_NumericEntry_Labeled.BPW_NumericEntry_Labeled_C.SetLabel");
		
		UBPW_NumericEntry_Labeled_C_SetLabel_Params params {};
		params.Label = Label;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_NumericEntry_Labeled.BPW_NumericEntry_Labeled_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_NumericEntry_Labeled_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_NumericEntry_Labeled.BPW_NumericEntry_Labeled_C.PreConstruct");
		
		UBPW_NumericEntry_Labeled_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_NumericEntry_Labeled.BPW_NumericEntry_Labeled_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UBPW_NumericEntry_Labeled_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_NumericEntry_Labeled.BPW_NumericEntry_Labeled_C.Construct");
		
		UBPW_NumericEntry_Labeled_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_NumericEntry_Labeled.BPW_NumericEntry_Labeled_C.BndEvt__mSpinBox_K2Node_ComponentBoundEvent_0_OnSpinBoxValueChangedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		float                                              InValue                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_NumericEntry_Labeled_C::BndEvt__mSpinBox_K2Node_ComponentBoundEvent_0_OnSpinBoxValueChangedEvent__DelegateSignature(float InValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_NumericEntry_Labeled.BPW_NumericEntry_Labeled_C.BndEvt__mSpinBox_K2Node_ComponentBoundEvent_0_OnSpinBoxValueChangedEvent__DelegateSignature");
		
		UBPW_NumericEntry_Labeled_C_BndEvt__mSpinBox_K2Node_ComponentBoundEvent_0_OnSpinBoxValueChangedEvent__DelegateSignature_Params params {};
		params.InValue = InValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_NumericEntry_Labeled.BPW_NumericEntry_Labeled_C.ExecuteUbergraph_BPW_NumericEntry_Labeled
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_NumericEntry_Labeled_C::ExecuteUbergraph_BPW_NumericEntry_Labeled(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_NumericEntry_Labeled.BPW_NumericEntry_Labeled_C.ExecuteUbergraph_BPW_NumericEntry_Labeled");
		
		UBPW_NumericEntry_Labeled_C_ExecuteUbergraph_BPW_NumericEntry_Labeled_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_NumericEntry_Labeled.BPW_NumericEntry_Labeled_C.OnValueChanged__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		double                                             NewValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_NumericEntry_Labeled_C::OnValueChanged__DelegateSignature(double NewValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_NumericEntry_Labeled.BPW_NumericEntry_Labeled_C.OnValueChanged__DelegateSignature");
		
		UBPW_NumericEntry_Labeled_C_OnValueChanged__DelegateSignature_Params params {};
		params.NewValue = NewValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPW_NumericEntry_Labeled_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPW_NumericEntry_Labeled_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BPW_NumericEntry_Labeled.BPW_NumericEntry_Labeled_C");
		return ptr;
	}

}


