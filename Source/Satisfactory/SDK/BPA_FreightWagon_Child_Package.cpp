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
	 * 		Name   -> PredefinedFunction UBPA_FreightWagon_Child_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPA_FreightWagon_Child_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass BPA_FreightWagon_Child.BPA_FreightWagon_Child_C");
		return ptr;
	}

}


