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
	 * 		Name   -> Function BPW_ServerAuthenticationRequired.BPW_ServerAuthenticationRequired_C.mSetUseBackground
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               mUseBackground                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_ServerAuthenticationRequired_C::mSetUseBackground(bool mUseBackground)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_ServerAuthenticationRequired.BPW_ServerAuthenticationRequired_C.mSetUseBackground");
		
		UBPW_ServerAuthenticationRequired_C_mSetUseBackground_Params params {};
		params.mUseBackground = mUseBackground;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_ServerAuthenticationRequired.BPW_ServerAuthenticationRequired_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_ServerAuthenticationRequired_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_ServerAuthenticationRequired.BPW_ServerAuthenticationRequired_C.PreConstruct");
		
		UBPW_ServerAuthenticationRequired_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_ServerAuthenticationRequired.BPW_ServerAuthenticationRequired_C.BndEvt__Button_Authenticate_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBPW_ServerAuthenticationRequired_C::BndEvt__Button_Authenticate_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_ServerAuthenticationRequired.BPW_ServerAuthenticationRequired_C.BndEvt__Button_Authenticate_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");
		
		UBPW_ServerAuthenticationRequired_C_BndEvt__Button_Authenticate_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_ServerAuthenticationRequired.BPW_ServerAuthenticationRequired_C.ExecuteUbergraph_BPW_ServerAuthenticationRequired
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_ServerAuthenticationRequired_C::ExecuteUbergraph_BPW_ServerAuthenticationRequired(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_ServerAuthenticationRequired.BPW_ServerAuthenticationRequired_C.ExecuteUbergraph_BPW_ServerAuthenticationRequired");
		
		UBPW_ServerAuthenticationRequired_C_ExecuteUbergraph_BPW_ServerAuthenticationRequired_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_ServerAuthenticationRequired.BPW_ServerAuthenticationRequired_C.OnAuthenticate__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_ServerAuthenticationRequired_C::OnAuthenticate__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_ServerAuthenticationRequired.BPW_ServerAuthenticationRequired_C.OnAuthenticate__DelegateSignature");
		
		UBPW_ServerAuthenticationRequired_C_OnAuthenticate__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPW_ServerAuthenticationRequired_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPW_ServerAuthenticationRequired_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BPW_ServerAuthenticationRequired.BPW_ServerAuthenticationRequired_C");
		return ptr;
	}

}


