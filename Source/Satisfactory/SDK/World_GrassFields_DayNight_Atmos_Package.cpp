﻿/**
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
	 * 		Name   -> PredefinedFunction UWorld_GrassFields_DayNight_Atmos_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWorld_GrassFields_DayNight_Atmos_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass World_GrassFields_DayNight_Atmos.World_GrassFields_DayNight_Atmos_C");
		return ptr;
	}

}


