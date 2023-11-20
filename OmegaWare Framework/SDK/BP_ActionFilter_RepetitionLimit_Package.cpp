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
	 * 		Name   -> Function BP_ActionFilter_RepetitionLimit.BP_ActionFilter_RepetitionLimit_C.GetScore
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
	 * Parameters:
	 * 		float                                              out_score                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UBP_ActionFilter_RepetitionLimit_C::GetScore(float* out_score)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ActionFilter_RepetitionLimit.BP_ActionFilter_RepetitionLimit_C.GetScore");
		
		UBP_ActionFilter_RepetitionLimit_C_GetScore_Params params {};
		
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
	 * 		Name   -> Function BP_ActionFilter_RepetitionLimit.BP_ActionFilter_RepetitionLimit_C.InitializeScorer
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UBP_ActionFilter_RepetitionLimit_C::InitializeScorer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ActionFilter_RepetitionLimit.BP_ActionFilter_RepetitionLimit_C.InitializeScorer");
		
		UBP_ActionFilter_RepetitionLimit_C_InitializeScorer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_ActionFilter_RepetitionLimit.BP_ActionFilter_RepetitionLimit_C.ActionSelectionComplete
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UFGAction*                                   selectedAction                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_ActionFilter_RepetitionLimit_C::ActionSelectionComplete(class UFGAction* selectedAction)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ActionFilter_RepetitionLimit.BP_ActionFilter_RepetitionLimit_C.ActionSelectionComplete");
		
		UBP_ActionFilter_RepetitionLimit_C_ActionSelectionComplete_Params params {};
		params.selectedAction = selectedAction;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_ActionFilter_RepetitionLimit.BP_ActionFilter_RepetitionLimit_C.ExecuteUbergraph_BP_ActionFilter_RepetitionLimit
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_ActionFilter_RepetitionLimit_C::ExecuteUbergraph_BP_ActionFilter_RepetitionLimit(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ActionFilter_RepetitionLimit.BP_ActionFilter_RepetitionLimit_C.ExecuteUbergraph_BP_ActionFilter_RepetitionLimit");
		
		UBP_ActionFilter_RepetitionLimit_C_ExecuteUbergraph_BP_ActionFilter_RepetitionLimit_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_ActionFilter_RepetitionLimit_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_ActionFilter_RepetitionLimit_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_ActionFilter_RepetitionLimit.BP_ActionFilter_RepetitionLimit_C");
		return ptr;
	}

}


