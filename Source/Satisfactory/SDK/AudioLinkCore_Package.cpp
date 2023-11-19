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
	 * 		Name   -> PredefinedFunction UAudioLinkSettingsAbstract.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAudioLinkSettingsAbstract::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AudioLinkCore.AudioLinkSettingsAbstract");
		return ptr;
	}

}


