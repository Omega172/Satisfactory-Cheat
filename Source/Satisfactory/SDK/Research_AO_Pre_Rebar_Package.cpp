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
	 * 		Name   -> PredefinedFunction UResearch_AO_Pre_Rebar_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UResearch_AO_Pre_Rebar_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Research_AO_Pre_Rebar.Research_AO_Pre_Rebar_C");
		return ptr;
	}

}


