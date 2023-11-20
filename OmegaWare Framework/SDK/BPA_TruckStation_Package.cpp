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
	 * 		Name   -> Function BPA_TruckStation.BPA_TruckStation_C.AnimGraph
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FPoseLink                                   AnimGraph                                                  (Parm, OutParm, NoDestructor)
	 */
	void UBPA_TruckStation_C::AnimGraph(struct FPoseLink* AnimGraph)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPA_TruckStation.BPA_TruckStation_C.AnimGraph");
		
		UBPA_TruckStation_C_AnimGraph_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AnimGraph != nullptr)
			*AnimGraph = params.AnimGraph;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPA_TruckStation.BPA_TruckStation_C.SeekUnLoadIntoReverseTime
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBPA_TruckStation_C::SeekUnLoadIntoReverseTime()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPA_TruckStation.BPA_TruckStation_C.SeekUnLoadIntoReverseTime");
		
		UBPA_TruckStation_C_SeekUnLoadIntoReverseTime_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPA_TruckStation.BPA_TruckStation_C.SeekLoadIntoReverseTime
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBPA_TruckStation_C::SeekLoadIntoReverseTime()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPA_TruckStation.BPA_TruckStation_C.SeekLoadIntoReverseTime");
		
		UBPA_TruckStation_C_SeekLoadIntoReverseTime_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPA_TruckStation.BPA_TruckStation_C.AnimNotify_DockingStationBlendedOffline
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBPA_TruckStation_C::AnimNotify_DockingStationBlendedOffline()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPA_TruckStation.BPA_TruckStation_C.AnimNotify_DockingStationBlendedOffline");
		
		UBPA_TruckStation_C_AnimNotify_DockingStationBlendedOffline_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPA_TruckStation.BPA_TruckStation_C.OnProducingChange
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBPA_TruckStation_C::OnProducingChange()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPA_TruckStation.BPA_TruckStation_C.OnProducingChange");
		
		UBPA_TruckStation_C_OnProducingChange_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPA_TruckStation.BPA_TruckStation_C.AnimNotify_EnterLoad
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBPA_TruckStation_C::AnimNotify_EnterLoad()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPA_TruckStation.BPA_TruckStation_C.AnimNotify_EnterLoad");
		
		UBPA_TruckStation_C_AnimNotify_EnterLoad_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPA_TruckStation.BPA_TruckStation_C.AnimNotify_EnterUnload
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBPA_TruckStation_C::AnimNotify_EnterUnload()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPA_TruckStation.BPA_TruckStation_C.AnimNotify_EnterUnload");
		
		UBPA_TruckStation_C_AnimNotify_EnterUnload_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPA_TruckStation.BPA_TruckStation_C.ResetTruckStationOnSignificanceGain
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBPA_TruckStation_C::ResetTruckStationOnSignificanceGain()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPA_TruckStation.BPA_TruckStation_C.ResetTruckStationOnSignificanceGain");
		
		UBPA_TruckStation_C_ResetTruckStationOnSignificanceGain_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPA_TruckStation.BPA_TruckStation_C.StopTruckStationOnSignificanceLost
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBPA_TruckStation_C::StopTruckStationOnSignificanceLost()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPA_TruckStation.BPA_TruckStation_C.StopTruckStationOnSignificanceLost");
		
		UBPA_TruckStation_C_StopTruckStationOnSignificanceLost_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPA_TruckStation.BPA_TruckStation_C.ExecuteUbergraph_BPA_TruckStation
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPA_TruckStation_C::ExecuteUbergraph_BPA_TruckStation(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPA_TruckStation.BPA_TruckStation_C.ExecuteUbergraph_BPA_TruckStation");
		
		UBPA_TruckStation_C_ExecuteUbergraph_BPA_TruckStation_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPA_TruckStation_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPA_TruckStation_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass BPA_TruckStation.BPA_TruckStation_C");
		return ptr;
	}

}


