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
	 * 		Name   -> Function BPCA_EatCreatureFood.BPCA_EatCreatureFood_C.CanPerformAction
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 */
	bool UBPCA_EatCreatureFood_C::CanPerformAction()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPCA_EatCreatureFood.BPCA_EatCreatureFood_C.CanPerformAction");
		
		UBPCA_EatCreatureFood_C_CanPerformAction_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPCA_EatCreatureFood.BPCA_EatCreatureFood_C.OnFail_4FAD94544D2A6D37380427B7044188E7
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EPathFollowingResult                               MovementResult                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPCA_EatCreatureFood_C::OnFail_4FAD94544D2A6D37380427B7044188E7(EPathFollowingResult MovementResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPCA_EatCreatureFood.BPCA_EatCreatureFood_C.OnFail_4FAD94544D2A6D37380427B7044188E7");
		
		UBPCA_EatCreatureFood_C_OnFail_4FAD94544D2A6D37380427B7044188E7_Params params {};
		params.MovementResult = MovementResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPCA_EatCreatureFood.BPCA_EatCreatureFood_C.OnSuccess_4FAD94544D2A6D37380427B7044188E7
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EPathFollowingResult                               MovementResult                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPCA_EatCreatureFood_C::OnSuccess_4FAD94544D2A6D37380427B7044188E7(EPathFollowingResult MovementResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPCA_EatCreatureFood.BPCA_EatCreatureFood_C.OnSuccess_4FAD94544D2A6D37380427B7044188E7");
		
		UBPCA_EatCreatureFood_C_OnSuccess_4FAD94544D2A6D37380427B7044188E7_Params params {};
		params.MovementResult = MovementResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPCA_EatCreatureFood.BPCA_EatCreatureFood_C.PerformAction
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBPCA_EatCreatureFood_C::PerformAction()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPCA_EatCreatureFood.BPCA_EatCreatureFood_C.PerformAction");
		
		UBPCA_EatCreatureFood_C_PerformAction_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPCA_EatCreatureFood.BPCA_EatCreatureFood_C.OnCreatureFoodQueryFinished
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UEnvQueryInstanceBlueprintWrapper*           QueryInstance                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		EEnvQueryStatus                                    QueryStatus                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPCA_EatCreatureFood_C::OnCreatureFoodQueryFinished(class UEnvQueryInstanceBlueprintWrapper* QueryInstance, EEnvQueryStatus QueryStatus)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPCA_EatCreatureFood.BPCA_EatCreatureFood_C.OnCreatureFoodQueryFinished");
		
		UBPCA_EatCreatureFood_C_OnCreatureFoodQueryFinished_Params params {};
		params.QueryInstance = QueryInstance;
		params.QueryStatus = QueryStatus;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPCA_EatCreatureFood.BPCA_EatCreatureFood_C.MoveToFood
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      FoodActor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPCA_EatCreatureFood_C::MoveToFood(class AActor* FoodActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPCA_EatCreatureFood.BPCA_EatCreatureFood_C.MoveToFood");
		
		UBPCA_EatCreatureFood_C_MoveToFood_Params params {};
		params.FoodActor = FoodActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPCA_EatCreatureFood.BPCA_EatCreatureFood_C.EatFood
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      FoodActor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPCA_EatCreatureFood_C::EatFood(class AActor* FoodActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPCA_EatCreatureFood.BPCA_EatCreatureFood_C.EatFood");
		
		UBPCA_EatCreatureFood_C_EatFood_Params params {};
		params.FoodActor = FoodActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPCA_EatCreatureFood.BPCA_EatCreatureFood_C.CancelAction
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBPCA_EatCreatureFood_C::CancelAction()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPCA_EatCreatureFood.BPCA_EatCreatureFood_C.CancelAction");
		
		UBPCA_EatCreatureFood_C_CancelAction_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPCA_EatCreatureFood.BPCA_EatCreatureFood_C.ActionTick
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPCA_EatCreatureFood_C::ActionTick(float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPCA_EatCreatureFood.BPCA_EatCreatureFood_C.ActionTick");
		
		UBPCA_EatCreatureFood_C_ActionTick_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPCA_EatCreatureFood.BPCA_EatCreatureFood_C.CleanupAction
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               actionSuccess                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPCA_EatCreatureFood_C::CleanupAction(bool actionSuccess)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPCA_EatCreatureFood.BPCA_EatCreatureFood_C.CleanupAction");
		
		UBPCA_EatCreatureFood_C_CleanupAction_Params params {};
		params.actionSuccess = actionSuccess;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPCA_EatCreatureFood.BPCA_EatCreatureFood_C.ExecuteUbergraph_BPCA_EatCreatureFood
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPCA_EatCreatureFood_C::ExecuteUbergraph_BPCA_EatCreatureFood(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPCA_EatCreatureFood.BPCA_EatCreatureFood_C.ExecuteUbergraph_BPCA_EatCreatureFood");
		
		UBPCA_EatCreatureFood_C_ExecuteUbergraph_BPCA_EatCreatureFood_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPCA_EatCreatureFood_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPCA_EatCreatureFood_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPCA_EatCreatureFood.BPCA_EatCreatureFood_C");
		return ptr;
	}

}


