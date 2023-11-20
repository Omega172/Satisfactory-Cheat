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
	 * 		Name   -> PredefinedFunction UCustomizerUnlock_ColourSwatches_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCustomizerUnlock_ColourSwatches_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass CustomizerUnlock_ColourSwatches.CustomizerUnlock_ColourSwatches_C");
		return ptr;
	}

}


