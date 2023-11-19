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
	 * 		Name   -> Function BPW_DragAndDropList_StandardIndicator.BPW_DragAndDropList_StandardIndicator_C.OnShowIndicator
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_DragAndDropList_StandardIndicator_C::OnShowIndicator()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_DragAndDropList_StandardIndicator.BPW_DragAndDropList_StandardIndicator_C.OnShowIndicator");
		
		UBPW_DragAndDropList_StandardIndicator_C_OnShowIndicator_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_DragAndDropList_StandardIndicator.BPW_DragAndDropList_StandardIndicator_C.ExecuteUbergraph_BPW_DragAndDropList_StandardIndicator
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_DragAndDropList_StandardIndicator_C::ExecuteUbergraph_BPW_DragAndDropList_StandardIndicator(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_DragAndDropList_StandardIndicator.BPW_DragAndDropList_StandardIndicator_C.ExecuteUbergraph_BPW_DragAndDropList_StandardIndicator");
		
		UBPW_DragAndDropList_StandardIndicator_C_ExecuteUbergraph_BPW_DragAndDropList_StandardIndicator_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPW_DragAndDropList_StandardIndicator_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPW_DragAndDropList_StandardIndicator_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BPW_DragAndDropList_StandardIndicator.BPW_DragAndDropList_StandardIndicator_C");
		return ptr;
	}

}


