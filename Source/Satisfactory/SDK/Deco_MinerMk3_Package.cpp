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
	 * 		Name   -> PredefinedFunction ADeco_MinerMk3_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ADeco_MinerMk3_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Deco_MinerMk3.Deco_MinerMk3_C");
		return ptr;
	}

}


