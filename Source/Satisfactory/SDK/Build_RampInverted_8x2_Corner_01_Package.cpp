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
	 * 		Name   -> PredefinedFunction ABuild_RampInverted_8x2_Corner_01_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABuild_RampInverted_8x2_Corner_01_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Build_RampInverted_8x2_Corner_01.Build_RampInverted_8x2_Corner_01_C");
		return ptr;
	}

}


