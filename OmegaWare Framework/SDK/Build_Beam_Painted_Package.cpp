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
	 * 		Name   -> PredefinedFunction ABuild_Beam_Painted_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABuild_Beam_Painted_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Build_Beam_Painted.Build_Beam_Painted_C");
		return ptr;
	}

}


