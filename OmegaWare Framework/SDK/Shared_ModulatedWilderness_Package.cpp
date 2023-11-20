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
	 * 		Name   -> PredefinedFunction UShared_ModulatedWilderness_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UShared_ModulatedWilderness_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Shared_ModulatedWilderness.Shared_ModulatedWilderness_C");
		return ptr;
	}

}


