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
	 * 		Name   -> PredefinedFunction UMaterialDesc_Invisible_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMaterialDesc_Invisible_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass MaterialDesc_Invisible.MaterialDesc_Invisible_C");
		return ptr;
	}

}


