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
	 * 		Name   -> PredefinedFunction UZone_DesertCanyon_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UZone_DesertCanyon_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Zone_DesertCanyon.Zone_DesertCanyon_C");
		return ptr;
	}

}


