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
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_BlueprintDirectorySelector.BPW_BlueprintDirectorySelector_C.MoveToDirectory
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_BlueprintDirectorySelector_C::MoveToDirectory()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_BlueprintDirectorySelector.BPW_BlueprintDirectorySelector_C.MoveToDirectory");
		
		UBPW_BlueprintDirectorySelector_C_MoveToDirectory_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_BlueprintDirectorySelector.BPW_BlueprintDirectorySelector_C.SetCurrentCategoryToBlueprintRecord
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_BlueprintDirectorySelector_C::SetCurrentCategoryToBlueprintRecord()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_BlueprintDirectorySelector.BPW_BlueprintDirectorySelector_C.SetCurrentCategoryToBlueprintRecord");
		
		UBPW_BlueprintDirectorySelector_C_SetCurrentCategoryToBlueprintRecord_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_BlueprintDirectorySelector.BPW_BlueprintDirectorySelector_C.SetBlueprintRecord
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FBlueprintRecord                            mBlueprintRecord                                           (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UBPW_BlueprintDirectorySelector_C::SetBlueprintRecord(const struct FBlueprintRecord& mBlueprintRecord)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_BlueprintDirectorySelector.BPW_BlueprintDirectorySelector_C.SetBlueprintRecord");
		
		UBPW_BlueprintDirectorySelector_C_SetBlueprintRecord_Params params {};
		params.mBlueprintRecord = mBlueprintRecord;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_BlueprintDirectorySelector.BPW_BlueprintDirectorySelector_C.PromptLeaveEditMode
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsInEditMode                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_BlueprintDirectorySelector_C::PromptLeaveEditMode(bool* IsInEditMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_BlueprintDirectorySelector.BPW_BlueprintDirectorySelector_C.PromptLeaveEditMode");
		
		UBPW_BlueprintDirectorySelector_C_PromptLeaveEditMode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsInEditMode != nullptr)
			*IsInEditMode = params.IsInEditMode;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_BlueprintDirectorySelector.BPW_BlueprintDirectorySelector_C.SetDirectoryMode
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               mDirectoryMode                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_BlueprintDirectorySelector_C::SetDirectoryMode(bool mDirectoryMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_BlueprintDirectorySelector.BPW_BlueprintDirectorySelector_C.SetDirectoryMode");
		
		UBPW_BlueprintDirectorySelector_C_SetDirectoryMode_Params params {};
		params.mDirectoryMode = mDirectoryMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_BlueprintDirectorySelector.BPW_BlueprintDirectorySelector_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UBPW_BlueprintDirectorySelector_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_BlueprintDirectorySelector.BPW_BlueprintDirectorySelector_C.Construct");
		
		UBPW_BlueprintDirectorySelector_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_BlueprintDirectorySelector.BPW_BlueprintDirectorySelector_C.BndEvt__BPW_BlueprintSelector_Widget_Window_DarkMode_K2Node_ComponentBoundEvent_0_OnClose__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBPW_BlueprintDirectorySelector_C::BndEvt__BPW_BlueprintSelector_Widget_Window_DarkMode_K2Node_ComponentBoundEvent_0_OnClose__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_BlueprintDirectorySelector.BPW_BlueprintDirectorySelector_C.BndEvt__BPW_BlueprintSelector_Widget_Window_DarkMode_K2Node_ComponentBoundEvent_0_OnClose__DelegateSignature");
		
		UBPW_BlueprintDirectorySelector_C_BndEvt__BPW_BlueprintSelector_Widget_Window_DarkMode_K2Node_ComponentBoundEvent_0_OnClose__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_BlueprintDirectorySelector.BPW_BlueprintDirectorySelector_C.BndEvt__BPW_BlueprintDirectorySelector_BPW_BlueprintMenu_K2Node_ComponentBoundEvent_1_OnCloseEditModePrompt__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		bool                                               StayInEditMode                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_BlueprintDirectorySelector_C::BndEvt__BPW_BlueprintDirectorySelector_BPW_BlueprintMenu_K2Node_ComponentBoundEvent_1_OnCloseEditModePrompt__DelegateSignature(bool StayInEditMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_BlueprintDirectorySelector.BPW_BlueprintDirectorySelector_C.BndEvt__BPW_BlueprintDirectorySelector_BPW_BlueprintMenu_K2Node_ComponentBoundEvent_1_OnCloseEditModePrompt__DelegateSignature");
		
		UBPW_BlueprintDirectorySelector_C_BndEvt__BPW_BlueprintDirectorySelector_BPW_BlueprintMenu_K2Node_ComponentBoundEvent_1_OnCloseEditModePrompt__DelegateSignature_Params params {};
		params.StayInEditMode = StayInEditMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_BlueprintDirectorySelector.BPW_BlueprintDirectorySelector_C.BndEvt__BPW_BlueprintDirectorySelector_BPW_BlueprintMenu_K2Node_ComponentBoundEvent_2_OnNewDirectoryDataUpdated__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FStruct_BlueprintDirectoryData              DirectoryData                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_BlueprintDirectorySelector_C::BndEvt__BPW_BlueprintDirectorySelector_BPW_BlueprintMenu_K2Node_ComponentBoundEvent_2_OnNewDirectoryDataUpdated__DelegateSignature(const struct FStruct_BlueprintDirectoryData& DirectoryData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_BlueprintDirectorySelector.BPW_BlueprintDirectorySelector_C.BndEvt__BPW_BlueprintDirectorySelector_BPW_BlueprintMenu_K2Node_ComponentBoundEvent_2_OnNewDirectoryDataUpdated__DelegateSignature");
		
		UBPW_BlueprintDirectorySelector_C_BndEvt__BPW_BlueprintDirectorySelector_BPW_BlueprintMenu_K2Node_ComponentBoundEvent_2_OnNewDirectoryDataUpdated__DelegateSignature_Params params {};
		params.DirectoryData = DirectoryData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_BlueprintDirectorySelector.BPW_BlueprintDirectorySelector_C.ExecuteUbergraph_BPW_BlueprintDirectorySelector
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_BlueprintDirectorySelector_C::ExecuteUbergraph_BPW_BlueprintDirectorySelector(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_BlueprintDirectorySelector.BPW_BlueprintDirectorySelector_C.ExecuteUbergraph_BPW_BlueprintDirectorySelector");
		
		UBPW_BlueprintDirectorySelector_C_ExecuteUbergraph_BPW_BlueprintDirectorySelector_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_BlueprintDirectorySelector.BPW_BlueprintDirectorySelector_C.OnClose__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               DirectoryHasBeenSet                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FStruct_BlueprintDirectoryData              DirectoryData                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_BlueprintDirectorySelector_C::OnClose__DelegateSignature(bool DirectoryHasBeenSet, const struct FStruct_BlueprintDirectoryData& DirectoryData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_BlueprintDirectorySelector.BPW_BlueprintDirectorySelector_C.OnClose__DelegateSignature");
		
		UBPW_BlueprintDirectorySelector_C_OnClose__DelegateSignature_Params params {};
		params.DirectoryHasBeenSet = DirectoryHasBeenSet;
		params.DirectoryData = DirectoryData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPW_BlueprintDirectorySelector_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPW_BlueprintDirectorySelector_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BPW_BlueprintDirectorySelector.BPW_BlueprintDirectorySelector_C");
		return ptr;
	}

}


