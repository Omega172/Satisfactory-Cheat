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
	 * 		Name   -> PredefinedFunction UTape_JoelSyntholm_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTape_JoelSyntholm_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Tape_JoelSyntholm.Tape_JoelSyntholm_C");
		return ptr;
	}

}


