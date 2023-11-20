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
	 * 		Name   -> PredefinedFunction UWorld_Islands_DayNight_Wildlife_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWorld_Islands_DayNight_Wildlife_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass World_Islands_DayNight_Wildlife.World_Islands_DayNight_Wildlife_C");
		return ptr;
	}

}


