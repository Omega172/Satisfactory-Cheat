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
	 * 		Name   -> PredefinedFunction UCBG_Steel_Walls_Basic_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCBG_Steel_Walls_Basic_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass CBG_Steel_Walls_Basic.CBG_Steel_Walls_Basic_C");
		return ptr;
	}

}


