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
	 * 		Name   -> Function Anim_NonFlyingBird.Anim_NonFlyingBird_C.AnimGraph
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FPoseLink                                   AnimGraph                                                  (Parm, OutParm, NoDestructor)
	 */
	void UAnim_NonFlyingBird_C::AnimGraph(struct FPoseLink* AnimGraph)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Anim_NonFlyingBird.Anim_NonFlyingBird_C.AnimGraph");
		
		UAnim_NonFlyingBird_C_AnimGraph_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AnimGraph != nullptr)
			*AnimGraph = params.AnimGraph;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Anim_NonFlyingBird.Anim_NonFlyingBird_C.CalculateAnimGraphVariables
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UAnim_NonFlyingBird_C::CalculateAnimGraphVariables()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Anim_NonFlyingBird.Anim_NonFlyingBird_C.CalculateAnimGraphVariables");
		
		UAnim_NonFlyingBird_C_CalculateAnimGraphVariables_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Anim_NonFlyingBird.Anim_NonFlyingBird_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_NonFlyingBird_AnimGraphNode_TransitionResult_93F56C3644CD506A5E44A9B89733CE4D
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UAnim_NonFlyingBird_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_NonFlyingBird_AnimGraphNode_TransitionResult_93F56C3644CD506A5E44A9B89733CE4D()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Anim_NonFlyingBird.Anim_NonFlyingBird_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_NonFlyingBird_AnimGraphNode_TransitionResult_93F56C3644CD506A5E44A9B89733CE4D");
		
		UAnim_NonFlyingBird_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_NonFlyingBird_AnimGraphNode_TransitionResult_93F56C3644CD506A5E44A9B89733CE4D_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Anim_NonFlyingBird.Anim_NonFlyingBird_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_NonFlyingBird_AnimGraphNode_TransitionResult_60BE805E4E0C482A65AABD803219B2BD
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UAnim_NonFlyingBird_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_NonFlyingBird_AnimGraphNode_TransitionResult_60BE805E4E0C482A65AABD803219B2BD()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Anim_NonFlyingBird.Anim_NonFlyingBird_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_NonFlyingBird_AnimGraphNode_TransitionResult_60BE805E4E0C482A65AABD803219B2BD");
		
		UAnim_NonFlyingBird_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_NonFlyingBird_AnimGraphNode_TransitionResult_60BE805E4E0C482A65AABD803219B2BD_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Anim_NonFlyingBird.Anim_NonFlyingBird_C.OnRadialDamageTaken
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UAnim_NonFlyingBird_C::OnRadialDamageTaken()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Anim_NonFlyingBird.Anim_NonFlyingBird_C.OnRadialDamageTaken");
		
		UAnim_NonFlyingBird_C_OnRadialDamageTaken_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Anim_NonFlyingBird.Anim_NonFlyingBird_C.OnPointDamageTaken
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     shootDirection                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAnim_NonFlyingBird_C::OnPointDamageTaken(const struct FVector& shootDirection)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Anim_NonFlyingBird.Anim_NonFlyingBird_C.OnPointDamageTaken");
		
		UAnim_NonFlyingBird_C_OnPointDamageTaken_Params params {};
		params.shootDirection = shootDirection;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Anim_NonFlyingBird.Anim_NonFlyingBird_C.AnimNotify_NFBEnteredIdleLuringState
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UAnim_NonFlyingBird_C::AnimNotify_NFBEnteredIdleLuringState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Anim_NonFlyingBird.Anim_NonFlyingBird_C.AnimNotify_NFBEnteredIdleLuringState");
		
		UAnim_NonFlyingBird_C_AnimNotify_NFBEnteredIdleLuringState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Anim_NonFlyingBird.Anim_NonFlyingBird_C.AnimNotify_AnimNotify_NFB_Jump
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UAnim_NonFlyingBird_C::AnimNotify_AnimNotify_NFB_Jump()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Anim_NonFlyingBird.Anim_NonFlyingBird_C.AnimNotify_AnimNotify_NFB_Jump");
		
		UAnim_NonFlyingBird_C_AnimNotify_AnimNotify_NFB_Jump_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Anim_NonFlyingBird.Anim_NonFlyingBird_C.AnimNotify_AnimNotify_NFB_Land
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UAnim_NonFlyingBird_C::AnimNotify_AnimNotify_NFB_Land()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Anim_NonFlyingBird.Anim_NonFlyingBird_C.AnimNotify_AnimNotify_NFB_Land");
		
		UAnim_NonFlyingBird_C_AnimNotify_AnimNotify_NFB_Land_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Anim_NonFlyingBird.Anim_NonFlyingBird_C.AnimNotify_NFB_EnteredMoving
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UAnim_NonFlyingBird_C::AnimNotify_NFB_EnteredMoving()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Anim_NonFlyingBird.Anim_NonFlyingBird_C.AnimNotify_NFB_EnteredMoving");
		
		UAnim_NonFlyingBird_C_AnimNotify_NFB_EnteredMoving_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Anim_NonFlyingBird.Anim_NonFlyingBird_C.AnimNotify_NFBLeftLuringState
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UAnim_NonFlyingBird_C::AnimNotify_NFBLeftLuringState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Anim_NonFlyingBird.Anim_NonFlyingBird_C.AnimNotify_NFBLeftLuringState");
		
		UAnim_NonFlyingBird_C_AnimNotify_NFBLeftLuringState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Anim_NonFlyingBird.Anim_NonFlyingBird_C.AnimNotify_NFB_LeftMoving
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UAnim_NonFlyingBird_C::AnimNotify_NFB_LeftMoving()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Anim_NonFlyingBird.Anim_NonFlyingBird_C.AnimNotify_NFB_LeftMoving");
		
		UAnim_NonFlyingBird_C_AnimNotify_NFB_LeftMoving_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Anim_NonFlyingBird.Anim_NonFlyingBird_C.AnimNotify_AnimNotify_NFB_VO_Long
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UAnim_NonFlyingBird_C::AnimNotify_AnimNotify_NFB_VO_Long()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Anim_NonFlyingBird.Anim_NonFlyingBird_C.AnimNotify_AnimNotify_NFB_VO_Long");
		
		UAnim_NonFlyingBird_C_AnimNotify_AnimNotify_NFB_VO_Long_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Anim_NonFlyingBird.Anim_NonFlyingBird_C.BlueprintUpdateAnimation
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTimeX                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAnim_NonFlyingBird_C::BlueprintUpdateAnimation(float DeltaTimeX)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Anim_NonFlyingBird.Anim_NonFlyingBird_C.BlueprintUpdateAnimation");
		
		UAnim_NonFlyingBird_C_BlueprintUpdateAnimation_Params params {};
		params.DeltaTimeX = DeltaTimeX;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Anim_NonFlyingBird.Anim_NonFlyingBird_C.AnimNotify_AnimNotify_NFB_JumpLoop
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UAnim_NonFlyingBird_C::AnimNotify_AnimNotify_NFB_JumpLoop()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Anim_NonFlyingBird.Anim_NonFlyingBird_C.AnimNotify_AnimNotify_NFB_JumpLoop");
		
		UAnim_NonFlyingBird_C_AnimNotify_AnimNotify_NFB_JumpLoop_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Anim_NonFlyingBird.Anim_NonFlyingBird_C.ExecuteUbergraph_Anim_NonFlyingBird
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAnim_NonFlyingBird_C::ExecuteUbergraph_Anim_NonFlyingBird(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Anim_NonFlyingBird.Anim_NonFlyingBird_C.ExecuteUbergraph_Anim_NonFlyingBird");
		
		UAnim_NonFlyingBird_C_ExecuteUbergraph_Anim_NonFlyingBird_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAnim_NonFlyingBird_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAnim_NonFlyingBird_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass Anim_NonFlyingBird.Anim_NonFlyingBird_C");
		return ptr;
	}

}


