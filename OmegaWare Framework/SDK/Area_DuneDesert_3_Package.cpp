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
	 * 		Name   -> PredefinedFunction UArea_DuneDesert_2_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UArea_DuneDesert_2_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Area_DuneDesert_3.Area_DuneDesert_2_C");
		return ptr;
	}

}


