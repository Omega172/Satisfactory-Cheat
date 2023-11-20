/**
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
	 * 		Name   -> PredefinedFunction UDesc_HighSpeedWire_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDesc_HighSpeedWire_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Desc_HighSpeedWire.Desc_HighSpeedWire_C");
		return ptr;
	}

}


