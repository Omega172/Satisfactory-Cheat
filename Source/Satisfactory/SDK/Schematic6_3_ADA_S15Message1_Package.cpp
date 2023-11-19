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
	 * 		Name   -> PredefinedFunction USchematic63_ADAS15Message1_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USchematic63_ADAS15Message1_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Schematic6_3_ADA_S15Message1.Schematic6-3_ADA-S15Message1_C");
		return ptr;
	}

}


