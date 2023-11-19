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
	 * 		Name   -> Function Anim_SpaceGiraffe.Anim_SpaceGiraffe_C.AnimGraph
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FPoseLink                                   AnimGraph                                                  (Parm, OutParm, NoDestructor)
	 */
	void UAnim_SpaceGiraffe_C::AnimGraph(struct FPoseLink* AnimGraph)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Anim_SpaceGiraffe.Anim_SpaceGiraffe_C.AnimGraph");
		
		UAnim_SpaceGiraffe_C_AnimGraph_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AnimGraph != nullptr)
			*AnimGraph = params.AnimGraph;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Anim_SpaceGiraffe.Anim_SpaceGiraffe_C.CalculateAnimGraphValues
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UAnim_SpaceGiraffe_C::CalculateAnimGraphValues()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Anim_SpaceGiraffe.Anim_SpaceGiraffe_C.CalculateAnimGraphValues");
		
		UAnim_SpaceGiraffe_C_CalculateAnimGraphValues_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Anim_SpaceGiraffe.Anim_SpaceGiraffe_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_SpaceGiraffe_AnimGraphNode_TransitionResult_5BBF92D944CF08F557873D8B5513CC19
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UAnim_SpaceGiraffe_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_SpaceGiraffe_AnimGraphNode_TransitionResult_5BBF92D944CF08F557873D8B5513CC19()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Anim_SpaceGiraffe.Anim_SpaceGiraffe_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_SpaceGiraffe_AnimGraphNode_TransitionResult_5BBF92D944CF08F557873D8B5513CC19");
		
		UAnim_SpaceGiraffe_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_SpaceGiraffe_AnimGraphNode_TransitionResult_5BBF92D944CF08F557873D8B5513CC19_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Anim_SpaceGiraffe.Anim_SpaceGiraffe_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_SpaceGiraffe_AnimGraphNode_TransitionResult_120EBA2A4C99D3C03736878049EF1F10
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UAnim_SpaceGiraffe_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_SpaceGiraffe_AnimGraphNode_TransitionResult_120EBA2A4C99D3C03736878049EF1F10()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Anim_SpaceGiraffe.Anim_SpaceGiraffe_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_SpaceGiraffe_AnimGraphNode_TransitionResult_120EBA2A4C99D3C03736878049EF1F10");
		
		UAnim_SpaceGiraffe_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_SpaceGiraffe_AnimGraphNode_TransitionResult_120EBA2A4C99D3C03736878049EF1F10_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Anim_SpaceGiraffe.Anim_SpaceGiraffe_C.OnPointDamageTaken
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     shootDirection                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAnim_SpaceGiraffe_C::OnPointDamageTaken(const struct FVector& shootDirection)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Anim_SpaceGiraffe.Anim_SpaceGiraffe_C.OnPointDamageTaken");
		
		UAnim_SpaceGiraffe_C_OnPointDamageTaken_Params params {};
		params.shootDirection = shootDirection;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Anim_SpaceGiraffe.Anim_SpaceGiraffe_C.OnRadialDamageTaken
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UAnim_SpaceGiraffe_C::OnRadialDamageTaken()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Anim_SpaceGiraffe.Anim_SpaceGiraffe_C.OnRadialDamageTaken");
		
		UAnim_SpaceGiraffe_C_OnRadialDamageTaken_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Anim_SpaceGiraffe.Anim_SpaceGiraffe_C.StartRotation
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FRotator                                    TargetRotation                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAnim_SpaceGiraffe_C::StartRotation(const struct FRotator& TargetRotation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Anim_SpaceGiraffe.Anim_SpaceGiraffe_C.StartRotation");
		
		UAnim_SpaceGiraffe_C_StartRotation_Params params {};
		params.TargetRotation = TargetRotation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Anim_SpaceGiraffe.Anim_SpaceGiraffe_C.BlueprintUpdateAnimation
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTimeX                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAnim_SpaceGiraffe_C::BlueprintUpdateAnimation(float DeltaTimeX)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Anim_SpaceGiraffe.Anim_SpaceGiraffe_C.BlueprintUpdateAnimation");
		
		UAnim_SpaceGiraffe_C_BlueprintUpdateAnimation_Params params {};
		params.DeltaTimeX = DeltaTimeX;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Anim_SpaceGiraffe.Anim_SpaceGiraffe_C.ExecuteUbergraph_Anim_SpaceGiraffe
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAnim_SpaceGiraffe_C::ExecuteUbergraph_Anim_SpaceGiraffe(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Anim_SpaceGiraffe.Anim_SpaceGiraffe_C.ExecuteUbergraph_Anim_SpaceGiraffe");
		
		UAnim_SpaceGiraffe_C_ExecuteUbergraph_Anim_SpaceGiraffe_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAnim_SpaceGiraffe_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAnim_SpaceGiraffe_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass Anim_SpaceGiraffe.Anim_SpaceGiraffe_C");
		return ptr;
	}

}


