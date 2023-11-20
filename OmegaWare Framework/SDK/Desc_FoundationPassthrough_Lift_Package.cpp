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
	 * 		Name   -> PredefinedFunction UDesc_FoundationPassthrough_Lift_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDesc_FoundationPassthrough_Lift_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Desc_FoundationPassthrough_Lift.Desc_FoundationPassthrough_Lift_C");
		return ptr;
	}

}


