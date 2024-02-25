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
	 * 		Name   -> PredefinedFunction USwatchDesc_Concrete_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USwatchDesc_Concrete_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass SwatchDesc_Concrete.SwatchDesc_Concrete_C");
		return ptr;
	}

}


