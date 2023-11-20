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
	 * 		Name   -> PredefinedFunction UCat_FICSMAS_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCat_FICSMAS_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Cat_FICSMAS.Cat_FICSMAS_C");
		return ptr;
	}

}


