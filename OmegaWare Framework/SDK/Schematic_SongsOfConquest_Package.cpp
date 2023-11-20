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
	 * 		Name   -> PredefinedFunction USchematic_SongsOfConquest_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USchematic_SongsOfConquest_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Schematic_SongsOfConquest.Schematic_SongsOfConquest_C");
		return ptr;
	}

}


