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
	 * 		Name   -> Function BPI_RifleEquipment.BPI_RifleEquipment_C.SetReloadedOnce
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               HasReloadedOnce                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPI_RifleEquipment_C::SetReloadedOnce(bool HasReloadedOnce)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_RifleEquipment.BPI_RifleEquipment_C.SetReloadedOnce");
		
		UBPI_RifleEquipment_C_SetReloadedOnce_Params params {};
		params.HasReloadedOnce = HasReloadedOnce;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPI_RifleEquipment_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPI_RifleEquipment_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPI_RifleEquipment.BPI_RifleEquipment_C");
		return ptr;
	}

}


