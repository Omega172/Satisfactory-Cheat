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
	 * 		Name   -> PredefinedFunction UCM_RestrictedLook_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCM_RestrictedLook_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass CM_RestrictedLook.CM_RestrictedLook_C");
		return ptr;
	}

}


