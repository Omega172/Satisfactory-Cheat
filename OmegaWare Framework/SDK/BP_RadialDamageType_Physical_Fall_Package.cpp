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
	 * 		Name   -> PredefinedFunction UBP_RadialDamageType_Physical_Fall_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_RadialDamageType_Physical_Fall_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_RadialDamageType_Physical_Fall.BP_RadialDamageType_Physical_Fall_C");
		return ptr;
	}

}


