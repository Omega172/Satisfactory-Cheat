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
	 * 		Name   -> PredefinedFunction URecipe_Pattern_Remover_Numbers_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URecipe_Pattern_Remover_Numbers_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Recipe_Pattern_Remover_Numbers.Recipe_Pattern_Remover_Numbers_C");
		return ptr;
	}

}


