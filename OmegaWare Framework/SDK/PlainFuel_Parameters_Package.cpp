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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPlainFuel_Parameters_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPlainFuel_Parameters_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PlainFuel_Parameters.PlainFuel_Parameters_C");
		return ptr;
	}

}


