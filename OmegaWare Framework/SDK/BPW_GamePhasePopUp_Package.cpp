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
	 * 		Name   -> Function BPW_GamePhasePopUp.BPW_GamePhasePopUp_C.Set Stinger Content
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EGamePhase                                         mGamePhase                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_GamePhasePopUp_C::SetStingerContent(EGamePhase mGamePhase)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_GamePhasePopUp.BPW_GamePhasePopUp_C.Set Stinger Content");
		
		UBPW_GamePhasePopUp_C_SetStingerContent_Params params {};
		params.mGamePhase = mGamePhase;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_GamePhasePopUp.BPW_GamePhasePopUp_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UBPW_GamePhasePopUp_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_GamePhasePopUp.BPW_GamePhasePopUp_C.Construct");
		
		UBPW_GamePhasePopUp_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_GamePhasePopUp.BPW_GamePhasePopUp_C.OnGamePhaseCompleted
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EGamePhase                                         gamePhase                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_GamePhasePopUp_C::OnGamePhaseCompleted(EGamePhase gamePhase)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_GamePhasePopUp.BPW_GamePhasePopUp_C.OnGamePhaseCompleted");
		
		UBPW_GamePhasePopUp_C_OnGamePhaseCompleted_Params params {};
		params.gamePhase = gamePhase;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_GamePhasePopUp.BPW_GamePhasePopUp_C.ExecuteUbergraph_BPW_GamePhasePopUp
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_GamePhasePopUp_C::ExecuteUbergraph_BPW_GamePhasePopUp(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_GamePhasePopUp.BPW_GamePhasePopUp_C.ExecuteUbergraph_BPW_GamePhasePopUp");
		
		UBPW_GamePhasePopUp_C_ExecuteUbergraph_BPW_GamePhasePopUp_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPW_GamePhasePopUp_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPW_GamePhasePopUp_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BPW_GamePhasePopUp.BPW_GamePhasePopUp_C");
		return ptr;
	}

}


