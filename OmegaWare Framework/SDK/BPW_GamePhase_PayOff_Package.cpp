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
	 * 		Name   -> Function BPW_GamePhase_PayOff.BPW_GamePhase_PayOff_C.ShowPaidOffFeedbackVisibility
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_GamePhase_PayOff_C::ShowPaidOffFeedbackVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_GamePhase_PayOff.BPW_GamePhase_PayOff_C.ShowPaidOffFeedbackVisibility");
		
		UBPW_GamePhase_PayOff_C_ShowPaidOffFeedbackVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_GamePhase_PayOff.BPW_GamePhase_PayOff_C.SetupCostIcon
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_GamePhase_PayOff_C::SetupCostIcon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_GamePhase_PayOff.BPW_GamePhase_PayOff_C.SetupCostIcon");
		
		UBPW_GamePhase_PayOff_C_SetupCostIcon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_GamePhase_PayOff.BPW_GamePhase_PayOff_C.GetRemainingCost
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		int32_t                                            Amount                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_GamePhase_PayOff_C::GetRemainingCost(int32_t* Amount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_GamePhase_PayOff.BPW_GamePhase_PayOff_C.GetRemainingCost");
		
		UBPW_GamePhase_PayOff_C_GetRemainingCost_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Amount != nullptr)
			*Amount = params.Amount;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_GamePhase_PayOff.BPW_GamePhase_PayOff_C.GetTotalCost
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		int32_t                                            Amount                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_GamePhase_PayOff_C::GetTotalCost(int32_t* Amount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_GamePhase_PayOff.BPW_GamePhase_PayOff_C.GetTotalCost");
		
		UBPW_GamePhase_PayOff_C_GetTotalCost_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Amount != nullptr)
			*Amount = params.Amount;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_GamePhase_PayOff.BPW_GamePhase_PayOff_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UBPW_GamePhase_PayOff_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_GamePhase_PayOff.BPW_GamePhase_PayOff_C.Construct");
		
		UBPW_GamePhase_PayOff_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_GamePhase_PayOff.BPW_GamePhase_PayOff_C.Destruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UBPW_GamePhase_PayOff_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_GamePhase_PayOff.BPW_GamePhase_PayOff_C.Destruct");
		
		UBPW_GamePhase_PayOff_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_GamePhase_PayOff.BPW_GamePhase_PayOff_C.Update Cost Slot
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_GamePhase_PayOff_C::UpdateCostSlot()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_GamePhase_PayOff.BPW_GamePhase_PayOff_C.Update Cost Slot");
		
		UBPW_GamePhase_PayOff_C_UpdateCostSlot_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_GamePhase_PayOff.BPW_GamePhase_PayOff_C.OnUpdateSlotSize
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      updatedCvar                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UBPW_GamePhase_PayOff_C::OnUpdateSlotSize(const class FString& updatedCvar)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_GamePhase_PayOff.BPW_GamePhase_PayOff_C.OnUpdateSlotSize");
		
		UBPW_GamePhase_PayOff_C_OnUpdateSlotSize_Params params {};
		params.updatedCvar = updatedCvar;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_GamePhase_PayOff.BPW_GamePhase_PayOff_C.ExecuteUbergraph_BPW_GamePhase_PayOff
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_GamePhase_PayOff_C::ExecuteUbergraph_BPW_GamePhase_PayOff(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_GamePhase_PayOff.BPW_GamePhase_PayOff_C.ExecuteUbergraph_BPW_GamePhase_PayOff");
		
		UBPW_GamePhase_PayOff_C_ExecuteUbergraph_BPW_GamePhase_PayOff_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPW_GamePhase_PayOff_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPW_GamePhase_PayOff_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BPW_GamePhase_PayOff.BPW_GamePhase_PayOff_C");
		return ptr;
	}

}


