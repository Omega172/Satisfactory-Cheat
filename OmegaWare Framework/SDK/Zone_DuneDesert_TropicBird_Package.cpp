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
	 * 		Name   -> PredefinedFunction UZone_DuneDesert_TropicBird_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UZone_DuneDesert_TropicBird_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Zone_DuneDesert_TropicBird.Zone_DuneDesert_TropicBird_C");
		return ptr;
	}

}


