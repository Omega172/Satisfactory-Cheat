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
	 * 		Name   -> PredefinedFunction UResourceSink_InvertedCornerRamps_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UResourceSink_InvertedCornerRamps_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ResourceSink_InvertedCornerRamps.ResourceSink_InvertedCornerRamps_C");
		return ptr;
	}

}

