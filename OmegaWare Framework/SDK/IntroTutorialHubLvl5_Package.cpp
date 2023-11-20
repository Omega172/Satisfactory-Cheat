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
	 * 		Name   -> PredefinedFunction UIntroTutorialHubLvl5_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIntroTutorialHubLvl5_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass IntroTutorialHubLvl5.IntroTutorialHubLvl5_C");
		return ptr;
	}

}


