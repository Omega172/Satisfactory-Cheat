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
	 * 		Name   -> PredefinedFunction UResearch_XMas_32_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UResearch_XMas_32_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Research_XMas_3_2.Research_XMas_3-2_C");
		return ptr;
	}

}

