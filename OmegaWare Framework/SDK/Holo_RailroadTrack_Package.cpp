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
	 * 		Name   -> PredefinedFunction AHolo_RailroadTrack_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AHolo_RailroadTrack_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Holo_RailroadTrack.Holo_RailroadTrack_C");
		return ptr;
	}

}


