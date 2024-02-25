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
	 * 		Name   -> Function BPW_Server_ManageSaves.BPW_Server_ManageSaves_C.UpdateSaves
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_Server_ManageSaves_C::UpdateSaves()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Server_ManageSaves.BPW_Server_ManageSaves_C.UpdateSaves");
		
		UBPW_Server_ManageSaves_C_UpdateSaves_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_Server_ManageSaves.BPW_Server_ManageSaves_C.OnMenuOpen
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_Server_ManageSaves_C::OnMenuOpen()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Server_ManageSaves.BPW_Server_ManageSaves_C.OnMenuOpen");
		
		UBPW_Server_ManageSaves_C_OnMenuOpen_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_Server_ManageSaves.BPW_Server_ManageSaves_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UBPW_Server_ManageSaves_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Server_ManageSaves.BPW_Server_ManageSaves_C.Construct");
		
		UBPW_Server_ManageSaves_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_Server_ManageSaves.BPW_Server_ManageSaves_C.BP_OnServerComplexStateChanged
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class UFGServerObject*                             Server                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		EServerComplexState                                State                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_Server_ManageSaves_C::BP_OnServerComplexStateChanged(class UFGServerObject* Server, EServerComplexState State)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Server_ManageSaves.BPW_Server_ManageSaves_C.BP_OnServerComplexStateChanged");
		
		UBPW_Server_ManageSaves_C_BP_OnServerComplexStateChanged_Params params {};
		params.Server = Server;
		params.State = State;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_Server_ManageSaves.BPW_Server_ManageSaves_C.BP_OnServerChanged
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class UFGServerObject*                             Server                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_Server_ManageSaves_C::BP_OnServerChanged(class UFGServerObject* Server)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Server_ManageSaves.BPW_Server_ManageSaves_C.BP_OnServerChanged");
		
		UBPW_Server_ManageSaves_C_BP_OnServerChanged_Params params {};
		params.Server = Server;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_Server_ManageSaves.BPW_Server_ManageSaves_C.BndEvt__mCreateSave_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBPW_Server_ManageSaves_C::BndEvt__mCreateSave_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Server_ManageSaves.BPW_Server_ManageSaves_C.BndEvt__mCreateSave_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");
		
		UBPW_Server_ManageSaves_C_BndEvt__mCreateSave_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_Server_ManageSaves.BPW_Server_ManageSaves_C.BndEvt__mLoadSave_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBPW_Server_ManageSaves_C::BndEvt__mLoadSave_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Server_ManageSaves.BPW_Server_ManageSaves_C.BndEvt__mLoadSave_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature");
		
		UBPW_Server_ManageSaves_C_BndEvt__mLoadSave_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_Server_ManageSaves.BPW_Server_ManageSaves_C.BndEvt__mUploadSave_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBPW_Server_ManageSaves_C::BndEvt__mUploadSave_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Server_ManageSaves.BPW_Server_ManageSaves_C.BndEvt__mUploadSave_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature");
		
		UBPW_Server_ManageSaves_C_BndEvt__mUploadSave_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_Server_ManageSaves.BPW_Server_ManageSaves_C.ExecuteUbergraph_BPW_Server_ManageSaves
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_Server_ManageSaves_C::ExecuteUbergraph_BPW_Server_ManageSaves(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Server_ManageSaves.BPW_Server_ManageSaves_C.ExecuteUbergraph_BPW_Server_ManageSaves");
		
		UBPW_Server_ManageSaves_C_ExecuteUbergraph_BPW_Server_ManageSaves_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPW_Server_ManageSaves_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPW_Server_ManageSaves_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BPW_Server_ManageSaves.BPW_Server_ManageSaves_C");
		return ptr;
	}

}


