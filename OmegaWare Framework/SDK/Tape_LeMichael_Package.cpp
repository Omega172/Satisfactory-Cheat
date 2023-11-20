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
	 * 		Name   -> PredefinedFunction UTape_LeMichael_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTape_LeMichael_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Tape_LeMichael.Tape_LeMichael_C");
		return ptr;
	}

}


