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
	 * 		Name   -> Function Anim_PortableMiner.Anim_PortableMiner_C.AnimGraph
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FPoseLink                                   AnimGraph                                                  (Parm, OutParm, NoDestructor)
	 */
	void UAnim_PortableMiner_C::AnimGraph(struct FPoseLink* AnimGraph)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Anim_PortableMiner.Anim_PortableMiner_C.AnimGraph");
		
		UAnim_PortableMiner_C_AnimGraph_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AnimGraph != nullptr)
			*AnimGraph = params.AnimGraph;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Anim_PortableMiner.Anim_PortableMiner_C.BlueprintUpdateAnimation
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTimeX                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAnim_PortableMiner_C::BlueprintUpdateAnimation(float DeltaTimeX)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Anim_PortableMiner.Anim_PortableMiner_C.BlueprintUpdateAnimation");
		
		UAnim_PortableMiner_C_BlueprintUpdateAnimation_Params params {};
		params.DeltaTimeX = DeltaTimeX;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Anim_PortableMiner.Anim_PortableMiner_C.AnimNotify_StartMiningVfxNotify
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UAnim_PortableMiner_C::AnimNotify_StartMiningVfxNotify()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Anim_PortableMiner.Anim_PortableMiner_C.AnimNotify_StartMiningVfxNotify");
		
		UAnim_PortableMiner_C_AnimNotify_StartMiningVfxNotify_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Anim_PortableMiner.Anim_PortableMiner_C.AnimNotify_PortableMinerEnteredOfflineState
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UAnim_PortableMiner_C::AnimNotify_PortableMinerEnteredOfflineState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Anim_PortableMiner.Anim_PortableMiner_C.AnimNotify_PortableMinerEnteredOfflineState");
		
		UAnim_PortableMiner_C_AnimNotify_PortableMinerEnteredOfflineState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Anim_PortableMiner.Anim_PortableMiner_C.AnimNotify_PortableMinerLeftOfflineState
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UAnim_PortableMiner_C::AnimNotify_PortableMinerLeftOfflineState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Anim_PortableMiner.Anim_PortableMiner_C.AnimNotify_PortableMinerLeftOfflineState");
		
		UAnim_PortableMiner_C_AnimNotify_PortableMinerLeftOfflineState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Anim_PortableMiner.Anim_PortableMiner_C.AnimNotify_StartBurnerVfxNotify
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UAnim_PortableMiner_C::AnimNotify_StartBurnerVfxNotify()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Anim_PortableMiner.Anim_PortableMiner_C.AnimNotify_StartBurnerVfxNotify");
		
		UAnim_PortableMiner_C_AnimNotify_StartBurnerVfxNotify_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Anim_PortableMiner.Anim_PortableMiner_C.ExecuteUbergraph_Anim_PortableMiner
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAnim_PortableMiner_C::ExecuteUbergraph_Anim_PortableMiner(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Anim_PortableMiner.Anim_PortableMiner_C.ExecuteUbergraph_Anim_PortableMiner");
		
		UAnim_PortableMiner_C_ExecuteUbergraph_Anim_PortableMiner_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAnim_PortableMiner_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAnim_PortableMiner_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass Anim_PortableMiner.Anim_PortableMiner_C");
		return ptr;
	}

}


