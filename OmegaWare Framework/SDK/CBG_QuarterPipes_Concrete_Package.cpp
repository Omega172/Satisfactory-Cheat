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
	 * 		Name   -> PredefinedFunction UCBG_QuarterPipes_Concrete_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCBG_QuarterPipes_Concrete_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass CBG_QuarterPipes_Concrete.CBG_QuarterPipes_Concrete_C");
		return ptr;
	}

}


