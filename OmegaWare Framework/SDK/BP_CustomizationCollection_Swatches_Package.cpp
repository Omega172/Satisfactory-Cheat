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
	 * 		Name   -> PredefinedFunction UBP_CustomizationCollection_Swatches_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_CustomizationCollection_Swatches_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_CustomizationCollection_Swatches.BP_CustomizationCollection_Swatches_C");
		return ptr;
	}

}


