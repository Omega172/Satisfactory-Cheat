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
	 * 		Name   -> Function Widget_SplitterProgrammableRule.Widget_SplitterProgrammableRule_C.AddDescriptorsToArray
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_SplitterProgrammableRule_C::AddDescriptorsToArray()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_SplitterProgrammableRule.Widget_SplitterProgrammableRule_C.AddDescriptorsToArray");
		
		UWidget_SplitterProgrammableRule_C_AddDescriptorsToArray_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_SplitterProgrammableRule.Widget_SplitterProgrammableRule_C.PopulateDescriptors
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_SplitterProgrammableRule_C::PopulateDescriptors()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_SplitterProgrammableRule.Widget_SplitterProgrammableRule_C.PopulateDescriptors");
		
		UWidget_SplitterProgrammableRule_C_PopulateDescriptors_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_SplitterProgrammableRule.Widget_SplitterProgrammableRule_C.ShowHideDeleteButton
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               ShowDeleteButton                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_SplitterProgrammableRule_C::ShowHideDeleteButton(bool ShowDeleteButton)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_SplitterProgrammableRule.Widget_SplitterProgrammableRule_C.ShowHideDeleteButton");
		
		UWidget_SplitterProgrammableRule_C_ShowHideDeleteButton_Params params {};
		params.ShowDeleteButton = ShowDeleteButton;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_SplitterProgrammableRule.Widget_SplitterProgrammableRule_C.RemoveRule
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_SplitterProgrammableRule_C::RemoveRule()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_SplitterProgrammableRule.Widget_SplitterProgrammableRule_C.RemoveRule");
		
		UWidget_SplitterProgrammableRule_C_RemoveRule_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_SplitterProgrammableRule.Widget_SplitterProgrammableRule_C.SetRuleOutputIndex
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            OutputIndex                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_SplitterProgrammableRule_C::SetRuleOutputIndex(int32_t OutputIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_SplitterProgrammableRule.Widget_SplitterProgrammableRule_C.SetRuleOutputIndex");
		
		UWidget_SplitterProgrammableRule_C_SetRuleOutputIndex_Params params {};
		params.OutputIndex = OutputIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_SplitterProgrammableRule.Widget_SplitterProgrammableRule_C.SetRuleItemClass
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      ItemClass                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_SplitterProgrammableRule_C::SetRuleItemClass(class UClass* ItemClass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_SplitterProgrammableRule.Widget_SplitterProgrammableRule_C.SetRuleItemClass");
		
		UWidget_SplitterProgrammableRule_C_SetRuleItemClass_Params params {};
		params.ItemClass = ItemClass;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_SplitterProgrammableRule.Widget_SplitterProgrammableRule_C.GetSortRuleSafe
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FSplitterSortRule                           Rule                                                       (Parm, OutParm, NoDestructor)
	 */
	void UWidget_SplitterProgrammableRule_C::GetSortRuleSafe(struct FSplitterSortRule* Rule)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_SplitterProgrammableRule.Widget_SplitterProgrammableRule_C.GetSortRuleSafe");
		
		UWidget_SplitterProgrammableRule_C_GetSortRuleSafe_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Rule != nullptr)
			*Rule = params.Rule;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_SplitterProgrammableRule.Widget_SplitterProgrammableRule_C.SetSelectedItemDescriptor
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      inDescriptor                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_SplitterProgrammableRule_C::SetSelectedItemDescriptor(class UClass* inDescriptor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_SplitterProgrammableRule.Widget_SplitterProgrammableRule_C.SetSelectedItemDescriptor");
		
		UWidget_SplitterProgrammableRule_C_SetSelectedItemDescriptor_Params params {};
		params.inDescriptor = inDescriptor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_SplitterProgrammableRule.Widget_SplitterProgrammableRule_C.RefreshItemClassButton
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_SplitterProgrammableRule_C::RefreshItemClassButton()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_SplitterProgrammableRule.Widget_SplitterProgrammableRule_C.RefreshItemClassButton");
		
		UWidget_SplitterProgrammableRule_C_RefreshItemClassButton_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_SplitterProgrammableRule.Widget_SplitterProgrammableRule_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UWidget_SplitterProgrammableRule_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_SplitterProgrammableRule.Widget_SplitterProgrammableRule_C.Construct");
		
		UWidget_SplitterProgrammableRule_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_SplitterProgrammableRule.Widget_SplitterProgrammableRule_C.BndEvt__mDeleteButton_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UWidget_SplitterProgrammableRule_C::BndEvt__mDeleteButton_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_SplitterProgrammableRule.Widget_SplitterProgrammableRule_C.BndEvt__mDeleteButton_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature");
		
		UWidget_SplitterProgrammableRule_C_BndEvt__mDeleteButton_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_SplitterProgrammableRule.Widget_SplitterProgrammableRule_C.ForceRefreshButton
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FSplitterSortRule                           SplitterRule                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UWidget_SplitterProgrammableRule_C::ForceRefreshButton(const struct FSplitterSortRule& SplitterRule)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_SplitterProgrammableRule.Widget_SplitterProgrammableRule_C.ForceRefreshButton");
		
		UWidget_SplitterProgrammableRule_C_ForceRefreshButton_Params params {};
		params.SplitterRule = SplitterRule;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_SplitterProgrammableRule.Widget_SplitterProgrammableRule_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_SplitterProgrammableRule_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_SplitterProgrammableRule.Widget_SplitterProgrammableRule_C.PreConstruct");
		
		UWidget_SplitterProgrammableRule_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_SplitterProgrammableRule.Widget_SplitterProgrammableRule_C.BndEvt__mItemClassCombobox_K2Node_ComponentBoundEvent_3_OnSelectionChanged__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      SelectedOption                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		int32_t                                            selectedIndex                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_SplitterProgrammableRule_C::BndEvt__mItemClassCombobox_K2Node_ComponentBoundEvent_3_OnSelectionChanged__DelegateSignature(const class FString& SelectedOption, int32_t selectedIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_SplitterProgrammableRule.Widget_SplitterProgrammableRule_C.BndEvt__mItemClassCombobox_K2Node_ComponentBoundEvent_3_OnSelectionChanged__DelegateSignature");
		
		UWidget_SplitterProgrammableRule_C_BndEvt__mItemClassCombobox_K2Node_ComponentBoundEvent_3_OnSelectionChanged__DelegateSignature_Params params {};
		params.SelectedOption = SelectedOption;
		params.selectedIndex = selectedIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_SplitterProgrammableRule.Widget_SplitterProgrammableRule_C.ExecuteUbergraph_Widget_SplitterProgrammableRule
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_SplitterProgrammableRule_C::ExecuteUbergraph_Widget_SplitterProgrammableRule(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_SplitterProgrammableRule.Widget_SplitterProgrammableRule_C.ExecuteUbergraph_Widget_SplitterProgrammableRule");
		
		UWidget_SplitterProgrammableRule_C_ExecuteUbergraph_Widget_SplitterProgrammableRule_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_SplitterProgrammableRule.Widget_SplitterProgrammableRule_C.OnClicked__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UWidget_SplitterProgrammableRule_C*          SplitterRule                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_SplitterProgrammableRule_C::OnClicked__DelegateSignature(class UWidget_SplitterProgrammableRule_C* SplitterRule)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_SplitterProgrammableRule.Widget_SplitterProgrammableRule_C.OnClicked__DelegateSignature");
		
		UWidget_SplitterProgrammableRule_C_OnClicked__DelegateSignature_Params params {};
		params.SplitterRule = SplitterRule;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_SplitterProgrammableRule.Widget_SplitterProgrammableRule_C.OnUpdated__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            RuleIndex                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FSplitterSortRule                           RuleData                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UWidget_SplitterProgrammableRule_C::OnUpdated__DelegateSignature(int32_t RuleIndex, const struct FSplitterSortRule& RuleData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_SplitterProgrammableRule.Widget_SplitterProgrammableRule_C.OnUpdated__DelegateSignature");
		
		UWidget_SplitterProgrammableRule_C_OnUpdated__DelegateSignature_Params params {};
		params.RuleIndex = RuleIndex;
		params.RuleData = RuleData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_SplitterProgrammableRule.Widget_SplitterProgrammableRule_C.OnRemoved__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UWidget_SplitterProgrammableRule_C*          SplitterRule                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_SplitterProgrammableRule_C::OnRemoved__DelegateSignature(class UWidget_SplitterProgrammableRule_C* SplitterRule)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_SplitterProgrammableRule.Widget_SplitterProgrammableRule_C.OnRemoved__DelegateSignature");
		
		UWidget_SplitterProgrammableRule_C_OnRemoved__DelegateSignature_Params params {};
		params.SplitterRule = SplitterRule;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWidget_SplitterProgrammableRule_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWidget_SplitterProgrammableRule_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_SplitterProgrammableRule.Widget_SplitterProgrammableRule_C");
		return ptr;
	}

}


