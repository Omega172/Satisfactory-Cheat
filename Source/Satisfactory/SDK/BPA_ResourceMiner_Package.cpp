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
	 * 		Name   -> Function BPA_ResourceMiner.BPA_ResourceMiner_C.AnimGraph
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FPoseLink                                   AnimGraph                                                  (Parm, OutParm, NoDestructor)
	 */
	void UBPA_ResourceMiner_C::AnimGraph(struct FPoseLink* AnimGraph)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPA_ResourceMiner.BPA_ResourceMiner_C.AnimGraph");
		
		UBPA_ResourceMiner_C_AnimGraph_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AnimGraph != nullptr)
			*AnimGraph = params.AnimGraph;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPA_ResourceMiner.BPA_ResourceMiner_C.AnimNotify_MineComplete
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBPA_ResourceMiner_C::AnimNotify_MineComplete()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPA_ResourceMiner.BPA_ResourceMiner_C.AnimNotify_MineComplete");
		
		UBPA_ResourceMiner_C_AnimNotify_MineComplete_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPA_ResourceMiner.BPA_ResourceMiner_C.AnimNotify_StopMining
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBPA_ResourceMiner_C::AnimNotify_StopMining()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPA_ResourceMiner.BPA_ResourceMiner_C.AnimNotify_StopMining");
		
		UBPA_ResourceMiner_C_AnimNotify_StopMining_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPA_ResourceMiner.BPA_ResourceMiner_C.AnimNotify_MineVfx
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBPA_ResourceMiner_C::AnimNotify_MineVfx()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPA_ResourceMiner.BPA_ResourceMiner_C.AnimNotify_MineVfx");
		
		UBPA_ResourceMiner_C_AnimNotify_MineVfx_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPA_ResourceMiner.BPA_ResourceMiner_C.AnimNotify_StartCameraShake
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBPA_ResourceMiner_C::AnimNotify_StartCameraShake()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPA_ResourceMiner.BPA_ResourceMiner_C.AnimNotify_StartCameraShake");
		
		UBPA_ResourceMiner_C_AnimNotify_StartCameraShake_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPA_ResourceMiner.BPA_ResourceMiner_C.AnimNotify_PickRingSound
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBPA_ResourceMiner_C::AnimNotify_PickRingSound()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPA_ResourceMiner.BPA_ResourceMiner_C.AnimNotify_PickRingSound");
		
		UBPA_ResourceMiner_C_AnimNotify_PickRingSound_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPA_ResourceMiner.BPA_ResourceMiner_C.AnimNotify_SecondMineVfx
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBPA_ResourceMiner_C::AnimNotify_SecondMineVfx()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPA_ResourceMiner.BPA_ResourceMiner_C.AnimNotify_SecondMineVfx");
		
		UBPA_ResourceMiner_C_AnimNotify_SecondMineVfx_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPA_ResourceMiner.BPA_ResourceMiner_C.ExecuteUbergraph_BPA_ResourceMiner
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPA_ResourceMiner_C::ExecuteUbergraph_BPA_ResourceMiner(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPA_ResourceMiner.BPA_ResourceMiner_C.ExecuteUbergraph_BPA_ResourceMiner");
		
		UBPA_ResourceMiner_C_ExecuteUbergraph_BPA_ResourceMiner_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPA_ResourceMiner_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPA_ResourceMiner_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass BPA_ResourceMiner.BPA_ResourceMiner_C");
		return ptr;
	}

}


