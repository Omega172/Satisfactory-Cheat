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
	 * 		Name   -> PredefinedFunction USchematic_SaveCompatibility_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USchematic_SaveCompatibility_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Schematic_SaveCompatibility.Schematic_SaveCompatibility_C");
		return ptr;
	}

}


