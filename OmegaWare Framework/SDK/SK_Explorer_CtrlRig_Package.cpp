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
	 * 		Name   -> PredefinedFunction USK_Explorer_CtrlRig_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USK_Explorer_CtrlRig_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("ControlRigBlueprintGeneratedClass SK_Explorer_CtrlRig.SK_Explorer_CtrlRig_C");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URigVMMemory_Literal.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URigVMMemory_Literal::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("RigVMMemoryStorageGeneratorClass SK_Explorer_CtrlRig.RigVMMemory_Literal");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URigVMMemory_Work.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URigVMMemory_Work::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("RigVMMemoryStorageGeneratorClass SK_Explorer_CtrlRig.RigVMMemory_Work");
		return ptr;
	}

}


