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
	 * 		Name   -> PredefinedFunction UNetDriverEOS.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNetDriverEOS::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OnlineSubsystemEOS.NetDriverEOS");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEOSArtifactSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEOSArtifactSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OnlineSubsystemEOS.EOSArtifactSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEOSSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEOSSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OnlineSubsystemEOS.EOSSettings");
		return ptr;
	}

}


