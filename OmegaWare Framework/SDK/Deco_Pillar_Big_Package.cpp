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
	 * 		Name   -> PredefinedFunction ADeco_Pillar_Big_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ADeco_Pillar_Big_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Deco_Pillar_Big.Deco_Pillar_Big_C");
		return ptr;
	}

}


