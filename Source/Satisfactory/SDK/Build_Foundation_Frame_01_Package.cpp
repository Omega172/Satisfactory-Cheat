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
	 * 		Name   -> PredefinedFunction ABuild_Foundation_Frame_01_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABuild_Foundation_Frame_01_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Build_Foundation_Frame_01.Build_Foundation_Frame_01_C");
		return ptr;
	}

}


