/**
 * Name: Satisfactory
 * Version: Early_Access_CL#273254
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_DroneStationTooltip.BPW_DroneStationTooltip_C.GetDronePortName
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_DroneStationTooltip_C::GetDronePortName()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_DroneStationTooltip.BPW_DroneStationTooltip_C.GetDronePortName");
		
		UBPW_DroneStationTooltip_C_GetDronePortName_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_DroneStationTooltip.BPW_DroneStationTooltip_C.GetBatteriesUsed
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_DroneStationTooltip_C::GetBatteriesUsed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_DroneStationTooltip.BPW_DroneStationTooltip_C.GetBatteriesUsed");
		
		UBPW_DroneStationTooltip_C_GetBatteriesUsed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_DroneStationTooltip.BPW_DroneStationTooltip_C.GetTransportRate
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_DroneStationTooltip_C::GetTransportRate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_DroneStationTooltip.BPW_DroneStationTooltip_C.GetTransportRate");
		
		UBPW_DroneStationTooltip_C_GetTransportRate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_DroneStationTooltip.BPW_DroneStationTooltip_C.GetDroneStatus
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_DroneStationTooltip_C::GetDroneStatus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_DroneStationTooltip.BPW_DroneStationTooltip_C.GetDroneStatus");
		
		UBPW_DroneStationTooltip_C_GetDroneStatus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_DroneStationTooltip.BPW_DroneStationTooltip_C.Destruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UBPW_DroneStationTooltip_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_DroneStationTooltip.BPW_DroneStationTooltip_C.Destruct");
		
		UBPW_DroneStationTooltip_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_DroneStationTooltip.BPW_DroneStationTooltip_C.OnEstimatedRoundTripTimeChanged
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              estimatedRoundTripTime                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_DroneStationTooltip_C::OnEstimatedRoundTripTimeChanged(float estimatedRoundTripTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_DroneStationTooltip.BPW_DroneStationTooltip_C.OnEstimatedRoundTripTimeChanged");
		
		UBPW_DroneStationTooltip_C_OnEstimatedRoundTripTimeChanged_Params params {};
		params.estimatedRoundTripTime = estimatedRoundTripTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_DroneStationTooltip.BPW_DroneStationTooltip_C.OnDroneStatusChanged
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EDroneStatus                                       droneStatus                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_DroneStationTooltip_C::OnDroneStatusChanged(EDroneStatus droneStatus)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_DroneStationTooltip.BPW_DroneStationTooltip_C.OnDroneStatusChanged");
		
		UBPW_DroneStationTooltip_C_OnDroneStatusChanged_Params params {};
		params.droneStatus = droneStatus;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_DroneStationTooltip.BPW_DroneStationTooltip_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UBPW_DroneStationTooltip_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_DroneStationTooltip.BPW_DroneStationTooltip_C.Construct");
		
		UBPW_DroneStationTooltip_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_DroneStationTooltip.BPW_DroneStationTooltip_C.OnEstimatedTransportRateChanged
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            estimatedTransportRate                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_DroneStationTooltip_C::OnEstimatedTransportRateChanged(int32_t estimatedTransportRate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_DroneStationTooltip.BPW_DroneStationTooltip_C.OnEstimatedTransportRateChanged");
		
		UBPW_DroneStationTooltip_C_OnEstimatedTransportRateChanged_Params params {};
		params.estimatedTransportRate = estimatedTransportRate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_DroneStationTooltip.BPW_DroneStationTooltip_C.OnStatisticsChanged
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FFGDroneTripStatistics                      droneTripStatistics                                        (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UBPW_DroneStationTooltip_C::OnStatisticsChanged(const struct FFGDroneTripStatistics& droneTripStatistics)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_DroneStationTooltip.BPW_DroneStationTooltip_C.OnStatisticsChanged");
		
		UBPW_DroneStationTooltip_C_OnStatisticsChanged_Params params {};
		params.droneTripStatistics = droneTripStatistics;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_DroneStationTooltip.BPW_DroneStationTooltip_C.ExecuteUbergraph_BPW_DroneStationTooltip
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_DroneStationTooltip_C::ExecuteUbergraph_BPW_DroneStationTooltip(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_DroneStationTooltip.BPW_DroneStationTooltip_C.ExecuteUbergraph_BPW_DroneStationTooltip");
		
		UBPW_DroneStationTooltip_C_ExecuteUbergraph_BPW_DroneStationTooltip_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPW_DroneStationTooltip_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPW_DroneStationTooltip_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BPW_DroneStationTooltip.BPW_DroneStationTooltip_C");
		return ptr;
	}

}


