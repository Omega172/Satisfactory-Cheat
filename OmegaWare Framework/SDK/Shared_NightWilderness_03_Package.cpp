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
	 * 		Name   -> PredefinedFunction UShared_NightWilderness_03_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UShared_NightWilderness_03_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Shared_NightWilderness_03.Shared_NightWilderness_03_C");
		return ptr;
	}

}

