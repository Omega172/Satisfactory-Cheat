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
	 * 		Name   -> PredefinedFunction URecipe_ConveyorBeltMk1_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URecipe_ConveyorBeltMk1_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Recipe_ConveyorBeltMk1.Recipe_ConveyorBeltMk1_C");
		return ptr;
	}

}


