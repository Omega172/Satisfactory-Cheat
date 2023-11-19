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
	 * 		Name   -> Function BPCA_NonFlyingBird_Lure.BPCA_NonFlyingBird_Lure_C.SetupAction
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool UBPCA_NonFlyingBird_Lure_C::SetupAction()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPCA_NonFlyingBird_Lure.BPCA_NonFlyingBird_Lure_C.SetupAction");
		
		UBPCA_NonFlyingBird_Lure_C_SetupAction_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPCA_NonFlyingBird_Lure.BPCA_NonFlyingBird_Lure_C.CanPerformAction
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 */
	bool UBPCA_NonFlyingBird_Lure_C::CanPerformAction()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPCA_NonFlyingBird_Lure.BPCA_NonFlyingBird_Lure_C.CanPerformAction");
		
		UBPCA_NonFlyingBird_Lure_C_CanPerformAction_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPCA_NonFlyingBird_Lure.BPCA_NonFlyingBird_Lure_C.PerformAction
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBPCA_NonFlyingBird_Lure_C::PerformAction()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPCA_NonFlyingBird_Lure.BPCA_NonFlyingBird_Lure_C.PerformAction");
		
		UBPCA_NonFlyingBird_Lure_C_PerformAction_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPCA_NonFlyingBird_Lure.BPCA_NonFlyingBird_Lure_C.CleanupAction
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               actionSuccess                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPCA_NonFlyingBird_Lure_C::CleanupAction(bool actionSuccess)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPCA_NonFlyingBird_Lure.BPCA_NonFlyingBird_Lure_C.CleanupAction");
		
		UBPCA_NonFlyingBird_Lure_C_CleanupAction_Params params {};
		params.actionSuccess = actionSuccess;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPCA_NonFlyingBird_Lure.BPCA_NonFlyingBird_Lure_C.ExecuteUbergraph_BPCA_NonFlyingBird_Lure
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPCA_NonFlyingBird_Lure_C::ExecuteUbergraph_BPCA_NonFlyingBird_Lure(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPCA_NonFlyingBird_Lure.BPCA_NonFlyingBird_Lure_C.ExecuteUbergraph_BPCA_NonFlyingBird_Lure");
		
		UBPCA_NonFlyingBird_Lure_C_ExecuteUbergraph_BPCA_NonFlyingBird_Lure_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPCA_NonFlyingBird_Lure_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPCA_NonFlyingBird_Lure_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPCA_NonFlyingBird_Lure.BPCA_NonFlyingBird_Lure_C");
		return ptr;
	}

}


