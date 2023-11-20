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
	 * 		Name   -> PredefinedFunction USchematic23_ADAS05Message_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USchematic23_ADAS05Message_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Schematic2_3_ADA_S05Message.Schematic2-3_ADA-S05Message_C");
		return ptr;
	}

}


