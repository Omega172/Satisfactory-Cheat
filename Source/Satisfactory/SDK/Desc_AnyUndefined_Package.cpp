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
	 * 		Name   -> PredefinedFunction UDesc_AnyUndefined_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDesc_AnyUndefined_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Desc_AnyUndefined.Desc_AnyUndefined_C");
		return ptr;
	}

}


