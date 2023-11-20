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
	 * 		Name   -> PredefinedFunction ADeco_ManufacturerMk1_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ADeco_ManufacturerMk1_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Deco_ManufacturerMk1.Deco_ManufacturerMk1_C");
		return ptr;
	}

}


