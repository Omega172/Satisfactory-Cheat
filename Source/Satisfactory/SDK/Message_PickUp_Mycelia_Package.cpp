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
	 * 		Name   -> PredefinedFunction UMessage_PickUp_Mycelia_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMessage_PickUp_Mycelia_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Message_PickUp_Mycelia.Message_PickUp_Mycelia_C");
		return ptr;
	}

}


