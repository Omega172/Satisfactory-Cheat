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
	 * 		Name   -> PredefinedFunction URecipe_Roof_A_02_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URecipe_Roof_A_02_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Recipe_Roof_A_02.Recipe_Roof_A_02_C");
		return ptr;
	}

}


