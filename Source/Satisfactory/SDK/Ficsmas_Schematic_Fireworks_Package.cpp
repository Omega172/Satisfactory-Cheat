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
	 * 		Name   -> PredefinedFunction UFicsmas_Schematic_Fireworks_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFicsmas_Schematic_Fireworks_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Ficsmas_Schematic_Fireworks.Ficsmas_Schematic_Fireworks_C");
		return ptr;
	}

}


