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
	 * 		Name   -> Function BP_ActionFilter_RequiresPreviousAction.BP_ActionFilter_RequiresPreviousAction_C.ActionFulfillsRequirement
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class UObject*                                     Action                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	bool UBP_ActionFilter_RequiresPreviousAction_C::ActionFulfillsRequirement(class UObject* Action)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ActionFilter_RequiresPreviousAction.BP_ActionFilter_RequiresPreviousAction_C.ActionFulfillsRequirement");
		
		UBP_ActionFilter_RequiresPreviousAction_C_ActionFulfillsRequirement_Params params {};
		params.Action = Action;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_ActionFilter_RequiresPreviousAction.BP_ActionFilter_RequiresPreviousAction_C.GetScore
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
	 * Parameters:
	 * 		float                                              out_score                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UBP_ActionFilter_RequiresPreviousAction_C::GetScore(float* out_score)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ActionFilter_RequiresPreviousAction.BP_ActionFilter_RequiresPreviousAction_C.GetScore");
		
		UBP_ActionFilter_RequiresPreviousAction_C_GetScore_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (out_score != nullptr)
			*out_score = params.out_score;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_ActionFilter_RequiresPreviousAction.BP_ActionFilter_RequiresPreviousAction_C.InitializeScorer
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UBP_ActionFilter_RequiresPreviousAction_C::InitializeScorer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ActionFilter_RequiresPreviousAction.BP_ActionFilter_RequiresPreviousAction_C.InitializeScorer");
		
		UBP_ActionFilter_RequiresPreviousAction_C_InitializeScorer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_ActionFilter_RequiresPreviousAction.BP_ActionFilter_RequiresPreviousAction_C.ActionSelectionComplete
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UFGAction*                                   selectedAction                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_ActionFilter_RequiresPreviousAction_C::ActionSelectionComplete(class UFGAction* selectedAction)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ActionFilter_RequiresPreviousAction.BP_ActionFilter_RequiresPreviousAction_C.ActionSelectionComplete");
		
		UBP_ActionFilter_RequiresPreviousAction_C_ActionSelectionComplete_Params params {};
		params.selectedAction = selectedAction;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_ActionFilter_RequiresPreviousAction.BP_ActionFilter_RequiresPreviousAction_C.ExecuteUbergraph_BP_ActionFilter_RequiresPreviousAction
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_ActionFilter_RequiresPreviousAction_C::ExecuteUbergraph_BP_ActionFilter_RequiresPreviousAction(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ActionFilter_RequiresPreviousAction.BP_ActionFilter_RequiresPreviousAction_C.ExecuteUbergraph_BP_ActionFilter_RequiresPreviousAction");
		
		UBP_ActionFilter_RequiresPreviousAction_C_ExecuteUbergraph_BP_ActionFilter_RequiresPreviousAction_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_ActionFilter_RequiresPreviousAction_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_ActionFilter_RequiresPreviousAction_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_ActionFilter_RequiresPreviousAction.BP_ActionFilter_RequiresPreviousAction_C");
		return ptr;
	}

}


