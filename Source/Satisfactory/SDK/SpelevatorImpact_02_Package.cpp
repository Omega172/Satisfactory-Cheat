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
	 * 		Name   -> PredefinedFunction USpelevatorImpact_02_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USpelevatorImpact_02_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass SpelevatorImpact_02.SpelevatorImpact_02_C");
		return ptr;
	}

}


