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
	 * 		Name   -> PredefinedFunction UAmbientSettings_RedJungle_Wildlife_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAmbientSettings_RedJungle_Wildlife_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass AmbientSettings_RedJungle_Wildlife.AmbientSettings_RedJungle_Wildlife_C");
		return ptr;
	}

}


