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
	 * 		Name   -> PredefinedFunction UBPW_Sign2x1_13_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPW_Sign2x1_13_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BPW_Sign2x1_14.BPW_Sign2x1_13_C");
		return ptr;
	}

}


