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
	 * 		Name   -> Function BPA_StunSpear.BPA_StunSpear_C.AnimGraph
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FPoseLink                                   AnimGraph                                                  (Parm, OutParm, NoDestructor)
	 */
	void UBPA_StunSpear_C::AnimGraph(struct FPoseLink* AnimGraph)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPA_StunSpear.BPA_StunSpear_C.AnimGraph");
		
		UBPA_StunSpear_C_AnimGraph_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AnimGraph != nullptr)
			*AnimGraph = params.AnimGraph;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPA_StunSpear.BPA_StunSpear_C.AnimNotify_Notify_StunSpearAttack
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBPA_StunSpear_C::AnimNotify_Notify_StunSpearAttack()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPA_StunSpear.BPA_StunSpear_C.AnimNotify_Notify_StunSpearAttack");
		
		UBPA_StunSpear_C_AnimNotify_Notify_StunSpearAttack_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPA_StunSpear.BPA_StunSpear_C.ExecuteUbergraph_BPA_StunSpear
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPA_StunSpear_C::ExecuteUbergraph_BPA_StunSpear(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPA_StunSpear.BPA_StunSpear_C.ExecuteUbergraph_BPA_StunSpear");
		
		UBPA_StunSpear_C_ExecuteUbergraph_BPA_StunSpear_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPA_StunSpear_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPA_StunSpear_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass BPA_StunSpear.BPA_StunSpear_C");
		return ptr;
	}

}


