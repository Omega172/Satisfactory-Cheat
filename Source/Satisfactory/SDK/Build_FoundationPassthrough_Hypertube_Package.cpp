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
	 * 		Name   -> PredefinedFunction ABuild_FoundationPassthrough_Hypertube_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABuild_FoundationPassthrough_Hypertube_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Build_FoundationPassthrough_Hypertube.Build_FoundationPassthrough_Hypertube_C");
		return ptr;
	}

}


