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
	 * 		Name   -> Function BPW_SmallSettingsButton.BPW_SmallSettingsButton_C.BndEvt__BPW_SmallSettingsButton_mButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBPW_SmallSettingsButton_C::BndEvt__BPW_SmallSettingsButton_mButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_SmallSettingsButton.BPW_SmallSettingsButton_C.BndEvt__BPW_SmallSettingsButton_mButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UBPW_SmallSettingsButton_C_BndEvt__BPW_SmallSettingsButton_mButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_SmallSettingsButton.BPW_SmallSettingsButton_C.ExecuteUbergraph_BPW_SmallSettingsButton
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_SmallSettingsButton_C::ExecuteUbergraph_BPW_SmallSettingsButton(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_SmallSettingsButton.BPW_SmallSettingsButton_C.ExecuteUbergraph_BPW_SmallSettingsButton");
		
		UBPW_SmallSettingsButton_C_ExecuteUbergraph_BPW_SmallSettingsButton_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_SmallSettingsButton.BPW_SmallSettingsButton_C.OnClicked__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_SmallSettingsButton_C::OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_SmallSettingsButton.BPW_SmallSettingsButton_C.OnClicked__DelegateSignature");
		
		UBPW_SmallSettingsButton_C_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPW_SmallSettingsButton_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPW_SmallSettingsButton_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BPW_SmallSettingsButton.BPW_SmallSettingsButton_C");
		return ptr;
	}

}


