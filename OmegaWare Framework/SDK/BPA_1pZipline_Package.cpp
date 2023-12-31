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
	 * 		Name   -> Function BPA_1pZipline.BPA_1pZipline_C.AnimGraph
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FPoseLink                                   AnimGraph                                                  (Parm, OutParm, NoDestructor)
	 */
	void UBPA_1pZipline_C::AnimGraph(struct FPoseLink* AnimGraph)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPA_1pZipline.BPA_1pZipline_C.AnimGraph");
		
		UBPA_1pZipline_C_AnimGraph_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AnimGraph != nullptr)
			*AnimGraph = params.AnimGraph;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPA_1pZipline.BPA_1pZipline_C.BlueprintUpdateAnimation
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTimeX                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPA_1pZipline_C::BlueprintUpdateAnimation(float DeltaTimeX)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPA_1pZipline.BPA_1pZipline_C.BlueprintUpdateAnimation");
		
		UBPA_1pZipline_C_BlueprintUpdateAnimation_Params params {};
		params.DeltaTimeX = DeltaTimeX;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPA_1pZipline.BPA_1pZipline_C.ExecuteUbergraph_BPA_1pZipline
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPA_1pZipline_C::ExecuteUbergraph_BPA_1pZipline(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPA_1pZipline.BPA_1pZipline_C.ExecuteUbergraph_BPA_1pZipline");
		
		UBPA_1pZipline_C_ExecuteUbergraph_BPA_1pZipline_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPA_1pZipline_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPA_1pZipline_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass BPA_1pZipline.BPA_1pZipline_C");
		return ptr;
	}

}


