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
	 * 		Name   -> PredefinedFunction USignificanceManagerAccelerated.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USignificanceManagerAccelerated::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SignificanceISPC.SignificanceManagerAccelerated");
		return ptr;
	}

}


