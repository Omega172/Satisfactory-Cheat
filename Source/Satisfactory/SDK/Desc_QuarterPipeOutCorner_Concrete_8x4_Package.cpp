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
	 * 		Name   -> PredefinedFunction UDesc_QuarterPipeOutCorner_Concrete_8x4_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDesc_QuarterPipeOutCorner_Concrete_8x4_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Desc_QuarterPipeOutCorner_Concrete_8x4.Desc_QuarterPipeOutCorner_Concrete_8x4_C");
		return ptr;
	}

}

