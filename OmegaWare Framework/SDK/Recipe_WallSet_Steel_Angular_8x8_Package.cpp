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
	 * 		Name   -> PredefinedFunction URecipe_WallSet_Steel_Angular_8x8_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URecipe_WallSet_Steel_Angular_8x8_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Recipe_WallSet_Steel_Angular_8x8.Recipe_WallSet_Steel_Angular_8x8_C");
		return ptr;
	}

}


