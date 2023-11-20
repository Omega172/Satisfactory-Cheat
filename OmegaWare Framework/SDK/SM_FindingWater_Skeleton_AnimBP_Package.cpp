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
	 * 		Name   -> Function SM_FindingWater_Skeleton_AnimBP.SM_FindingWater_Skeleton_AnimBP_C.AnimGraph
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FPoseLink                                   AnimGraph                                                  (Parm, OutParm, NoDestructor)
	 */
	void USM_FindingWater_Skeleton_AnimBP_C::AnimGraph(struct FPoseLink* AnimGraph)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SM_FindingWater_Skeleton_AnimBP.SM_FindingWater_Skeleton_AnimBP_C.AnimGraph");
		
		USM_FindingWater_Skeleton_AnimBP_C_AnimGraph_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AnimGraph != nullptr)
			*AnimGraph = params.AnimGraph;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function SM_FindingWater_Skeleton_AnimBP.SM_FindingWater_Skeleton_AnimBP_C.ExecuteUbergraph_SM_FindingWater_Skeleton_AnimBP
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USM_FindingWater_Skeleton_AnimBP_C::ExecuteUbergraph_SM_FindingWater_Skeleton_AnimBP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SM_FindingWater_Skeleton_AnimBP.SM_FindingWater_Skeleton_AnimBP_C.ExecuteUbergraph_SM_FindingWater_Skeleton_AnimBP");
		
		USM_FindingWater_Skeleton_AnimBP_C_ExecuteUbergraph_SM_FindingWater_Skeleton_AnimBP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USM_FindingWater_Skeleton_AnimBP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USM_FindingWater_Skeleton_AnimBP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass SM_FindingWater_Skeleton_AnimBP.SM_FindingWater_Skeleton_AnimBP_C");
		return ptr;
	}

}


