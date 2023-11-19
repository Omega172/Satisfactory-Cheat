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
	 * 		Name   -> Function BPW_ServerInfo.BPW_ServerInfo_C.Get Visibility Of Join Button
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	ESlateVisibility UBPW_ServerInfo_C::GetVisibilityOfJoinButton()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_ServerInfo.BPW_ServerInfo_C.Get Visibility Of Join Button");
		
		UBPW_ServerInfo_C_GetVisibilityOfJoinButton_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_ServerInfo.BPW_ServerInfo_C.BP_OnServerComplexStateChanged
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class UFGServerObject*                             Server                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		EServerComplexState                                State                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_ServerInfo_C::BP_OnServerComplexStateChanged(class UFGServerObject* Server, EServerComplexState State)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_ServerInfo.BPW_ServerInfo_C.BP_OnServerComplexStateChanged");
		
		UBPW_ServerInfo_C_BP_OnServerComplexStateChanged_Params params {};
		params.Server = Server;
		params.State = State;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_ServerInfo.BPW_ServerInfo_C.BP_OnServerChanged
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class UFGServerObject*                             Server                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_ServerInfo_C::BP_OnServerChanged(class UFGServerObject* Server)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_ServerInfo.BPW_ServerInfo_C.BP_OnServerChanged");
		
		UBPW_ServerInfo_C_BP_OnServerChanged_Params params {};
		params.Server = Server;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_ServerInfo.BPW_ServerInfo_C.BndEvt__JoinGameButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBPW_ServerInfo_C::BndEvt__JoinGameButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_ServerInfo.BPW_ServerInfo_C.BndEvt__JoinGameButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");
		
		UBPW_ServerInfo_C_BndEvt__JoinGameButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_ServerInfo.BPW_ServerInfo_C.BP_OnServerGameStateChanged
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		class UFGServerObject*                             Server                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		struct FServerGameState                            GameState                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UBPW_ServerInfo_C::BP_OnServerGameStateChanged(class UFGServerObject* Server, const struct FServerGameState& GameState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_ServerInfo.BPW_ServerInfo_C.BP_OnServerGameStateChanged");
		
		UBPW_ServerInfo_C_BP_OnServerGameStateChanged_Params params {};
		params.Server = Server;
		params.GameState = GameState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_ServerInfo.BPW_ServerInfo_C.BP_OnServerRenamed
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class UFGServerObject*                             Server                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      Name                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UBPW_ServerInfo_C::BP_OnServerRenamed(class UFGServerObject* Server, const class FString& Name)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_ServerInfo.BPW_ServerInfo_C.BP_OnServerRenamed");
		
		UBPW_ServerInfo_C_BP_OnServerRenamed_Params params {};
		params.Server = Server;
		params.Name = Name;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_ServerInfo.BPW_ServerInfo_C.BP_OnServerConnectionStateChanged
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class UFGServerObject*                             Server                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		EBeaconConnectionState                             ConnectionState                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_ServerInfo_C::BP_OnServerConnectionStateChanged(class UFGServerObject* Server, EBeaconConnectionState ConnectionState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_ServerInfo.BPW_ServerInfo_C.BP_OnServerConnectionStateChanged");
		
		UBPW_ServerInfo_C_BP_OnServerConnectionStateChanged_Params params {};
		params.Server = Server;
		params.ConnectionState = ConnectionState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_ServerInfo.BPW_ServerInfo_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UBPW_ServerInfo_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_ServerInfo.BPW_ServerInfo_C.Construct");
		
		UBPW_ServerInfo_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_ServerInfo.BPW_ServerInfo_C.BndEvt__BPW_ServerAuthenticationRequired_K2Node_ComponentBoundEvent_2_OnAuthenticate__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBPW_ServerInfo_C::BndEvt__BPW_ServerAuthenticationRequired_K2Node_ComponentBoundEvent_2_OnAuthenticate__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_ServerInfo.BPW_ServerInfo_C.BndEvt__BPW_ServerAuthenticationRequired_K2Node_ComponentBoundEvent_2_OnAuthenticate__DelegateSignature");
		
		UBPW_ServerInfo_C_BndEvt__BPW_ServerAuthenticationRequired_K2Node_ComponentBoundEvent_2_OnAuthenticate__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_ServerInfo.BPW_ServerInfo_C.BndEvt__BPW_Server_ConnectionIsPossible_K2Node_ComponentBoundEvent_4_OnConnect__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBPW_ServerInfo_C::BndEvt__BPW_Server_ConnectionIsPossible_K2Node_ComponentBoundEvent_4_OnConnect__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_ServerInfo.BPW_ServerInfo_C.BndEvt__BPW_Server_ConnectionIsPossible_K2Node_ComponentBoundEvent_4_OnConnect__DelegateSignature");
		
		UBPW_ServerInfo_C_BndEvt__BPW_Server_ConnectionIsPossible_K2Node_ComponentBoundEvent_4_OnConnect__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_ServerInfo.BPW_ServerInfo_C.BndEvt__BPW_Server_ConnectionFailed_K2Node_ComponentBoundEvent_5_OnRetry__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBPW_ServerInfo_C::BndEvt__BPW_Server_ConnectionFailed_K2Node_ComponentBoundEvent_5_OnRetry__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_ServerInfo.BPW_ServerInfo_C.BndEvt__BPW_Server_ConnectionFailed_K2Node_ComponentBoundEvent_5_OnRetry__DelegateSignature");
		
		UBPW_ServerInfo_C_BndEvt__BPW_Server_ConnectionFailed_K2Node_ComponentBoundEvent_5_OnRetry__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_ServerInfo.BPW_ServerInfo_C.ExecuteUbergraph_BPW_ServerInfo
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_ServerInfo_C::ExecuteUbergraph_BPW_ServerInfo(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_ServerInfo.BPW_ServerInfo_C.ExecuteUbergraph_BPW_ServerInfo");
		
		UBPW_ServerInfo_C_ExecuteUbergraph_BPW_ServerInfo_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPW_ServerInfo_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPW_ServerInfo_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BPW_ServerInfo.BPW_ServerInfo_C");
		return ptr;
	}

}


