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
	 * 		Name   -> PredefinedFunction UIntroTutorialHubLvl4_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIntroTutorialHubLvl4_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass IntroTutorialHubLvl4.IntroTutorialHubLvl4_C");
		return ptr;
	}

}


