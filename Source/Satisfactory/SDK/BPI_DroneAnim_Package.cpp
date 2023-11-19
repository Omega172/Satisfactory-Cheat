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
	 * 		Name   -> Function BPI_DroneAnim.BPI_DroneAnim_C.StartDocking
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBPI_DroneAnim_C::StartDocking()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_DroneAnim.BPI_DroneAnim_C.StartDocking");
		
		UBPI_DroneAnim_C_StartDocking_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPI_DroneAnim.BPI_DroneAnim_C.StartTakeOff
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBPI_DroneAnim_C::StartTakeOff()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_DroneAnim.BPI_DroneAnim_C.StartTakeOff");
		
		UBPI_DroneAnim_C_StartTakeOff_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPI_DroneAnim.BPI_DroneAnim_C.OnFlyingModeChange
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EDroneFlyingMode                                   NewFlyingMode                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPI_DroneAnim_C::OnFlyingModeChange(EDroneFlyingMode NewFlyingMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_DroneAnim.BPI_DroneAnim_C.OnFlyingModeChange");
		
		UBPI_DroneAnim_C_OnFlyingModeChange_Params params {};
		params.NewFlyingMode = NewFlyingMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPI_DroneAnim_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPI_DroneAnim_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPI_DroneAnim.BPI_DroneAnim_C");
		return ptr;
	}

}


