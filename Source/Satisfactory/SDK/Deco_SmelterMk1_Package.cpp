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
	 * 		Name   -> PredefinedFunction ADeco_SmelterMk1_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ADeco_SmelterMk1_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Deco_SmelterMk1.Deco_SmelterMk1_C");
		return ptr;
	}

}


