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
	 * 		Name   -> Function BPW_Server_ConnectionFailed.BPW_Server_ConnectionFailed_C.BndEvt__Button_Connect_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBPW_Server_ConnectionFailed_C::BndEvt__Button_Connect_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Server_ConnectionFailed.BPW_Server_ConnectionFailed_C.BndEvt__Button_Connect_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");
		
		UBPW_Server_ConnectionFailed_C_BndEvt__Button_Connect_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_Server_ConnectionFailed.BPW_Server_ConnectionFailed_C.ExecuteUbergraph_BPW_Server_ConnectionFailed
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_Server_ConnectionFailed_C::ExecuteUbergraph_BPW_Server_ConnectionFailed(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Server_ConnectionFailed.BPW_Server_ConnectionFailed_C.ExecuteUbergraph_BPW_Server_ConnectionFailed");
		
		UBPW_Server_ConnectionFailed_C_ExecuteUbergraph_BPW_Server_ConnectionFailed_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_Server_ConnectionFailed.BPW_Server_ConnectionFailed_C.OnRetry__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_Server_ConnectionFailed_C::OnRetry__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Server_ConnectionFailed.BPW_Server_ConnectionFailed_C.OnRetry__DelegateSignature");
		
		UBPW_Server_ConnectionFailed_C_OnRetry__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPW_Server_ConnectionFailed_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPW_Server_ConnectionFailed_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BPW_Server_ConnectionFailed.BPW_Server_ConnectionFailed_C");
		return ptr;
	}

}


