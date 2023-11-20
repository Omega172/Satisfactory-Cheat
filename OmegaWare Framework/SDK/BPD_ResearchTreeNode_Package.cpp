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
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPD_ResearchTreeNode.BPD_ResearchTreeNode_C.GetNodeSchematic
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
	 */
	class UClass* UBPD_ResearchTreeNode_C::GetNodeSchematic()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPD_ResearchTreeNode.BPD_ResearchTreeNode_C.GetNodeSchematic");
		
		UBPD_ResearchTreeNode_C_GetNodeSchematic_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPD_ResearchTreeNode_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPD_ResearchTreeNode_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPD_ResearchTreeNode.BPD_ResearchTreeNode_C");
		return ptr;
	}

}


