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
	 * 		Name   -> Function BPW_Server_NewGame.BPW_Server_NewGame_C.Get Create Button Is Enabled
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	bool UBPW_Server_NewGame_C::GetCreateButtonIsEnabled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Server_NewGame.BPW_Server_NewGame_C.Get Create Button Is Enabled");
		
		UBPW_Server_NewGame_C_GetCreateButtonIsEnabled_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_Server_NewGame.BPW_Server_NewGame_C.Init Starting Locs
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_Server_NewGame_C::InitStartingLocs()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Server_NewGame.BPW_Server_NewGame_C.Init Starting Locs");
		
		UBPW_Server_NewGame_C_InitStartingLocs_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_Server_NewGame.BPW_Server_NewGame_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_Server_NewGame_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Server_NewGame.BPW_Server_NewGame_C.PreConstruct");
		
		UBPW_Server_NewGame_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_Server_NewGame.BPW_Server_NewGame_C.OnStartLocClicked
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FStartingLocationsDataStruct                mStartingLocs                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void UBPW_Server_NewGame_C::OnStartLocClicked(const struct FStartingLocationsDataStruct& mStartingLocs)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Server_NewGame.BPW_Server_NewGame_C.OnStartLocClicked");
		
		UBPW_Server_NewGame_C_OnStartLocClicked_Params params {};
		params.mStartingLocs = mStartingLocs;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_Server_NewGame.BPW_Server_NewGame_C.BP_OnServerComplexStateChanged
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class UFGServerObject*                             Server                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		EServerComplexState                                State                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_Server_NewGame_C::BP_OnServerComplexStateChanged(class UFGServerObject* Server, EServerComplexState State)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Server_NewGame.BPW_Server_NewGame_C.BP_OnServerComplexStateChanged");
		
		UBPW_Server_NewGame_C_BP_OnServerComplexStateChanged_Params params {};
		params.Server = Server;
		params.State = State;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_Server_NewGame.BPW_Server_NewGame_C.BndEvt__BPW_Server_ConnectionIsPossible_K2Node_ComponentBoundEvent_3_OnConnect__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBPW_Server_NewGame_C::BndEvt__BPW_Server_ConnectionIsPossible_K2Node_ComponentBoundEvent_3_OnConnect__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Server_NewGame.BPW_Server_NewGame_C.BndEvt__BPW_Server_ConnectionIsPossible_K2Node_ComponentBoundEvent_3_OnConnect__DelegateSignature");
		
		UBPW_Server_NewGame_C_BndEvt__BPW_Server_ConnectionIsPossible_K2Node_ComponentBoundEvent_3_OnConnect__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_Server_NewGame.BPW_Server_NewGame_C.BndEvt__BPW_Server_ConnectionFailed_K2Node_ComponentBoundEvent_4_OnRetry__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBPW_Server_NewGame_C::BndEvt__BPW_Server_ConnectionFailed_K2Node_ComponentBoundEvent_4_OnRetry__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Server_NewGame.BPW_Server_NewGame_C.BndEvt__BPW_Server_ConnectionFailed_K2Node_ComponentBoundEvent_4_OnRetry__DelegateSignature");
		
		UBPW_Server_NewGame_C_BndEvt__BPW_Server_ConnectionFailed_K2Node_ComponentBoundEvent_4_OnRetry__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_Server_NewGame.BPW_Server_NewGame_C.BndEvt__BPW_ServerAuthenticationRequired_K2Node_ComponentBoundEvent_5_OnAuthenticate__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBPW_Server_NewGame_C::BndEvt__BPW_ServerAuthenticationRequired_K2Node_ComponentBoundEvent_5_OnAuthenticate__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Server_NewGame.BPW_Server_NewGame_C.BndEvt__BPW_ServerAuthenticationRequired_K2Node_ComponentBoundEvent_5_OnAuthenticate__DelegateSignature");
		
		UBPW_Server_NewGame_C_BndEvt__BPW_ServerAuthenticationRequired_K2Node_ComponentBoundEvent_5_OnAuthenticate__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_Server_NewGame.BPW_Server_NewGame_C.BndEvt__Button_CreateGame_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBPW_Server_NewGame_C::BndEvt__Button_CreateGame_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Server_NewGame.BPW_Server_NewGame_C.BndEvt__Button_CreateGame_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");
		
		UBPW_Server_NewGame_C_BndEvt__Button_CreateGame_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_Server_NewGame.BPW_Server_NewGame_C.BP_OnServerChanged
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class UFGServerObject*                             Server                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_Server_NewGame_C::BP_OnServerChanged(class UFGServerObject* Server)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Server_NewGame.BPW_Server_NewGame_C.BP_OnServerChanged");
		
		UBPW_Server_NewGame_C_BP_OnServerChanged_Params params {};
		params.Server = Server;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_Server_NewGame.BPW_Server_NewGame_C.ExecuteUbergraph_BPW_Server_NewGame
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_Server_NewGame_C::ExecuteUbergraph_BPW_Server_NewGame(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Server_NewGame.BPW_Server_NewGame_C.ExecuteUbergraph_BPW_Server_NewGame");
		
		UBPW_Server_NewGame_C_ExecuteUbergraph_BPW_Server_NewGame_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPW_Server_NewGame_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPW_Server_NewGame_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BPW_Server_NewGame.BPW_Server_NewGame_C");
		return ptr;
	}

}


