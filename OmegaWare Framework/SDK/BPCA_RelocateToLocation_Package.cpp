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
	 * 		Name   -> Function BPCA_RelocateToLocation.BPCA_RelocateToLocation_C.GetNavData
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ANavigationData*                             CreatureNavData                                            (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPCA_RelocateToLocation_C::GetNavData(class ANavigationData** CreatureNavData, bool* Success)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPCA_RelocateToLocation.BPCA_RelocateToLocation_C.GetNavData");
		
		UBPCA_RelocateToLocation_C_GetNavData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CreatureNavData != nullptr)
			*CreatureNavData = params.CreatureNavData;
		if (Success != nullptr)
			*Success = params.Success;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPCA_RelocateToLocation.BPCA_RelocateToLocation_C.OnFail_8EC9102747ED99E334E29FA2BF89B7E3
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EPathFollowingResult                               MovementResult                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPCA_RelocateToLocation_C::OnFail_8EC9102747ED99E334E29FA2BF89B7E3(EPathFollowingResult MovementResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPCA_RelocateToLocation.BPCA_RelocateToLocation_C.OnFail_8EC9102747ED99E334E29FA2BF89B7E3");
		
		UBPCA_RelocateToLocation_C_OnFail_8EC9102747ED99E334E29FA2BF89B7E3_Params params {};
		params.MovementResult = MovementResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPCA_RelocateToLocation.BPCA_RelocateToLocation_C.OnSuccess_8EC9102747ED99E334E29FA2BF89B7E3
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EPathFollowingResult                               MovementResult                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPCA_RelocateToLocation_C::OnSuccess_8EC9102747ED99E334E29FA2BF89B7E3(EPathFollowingResult MovementResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPCA_RelocateToLocation.BPCA_RelocateToLocation_C.OnSuccess_8EC9102747ED99E334E29FA2BF89B7E3");
		
		UBPCA_RelocateToLocation_C_OnSuccess_8EC9102747ED99E334E29FA2BF89B7E3_Params params {};
		params.MovementResult = MovementResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPCA_RelocateToLocation.BPCA_RelocateToLocation_C.OnQueryFinished
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UEnvQueryInstanceBlueprintWrapper*           QueryInstance                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		EEnvQueryStatus                                    QueryStatus                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPCA_RelocateToLocation_C::OnQueryFinished(class UEnvQueryInstanceBlueprintWrapper* QueryInstance, EEnvQueryStatus QueryStatus)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPCA_RelocateToLocation.BPCA_RelocateToLocation_C.OnQueryFinished");
		
		UBPCA_RelocateToLocation_C_OnQueryFinished_Params params {};
		params.QueryInstance = QueryInstance;
		params.QueryStatus = QueryStatus;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPCA_RelocateToLocation.BPCA_RelocateToLocation_C.CancelAction
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBPCA_RelocateToLocation_C::CancelAction()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPCA_RelocateToLocation.BPCA_RelocateToLocation_C.CancelAction");
		
		UBPCA_RelocateToLocation_C_CancelAction_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPCA_RelocateToLocation.BPCA_RelocateToLocation_C.ActionTick
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPCA_RelocateToLocation_C::ActionTick(float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPCA_RelocateToLocation.BPCA_RelocateToLocation_C.ActionTick");
		
		UBPCA_RelocateToLocation_C_ActionTick_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPCA_RelocateToLocation.BPCA_RelocateToLocation_C.PerformAction
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBPCA_RelocateToLocation_C::PerformAction()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPCA_RelocateToLocation.BPCA_RelocateToLocation_C.PerformAction");
		
		UBPCA_RelocateToLocation_C_PerformAction_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPCA_RelocateToLocation.BPCA_RelocateToLocation_C.ExecuteUbergraph_BPCA_RelocateToLocation
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPCA_RelocateToLocation_C::ExecuteUbergraph_BPCA_RelocateToLocation(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPCA_RelocateToLocation.BPCA_RelocateToLocation_C.ExecuteUbergraph_BPCA_RelocateToLocation");
		
		UBPCA_RelocateToLocation_C_ExecuteUbergraph_BPCA_RelocateToLocation_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPCA_RelocateToLocation_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPCA_RelocateToLocation_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPCA_RelocateToLocation.BPCA_RelocateToLocation_C");
		return ptr;
	}

}


