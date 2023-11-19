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
	 * 		Name   -> Function BPW_GamePhaseInfo.BPW_GamePhaseInfo_C.IsTradingPostBuilt
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	bool UBPW_GamePhaseInfo_C::IsTradingPostBuilt()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_GamePhaseInfo.BPW_GamePhaseInfo_C.IsTradingPostBuilt");
		
		UBPW_GamePhaseInfo_C_IsTradingPostBuilt_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_GamePhaseInfo.BPW_GamePhaseInfo_C.AddPhaseCostWidget
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_GamePhaseInfo_C::AddPhaseCostWidget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_GamePhaseInfo.BPW_GamePhaseInfo_C.AddPhaseCostWidget");
		
		UBPW_GamePhaseInfo_C_AddPhaseCostWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_GamePhaseInfo.BPW_GamePhaseInfo_C.SetCurrentPhaseText
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_GamePhaseInfo_C::SetCurrentPhaseText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_GamePhaseInfo.BPW_GamePhaseInfo_C.SetCurrentPhaseText");
		
		UBPW_GamePhaseInfo_C_SetCurrentPhaseText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_GamePhaseInfo.BPW_GamePhaseInfo_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UBPW_GamePhaseInfo_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_GamePhaseInfo.BPW_GamePhaseInfo_C.Construct");
		
		UBPW_GamePhaseInfo_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_GamePhaseInfo.BPW_GamePhaseInfo_C.On Game Phase Changed
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EGamePhase                                         gamePhase                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_GamePhaseInfo_C::OnGamePhaseChanged(EGamePhase gamePhase)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_GamePhaseInfo.BPW_GamePhaseInfo_C.On Game Phase Changed");
		
		UBPW_GamePhaseInfo_C_OnGamePhaseChanged_Params params {};
		params.gamePhase = gamePhase;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_GamePhaseInfo.BPW_GamePhaseInfo_C.Event Check For Space Elevator
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_GamePhaseInfo_C::EventCheckForSpaceElevator()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_GamePhaseInfo.BPW_GamePhaseInfo_C.Event Check For Space Elevator");
		
		UBPW_GamePhaseInfo_C_EventCheckForSpaceElevator_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_GamePhaseInfo.BPW_GamePhaseInfo_C.ExecuteUbergraph_BPW_GamePhaseInfo
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_GamePhaseInfo_C::ExecuteUbergraph_BPW_GamePhaseInfo(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_GamePhaseInfo.BPW_GamePhaseInfo_C.ExecuteUbergraph_BPW_GamePhaseInfo");
		
		UBPW_GamePhaseInfo_C_ExecuteUbergraph_BPW_GamePhaseInfo_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPW_GamePhaseInfo_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPW_GamePhaseInfo_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BPW_GamePhaseInfo.BPW_GamePhaseInfo_C");
		return ptr;
	}

}


