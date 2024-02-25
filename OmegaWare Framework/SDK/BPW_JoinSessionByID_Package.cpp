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
	 * 		Name   -> Function BPW_JoinSessionByID.BPW_JoinSessionByID_C.GetShouldOkayBeEnabled
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	bool UBPW_JoinSessionByID_C::GetShouldOkayBeEnabled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_JoinSessionByID.BPW_JoinSessionByID_C.GetShouldOkayBeEnabled");
		
		UBPW_JoinSessionByID_C_GetShouldOkayBeEnabled_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_JoinSessionByID.BPW_JoinSessionByID_C.NotifyPopupConfirmed
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_JoinSessionByID_C::NotifyPopupConfirmed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_JoinSessionByID.BPW_JoinSessionByID_C.NotifyPopupConfirmed");
		
		UBPW_JoinSessionByID_C_NotifyPopupConfirmed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_JoinSessionByID.BPW_JoinSessionByID_C.NotifyPopupCanceled
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_JoinSessionByID_C::NotifyPopupCanceled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_JoinSessionByID.BPW_JoinSessionByID_C.NotifyPopupCanceled");
		
		UBPW_JoinSessionByID_C_NotifyPopupCanceled_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_JoinSessionByID.BPW_JoinSessionByID_C.BndEvt__mTextInput_K2Node_ComponentBoundEvent_1_OnEditableTextChangedEvent__DelegateSignature
	 * 		Flags  -> (HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        Text                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UBPW_JoinSessionByID_C::BndEvt__mTextInput_K2Node_ComponentBoundEvent_1_OnEditableTextChangedEvent__DelegateSignature(const class FText& Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_JoinSessionByID.BPW_JoinSessionByID_C.BndEvt__mTextInput_K2Node_ComponentBoundEvent_1_OnEditableTextChangedEvent__DelegateSignature");
		
		UBPW_JoinSessionByID_C_BndEvt__mTextInput_K2Node_ComponentBoundEvent_1_OnEditableTextChangedEvent__DelegateSignature_Params params {};
		params.Text = Text;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_JoinSessionByID.BPW_JoinSessionByID_C.BndEvt__Widget_StandardButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBPW_JoinSessionByID_C::BndEvt__Widget_StandardButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_JoinSessionByID.BPW_JoinSessionByID_C.BndEvt__Widget_StandardButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");
		
		UBPW_JoinSessionByID_C_BndEvt__Widget_StandardButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_JoinSessionByID.BPW_JoinSessionByID_C.BndEvt__mShowSessionIDButton_K2Node_ComponentBoundEvent_4_OnReleased__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBPW_JoinSessionByID_C::BndEvt__mShowSessionIDButton_K2Node_ComponentBoundEvent_4_OnReleased__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_JoinSessionByID.BPW_JoinSessionByID_C.BndEvt__mShowSessionIDButton_K2Node_ComponentBoundEvent_4_OnReleased__DelegateSignature");
		
		UBPW_JoinSessionByID_C_BndEvt__mShowSessionIDButton_K2Node_ComponentBoundEvent_4_OnReleased__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_JoinSessionByID.BPW_JoinSessionByID_C.BndEvt__mShowSessionIDButton_K2Node_ComponentBoundEvent_5_OnPressed__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBPW_JoinSessionByID_C::BndEvt__mShowSessionIDButton_K2Node_ComponentBoundEvent_5_OnPressed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_JoinSessionByID.BPW_JoinSessionByID_C.BndEvt__mShowSessionIDButton_K2Node_ComponentBoundEvent_5_OnPressed__DelegateSignature");
		
		UBPW_JoinSessionByID_C_BndEvt__mShowSessionIDButton_K2Node_ComponentBoundEvent_5_OnPressed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_JoinSessionByID.BPW_JoinSessionByID_C.ExecuteUbergraph_BPW_JoinSessionByID
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_JoinSessionByID_C::ExecuteUbergraph_BPW_JoinSessionByID(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_JoinSessionByID.BPW_JoinSessionByID_C.ExecuteUbergraph_BPW_JoinSessionByID");
		
		UBPW_JoinSessionByID_C_ExecuteUbergraph_BPW_JoinSessionByID_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPW_JoinSessionByID_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPW_JoinSessionByID_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BPW_JoinSessionByID.BPW_JoinSessionByID_C");
		return ptr;
	}

}


