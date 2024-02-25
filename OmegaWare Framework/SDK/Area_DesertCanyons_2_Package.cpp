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
	 * 		Name   -> PredefinedFunction UArea_DesertCanyons_1_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UArea_DesertCanyons_1_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Area_DesertCanyons_2.Area_DesertCanyons_1_C");
		return ptr;
	}

}


