/**
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
	 * 		Name   -> PredefinedFunction UDLSSOverrideSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDLSSOverrideSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DLSS.DLSSOverrideSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDLSSSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDLSSSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DLSS.DLSSSettings");
		return ptr;
	}

}


