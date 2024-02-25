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
	 * 		Name   -> Function BPI_ResourceScannerEquipment.BPI_ResourceScannerEquipment_C.PlayScannerPPeffect
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBPI_ResourceScannerEquipment_C::PlayScannerPPeffect()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_ResourceScannerEquipment.BPI_ResourceScannerEquipment_C.PlayScannerPPeffect");
		
		UBPI_ResourceScannerEquipment_C_PlayScannerPPeffect_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPI_ResourceScannerEquipment.BPI_ResourceScannerEquipment_C.SetScannerIK
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               SetScannerIK                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPI_ResourceScannerEquipment_C::SetScannerIK(bool SetScannerIK)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_ResourceScannerEquipment.BPI_ResourceScannerEquipment_C.SetScannerIK");
		
		UBPI_ResourceScannerEquipment_C_SetScannerIK_Params params {};
		params.SetScannerIK = SetScannerIK;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPI_ResourceScannerEquipment_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPI_ResourceScannerEquipment_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPI_ResourceScannerEquipment.BPI_ResourceScannerEquipment_C");
		return ptr;
	}

}


