﻿/**
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
	 * 		Name   -> PredefinedFunction URecipe_Wall_Concrete_8x4_Corner_2_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URecipe_Wall_Concrete_8x4_Corner_2_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Recipe_Wall_Concrete_8x4_Corner_3.Recipe_Wall_Concrete_8x4_Corner_2_C");
		return ptr;
	}

}


