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
	 * 		Name   -> PredefinedFunction UResourceSink_CeilingLight_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UResourceSink_CeilingLight_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ResourceSink_CeilingLight.ResourceSink_CeilingLight_C");
		return ptr;
	}

}


