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
	 * 		Name   -> PredefinedFunction UUSubC_Video_Advanced_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUSubC_Video_Advanced_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass USubC_Video_Advanced.USubC_Video_Advanced_C");
		return ptr;
	}

}


