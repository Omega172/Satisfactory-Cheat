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
	 * 		Name   -> PredefinedFunction USchematic21_ADAS03Message_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USchematic21_ADAS03Message_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Schematic2_1_ADA_S03Message.Schematic2-1_ADA-S03Message_C");
		return ptr;
	}

}


