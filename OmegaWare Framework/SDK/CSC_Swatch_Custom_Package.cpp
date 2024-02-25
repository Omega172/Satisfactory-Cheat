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
	 * 		Name   -> PredefinedFunction UCSC_Swatch_Custom_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCSC_Swatch_Custom_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass CSC_Swatch_Custom.CSC_Swatch_Custom_C");
		return ptr;
	}

}


