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
	 * 		Name   -> PredefinedFunction UZone_GrassFIelds_TreeWind_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UZone_GrassFIelds_TreeWind_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Zone_GrassFIelds_TreeWind.Zone_GrassFIelds_TreeWind_C");
		return ptr;
	}

}


