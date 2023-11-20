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
	 * 		Name   -> PredefinedFunction UIntroTutorialHubLvl3_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIntroTutorialHubLvl3_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass IntroTutorialHubLvl3.IntroTutorialHubLvl3_C");
		return ptr;
	}

}


