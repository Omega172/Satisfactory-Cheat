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
	 * 		Name   -> PredefinedFunction UBPW_OptionHologramColor_SoftClear_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPW_OptionHologramColor_SoftClear_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BPW_OptionHologramColor_SoftClear.BPW_OptionHologramColor_SoftClear_C");
		return ptr;
	}

}


