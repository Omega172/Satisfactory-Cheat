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
	 * 		Name   -> Function BPA_MinerMk2.BPA_MinerMk2_C.AnimGraph
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FPoseLink                                   AnimGraph                                                  (Parm, OutParm, NoDestructor)
	 */
	void UBPA_MinerMk2_C::AnimGraph(struct FPoseLink* AnimGraph)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPA_MinerMk2.BPA_MinerMk2_C.AnimGraph");
		
		UBPA_MinerMk2_C_AnimGraph_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AnimGraph != nullptr)
			*AnimGraph = params.AnimGraph;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPA_MinerMk2.BPA_MinerMk2_C.SetupReloadTimer
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBPA_MinerMk2_C::SetupReloadTimer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPA_MinerMk2.BPA_MinerMk2_C.SetupReloadTimer");
		
		UBPA_MinerMk2_C_SetupReloadTimer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPA_MinerMk2.BPA_MinerMk2_C.ReloadTimer
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBPA_MinerMk2_C::ReloadTimer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPA_MinerMk2.BPA_MinerMk2_C.ReloadTimer");
		
		UBPA_MinerMk2_C_ReloadTimer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPA_MinerMk2.BPA_MinerMk2_C.AnimNotify_MinerEnteredReloadState
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBPA_MinerMk2_C::AnimNotify_MinerEnteredReloadState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPA_MinerMk2.BPA_MinerMk2_C.AnimNotify_MinerEnteredReloadState");
		
		UBPA_MinerMk2_C_AnimNotify_MinerEnteredReloadState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPA_MinerMk2.BPA_MinerMk2_C.AnimNotify_StartDrillVFX
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBPA_MinerMk2_C::AnimNotify_StartDrillVFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPA_MinerMk2.BPA_MinerMk2_C.AnimNotify_StartDrillVFX");
		
		UBPA_MinerMk2_C_AnimNotify_StartDrillVFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPA_MinerMk2.BPA_MinerMk2_C.BlueprintInitializeAnimation
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UBPA_MinerMk2_C::BlueprintInitializeAnimation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPA_MinerMk2.BPA_MinerMk2_C.BlueprintInitializeAnimation");
		
		UBPA_MinerMk2_C_BlueprintInitializeAnimation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPA_MinerMk2.BPA_MinerMk2_C.AnimNotify_OnResumeProducing
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBPA_MinerMk2_C::AnimNotify_OnResumeProducing()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPA_MinerMk2.BPA_MinerMk2_C.AnimNotify_OnResumeProducing");
		
		UBPA_MinerMk2_C_AnimNotify_OnResumeProducing_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPA_MinerMk2.BPA_MinerMk2_C.AnimNotify_OnStopProducing
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBPA_MinerMk2_C::AnimNotify_OnStopProducing()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPA_MinerMk2.BPA_MinerMk2_C.AnimNotify_OnStopProducing");
		
		UBPA_MinerMk2_C_AnimNotify_OnStopProducing_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPA_MinerMk2.BPA_MinerMk2_C.AnimNotify_StartEngineLoop
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBPA_MinerMk2_C::AnimNotify_StartEngineLoop()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPA_MinerMk2.BPA_MinerMk2_C.AnimNotify_StartEngineLoop");
		
		UBPA_MinerMk2_C_AnimNotify_StartEngineLoop_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPA_MinerMk2.BPA_MinerMk2_C.ExecuteUbergraph_BPA_MinerMk2
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPA_MinerMk2_C::ExecuteUbergraph_BPA_MinerMk2(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPA_MinerMk2.BPA_MinerMk2_C.ExecuteUbergraph_BPA_MinerMk2");
		
		UBPA_MinerMk2_C_ExecuteUbergraph_BPA_MinerMk2_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPA_MinerMk2_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPA_MinerMk2_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass BPA_MinerMk2.BPA_MinerMk2_C");
		return ptr;
	}

}


