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
	 * 		Name   -> PredefinedFunction UAmbientSetting_Zone_NorthernForest_DayNight_Atmos_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAmbientSetting_Zone_NorthernForest_DayNight_Atmos_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass AmbientSetting_Zone_NorthernForest_DayNight_Atmos.AmbientSetting_Zone_NorthernForest_DayNight_Atmos_C");
		return ptr;
	}

}

