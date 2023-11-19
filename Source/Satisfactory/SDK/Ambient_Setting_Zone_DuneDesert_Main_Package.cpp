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
	 * 		Name   -> PredefinedFunction UAmbient_Setting_Zone_DuneDesert_Main_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAmbient_Setting_Zone_DuneDesert_Main_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Ambient_Setting_Zone_DuneDesert_Main.Ambient_Setting_Zone_DuneDesert_Main_C");
		return ptr;
	}

}


