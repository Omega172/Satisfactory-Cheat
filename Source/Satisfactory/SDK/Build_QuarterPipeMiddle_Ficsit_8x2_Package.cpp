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
	 * 		Name   -> PredefinedFunction ABuild_QuarterPipeMiddle_Ficsit_8x2_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABuild_QuarterPipeMiddle_Ficsit_8x2_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Build_QuarterPipeMiddle_Ficsit_8x2.Build_QuarterPipeMiddle_Ficsit_8x2_C");
		return ptr;
	}

}


