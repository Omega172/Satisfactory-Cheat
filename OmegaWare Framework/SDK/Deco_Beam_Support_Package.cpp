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
	 * 		Name   -> PredefinedFunction ADeco_Beam_Support_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ADeco_Beam_Support_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Deco_Beam_Support.Deco_Beam_Support_C");
		return ptr;
	}

}


