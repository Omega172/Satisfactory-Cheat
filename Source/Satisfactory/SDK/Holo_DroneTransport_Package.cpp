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
	 * 		Name   -> PredefinedFunction AHolo_DroneTransport_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AHolo_DroneTransport_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Holo_DroneTransport.Holo_DroneTransport_C");
		return ptr;
	}

}


