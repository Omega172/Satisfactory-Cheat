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
	 * 		Name   -> PredefinedFunction ADeco_TrainDockingStation_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ADeco_TrainDockingStation_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Deco_TrainDockingStation.Deco_TrainDockingStation_C");
		return ptr;
	}

}


