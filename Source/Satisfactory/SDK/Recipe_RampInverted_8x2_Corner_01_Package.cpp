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
	 * 		Name   -> PredefinedFunction URecipe_RampInverted_8x2_Corner_01_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URecipe_RampInverted_8x2_Corner_01_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Recipe_RampInverted_8x2_Corner_01.Recipe_RampInverted_8x2_Corner_01_C");
		return ptr;
	}

}


