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
	 * 		Name   -> PredefinedFunction UZone_NorthernForest_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UZone_NorthernForest_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Zone_NorthernForest.Zone_NorthernForest_C");
		return ptr;
	}

}


