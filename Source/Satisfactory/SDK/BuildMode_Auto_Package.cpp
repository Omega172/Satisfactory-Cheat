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
	 * 		Name   -> PredefinedFunction UBuildMode_Auto_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBuildMode_Auto_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BuildMode_Auto.BuildMode_Auto_C");
		return ptr;
	}

}


