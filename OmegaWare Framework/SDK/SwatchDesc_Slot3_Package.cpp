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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USwatchDesc_Slot3_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USwatchDesc_Slot3_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass SwatchDesc_Slot3.SwatchDesc_Slot3_C");
		return ptr;
	}

}


