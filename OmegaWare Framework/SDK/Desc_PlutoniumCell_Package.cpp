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
	 * 		Name   -> PredefinedFunction UDesc_PlutoniumCell_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDesc_PlutoniumCell_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Desc_PlutoniumCell.Desc_PlutoniumCell_C");
		return ptr;
	}

}


