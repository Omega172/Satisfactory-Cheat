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
	 * 		Name   -> Function BPCA_MoveToTarget.BPCA_MoveToTarget_C.OnFail_6D342B944E73041A5FE5DC844675B4A7
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EPathFollowingResult                               MovementResult                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPCA_MoveToTarget_C::OnFail_6D342B944E73041A5FE5DC844675B4A7(EPathFollowingResult MovementResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPCA_MoveToTarget.BPCA_MoveToTarget_C.OnFail_6D342B944E73041A5FE5DC844675B4A7");
		
		UBPCA_MoveToTarget_C_OnFail_6D342B944E73041A5FE5DC844675B4A7_Params params {};
		params.MovementResult = MovementResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPCA_MoveToTarget.BPCA_MoveToTarget_C.OnSuccess_6D342B944E73041A5FE5DC844675B4A7
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EPathFollowingResult                               MovementResult                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPCA_MoveToTarget_C::OnSuccess_6D342B944E73041A5FE5DC844675B4A7(EPathFollowingResult MovementResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPCA_MoveToTarget.BPCA_MoveToTarget_C.OnSuccess_6D342B944E73041A5FE5DC844675B4A7");
		
		UBPCA_MoveToTarget_C_OnSuccess_6D342B944E73041A5FE5DC844675B4A7_Params params {};
		params.MovementResult = MovementResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPCA_MoveToTarget.BPCA_MoveToTarget_C.PerformAction
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBPCA_MoveToTarget_C::PerformAction()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPCA_MoveToTarget.BPCA_MoveToTarget_C.PerformAction");
		
		UBPCA_MoveToTarget_C_PerformAction_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPCA_MoveToTarget.BPCA_MoveToTarget_C.CancelAction
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBPCA_MoveToTarget_C::CancelAction()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPCA_MoveToTarget.BPCA_MoveToTarget_C.CancelAction");
		
		UBPCA_MoveToTarget_C_CancelAction_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPCA_MoveToTarget.BPCA_MoveToTarget_C.ExecuteUbergraph_BPCA_MoveToTarget
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPCA_MoveToTarget_C::ExecuteUbergraph_BPCA_MoveToTarget(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPCA_MoveToTarget.BPCA_MoveToTarget_C.ExecuteUbergraph_BPCA_MoveToTarget");
		
		UBPCA_MoveToTarget_C_ExecuteUbergraph_BPCA_MoveToTarget_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPCA_MoveToTarget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPCA_MoveToTarget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPCA_MoveToTarget.BPCA_MoveToTarget_C");
		return ptr;
	}

}


