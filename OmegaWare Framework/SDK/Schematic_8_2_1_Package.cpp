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
	 * 		Name   -> PredefinedFunction USchematic_821_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USchematic_821_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Schematic_8_2_1.Schematic_8-2-1_C");
		return ptr;
	}

}


