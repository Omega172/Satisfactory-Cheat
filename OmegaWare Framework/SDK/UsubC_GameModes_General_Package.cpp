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
	 * 		Name   -> PredefinedFunction UUsubC_GameModes_General_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUsubC_GameModes_General_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass UsubC_GameModes_General.UsubC_GameModes_General_C");
		return ptr;
	}

}


