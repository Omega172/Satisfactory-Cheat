﻿/**
 * Name: Satisfactory
 * Version: Early_Access_CL#273254
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
	 * 		Name   -> PredefinedFunction UDesc_Wall_Concrete_Gate_8x4_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDesc_Wall_Concrete_Gate_8x4_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Desc_Wall_Concrete_Gate_8x4.Desc_Wall_Concrete_Gate_8x4_C");
		return ptr;
	}

}


