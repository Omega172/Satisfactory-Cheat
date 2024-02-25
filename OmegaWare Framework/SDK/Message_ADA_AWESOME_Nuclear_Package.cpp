/**
 * Name: Satisfactory
 * Version: Early_Access_CL#273254
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
	 * 		Name   -> PredefinedFunction UMessage_ADA_AWESOME_Nuclear_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMessage_ADA_AWESOME_Nuclear_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Message_ADA_AWESOME_Nuclear.Message_ADA_AWESOME_Nuclear_C");
		return ptr;
	}

}


