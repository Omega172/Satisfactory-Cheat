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
	 * 		Name   -> PredefinedFunction UCSC_Pattern_Lines_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCSC_Pattern_Lines_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass CSC_Pattern_Lines.CSC_Pattern_Lines_C");
		return ptr;
	}

}


