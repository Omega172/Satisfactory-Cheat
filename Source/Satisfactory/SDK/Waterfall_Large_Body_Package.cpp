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
	 * 		Name   -> PredefinedFunction UWaterfall_Large_Body_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWaterfall_Large_Body_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Waterfall_Large_Body.Waterfall_Large_Body_C");
		return ptr;
	}

}


