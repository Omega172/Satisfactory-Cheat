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
	 * 		Name   -> Function Anim_SmallSpitter.Anim_SmallSpitter_C.AnimGraph
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FPoseLink                                   AnimGraph                                                  (Parm, OutParm, NoDestructor)
	 */
	void UAnim_SmallSpitter_C::AnimGraph(struct FPoseLink* AnimGraph)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Anim_SmallSpitter.Anim_SmallSpitter_C.AnimGraph");
		
		UAnim_SmallSpitter_C_AnimGraph_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AnimGraph != nullptr)
			*AnimGraph = params.AnimGraph;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Anim_SmallSpitter.Anim_SmallSpitter_C.CalculateAnimGraphVariables
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UAnim_SmallSpitter_C::CalculateAnimGraphVariables()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Anim_SmallSpitter.Anim_SmallSpitter_C.CalculateAnimGraphVariables");
		
		UAnim_SmallSpitter_C_CalculateAnimGraphVariables_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Anim_SmallSpitter.Anim_SmallSpitter_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_SmallSpitter_AnimGraphNode_TransitionResult_6F7C35D64C630E211DF61988112FB6A4
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UAnim_SmallSpitter_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_SmallSpitter_AnimGraphNode_TransitionResult_6F7C35D64C630E211DF61988112FB6A4()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Anim_SmallSpitter.Anim_SmallSpitter_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_SmallSpitter_AnimGraphNode_TransitionResult_6F7C35D64C630E211DF61988112FB6A4");
		
		UAnim_SmallSpitter_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_SmallSpitter_AnimGraphNode_TransitionResult_6F7C35D64C630E211DF61988112FB6A4_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Anim_SmallSpitter.Anim_SmallSpitter_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_SmallSpitter_AnimGraphNode_TransitionResult_03EBA1B14615160DFD1DFEBCC1D6D217
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UAnim_SmallSpitter_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_SmallSpitter_AnimGraphNode_TransitionResult_03EBA1B14615160DFD1DFEBCC1D6D217()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Anim_SmallSpitter.Anim_SmallSpitter_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_SmallSpitter_AnimGraphNode_TransitionResult_03EBA1B14615160DFD1DFEBCC1D6D217");
		
		UAnim_SmallSpitter_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_SmallSpitter_AnimGraphNode_TransitionResult_03EBA1B14615160DFD1DFEBCC1D6D217_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Anim_SmallSpitter.Anim_SmallSpitter_C.AnimNotify_SpitterWalkToRunNotify
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UAnim_SmallSpitter_C::AnimNotify_SpitterWalkToRunNotify()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Anim_SmallSpitter.Anim_SmallSpitter_C.AnimNotify_SpitterWalkToRunNotify");
		
		UAnim_SmallSpitter_C_AnimNotify_SpitterWalkToRunNotify_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Anim_SmallSpitter.Anim_SmallSpitter_C.OnRadialDamageTaken
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UAnim_SmallSpitter_C::OnRadialDamageTaken()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Anim_SmallSpitter.Anim_SmallSpitter_C.OnRadialDamageTaken");
		
		UAnim_SmallSpitter_C_OnRadialDamageTaken_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Anim_SmallSpitter.Anim_SmallSpitter_C.OnPointDamageTaken
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     shootDirection                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAnim_SmallSpitter_C::OnPointDamageTaken(const struct FVector& shootDirection)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Anim_SmallSpitter.Anim_SmallSpitter_C.OnPointDamageTaken");
		
		UAnim_SmallSpitter_C_OnPointDamageTaken_Params params {};
		params.shootDirection = shootDirection;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Anim_SmallSpitter.Anim_SmallSpitter_C.BlueprintUpdateAnimation
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTimeX                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAnim_SmallSpitter_C::BlueprintUpdateAnimation(float DeltaTimeX)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Anim_SmallSpitter.Anim_SmallSpitter_C.BlueprintUpdateAnimation");
		
		UAnim_SmallSpitter_C_BlueprintUpdateAnimation_Params params {};
		params.DeltaTimeX = DeltaTimeX;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Anim_SmallSpitter.Anim_SmallSpitter_C.ExecuteUbergraph_Anim_SmallSpitter
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAnim_SmallSpitter_C::ExecuteUbergraph_Anim_SmallSpitter(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Anim_SmallSpitter.Anim_SmallSpitter_C.ExecuteUbergraph_Anim_SmallSpitter");
		
		UAnim_SmallSpitter_C_ExecuteUbergraph_Anim_SmallSpitter_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAnim_SmallSpitter_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAnim_SmallSpitter_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass Anim_SmallSpitter.Anim_SmallSpitter_C");
		return ptr;
	}

}


