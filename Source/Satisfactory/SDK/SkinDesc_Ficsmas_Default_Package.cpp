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
	 * 		Name   -> PredefinedFunction USkinDesc_Ficsmas_Default_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USkinDesc_Ficsmas_Default_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass SkinDesc_Ficsmas_Default.SkinDesc_Ficsmas_Default_C");
		return ptr;
	}

}


