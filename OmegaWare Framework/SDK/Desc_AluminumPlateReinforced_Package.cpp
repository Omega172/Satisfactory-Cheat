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
	 * 		Name   -> PredefinedFunction UDesc_AluminumPlateReinforced_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDesc_AluminumPlateReinforced_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Desc_AluminumPlateReinforced.Desc_AluminumPlateReinforced_C");
		return ptr;
	}

}


