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
	 * 		Name   -> PredefinedFunction UResearch_Sulfur_3_2_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UResearch_Sulfur_3_2_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Research_Sulfur_3_3.Research_Sulfur_3_2_C");
		return ptr;
	}

}


