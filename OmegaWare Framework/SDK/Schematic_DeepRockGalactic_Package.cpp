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
	 * 		Name   -> PredefinedFunction USchematic_DeepRockGalactic_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USchematic_DeepRockGalactic_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Schematic_DeepRockGalactic.Schematic_DeepRockGalactic_C");
		return ptr;
	}

}


