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
	 * 		Name   -> PredefinedFunction UIntroTutorialHub_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIntroTutorialHub_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass IntroTutorialHub.IntroTutorialHub_C");
		return ptr;
	}

}


