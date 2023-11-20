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
	 * 		Name   -> Function BPA_TrainDockingStation.BPA_TrainDockingStation_C.AnimGraph
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FPoseLink                                   AnimGraph                                                  (Parm, OutParm, NoDestructor)
	 */
	void UBPA_TrainDockingStation_C::AnimGraph(struct FPoseLink* AnimGraph)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPA_TrainDockingStation.BPA_TrainDockingStation_C.AnimGraph");
		
		UBPA_TrainDockingStation_C_AnimGraph_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AnimGraph != nullptr)
			*AnimGraph = params.AnimGraph;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPA_TrainDockingStation.BPA_TrainDockingStation_C.AnimNotify_StartOffset
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBPA_TrainDockingStation_C::AnimNotify_StartOffset()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPA_TrainDockingStation.BPA_TrainDockingStation_C.AnimNotify_StartOffset");
		
		UBPA_TrainDockingStation_C_AnimNotify_StartOffset_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPA_TrainDockingStation.BPA_TrainDockingStation_C.AnimNotify_EndOffset
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBPA_TrainDockingStation_C::AnimNotify_EndOffset()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPA_TrainDockingStation.BPA_TrainDockingStation_C.AnimNotify_EndOffset");
		
		UBPA_TrainDockingStation_C_AnimNotify_EndOffset_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPA_TrainDockingStation.BPA_TrainDockingStation_C.ExecuteUbergraph_BPA_TrainDockingStation
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPA_TrainDockingStation_C::ExecuteUbergraph_BPA_TrainDockingStation(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPA_TrainDockingStation.BPA_TrainDockingStation_C.ExecuteUbergraph_BPA_TrainDockingStation");
		
		UBPA_TrainDockingStation_C_ExecuteUbergraph_BPA_TrainDockingStation_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPA_TrainDockingStation_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPA_TrainDockingStation_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass BPA_TrainDockingStation.BPA_TrainDockingStation_C");
		return ptr;
	}

}


