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
	 * 		Name   -> PredefinedFunction UDesc_LiquidTurboFuel_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDesc_LiquidTurboFuel_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Desc_LiquidTurboFuel.Desc_LiquidTurboFuel_C");
		return ptr;
	}

}


