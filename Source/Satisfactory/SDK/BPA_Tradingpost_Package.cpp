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
	 * 		Name   -> Function BPA_Tradingpost.BPA_Tradingpost_C.AnimGraph
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FPoseLink                                   AnimGraph                                                  (Parm, OutParm, NoDestructor)
	 */
	void UBPA_Tradingpost_C::AnimGraph(struct FPoseLink* AnimGraph)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPA_Tradingpost.BPA_Tradingpost_C.AnimGraph");
		
		UBPA_Tradingpost_C_AnimGraph_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AnimGraph != nullptr)
			*AnimGraph = params.AnimGraph;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPA_Tradingpost.BPA_Tradingpost_C.CalculateValues
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBPA_Tradingpost_C::CalculateValues()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPA_Tradingpost.BPA_Tradingpost_C.CalculateValues");
		
		UBPA_Tradingpost_C_CalculateValues_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPA_Tradingpost.BPA_Tradingpost_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_Tradingpost_AnimGraphNode_TransitionResult_22EEA86B4A2F634DDF22FCA3B594EEF4
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBPA_Tradingpost_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_Tradingpost_AnimGraphNode_TransitionResult_22EEA86B4A2F634DDF22FCA3B594EEF4()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPA_Tradingpost.BPA_Tradingpost_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_Tradingpost_AnimGraphNode_TransitionResult_22EEA86B4A2F634DDF22FCA3B594EEF4");
		
		UBPA_Tradingpost_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_Tradingpost_AnimGraphNode_TransitionResult_22EEA86B4A2F634DDF22FCA3B594EEF4_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPA_Tradingpost.BPA_Tradingpost_C.BlueprintUpdateAnimation
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTimeX                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPA_Tradingpost_C::BlueprintUpdateAnimation(float DeltaTimeX)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPA_Tradingpost.BPA_Tradingpost_C.BlueprintUpdateAnimation");
		
		UBPA_Tradingpost_C_BlueprintUpdateAnimation_Params params {};
		params.DeltaTimeX = DeltaTimeX;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPA_Tradingpost.BPA_Tradingpost_C.AnimNotify_SpawnExhaustVfx_01
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBPA_Tradingpost_C::AnimNotify_SpawnExhaustVfx_01()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPA_Tradingpost.BPA_Tradingpost_C.AnimNotify_SpawnExhaustVfx_01");
		
		UBPA_Tradingpost_C_AnimNotify_SpawnExhaustVfx_01_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPA_Tradingpost.BPA_Tradingpost_C.AnimNotify_SpawnExhaustVfx_02
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBPA_Tradingpost_C::AnimNotify_SpawnExhaustVfx_02()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPA_Tradingpost.BPA_Tradingpost_C.AnimNotify_SpawnExhaustVfx_02");
		
		UBPA_Tradingpost_C_AnimNotify_SpawnExhaustVfx_02_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPA_Tradingpost.BPA_Tradingpost_C.AnimNotify_SpawnExhaustVfx_03
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBPA_Tradingpost_C::AnimNotify_SpawnExhaustVfx_03()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPA_Tradingpost.BPA_Tradingpost_C.AnimNotify_SpawnExhaustVfx_03");
		
		UBPA_Tradingpost_C_AnimNotify_SpawnExhaustVfx_03_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPA_Tradingpost.BPA_Tradingpost_C.AnimNotify_SpawnExhaustVfx_04
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBPA_Tradingpost_C::AnimNotify_SpawnExhaustVfx_04()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPA_Tradingpost.BPA_Tradingpost_C.AnimNotify_SpawnExhaustVfx_04");
		
		UBPA_Tradingpost_C_AnimNotify_SpawnExhaustVfx_04_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPA_Tradingpost.BPA_Tradingpost_C.AnimNotify_SpawnThrustVfx_01
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBPA_Tradingpost_C::AnimNotify_SpawnThrustVfx_01()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPA_Tradingpost.BPA_Tradingpost_C.AnimNotify_SpawnThrustVfx_01");
		
		UBPA_Tradingpost_C_AnimNotify_SpawnThrustVfx_01_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPA_Tradingpost.BPA_Tradingpost_C.AnimNotify_SpawnThrustVfx_02
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBPA_Tradingpost_C::AnimNotify_SpawnThrustVfx_02()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPA_Tradingpost.BPA_Tradingpost_C.AnimNotify_SpawnThrustVfx_02");
		
		UBPA_Tradingpost_C_AnimNotify_SpawnThrustVfx_02_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPA_Tradingpost.BPA_Tradingpost_C.AnimNotify_ShipLeftTakeoffNotify
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBPA_Tradingpost_C::AnimNotify_ShipLeftTakeoffNotify()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPA_Tradingpost.BPA_Tradingpost_C.AnimNotify_ShipLeftTakeoffNotify");
		
		UBPA_Tradingpost_C_AnimNotify_ShipLeftTakeoffNotify_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPA_Tradingpost.BPA_Tradingpost_C.AnimNotify_StopThrustVfx_01
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBPA_Tradingpost_C::AnimNotify_StopThrustVfx_01()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPA_Tradingpost.BPA_Tradingpost_C.AnimNotify_StopThrustVfx_01");
		
		UBPA_Tradingpost_C_AnimNotify_StopThrustVfx_01_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPA_Tradingpost.BPA_Tradingpost_C.AnimNotify_StopThrustVfx_02
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBPA_Tradingpost_C::AnimNotify_StopThrustVfx_02()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPA_Tradingpost.BPA_Tradingpost_C.AnimNotify_StopThrustVfx_02");
		
		UBPA_Tradingpost_C_AnimNotify_StopThrustVfx_02_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPA_Tradingpost.BPA_Tradingpost_C.AnimNotify_StopThrustVfx_04
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBPA_Tradingpost_C::AnimNotify_StopThrustVfx_04()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPA_Tradingpost.BPA_Tradingpost_C.AnimNotify_StopThrustVfx_04");
		
		UBPA_Tradingpost_C_AnimNotify_StopThrustVfx_04_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPA_Tradingpost.BPA_Tradingpost_C.AnimNotify_StopThrustVfx_03
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBPA_Tradingpost_C::AnimNotify_StopThrustVfx_03()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPA_Tradingpost.BPA_Tradingpost_C.AnimNotify_StopThrustVfx_03");
		
		UBPA_Tradingpost_C_AnimNotify_StopThrustVfx_03_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPA_Tradingpost.BPA_Tradingpost_C.AnimNotify_StopExhaustVfx_01
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBPA_Tradingpost_C::AnimNotify_StopExhaustVfx_01()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPA_Tradingpost.BPA_Tradingpost_C.AnimNotify_StopExhaustVfx_01");
		
		UBPA_Tradingpost_C_AnimNotify_StopExhaustVfx_01_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPA_Tradingpost.BPA_Tradingpost_C.AnimNotify_StopExhaustVfx_02
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBPA_Tradingpost_C::AnimNotify_StopExhaustVfx_02()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPA_Tradingpost.BPA_Tradingpost_C.AnimNotify_StopExhaustVfx_02");
		
		UBPA_Tradingpost_C_AnimNotify_StopExhaustVfx_02_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPA_Tradingpost.BPA_Tradingpost_C.AnimNotify_StopExhaustVfx_03
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBPA_Tradingpost_C::AnimNotify_StopExhaustVfx_03()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPA_Tradingpost.BPA_Tradingpost_C.AnimNotify_StopExhaustVfx_03");
		
		UBPA_Tradingpost_C_AnimNotify_StopExhaustVfx_03_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPA_Tradingpost.BPA_Tradingpost_C.AnimNotify_StopExhaustVfx_04
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBPA_Tradingpost_C::AnimNotify_StopExhaustVfx_04()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPA_Tradingpost.BPA_Tradingpost_C.AnimNotify_StopExhaustVfx_04");
		
		UBPA_Tradingpost_C_AnimNotify_StopExhaustVfx_04_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPA_Tradingpost.BPA_Tradingpost_C.BlueprintInitializeAnimation
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UBPA_Tradingpost_C::BlueprintInitializeAnimation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPA_Tradingpost.BPA_Tradingpost_C.BlueprintInitializeAnimation");
		
		UBPA_Tradingpost_C_BlueprintInitializeAnimation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPA_Tradingpost.BPA_Tradingpost_C.AnimNotify_OnInitialLand
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBPA_Tradingpost_C::AnimNotify_OnInitialLand()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPA_Tradingpost.BPA_Tradingpost_C.AnimNotify_OnInitialLand");
		
		UBPA_Tradingpost_C_AnimNotify_OnInitialLand_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPA_Tradingpost.BPA_Tradingpost_C.ExecuteUbergraph_BPA_Tradingpost
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPA_Tradingpost_C::ExecuteUbergraph_BPA_Tradingpost(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPA_Tradingpost.BPA_Tradingpost_C.ExecuteUbergraph_BPA_Tradingpost");
		
		UBPA_Tradingpost_C_ExecuteUbergraph_BPA_Tradingpost_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPA_Tradingpost_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPA_Tradingpost_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass BPA_Tradingpost.BPA_Tradingpost_C");
		return ptr;
	}

}


