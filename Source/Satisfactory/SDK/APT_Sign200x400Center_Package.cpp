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
	 * 		Name   -> PredefinedFunction UAPT_Sign200x400Center_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAPT_Sign200x400Center_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass APT_Sign200x400Center.APT_Sign200x400Center_C");
		return ptr;
	}

}


