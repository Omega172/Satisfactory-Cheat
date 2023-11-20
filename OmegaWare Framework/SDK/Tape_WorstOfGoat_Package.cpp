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
	 * 		Name   -> PredefinedFunction UTape_WorstOfGoat_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTape_WorstOfGoat_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Tape_WorstOfGoat.Tape_WorstOfGoat_C");
		return ptr;
	}

}


