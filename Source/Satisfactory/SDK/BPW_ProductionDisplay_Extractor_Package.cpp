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
	 * 		Name   -> PredefinedFunction UBPW_ProductionDisplay_Extractor_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPW_ProductionDisplay_Extractor_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BPW_ProductionDisplay_Extractor.BPW_ProductionDisplay_Extractor_C");
		return ptr;
	}

}


