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
	 * 		Name   -> PredefinedFunction UUSC_Creatures_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUSC_Creatures_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass USC_Creatures.USC_Creatures_C");
		return ptr;
	}

}


