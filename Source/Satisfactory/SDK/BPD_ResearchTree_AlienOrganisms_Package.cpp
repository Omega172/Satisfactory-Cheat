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
	 * 		Name   -> PredefinedFunction UBPD_ResearchTree_AlienOrganisms_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPD_ResearchTree_AlienOrganisms_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPD_ResearchTree_AlienOrganisms.BPD_ResearchTree_AlienOrganisms_C");
		return ptr;
	}

}


