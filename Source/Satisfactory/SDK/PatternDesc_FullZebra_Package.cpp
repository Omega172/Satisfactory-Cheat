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
	 * 		Name   -> PredefinedFunction UPatternDesc_FullZebra_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPatternDesc_FullZebra_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PatternDesc_FullZebra.PatternDesc_FullZebra_C");
		return ptr;
	}

}


