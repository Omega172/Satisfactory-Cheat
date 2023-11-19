﻿/**
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
	 * 		Name   -> Function BPA_SmelterMk1.BPA_SmelterMk1_C.AnimGraph
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FPoseLink                                   AnimGraph                                                  (Parm, OutParm, NoDestructor)
	 */
	void UBPA_SmelterMk1_C::AnimGraph(struct FPoseLink* AnimGraph)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPA_SmelterMk1.BPA_SmelterMk1_C.AnimGraph");
		
		UBPA_SmelterMk1_C_AnimGraph_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AnimGraph != nullptr)
			*AnimGraph = params.AnimGraph;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPA_SmelterMk1.BPA_SmelterMk1_C.AnimNotify_Stop_Anim
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBPA_SmelterMk1_C::AnimNotify_Stop_Anim()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPA_SmelterMk1.BPA_SmelterMk1_C.AnimNotify_Stop_Anim");
		
		UBPA_SmelterMk1_C_AnimNotify_Stop_Anim_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPA_SmelterMk1.BPA_SmelterMk1_C.AnimNotify_StopSmelterAnimationCycle
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBPA_SmelterMk1_C::AnimNotify_StopSmelterAnimationCycle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPA_SmelterMk1.BPA_SmelterMk1_C.AnimNotify_StopSmelterAnimationCycle");
		
		UBPA_SmelterMk1_C_AnimNotify_StopSmelterAnimationCycle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPA_SmelterMk1.BPA_SmelterMk1_C.ExecuteUbergraph_BPA_SmelterMk1
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPA_SmelterMk1_C::ExecuteUbergraph_BPA_SmelterMk1(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPA_SmelterMk1.BPA_SmelterMk1_C.ExecuteUbergraph_BPA_SmelterMk1");
		
		UBPA_SmelterMk1_C_ExecuteUbergraph_BPA_SmelterMk1_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPA_SmelterMk1_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPA_SmelterMk1_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass BPA_SmelterMk1.BPA_SmelterMk1_C");
		return ptr;
	}

}


