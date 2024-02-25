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
	 * 		Name   -> Function BTT_SelectStateAction.BTT_SelectStateAction_C.TryToSelect
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		double                                             ActionScore                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Filter                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UFGAction*                                   Action                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 */
	void UBTT_SelectStateAction_C::TryToSelect(double ActionScore, bool Filter, class UFGAction* Action)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BTT_SelectStateAction.BTT_SelectStateAction_C.TryToSelect");
		
		UBTT_SelectStateAction_C_TryToSelect_Params params {};
		params.ActionScore = ActionScore;
		params.Filter = Filter;
		params.Action = Action;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BTT_SelectStateAction.BTT_SelectStateAction_C.SetupAndFilterActions
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<class UFGAction*>                           TotalActions                                               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	 * 		TArray<class UFGAction*>                           FilteredActions                                            (Parm, OutParm, ContainsInstancedReference)
	 */
	void UBTT_SelectStateAction_C::SetupAndFilterActions(TArray<class UFGAction*>* TotalActions, TArray<class UFGAction*>* FilteredActions)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BTT_SelectStateAction.BTT_SelectStateAction_C.SetupAndFilterActions");
		
		UBTT_SelectStateAction_C_SetupAndFilterActions_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TotalActions != nullptr)
			*TotalActions = params.TotalActions;
		if (FilteredActions != nullptr)
			*FilteredActions = params.FilteredActions;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BTT_SelectStateAction.BTT_SelectStateAction_C.PrintInvalidActionWarning
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APawn*                                       Pawn                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UBTT_SelectStateAction_C::PrintInvalidActionWarning(class APawn* Pawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BTT_SelectStateAction.BTT_SelectStateAction_C.PrintInvalidActionWarning");
		
		UBTT_SelectStateAction_C_PrintInvalidActionWarning_Params params {};
		params.Pawn = Pawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BTT_SelectStateAction.BTT_SelectStateAction_C.ReceiveExecute
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      OwnerActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UBTT_SelectStateAction_C::ReceiveExecute(class AActor* OwnerActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BTT_SelectStateAction.BTT_SelectStateAction_C.ReceiveExecute");
		
		UBTT_SelectStateAction_C_ReceiveExecute_Params params {};
		params.OwnerActor = OwnerActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BTT_SelectStateAction.BTT_SelectStateAction_C.BreakActionSelection
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBTT_SelectStateAction_C::BreakActionSelection()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BTT_SelectStateAction.BTT_SelectStateAction_C.BreakActionSelection");
		
		UBTT_SelectStateAction_C_BreakActionSelection_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BTT_SelectStateAction.BTT_SelectStateAction_C.ExecuteUbergraph_BTT_SelectStateAction
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBTT_SelectStateAction_C::ExecuteUbergraph_BTT_SelectStateAction(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BTT_SelectStateAction.BTT_SelectStateAction_C.ExecuteUbergraph_BTT_SelectStateAction");
		
		UBTT_SelectStateAction_C_ExecuteUbergraph_BTT_SelectStateAction_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTT_SelectStateAction_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTT_SelectStateAction_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BTT_SelectStateAction.BTT_SelectStateAction_C");
		return ptr;
	}

}


