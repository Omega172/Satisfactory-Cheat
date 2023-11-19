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
	 * 		Name   -> Function Anim_Mam.Anim_Mam_C.AnimGraph
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FPoseLink                                   AnimGraph                                                  (Parm, OutParm, NoDestructor)
	 */
	void UAnim_Mam_C::AnimGraph(struct FPoseLink* AnimGraph)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Anim_Mam.Anim_Mam_C.AnimGraph");
		
		UAnim_Mam_C_AnimGraph_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AnimGraph != nullptr)
			*AnimGraph = params.AnimGraph;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Anim_Mam.Anim_Mam_C.StopSFXNotifies
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UAnim_Mam_C::StopSFXNotifies()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Anim_Mam.Anim_Mam_C.StopSFXNotifies");
		
		UAnim_Mam_C_StopSFXNotifies_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Anim_Mam.Anim_Mam_C.StopScannerLoop
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UAnim_Mam_C::StopScannerLoop()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Anim_Mam.Anim_Mam_C.StopScannerLoop");
		
		UAnim_Mam_C_StopScannerLoop_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Anim_Mam.Anim_Mam_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_Mam_AnimGraphNode_TransitionResult_7B42FA4D4C5AE3B0E0A785B67992E8C9
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UAnim_Mam_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_Mam_AnimGraphNode_TransitionResult_7B42FA4D4C5AE3B0E0A785B67992E8C9()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Anim_Mam.Anim_Mam_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_Mam_AnimGraphNode_TransitionResult_7B42FA4D4C5AE3B0E0A785B67992E8C9");
		
		UAnim_Mam_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_Mam_AnimGraphNode_TransitionResult_7B42FA4D4C5AE3B0E0A785B67992E8C9_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Anim_Mam.Anim_Mam_C.BlueprintUpdateAnimation
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTimeX                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAnim_Mam_C::BlueprintUpdateAnimation(float DeltaTimeX)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Anim_Mam.Anim_Mam_C.BlueprintUpdateAnimation");
		
		UAnim_Mam_C_BlueprintUpdateAnimation_Params params {};
		params.DeltaTimeX = DeltaTimeX;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Anim_Mam.Anim_Mam_C.BlueprintInitializeAnimation
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UAnim_Mam_C::BlueprintInitializeAnimation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Anim_Mam.Anim_Mam_C.BlueprintInitializeAnimation");
		
		UAnim_Mam_C_BlueprintInitializeAnimation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Anim_Mam.Anim_Mam_C.HasPowerChanged
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               State                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAnim_Mam_C::HasPowerChanged(bool State)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Anim_Mam.Anim_Mam_C.HasPowerChanged");
		
		UAnim_Mam_C_HasPowerChanged_Params params {};
		params.State = State;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Anim_Mam.Anim_Mam_C.AnimNotify_MamEnteredProducing
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UAnim_Mam_C::AnimNotify_MamEnteredProducing()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Anim_Mam.Anim_Mam_C.AnimNotify_MamEnteredProducing");
		
		UAnim_Mam_C_AnimNotify_MamEnteredProducing_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Anim_Mam.Anim_Mam_C.AnimNotify_MamLeftProducing
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UAnim_Mam_C::AnimNotify_MamLeftProducing()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Anim_Mam.Anim_Mam_C.AnimNotify_MamLeftProducing");
		
		UAnim_Mam_C_AnimNotify_MamLeftProducing_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Anim_Mam.Anim_Mam_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_Mam_AnimGraphNode_TransitionResult_8CA4CF194793432BEFBFA48EC6C1D6B4
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UAnim_Mam_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_Mam_AnimGraphNode_TransitionResult_8CA4CF194793432BEFBFA48EC6C1D6B4()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Anim_Mam.Anim_Mam_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_Mam_AnimGraphNode_TransitionResult_8CA4CF194793432BEFBFA48EC6C1D6B4");
		
		UAnim_Mam_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_Mam_AnimGraphNode_TransitionResult_8CA4CF194793432BEFBFA48EC6C1D6B4_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Anim_Mam.Anim_Mam_C.BlueprintBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UAnim_Mam_C::BlueprintBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Anim_Mam.Anim_Mam_C.BlueprintBeginPlay");
		
		UAnim_Mam_C_BlueprintBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Anim_Mam.Anim_Mam_C.ExecuteUbergraph_Anim_Mam
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAnim_Mam_C::ExecuteUbergraph_Anim_Mam(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Anim_Mam.Anim_Mam_C.ExecuteUbergraph_Anim_Mam");
		
		UAnim_Mam_C_ExecuteUbergraph_Anim_Mam_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAnim_Mam_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAnim_Mam_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass Anim_Mam.Anim_Mam_C");
		return ptr;
	}

}


