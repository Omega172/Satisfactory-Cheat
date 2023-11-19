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
	 * 		Name   -> PredefinedFunction UCBS_ProgrammableSplitter_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCBS_ProgrammableSplitter_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass CBS_ProgrammableSplitter.CBS_ProgrammableSplitter_C");
		return ptr;
	}

}


