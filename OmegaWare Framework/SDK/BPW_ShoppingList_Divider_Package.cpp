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
	 * 		Name   -> Function BPW_ShoppingList_Divider.BPW_ShoppingList_Divider_C.SetInfoWidgetClass
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      mInfoWidgetClass                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_ShoppingList_Divider_C::SetInfoWidgetClass(class UClass* mInfoWidgetClass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_ShoppingList_Divider.BPW_ShoppingList_Divider_C.SetInfoWidgetClass");
		
		UBPW_ShoppingList_Divider_C_SetInfoWidgetClass_Params params {};
		params.mInfoWidgetClass = mInfoWidgetClass;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_ShoppingList_Divider.BPW_ShoppingList_Divider_C.GetInfoWidget
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	class UUserWidget* UBPW_ShoppingList_Divider_C::GetInfoWidget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_ShoppingList_Divider.BPW_ShoppingList_Divider_C.GetInfoWidget");
		
		UBPW_ShoppingList_Divider_C_GetInfoWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_ShoppingList_Divider.BPW_ShoppingList_Divider_C.Expand
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_ShoppingList_Divider_C::Expand()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_ShoppingList_Divider.BPW_ShoppingList_Divider_C.Expand");
		
		UBPW_ShoppingList_Divider_C_Expand_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_ShoppingList_Divider.BPW_ShoppingList_Divider_C.CollapseOrHide
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Hide                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_ShoppingList_Divider_C::CollapseOrHide(bool Hide)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_ShoppingList_Divider.BPW_ShoppingList_Divider_C.CollapseOrHide");
		
		UBPW_ShoppingList_Divider_C_CollapseOrHide_Params params {};
		params.Hide = Hide;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_ShoppingList_Divider.BPW_ShoppingList_Divider_C.SetIsOpen
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               mIsOpen                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_ShoppingList_Divider_C::SetIsOpen(bool mIsOpen)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_ShoppingList_Divider.BPW_ShoppingList_Divider_C.SetIsOpen");
		
		UBPW_ShoppingList_Divider_C_SetIsOpen_Params params {};
		params.mIsOpen = mIsOpen;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_ShoppingList_Divider.BPW_ShoppingList_Divider_C.SetText
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        mText                                                      (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UBPW_ShoppingList_Divider_C::SetText(const class FText& mText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_ShoppingList_Divider.BPW_ShoppingList_Divider_C.SetText");
		
		UBPW_ShoppingList_Divider_C_SetText_Params params {};
		params.mText = mText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_ShoppingList_Divider.BPW_ShoppingList_Divider_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_ShoppingList_Divider_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_ShoppingList_Divider.BPW_ShoppingList_Divider_C.PreConstruct");
		
		UBPW_ShoppingList_Divider_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_ShoppingList_Divider.BPW_ShoppingList_Divider_C.BndEvt__BPW_ShoppingList_Divider_mButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBPW_ShoppingList_Divider_C::BndEvt__BPW_ShoppingList_Divider_mButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_ShoppingList_Divider.BPW_ShoppingList_Divider_C.BndEvt__BPW_ShoppingList_Divider_mButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UBPW_ShoppingList_Divider_C_BndEvt__BPW_ShoppingList_Divider_mButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_ShoppingList_Divider.BPW_ShoppingList_Divider_C.BndEvt__BPW_ShoppingList_Divider_mButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBPW_ShoppingList_Divider_C::BndEvt__BPW_ShoppingList_Divider_mButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_ShoppingList_Divider.BPW_ShoppingList_Divider_C.BndEvt__BPW_ShoppingList_Divider_mButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");
		
		UBPW_ShoppingList_Divider_C_BndEvt__BPW_ShoppingList_Divider_mButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_ShoppingList_Divider.BPW_ShoppingList_Divider_C.BndEvt__BPW_ShoppingList_Divider_mButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBPW_ShoppingList_Divider_C::BndEvt__BPW_ShoppingList_Divider_mButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_ShoppingList_Divider.BPW_ShoppingList_Divider_C.BndEvt__BPW_ShoppingList_Divider_mButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");
		
		UBPW_ShoppingList_Divider_C_BndEvt__BPW_ShoppingList_Divider_mButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_ShoppingList_Divider.BPW_ShoppingList_Divider_C.BndEvt__BPW_ShoppingList_Divider_mInfoButon_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBPW_ShoppingList_Divider_C::BndEvt__BPW_ShoppingList_Divider_mInfoButon_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_ShoppingList_Divider.BPW_ShoppingList_Divider_C.BndEvt__BPW_ShoppingList_Divider_mInfoButon_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature");
		
		UBPW_ShoppingList_Divider_C_BndEvt__BPW_ShoppingList_Divider_mInfoButon_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_ShoppingList_Divider.BPW_ShoppingList_Divider_C.BndEvt__BPW_ShoppingList_Divider_mInfoButon_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBPW_ShoppingList_Divider_C::BndEvt__BPW_ShoppingList_Divider_mInfoButon_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_ShoppingList_Divider.BPW_ShoppingList_Divider_C.BndEvt__BPW_ShoppingList_Divider_mInfoButon_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature");
		
		UBPW_ShoppingList_Divider_C_BndEvt__BPW_ShoppingList_Divider_mInfoButon_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_ShoppingList_Divider.BPW_ShoppingList_Divider_C.ExecuteUbergraph_BPW_ShoppingList_Divider
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_ShoppingList_Divider_C::ExecuteUbergraph_BPW_ShoppingList_Divider(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_ShoppingList_Divider.BPW_ShoppingList_Divider_C.ExecuteUbergraph_BPW_ShoppingList_Divider");
		
		UBPW_ShoppingList_Divider_C_ExecuteUbergraph_BPW_ShoppingList_Divider_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_ShoppingList_Divider.BPW_ShoppingList_Divider_C.OnStateChanged__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsOpen                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_ShoppingList_Divider_C::OnStateChanged__DelegateSignature(bool IsOpen)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_ShoppingList_Divider.BPW_ShoppingList_Divider_C.OnStateChanged__DelegateSignature");
		
		UBPW_ShoppingList_Divider_C_OnStateChanged__DelegateSignature_Params params {};
		params.IsOpen = IsOpen;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPW_ShoppingList_Divider_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPW_ShoppingList_Divider_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BPW_ShoppingList_Divider.BPW_ShoppingList_Divider_C");
		return ptr;
	}

}


