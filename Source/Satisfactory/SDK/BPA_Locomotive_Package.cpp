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
	 * 		Name   -> Function BPA_Locomotive.BPA_Locomotive_C.AnimGraph
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FPoseLink                                   AnimGraph                                                  (Parm, OutParm, NoDestructor)
	 */
	void UBPA_Locomotive_C::AnimGraph(struct FPoseLink* AnimGraph)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPA_Locomotive.BPA_Locomotive_C.AnimGraph");
		
		UBPA_Locomotive_C_AnimGraph_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AnimGraph != nullptr)
			*AnimGraph = params.AnimGraph;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPA_Locomotive.BPA_Locomotive_C.AnimNotify_EnterHandBrake_01
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBPA_Locomotive_C::AnimNotify_EnterHandBrake_01()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPA_Locomotive.BPA_Locomotive_C.AnimNotify_EnterHandBrake_01");
		
		UBPA_Locomotive_C_AnimNotify_EnterHandBrake_01_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPA_Locomotive.BPA_Locomotive_C.AnimNotify_KillHandBrake_01
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBPA_Locomotive_C::AnimNotify_KillHandBrake_01()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPA_Locomotive.BPA_Locomotive_C.AnimNotify_KillHandBrake_01");
		
		UBPA_Locomotive_C_AnimNotify_KillHandBrake_01_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPA_Locomotive.BPA_Locomotive_C.AnimNotify_EnterHandBrake_02
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBPA_Locomotive_C::AnimNotify_EnterHandBrake_02()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPA_Locomotive.BPA_Locomotive_C.AnimNotify_EnterHandBrake_02");
		
		UBPA_Locomotive_C_AnimNotify_EnterHandBrake_02_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPA_Locomotive.BPA_Locomotive_C.AnimNotify_KillHandBrake_02
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBPA_Locomotive_C::AnimNotify_KillHandBrake_02()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPA_Locomotive.BPA_Locomotive_C.AnimNotify_KillHandBrake_02");
		
		UBPA_Locomotive_C_AnimNotify_KillHandBrake_02_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPA_Locomotive.BPA_Locomotive_C.AnimNotify_TriggerhandbrakeVFX
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBPA_Locomotive_C::AnimNotify_TriggerhandbrakeVFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPA_Locomotive.BPA_Locomotive_C.AnimNotify_TriggerhandbrakeVFX");
		
		UBPA_Locomotive_C_AnimNotify_TriggerhandbrakeVFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPA_Locomotive.BPA_Locomotive_C.ExecuteUbergraph_BPA_Locomotive
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPA_Locomotive_C::ExecuteUbergraph_BPA_Locomotive(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPA_Locomotive.BPA_Locomotive_C.ExecuteUbergraph_BPA_Locomotive");
		
		UBPA_Locomotive_C_ExecuteUbergraph_BPA_Locomotive_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPA_Locomotive_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPA_Locomotive_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass BPA_Locomotive.BPA_Locomotive_C");
		return ptr;
	}

}


