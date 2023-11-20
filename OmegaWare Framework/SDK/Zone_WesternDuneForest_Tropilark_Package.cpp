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
	 * 		Name   -> PredefinedFunction UZone_WesternDuneForest_Tropilark_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UZone_WesternDuneForest_Tropilark_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Zone_WesternDuneForest_Tropilark.Zone_WesternDuneForest_Tropilark_C");
		return ptr;
	}

}


