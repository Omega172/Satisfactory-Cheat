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
	 * 		Name   -> Function BPA_OilPump.BPA_OilPump_C.AnimGraph
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FPoseLink                                   AnimGraph                                                  (Parm, OutParm, NoDestructor)
	 */
	void UBPA_OilPump_C::AnimGraph(struct FPoseLink* AnimGraph)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPA_OilPump.BPA_OilPump_C.AnimGraph");
		
		UBPA_OilPump_C_AnimGraph_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AnimGraph != nullptr)
			*AnimGraph = params.AnimGraph;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPA_OilPump.BPA_OilPump_C.AnimNotify_BurnerFlareNotify
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBPA_OilPump_C::AnimNotify_BurnerFlareNotify()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPA_OilPump.BPA_OilPump_C.AnimNotify_BurnerFlareNotify");
		
		UBPA_OilPump_C_AnimNotify_BurnerFlareNotify_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPA_OilPump.BPA_OilPump_C.AnimNotify_OilpumpEnteredProducingState
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBPA_OilPump_C::AnimNotify_OilpumpEnteredProducingState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPA_OilPump.BPA_OilPump_C.AnimNotify_OilpumpEnteredProducingState");
		
		UBPA_OilPump_C_AnimNotify_OilpumpEnteredProducingState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPA_OilPump.BPA_OilPump_C.AnimNotify_OilpumpLeftProducingState
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBPA_OilPump_C::AnimNotify_OilpumpLeftProducingState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPA_OilPump.BPA_OilPump_C.AnimNotify_OilpumpLeftProducingState");
		
		UBPA_OilPump_C_AnimNotify_OilpumpLeftProducingState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPA_OilPump.BPA_OilPump_C.AnimNotify_OilpumpEnteredOfflineState
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBPA_OilPump_C::AnimNotify_OilpumpEnteredOfflineState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPA_OilPump.BPA_OilPump_C.AnimNotify_OilpumpEnteredOfflineState");
		
		UBPA_OilPump_C_AnimNotify_OilpumpEnteredOfflineState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPA_OilPump.BPA_OilPump_C.AnimNotify_OilpumpLeftOfflineState
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBPA_OilPump_C::AnimNotify_OilpumpLeftOfflineState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPA_OilPump.BPA_OilPump_C.AnimNotify_OilpumpLeftOfflineState");
		
		UBPA_OilPump_C_AnimNotify_OilpumpLeftOfflineState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPA_OilPump.BPA_OilPump_C.ExecuteUbergraph_BPA_OilPump
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPA_OilPump_C::ExecuteUbergraph_BPA_OilPump(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPA_OilPump.BPA_OilPump_C.ExecuteUbergraph_BPA_OilPump");
		
		UBPA_OilPump_C_ExecuteUbergraph_BPA_OilPump_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPA_OilPump_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPA_OilPump_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass BPA_OilPump.BPA_OilPump_C");
		return ptr;
	}

}


