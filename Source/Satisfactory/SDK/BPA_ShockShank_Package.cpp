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
	 * 		Name   -> Function BPA_ShockShank.BPA_ShockShank_C.AnimGraph
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FPoseLink                                   AnimGraph                                                  (Parm, OutParm, NoDestructor)
	 */
	void UBPA_ShockShank_C::AnimGraph(struct FPoseLink* AnimGraph)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPA_ShockShank.BPA_ShockShank_C.AnimGraph");
		
		UBPA_ShockShank_C_AnimGraph_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AnimGraph != nullptr)
			*AnimGraph = params.AnimGraph;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPA_ShockShank.BPA_ShockShank_C.AnimNotify_Notify_ShockShankAttack
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBPA_ShockShank_C::AnimNotify_Notify_ShockShankAttack()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPA_ShockShank.BPA_ShockShank_C.AnimNotify_Notify_ShockShankAttack");
		
		UBPA_ShockShank_C_AnimNotify_Notify_ShockShankAttack_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPA_ShockShank.BPA_ShockShank_C.ExecuteUbergraph_BPA_ShockShank
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPA_ShockShank_C::ExecuteUbergraph_BPA_ShockShank(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPA_ShockShank.BPA_ShockShank_C.ExecuteUbergraph_BPA_ShockShank");
		
		UBPA_ShockShank_C_ExecuteUbergraph_BPA_ShockShank_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPA_ShockShank_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPA_ShockShank_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass BPA_ShockShank.BPA_ShockShank_C");
		return ptr;
	}

}


