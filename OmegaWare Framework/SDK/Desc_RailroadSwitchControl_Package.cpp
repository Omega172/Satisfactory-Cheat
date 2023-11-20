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
	 * 		Name   -> PredefinedFunction UDesc_RailroadSwitchControl_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDesc_RailroadSwitchControl_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Desc_RailroadSwitchControl.Desc_RailroadSwitchControl_C");
		return ptr;
	}

}


