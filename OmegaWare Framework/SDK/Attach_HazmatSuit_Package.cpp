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
	 * 		Name   -> PredefinedFunction AAttach_HazmatSuit_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AAttach_HazmatSuit_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Attach_HazmatSuit.Attach_HazmatSuit_C");
		return ptr;
	}

}


