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
	 * 		Name   -> PredefinedFunction UResearch_AOrgans_2_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UResearch_AOrgans_2_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Research_AOrgans_3.Research_AOrgans_2_C");
		return ptr;
	}

}


