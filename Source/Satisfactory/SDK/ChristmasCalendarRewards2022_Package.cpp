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
	 * 		Name   -> PredefinedFunction UChristmasCalendarRewards2022_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UChristmasCalendarRewards2022_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ChristmasCalendarRewards2022.ChristmasCalendarRewards2022_C");
		return ptr;
	}

}


