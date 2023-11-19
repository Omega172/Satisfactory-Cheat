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
	 * 		Name   -> Function BPA_FoundryMk1.BPA_FoundryMk1_C.AnimGraph
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FPoseLink                                   AnimGraph                                                  (Parm, OutParm, NoDestructor)
	 */
	void UBPA_FoundryMk1_C::AnimGraph(struct FPoseLink* AnimGraph)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPA_FoundryMk1.BPA_FoundryMk1_C.AnimGraph");
		
		UBPA_FoundryMk1_C_AnimGraph_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AnimGraph != nullptr)
			*AnimGraph = params.AnimGraph;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPA_FoundryMk1.BPA_FoundryMk1_C.AnimNotify_AnimStop
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBPA_FoundryMk1_C::AnimNotify_AnimStop()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPA_FoundryMk1.BPA_FoundryMk1_C.AnimNotify_AnimStop");
		
		UBPA_FoundryMk1_C_AnimNotify_AnimStop_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPA_FoundryMk1.BPA_FoundryMk1_C.ExecuteUbergraph_BPA_FoundryMk1
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPA_FoundryMk1_C::ExecuteUbergraph_BPA_FoundryMk1(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPA_FoundryMk1.BPA_FoundryMk1_C.ExecuteUbergraph_BPA_FoundryMk1");
		
		UBPA_FoundryMk1_C_ExecuteUbergraph_BPA_FoundryMk1_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPA_FoundryMk1_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPA_FoundryMk1_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass BPA_FoundryMk1.BPA_FoundryMk1_C");
		return ptr;
	}

}


