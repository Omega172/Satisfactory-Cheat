﻿/**
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
	 * 		Name   -> PredefinedFunction UBPW_InventorySettings_MenuBase_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPW_InventorySettings_MenuBase_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BPW_InventorySettings_MenuBase.BPW_InventorySettings_MenuBase_C");
		return ptr;
	}

}


