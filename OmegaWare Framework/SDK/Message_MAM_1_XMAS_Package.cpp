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
	 * 		Name   -> PredefinedFunction UMessage_MAM_1_XMAS_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMessage_MAM_1_XMAS_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Message_MAM_1_XMAS.Message_MAM_1_XMAS_C");
		return ptr;
	}

}


