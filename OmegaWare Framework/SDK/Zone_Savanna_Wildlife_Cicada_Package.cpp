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
	 * 		Name   -> PredefinedFunction UZone_Savanna_Wildlife_Cicada_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UZone_Savanna_Wildlife_Cicada_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Zone_Savanna_Wildlife_Cicada.Zone_Savanna_Wildlife_Cicada_C");
		return ptr;
	}

}


