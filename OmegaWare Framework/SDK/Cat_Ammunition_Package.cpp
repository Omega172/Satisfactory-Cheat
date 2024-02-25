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
	 * 		Name   -> PredefinedFunction UCat_Ammunition_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCat_Ammunition_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Cat_Ammunition.Cat_Ammunition_C");
		return ptr;
	}

}


