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
	 * 		Name   -> PredefinedFunction UFoundation_ConcretePolished_8x4_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFoundation_ConcretePolished_8x4_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Foundation_ConcretePolished_8x4.Foundation_ConcretePolished_8x4_C");
		return ptr;
	}

}


