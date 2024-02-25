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
	 * 		Name   -> PredefinedFunction UNetConnectionEOS.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNetConnectionEOS::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SocketSubsystemEOS.NetConnectionEOS");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNetDriverEOSBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNetDriverEOSBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SocketSubsystemEOS.NetDriverEOSBase");
		return ptr;
	}

}


