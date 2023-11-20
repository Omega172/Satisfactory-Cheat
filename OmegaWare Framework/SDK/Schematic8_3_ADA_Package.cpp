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
	 * 		Name   -> PredefinedFunction USchematic83_ADA_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USchematic83_ADA_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Schematic8_3_ADA.Schematic8-3_ADA_C");
		return ptr;
	}

}


