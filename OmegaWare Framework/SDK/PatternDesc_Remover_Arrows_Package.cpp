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
	 * 		Name   -> PredefinedFunction UPatternDesc_Remover_Arrows_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPatternDesc_Remover_Arrows_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PatternDesc_Remover_Arrows.PatternDesc_Remover_Arrows_C");
		return ptr;
	}

}


