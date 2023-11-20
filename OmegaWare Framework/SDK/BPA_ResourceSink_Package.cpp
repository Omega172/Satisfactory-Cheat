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
	 * 		Name   -> Function BPA_ResourceSink.BPA_ResourceSink_C.AnimGraph
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FPoseLink                                   AnimGraph                                                  (Parm, OutParm, NoDestructor)
	 */
	void UBPA_ResourceSink_C::AnimGraph(struct FPoseLink* AnimGraph)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPA_ResourceSink.BPA_ResourceSink_C.AnimGraph");
		
		UBPA_ResourceSink_C_AnimGraph_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AnimGraph != nullptr)
			*AnimGraph = params.AnimGraph;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPA_ResourceSink.BPA_ResourceSink_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_ResourceSink_AnimGraphNode_TransitionResult_1C5A94AE40C3D7020742998831888331
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBPA_ResourceSink_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_ResourceSink_AnimGraphNode_TransitionResult_1C5A94AE40C3D7020742998831888331()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPA_ResourceSink.BPA_ResourceSink_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_ResourceSink_AnimGraphNode_TransitionResult_1C5A94AE40C3D7020742998831888331");
		
		UBPA_ResourceSink_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_ResourceSink_AnimGraphNode_TransitionResult_1C5A94AE40C3D7020742998831888331_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPA_ResourceSink.BPA_ResourceSink_C.AnimNotify_SinkEnteredProducingState
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBPA_ResourceSink_C::AnimNotify_SinkEnteredProducingState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPA_ResourceSink.BPA_ResourceSink_C.AnimNotify_SinkEnteredProducingState");
		
		UBPA_ResourceSink_C_AnimNotify_SinkEnteredProducingState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPA_ResourceSink.BPA_ResourceSink_C.AnimNotify_SinkLeftProducingState
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBPA_ResourceSink_C::AnimNotify_SinkLeftProducingState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPA_ResourceSink.BPA_ResourceSink_C.AnimNotify_SinkLeftProducingState");
		
		UBPA_ResourceSink_C_AnimNotify_SinkLeftProducingState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPA_ResourceSink.BPA_ResourceSink_C.AnimNotify_RandomAnimNotify
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBPA_ResourceSink_C::AnimNotify_RandomAnimNotify()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPA_ResourceSink.BPA_ResourceSink_C.AnimNotify_RandomAnimNotify");
		
		UBPA_ResourceSink_C_AnimNotify_RandomAnimNotify_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPA_ResourceSink.BPA_ResourceSink_C.ExecuteUbergraph_BPA_ResourceSink
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPA_ResourceSink_C::ExecuteUbergraph_BPA_ResourceSink(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPA_ResourceSink.BPA_ResourceSink_C.ExecuteUbergraph_BPA_ResourceSink");
		
		UBPA_ResourceSink_C_ExecuteUbergraph_BPA_ResourceSink_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPA_ResourceSink_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPA_ResourceSink_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass BPA_ResourceSink.BPA_ResourceSink_C");
		return ptr;
	}

}


