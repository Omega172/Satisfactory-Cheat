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
	 * 		Name   -> PredefinedFunction UMaterialDesc_Wall_Orange_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMaterialDesc_Wall_Orange_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass MaterialDesc_Wall_Orange.MaterialDesc_Wall_Orange_C");
		return ptr;
	}

}


