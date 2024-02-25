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
	 * 		Name   -> PredefinedFunction USkinDesc_Ficsmas_Premium_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USkinDesc_Ficsmas_Premium_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass SkinDesc_Ficsmas_Premium.SkinDesc_Ficsmas_Premium_C");
		return ptr;
	}

}


