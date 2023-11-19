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
	 * 		Name   -> Function TruckStationBPI.TruckStationBPI_C.OnProducingChange
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UTruckStationBPI_C::OnProducingChange()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TruckStationBPI.TruckStationBPI_C.OnProducingChange");
		
		UTruckStationBPI_C_OnProducingChange_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function TruckStationBPI.TruckStationBPI_C.ResetTruckStationOnSignificanceGain
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UTruckStationBPI_C::ResetTruckStationOnSignificanceGain()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TruckStationBPI.TruckStationBPI_C.ResetTruckStationOnSignificanceGain");
		
		UTruckStationBPI_C_ResetTruckStationOnSignificanceGain_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function TruckStationBPI.TruckStationBPI_C.StopTruckStationOnSignificanceLost
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UTruckStationBPI_C::StopTruckStationOnSignificanceLost()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TruckStationBPI.TruckStationBPI_C.StopTruckStationOnSignificanceLost");
		
		UTruckStationBPI_C_StopTruckStationOnSignificanceLost_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTruckStationBPI_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTruckStationBPI_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass TruckStationBPI.TruckStationBPI_C");
		return ptr;
	}

}


