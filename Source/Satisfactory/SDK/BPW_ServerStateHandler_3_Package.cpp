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
	 * 		Name   -> Function BPW_ServerStateHandler_3.BPW_ServerStateHandler_2_C.SetExceptions
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TMap<EServerComplexState, class UWidget*>          mExceptions                                                (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
	 */
	void UBPW_ServerStateHandler_2_C::SetExceptions(TMap<EServerComplexState, class UWidget*> mExceptions)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_ServerStateHandler_3.BPW_ServerStateHandler_2_C.SetExceptions");
		
		UBPW_ServerStateHandler_2_C_SetExceptions_Params params {};
		params.mExceptions = mExceptions;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_ServerStateHandler_3.BPW_ServerStateHandler_2_C.SetState
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UFGServerObject*                             Server                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		EServerComplexState                                State                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_ServerStateHandler_2_C::SetState(class UFGServerObject* Server, EServerComplexState State)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_ServerStateHandler_3.BPW_ServerStateHandler_2_C.SetState");
		
		UBPW_ServerStateHandler_2_C_SetState_Params params {};
		params.Server = Server;
		params.State = State;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_ServerStateHandler_3.BPW_ServerStateHandler_2_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_ServerStateHandler_2_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_ServerStateHandler_3.BPW_ServerStateHandler_2_C.PreConstruct");
		
		UBPW_ServerStateHandler_2_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_ServerStateHandler_3.BPW_ServerStateHandler_2_C.BndEvt__BPW_Server_ConnectionFailed_K2Node_ComponentBoundEvent_0_OnRetry__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBPW_ServerStateHandler_2_C::BndEvt__BPW_Server_ConnectionFailed_K2Node_ComponentBoundEvent_0_OnRetry__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_ServerStateHandler_3.BPW_ServerStateHandler_2_C.BndEvt__BPW_Server_ConnectionFailed_K2Node_ComponentBoundEvent_0_OnRetry__DelegateSignature");
		
		UBPW_ServerStateHandler_2_C_BndEvt__BPW_Server_ConnectionFailed_K2Node_ComponentBoundEvent_0_OnRetry__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_ServerStateHandler_3.BPW_ServerStateHandler_2_C.BndEvt__BPW_Server_ConnectionIsPossible_K2Node_ComponentBoundEvent_1_OnConnect__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBPW_ServerStateHandler_2_C::BndEvt__BPW_Server_ConnectionIsPossible_K2Node_ComponentBoundEvent_1_OnConnect__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_ServerStateHandler_3.BPW_ServerStateHandler_2_C.BndEvt__BPW_Server_ConnectionIsPossible_K2Node_ComponentBoundEvent_1_OnConnect__DelegateSignature");
		
		UBPW_ServerStateHandler_2_C_BndEvt__BPW_Server_ConnectionIsPossible_K2Node_ComponentBoundEvent_1_OnConnect__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_ServerStateHandler_3.BPW_ServerStateHandler_2_C.BndEvt__BPW_ServerAuthenticationRequired_K2Node_ComponentBoundEvent_2_OnAuthenticate__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBPW_ServerStateHandler_2_C::BndEvt__BPW_ServerAuthenticationRequired_K2Node_ComponentBoundEvent_2_OnAuthenticate__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_ServerStateHandler_3.BPW_ServerStateHandler_2_C.BndEvt__BPW_ServerAuthenticationRequired_K2Node_ComponentBoundEvent_2_OnAuthenticate__DelegateSignature");
		
		UBPW_ServerStateHandler_2_C_BndEvt__BPW_ServerAuthenticationRequired_K2Node_ComponentBoundEvent_2_OnAuthenticate__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_ServerStateHandler_3.BPW_ServerStateHandler_2_C.ExecuteUbergraph_BPW_ServerStateHandler_3
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_ServerStateHandler_2_C::ExecuteUbergraph_BPW_ServerStateHandler_3(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_ServerStateHandler_3.BPW_ServerStateHandler_2_C.ExecuteUbergraph_BPW_ServerStateHandler_3");
		
		UBPW_ServerStateHandler_2_C_ExecuteUbergraph_BPW_ServerStateHandler_3_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPW_ServerStateHandler_2_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPW_ServerStateHandler_2_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BPW_ServerStateHandler_3.BPW_ServerStateHandler_2_C");
		return ptr;
	}

}


