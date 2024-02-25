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
	 * 		Name   -> Function BPI_Crosshair_Helpers.BPI_Crosshair_Helpers_C.GetCrosshairKeyDescriptor
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      KeyDescriptor                                              (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPI_Crosshair_Helpers_C::GetCrosshairKeyDescriptor(class UClass** KeyDescriptor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_Crosshair_Helpers.BPI_Crosshair_Helpers_C.GetCrosshairKeyDescriptor");
		
		UBPI_Crosshair_Helpers_C_GetCrosshairKeyDescriptor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (KeyDescriptor != nullptr)
			*KeyDescriptor = params.KeyDescriptor;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPI_Crosshair_Helpers_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPI_Crosshair_Helpers_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPI_Crosshair_Helpers.BPI_Crosshair_Helpers_C");
		return ptr;
	}

}


