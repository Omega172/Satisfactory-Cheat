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
	 * 		Name   -> Function BPW_SaveVehiclePath.BPW_SaveVehiclePath_C.UpdateButtonAndErrors
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsPathNameValid                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_SaveVehiclePath_C::UpdateButtonAndErrors(bool IsPathNameValid)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_SaveVehiclePath.BPW_SaveVehiclePath_C.UpdateButtonAndErrors");
		
		UBPW_SaveVehiclePath_C_UpdateButtonAndErrors_Params params {};
		params.IsPathNameValid = IsPathNameValid;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_SaveVehiclePath.BPW_SaveVehiclePath_C.CheckIfPathNameIsValid
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class FText                                        PathName                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	bool UBPW_SaveVehiclePath_C::CheckIfPathNameIsValid(const class FText& PathName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_SaveVehiclePath.BPW_SaveVehiclePath_C.CheckIfPathNameIsValid");
		
		UBPW_SaveVehiclePath_C_CheckIfPathNameIsValid_Params params {};
		params.PathName = PathName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_SaveVehiclePath.BPW_SaveVehiclePath_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UBPW_SaveVehiclePath_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_SaveVehiclePath.BPW_SaveVehiclePath_C.Construct");
		
		UBPW_SaveVehiclePath_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_SaveVehiclePath.BPW_SaveVehiclePath_C.Destruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UBPW_SaveVehiclePath_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_SaveVehiclePath.BPW_SaveVehiclePath_C.Destruct");
		
		UBPW_SaveVehiclePath_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_SaveVehiclePath.BPW_SaveVehiclePath_C.BndEvt__mSaveButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBPW_SaveVehiclePath_C::BndEvt__mSaveButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_SaveVehiclePath.BPW_SaveVehiclePath_C.BndEvt__mSaveButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");
		
		UBPW_SaveVehiclePath_C_BndEvt__mSaveButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_SaveVehiclePath.BPW_SaveVehiclePath_C.BndEvt__mCancelButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBPW_SaveVehiclePath_C::BndEvt__mCancelButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_SaveVehiclePath.BPW_SaveVehiclePath_C.BndEvt__mCancelButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature");
		
		UBPW_SaveVehiclePath_C_BndEvt__mCancelButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_SaveVehiclePath.BPW_SaveVehiclePath_C.BndEvt__Widget_InputBox_K2Node_ComponentBoundEvent_3_OnTextComitted__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		ETextCommit                                        CommitMethod                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_SaveVehiclePath_C::BndEvt__Widget_InputBox_K2Node_ComponentBoundEvent_3_OnTextComitted__DelegateSignature(const class FText& Text, ETextCommit CommitMethod)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_SaveVehiclePath.BPW_SaveVehiclePath_C.BndEvt__Widget_InputBox_K2Node_ComponentBoundEvent_3_OnTextComitted__DelegateSignature");
		
		UBPW_SaveVehiclePath_C_BndEvt__Widget_InputBox_K2Node_ComponentBoundEvent_3_OnTextComitted__DelegateSignature_Params params {};
		params.Text = Text;
		params.CommitMethod = CommitMethod;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_SaveVehiclePath.BPW_SaveVehiclePath_C.BndEvt__Widget_InputBox_K2Node_ComponentBoundEvent_2_OnTextChanged__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UBPW_SaveVehiclePath_C::BndEvt__Widget_InputBox_K2Node_ComponentBoundEvent_2_OnTextChanged__DelegateSignature(const class FText& Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_SaveVehiclePath.BPW_SaveVehiclePath_C.BndEvt__Widget_InputBox_K2Node_ComponentBoundEvent_2_OnTextChanged__DelegateSignature");
		
		UBPW_SaveVehiclePath_C_BndEvt__Widget_InputBox_K2Node_ComponentBoundEvent_2_OnTextChanged__DelegateSignature_Params params {};
		params.Text = Text;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_SaveVehiclePath.BPW_SaveVehiclePath_C.BndEvt__Widget_Window_DarkMode_K2Node_ComponentBoundEvent_4_OnClose__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBPW_SaveVehiclePath_C::BndEvt__Widget_Window_DarkMode_K2Node_ComponentBoundEvent_4_OnClose__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_SaveVehiclePath.BPW_SaveVehiclePath_C.BndEvt__Widget_Window_DarkMode_K2Node_ComponentBoundEvent_4_OnClose__DelegateSignature");
		
		UBPW_SaveVehiclePath_C_BndEvt__Widget_Window_DarkMode_K2Node_ComponentBoundEvent_4_OnClose__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_SaveVehiclePath.BPW_SaveVehiclePath_C.OnEscapePressed
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_SaveVehiclePath_C::OnEscapePressed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_SaveVehiclePath.BPW_SaveVehiclePath_C.OnEscapePressed");
		
		UBPW_SaveVehiclePath_C_OnEscapePressed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_SaveVehiclePath.BPW_SaveVehiclePath_C.ExecuteUbergraph_BPW_SaveVehiclePath
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_SaveVehiclePath_C::ExecuteUbergraph_BPW_SaveVehiclePath(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_SaveVehiclePath.BPW_SaveVehiclePath_C.ExecuteUbergraph_BPW_SaveVehiclePath");
		
		UBPW_SaveVehiclePath_C_ExecuteUbergraph_BPW_SaveVehiclePath_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_SaveVehiclePath.BPW_SaveVehiclePath_C.OnClosed__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_SaveVehiclePath_C::OnClosed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_SaveVehiclePath.BPW_SaveVehiclePath_C.OnClosed__DelegateSignature");
		
		UBPW_SaveVehiclePath_C_OnClosed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPW_SaveVehiclePath_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPW_SaveVehiclePath_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BPW_SaveVehiclePath.BPW_SaveVehiclePath_C");
		return ptr;
	}

}


