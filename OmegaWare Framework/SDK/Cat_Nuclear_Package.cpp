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
	 * 		Name   -> PredefinedFunction UCat_Nuclear_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCat_Nuclear_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Cat_Nuclear.Cat_Nuclear_C");
		return ptr;
	}

}


