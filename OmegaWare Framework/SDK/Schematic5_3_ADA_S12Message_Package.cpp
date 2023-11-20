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
	 * 		Name   -> PredefinedFunction USchematic53_ADAS12Message_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USchematic53_ADAS12Message_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Schematic5_3_ADA_S12Message.Schematic5-3_ADA-S12Message_C");
		return ptr;
	}

}


