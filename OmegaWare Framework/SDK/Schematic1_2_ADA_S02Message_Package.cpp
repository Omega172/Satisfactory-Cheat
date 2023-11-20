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
	 * 		Name   -> PredefinedFunction USchematic12_ADAS02Message_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USchematic12_ADAS02Message_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Schematic1_2_ADA_S02Message.Schematic1-2_ADA-S02Message_C");
		return ptr;
	}

}


