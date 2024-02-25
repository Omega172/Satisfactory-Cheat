/**
 * Name: Satisfactory
 * Version: Early_Access_CL#273254
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
	 * 		Name   -> PredefinedFunction UZone_AbyssCliffs_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UZone_AbyssCliffs_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Zone_AbyssCliffs.Zone_AbyssCliffs_C");
		return ptr;
	}

}


