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
	 * 		Name   -> PredefinedFunction UDesc_Roof_A_04_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDesc_Roof_A_04_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Desc_Roof_A_04.Desc_Roof_A_04_C");
		return ptr;
	}

}


