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
	 * 		Name   -> PredefinedFunction UDesc_Ramp_DownCorner_Asphalt_8x1_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDesc_Ramp_DownCorner_Asphalt_8x1_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Desc_Ramp_DownCorner_Asphalt_8x1.Desc_Ramp_DownCorner_Asphalt_8x1_C");
		return ptr;
	}

}


