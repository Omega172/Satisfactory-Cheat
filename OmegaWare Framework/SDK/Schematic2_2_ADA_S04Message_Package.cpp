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
	 * 		Name   -> PredefinedFunction USchematic22_ADAS04Message_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USchematic22_ADAS04Message_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Schematic2_2_ADA_S04Message.Schematic2-2_ADA-S04Message_C");
		return ptr;
	}

}


