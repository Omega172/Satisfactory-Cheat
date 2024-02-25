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
	 * 		Name   -> PredefinedFunction UBPC_PoolableLightShaft_FloodLight_01_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPC_PoolableLightShaft_FloodLight_01_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPC_PoolableLightShaft_FloodLight_01.BPC_PoolableLightShaft_FloodLight_01_C");
		return ptr;
	}

}


