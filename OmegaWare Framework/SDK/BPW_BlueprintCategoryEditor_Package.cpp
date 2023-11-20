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
	 * 		Name   -> Function BPW_BlueprintCategoryEditor.BPW_BlueprintCategoryEditor_C.GetRemoveBlueprintTooltip
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	class UWidget* UBPW_BlueprintCategoryEditor_C::GetRemoveBlueprintTooltip()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_BlueprintCategoryEditor.BPW_BlueprintCategoryEditor_C.GetRemoveBlueprintTooltip");
		
		UBPW_BlueprintCategoryEditor_C_GetRemoveBlueprintTooltip_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_BlueprintCategoryEditor.BPW_BlueprintCategoryEditor_C.Set Enable Remove Button
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               EnableRemoveButton                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_BlueprintCategoryEditor_C::SetEnableRemoveButton(bool EnableRemoveButton)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_BlueprintCategoryEditor.BPW_BlueprintCategoryEditor_C.Set Enable Remove Button");
		
		UBPW_BlueprintCategoryEditor_C_SetEnableRemoveButton_Params params {};
		params.EnableRemoveButton = EnableRemoveButton;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_BlueprintCategoryEditor.BPW_BlueprintCategoryEditor_C.SetCategoryData
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FStruct_BlueprintCategoryData               mCatgeoryData                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UBPW_BlueprintCategoryEditor_C::SetCategoryData(const struct FStruct_BlueprintCategoryData& mCatgeoryData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_BlueprintCategoryEditor.BPW_BlueprintCategoryEditor_C.SetCategoryData");
		
		UBPW_BlueprintCategoryEditor_C_SetCategoryData_Params params {};
		params.mCatgeoryData = mCatgeoryData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_BlueprintCategoryEditor.BPW_BlueprintCategoryEditor_C.SetImageID
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            mImageID                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_BlueprintCategoryEditor_C::SetImageID(int32_t mImageID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_BlueprintCategoryEditor.BPW_BlueprintCategoryEditor_C.SetImageID");
		
		UBPW_BlueprintCategoryEditor_C_SetImageID_Params params {};
		params.mImageID = mImageID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_BlueprintCategoryEditor.BPW_BlueprintCategoryEditor_C.OnImageBrowserClosed
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     Object                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            ImageID                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_BlueprintCategoryEditor_C::OnImageBrowserClosed(class UObject* Object, int32_t ImageID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_BlueprintCategoryEditor.BPW_BlueprintCategoryEditor_C.OnImageBrowserClosed");
		
		UBPW_BlueprintCategoryEditor_C_OnImageBrowserClosed_Params params {};
		params.Object = Object;
		params.ImageID = ImageID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_BlueprintCategoryEditor.BPW_BlueprintCategoryEditor_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UBPW_BlueprintCategoryEditor_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_BlueprintCategoryEditor.BPW_BlueprintCategoryEditor_C.Construct");
		
		UBPW_BlueprintCategoryEditor_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_BlueprintCategoryEditor.BPW_BlueprintCategoryEditor_C.BndEvt__BPW_BlueprintCategoryEditor_mSelectIcon_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBPW_BlueprintCategoryEditor_C::BndEvt__BPW_BlueprintCategoryEditor_mSelectIcon_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_BlueprintCategoryEditor.BPW_BlueprintCategoryEditor_C.BndEvt__BPW_BlueprintCategoryEditor_mSelectIcon_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");
		
		UBPW_BlueprintCategoryEditor_C_BndEvt__BPW_BlueprintCategoryEditor_mSelectIcon_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_BlueprintCategoryEditor.BPW_BlueprintCategoryEditor_C.BndEvt__BPW_BlueprintCategoryEditor_mCancel_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBPW_BlueprintCategoryEditor_C::BndEvt__BPW_BlueprintCategoryEditor_mCancel_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_BlueprintCategoryEditor.BPW_BlueprintCategoryEditor_C.BndEvt__BPW_BlueprintCategoryEditor_mCancel_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature");
		
		UBPW_BlueprintCategoryEditor_C_BndEvt__BPW_BlueprintCategoryEditor_mCancel_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_BlueprintCategoryEditor.BPW_BlueprintCategoryEditor_C.BndEvt__BPW_BlueprintCategoryEditor_mApplyButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBPW_BlueprintCategoryEditor_C::BndEvt__BPW_BlueprintCategoryEditor_mApplyButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_BlueprintCategoryEditor.BPW_BlueprintCategoryEditor_C.BndEvt__BPW_BlueprintCategoryEditor_mApplyButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature");
		
		UBPW_BlueprintCategoryEditor_C_BndEvt__BPW_BlueprintCategoryEditor_mApplyButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_BlueprintCategoryEditor.BPW_BlueprintCategoryEditor_C.BndEvt__BPW_BlueprintCategoryEditor_Widget_Window_DarkMode_K2Node_ComponentBoundEvent_3_OnClose__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBPW_BlueprintCategoryEditor_C::BndEvt__BPW_BlueprintCategoryEditor_Widget_Window_DarkMode_K2Node_ComponentBoundEvent_3_OnClose__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_BlueprintCategoryEditor.BPW_BlueprintCategoryEditor_C.BndEvt__BPW_BlueprintCategoryEditor_Widget_Window_DarkMode_K2Node_ComponentBoundEvent_3_OnClose__DelegateSignature");
		
		UBPW_BlueprintCategoryEditor_C_BndEvt__BPW_BlueprintCategoryEditor_Widget_Window_DarkMode_K2Node_ComponentBoundEvent_3_OnClose__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_BlueprintCategoryEditor.BPW_BlueprintCategoryEditor_C.BndEvt__BPW_BlueprintCategoryEditor_mRemoveButton_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBPW_BlueprintCategoryEditor_C::BndEvt__BPW_BlueprintCategoryEditor_mRemoveButton_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_BlueprintCategoryEditor.BPW_BlueprintCategoryEditor_C.BndEvt__BPW_BlueprintCategoryEditor_mRemoveButton_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature");
		
		UBPW_BlueprintCategoryEditor_C_BndEvt__BPW_BlueprintCategoryEditor_mRemoveButton_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_BlueprintCategoryEditor.BPW_BlueprintCategoryEditor_C.BndEvt__BPW_BlueprintCategoryEditor_mNameInput_K2Node_ComponentBoundEvent_5_OnEditableTextChangedEvent__DelegateSignature
	 * 		Flags  -> (HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        Text                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UBPW_BlueprintCategoryEditor_C::BndEvt__BPW_BlueprintCategoryEditor_mNameInput_K2Node_ComponentBoundEvent_5_OnEditableTextChangedEvent__DelegateSignature(const class FText& Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_BlueprintCategoryEditor.BPW_BlueprintCategoryEditor_C.BndEvt__BPW_BlueprintCategoryEditor_mNameInput_K2Node_ComponentBoundEvent_5_OnEditableTextChangedEvent__DelegateSignature");
		
		UBPW_BlueprintCategoryEditor_C_BndEvt__BPW_BlueprintCategoryEditor_mNameInput_K2Node_ComponentBoundEvent_5_OnEditableTextChangedEvent__DelegateSignature_Params params {};
		params.Text = Text;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_BlueprintCategoryEditor.BPW_BlueprintCategoryEditor_C.ExecuteUbergraph_BPW_BlueprintCategoryEditor
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_BlueprintCategoryEditor_C::ExecuteUbergraph_BPW_BlueprintCategoryEditor(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_BlueprintCategoryEditor.BPW_BlueprintCategoryEditor_C.ExecuteUbergraph_BPW_BlueprintCategoryEditor");
		
		UBPW_BlueprintCategoryEditor_C_ExecuteUbergraph_BPW_BlueprintCategoryEditor_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_BlueprintCategoryEditor.BPW_BlueprintCategoryEditor_C.OnCategoryRemoved__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UFGCategory*                                 Category                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_BlueprintCategoryEditor_C::OnCategoryRemoved__DelegateSignature(class UFGCategory* Category)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_BlueprintCategoryEditor.BPW_BlueprintCategoryEditor_C.OnCategoryRemoved__DelegateSignature");
		
		UBPW_BlueprintCategoryEditor_C_OnCategoryRemoved__DelegateSignature_Params params {};
		params.Category = Category;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_BlueprintCategoryEditor.BPW_BlueprintCategoryEditor_C.OnClosed__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_BlueprintCategoryEditor_C::OnClosed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_BlueprintCategoryEditor.BPW_BlueprintCategoryEditor_C.OnClosed__DelegateSignature");
		
		UBPW_BlueprintCategoryEditor_C_OnClosed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_BlueprintCategoryEditor.BPW_BlueprintCategoryEditor_C.OnCategoryUpdated__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UFGCategory*                                 Category                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		struct FStruct_BlueprintCategoryData               CategoryData                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UBPW_BlueprintCategoryEditor_C::OnCategoryUpdated__DelegateSignature(class UFGCategory* Category, const struct FStruct_BlueprintCategoryData& CategoryData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_BlueprintCategoryEditor.BPW_BlueprintCategoryEditor_C.OnCategoryUpdated__DelegateSignature");
		
		UBPW_BlueprintCategoryEditor_C_OnCategoryUpdated__DelegateSignature_Params params {};
		params.Category = Category;
		params.CategoryData = CategoryData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPW_BlueprintCategoryEditor_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPW_BlueprintCategoryEditor_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BPW_BlueprintCategoryEditor.BPW_BlueprintCategoryEditor_C");
		return ptr;
	}

}


