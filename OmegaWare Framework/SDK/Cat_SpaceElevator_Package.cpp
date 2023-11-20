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
	 * 		Name   -> PredefinedFunction UCat_SpaceElevator_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCat_SpaceElevator_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Cat_SpaceElevator.Cat_SpaceElevator_C");
		return ptr;
	}

}


