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
	 * 		Name   -> Function BP_CrabHatcher_Anim.BP_CrabHatcher_Anim_C.AnimGraph
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FPoseLink                                   AnimGraph                                                  (Parm, OutParm, NoDestructor)
	 */
	void UBP_CrabHatcher_Anim_C::AnimGraph(struct FPoseLink* AnimGraph)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CrabHatcher_Anim.BP_CrabHatcher_Anim_C.AnimGraph");
		
		UBP_CrabHatcher_Anim_C_AnimGraph_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AnimGraph != nullptr)
			*AnimGraph = params.AnimGraph;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_CrabHatcher_Anim.BP_CrabHatcher_Anim_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BP_CrabHatcher_Anim_AnimGraphNode_TransitionResult_614C0A1D4DADC93796F4689E4F43E302
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_CrabHatcher_Anim_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BP_CrabHatcher_Anim_AnimGraphNode_TransitionResult_614C0A1D4DADC93796F4689E4F43E302()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CrabHatcher_Anim.BP_CrabHatcher_Anim_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BP_CrabHatcher_Anim_AnimGraphNode_TransitionResult_614C0A1D4DADC93796F4689E4F43E302");
		
		UBP_CrabHatcher_Anim_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BP_CrabHatcher_Anim_AnimGraphNode_TransitionResult_614C0A1D4DADC93796F4689E4F43E302_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_CrabHatcher_Anim.BP_CrabHatcher_Anim_C.BlueprintUpdateAnimation
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTimeX                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_CrabHatcher_Anim_C::BlueprintUpdateAnimation(float DeltaTimeX)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CrabHatcher_Anim.BP_CrabHatcher_Anim_C.BlueprintUpdateAnimation");
		
		UBP_CrabHatcher_Anim_C_BlueprintUpdateAnimation_Params params {};
		params.DeltaTimeX = DeltaTimeX;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_CrabHatcher_Anim.BP_CrabHatcher_Anim_C.AnimNotify_OnIdlingStarted
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBP_CrabHatcher_Anim_C::AnimNotify_OnIdlingStarted()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CrabHatcher_Anim.BP_CrabHatcher_Anim_C.AnimNotify_OnIdlingStarted");
		
		UBP_CrabHatcher_Anim_C_AnimNotify_OnIdlingStarted_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_CrabHatcher_Anim.BP_CrabHatcher_Anim_C.PlayHitAnim
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBP_CrabHatcher_Anim_C::PlayHitAnim()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CrabHatcher_Anim.BP_CrabHatcher_Anim_C.PlayHitAnim");
		
		UBP_CrabHatcher_Anim_C_PlayHitAnim_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_CrabHatcher_Anim.BP_CrabHatcher_Anim_C.PlaySpawnAnim
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBP_CrabHatcher_Anim_C::PlaySpawnAnim()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CrabHatcher_Anim.BP_CrabHatcher_Anim_C.PlaySpawnAnim");
		
		UBP_CrabHatcher_Anim_C_PlaySpawnAnim_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_CrabHatcher_Anim.BP_CrabHatcher_Anim_C.AnimNotify_OnCrabClosed
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBP_CrabHatcher_Anim_C::AnimNotify_OnCrabClosed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CrabHatcher_Anim.BP_CrabHatcher_Anim_C.AnimNotify_OnCrabClosed");
		
		UBP_CrabHatcher_Anim_C_AnimNotify_OnCrabClosed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_CrabHatcher_Anim.BP_CrabHatcher_Anim_C.PlayDeathAnim
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBP_CrabHatcher_Anim_C::PlayDeathAnim()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CrabHatcher_Anim.BP_CrabHatcher_Anim_C.PlayDeathAnim");
		
		UBP_CrabHatcher_Anim_C_PlayDeathAnim_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_CrabHatcher_Anim.BP_CrabHatcher_Anim_C.Respawn
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBP_CrabHatcher_Anim_C::Respawn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CrabHatcher_Anim.BP_CrabHatcher_Anim_C.Respawn");
		
		UBP_CrabHatcher_Anim_C_Respawn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_CrabHatcher_Anim.BP_CrabHatcher_Anim_C.AnimNotify_OnSpawnBabies
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBP_CrabHatcher_Anim_C::AnimNotify_OnSpawnBabies()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CrabHatcher_Anim.BP_CrabHatcher_Anim_C.AnimNotify_OnSpawnBabies");
		
		UBP_CrabHatcher_Anim_C_AnimNotify_OnSpawnBabies_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_CrabHatcher_Anim.BP_CrabHatcher_Anim_C.AnimNotify_OnDeathAnimationFinished
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBP_CrabHatcher_Anim_C::AnimNotify_OnDeathAnimationFinished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CrabHatcher_Anim.BP_CrabHatcher_Anim_C.AnimNotify_OnDeathAnimationFinished");
		
		UBP_CrabHatcher_Anim_C_AnimNotify_OnDeathAnimationFinished_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_CrabHatcher_Anim.BP_CrabHatcher_Anim_C.BlueprintInitializeAnimation
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UBP_CrabHatcher_Anim_C::BlueprintInitializeAnimation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CrabHatcher_Anim.BP_CrabHatcher_Anim_C.BlueprintInitializeAnimation");
		
		UBP_CrabHatcher_Anim_C_BlueprintInitializeAnimation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_CrabHatcher_Anim.BP_CrabHatcher_Anim_C.BlueprintBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UBP_CrabHatcher_Anim_C::BlueprintBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CrabHatcher_Anim.BP_CrabHatcher_Anim_C.BlueprintBeginPlay");
		
		UBP_CrabHatcher_Anim_C_BlueprintBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_CrabHatcher_Anim.BP_CrabHatcher_Anim_C.ExecuteUbergraph_BP_CrabHatcher_Anim
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_CrabHatcher_Anim_C::ExecuteUbergraph_BP_CrabHatcher_Anim(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CrabHatcher_Anim.BP_CrabHatcher_Anim_C.ExecuteUbergraph_BP_CrabHatcher_Anim");
		
		UBP_CrabHatcher_Anim_C_ExecuteUbergraph_BP_CrabHatcher_Anim_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_CrabHatcher_Anim_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_CrabHatcher_Anim_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass BP_CrabHatcher_Anim.BP_CrabHatcher_Anim_C");
		return ptr;
	}

}


