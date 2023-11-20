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
	 * 		Name   -> Function BPW_Server_ConnectionIsPossible.BPW_Server_ConnectionIsPossible_C.BndEvt__Button_Connect_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBPW_Server_ConnectionIsPossible_C::BndEvt__Button_Connect_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Server_ConnectionIsPossible.BPW_Server_ConnectionIsPossible_C.BndEvt__Button_Connect_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");
		
		UBPW_Server_ConnectionIsPossible_C_BndEvt__Button_Connect_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_Server_ConnectionIsPossible.BPW_Server_ConnectionIsPossible_C.ExecuteUbergraph_BPW_Server_ConnectionIsPossible
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_Server_ConnectionIsPossible_C::ExecuteUbergraph_BPW_Server_ConnectionIsPossible(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Server_ConnectionIsPossible.BPW_Server_ConnectionIsPossible_C.ExecuteUbergraph_BPW_Server_ConnectionIsPossible");
		
		UBPW_Server_ConnectionIsPossible_C_ExecuteUbergraph_BPW_Server_ConnectionIsPossible_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_Server_ConnectionIsPossible.BPW_Server_ConnectionIsPossible_C.OnConnect__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_Server_ConnectionIsPossible_C::OnConnect__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Server_ConnectionIsPossible.BPW_Server_ConnectionIsPossible_C.OnConnect__DelegateSignature");
		
		UBPW_Server_ConnectionIsPossible_C_OnConnect__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPW_Server_ConnectionIsPossible_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPW_Server_ConnectionIsPossible_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BPW_Server_ConnectionIsPossible.BPW_Server_ConnectionIsPossible_C");
		return ptr;
	}

}


