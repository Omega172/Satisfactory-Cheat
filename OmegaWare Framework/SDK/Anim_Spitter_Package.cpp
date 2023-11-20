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
	 * 		Name   -> Function Anim_Spitter.Anim_Spitter_C.AnimGraph
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FPoseLink                                   AnimGraph                                                  (Parm, OutParm, NoDestructor)
	 */
	void UAnim_Spitter_C::AnimGraph(struct FPoseLink* AnimGraph)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Anim_Spitter.Anim_Spitter_C.AnimGraph");
		
		UAnim_Spitter_C_AnimGraph_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AnimGraph != nullptr)
			*AnimGraph = params.AnimGraph;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Anim_Spitter.Anim_Spitter_C.CalculateAnimGraphVariables
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UAnim_Spitter_C::CalculateAnimGraphVariables()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Anim_Spitter.Anim_Spitter_C.CalculateAnimGraphVariables");
		
		UAnim_Spitter_C_CalculateAnimGraphVariables_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Anim_Spitter.Anim_Spitter_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_Spitter_AnimGraphNode_TransitionResult_E5A14AC943454B0D928B91923D852F46
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UAnim_Spitter_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_Spitter_AnimGraphNode_TransitionResult_E5A14AC943454B0D928B91923D852F46()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Anim_Spitter.Anim_Spitter_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_Spitter_AnimGraphNode_TransitionResult_E5A14AC943454B0D928B91923D852F46");
		
		UAnim_Spitter_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_Spitter_AnimGraphNode_TransitionResult_E5A14AC943454B0D928B91923D852F46_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Anim_Spitter.Anim_Spitter_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_Spitter_AnimGraphNode_TransitionResult_F59AB4D046321D1D1D4ED6BFFA4CE266
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UAnim_Spitter_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_Spitter_AnimGraphNode_TransitionResult_F59AB4D046321D1D1D4ED6BFFA4CE266()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Anim_Spitter.Anim_Spitter_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_Spitter_AnimGraphNode_TransitionResult_F59AB4D046321D1D1D4ED6BFFA4CE266");
		
		UAnim_Spitter_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_Spitter_AnimGraphNode_TransitionResult_F59AB4D046321D1D1D4ED6BFFA4CE266_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Anim_Spitter.Anim_Spitter_C.AnimNotify_SpitterWalkToRunNotify
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UAnim_Spitter_C::AnimNotify_SpitterWalkToRunNotify()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Anim_Spitter.Anim_Spitter_C.AnimNotify_SpitterWalkToRunNotify");
		
		UAnim_Spitter_C_AnimNotify_SpitterWalkToRunNotify_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Anim_Spitter.Anim_Spitter_C.OnRadialDamageTaken
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UAnim_Spitter_C::OnRadialDamageTaken()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Anim_Spitter.Anim_Spitter_C.OnRadialDamageTaken");
		
		UAnim_Spitter_C_OnRadialDamageTaken_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Anim_Spitter.Anim_Spitter_C.OnPointDamageTaken
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     shootDirection                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAnim_Spitter_C::OnPointDamageTaken(const struct FVector& shootDirection)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Anim_Spitter.Anim_Spitter_C.OnPointDamageTaken");
		
		UAnim_Spitter_C_OnPointDamageTaken_Params params {};
		params.shootDirection = shootDirection;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Anim_Spitter.Anim_Spitter_C.BlueprintUpdateAnimation
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTimeX                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAnim_Spitter_C::BlueprintUpdateAnimation(float DeltaTimeX)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Anim_Spitter.Anim_Spitter_C.BlueprintUpdateAnimation");
		
		UAnim_Spitter_C_BlueprintUpdateAnimation_Params params {};
		params.DeltaTimeX = DeltaTimeX;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Anim_Spitter.Anim_Spitter_C.AnimNotify_SniperVFX_ChargeUp
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UAnim_Spitter_C::AnimNotify_SniperVFX_ChargeUp()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Anim_Spitter.Anim_Spitter_C.AnimNotify_SniperVFX_ChargeUp");
		
		UAnim_Spitter_C_AnimNotify_SniperVFX_ChargeUp_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Anim_Spitter.Anim_Spitter_C.ExecuteUbergraph_Anim_Spitter
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAnim_Spitter_C::ExecuteUbergraph_Anim_Spitter(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Anim_Spitter.Anim_Spitter_C.ExecuteUbergraph_Anim_Spitter");
		
		UAnim_Spitter_C_ExecuteUbergraph_Anim_Spitter_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAnim_Spitter_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAnim_Spitter_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass Anim_Spitter.Anim_Spitter_C");
		return ptr;
	}

}


