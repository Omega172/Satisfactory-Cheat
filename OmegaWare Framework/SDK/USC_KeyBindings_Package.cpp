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
	 * 		Name   -> PredefinedFunction UUSC_KeyBindings_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUSC_KeyBindings_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass USC_KeyBindings.USC_KeyBindings_C");
		return ptr;
	}

}


