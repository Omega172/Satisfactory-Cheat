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
	 * 		Name   -> PredefinedFunction UResourceSink_CoolingSystem_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UResourceSink_CoolingSystem_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ResourceSink_CoolingSystem.ResourceSink_CoolingSystem_C");
		return ptr;
	}

}


