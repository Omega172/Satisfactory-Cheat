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
	 * 		Name   -> PredefinedFunction UCBG_ExtensionQuarterPipes_Concrete_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCBG_ExtensionQuarterPipes_Concrete_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass CBG_ExtensionQuarterPipes_Concrete.CBG_ExtensionQuarterPipes_Concrete_C");
		return ptr;
	}

}


