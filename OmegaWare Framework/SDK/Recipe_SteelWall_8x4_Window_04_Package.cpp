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
	 * 		Name   -> PredefinedFunction URecipe_SteelWall_8x4_Window_04_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URecipe_SteelWall_8x4_Window_04_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Recipe_SteelWall_8x4_Window_04.Recipe_SteelWall_8x4_Window_04_C");
		return ptr;
	}

}


