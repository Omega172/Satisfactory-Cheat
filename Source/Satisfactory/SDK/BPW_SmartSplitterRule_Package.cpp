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
	 * 		Name   -> Function BPW_SmartSplitterRule.BPW_SmartSplitterRule_C.SetAddButtonVisibility
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               mIsVisible                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_SmartSplitterRule_C::SetAddButtonVisibility(bool mIsVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_SmartSplitterRule.BPW_SmartSplitterRule_C.SetAddButtonVisibility");
		
		UBPW_SmartSplitterRule_C_SetAddButtonVisibility_Params params {};
		params.mIsVisible = mIsVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_SmartSplitterRule.BPW_SmartSplitterRule_C.SetMaxItemAmount
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            mMaxItemAmount                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_SmartSplitterRule_C::SetMaxItemAmount(int32_t mMaxItemAmount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_SmartSplitterRule.BPW_SmartSplitterRule_C.SetMaxItemAmount");
		
		UBPW_SmartSplitterRule_C_SetMaxItemAmount_Params params {};
		params.mMaxItemAmount = mMaxItemAmount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_SmartSplitterRule.BPW_SmartSplitterRule_C.SetRules
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<struct FSplitterSortRule>                   Rules                                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UBPW_SmartSplitterRule_C::SetRules(TArray<struct FSplitterSortRule>* Rules)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_SmartSplitterRule.BPW_SmartSplitterRule_C.SetRules");
		
		UBPW_SmartSplitterRule_C_SetRules_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Rules != nullptr)
			*Rules = params.Rules;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_SmartSplitterRule.BPW_SmartSplitterRule_C.SetIsSmartSplitter
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               mIsSmartSplitter                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_SmartSplitterRule_C::SetIsSmartSplitter(bool mIsSmartSplitter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_SmartSplitterRule.BPW_SmartSplitterRule_C.SetIsSmartSplitter");
		
		UBPW_SmartSplitterRule_C_SetIsSmartSplitter_Params params {};
		params.mIsSmartSplitter = mIsSmartSplitter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_SmartSplitterRule.BPW_SmartSplitterRule_C.GetList
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<class UClass*>                              Items                                                      (Parm, OutParm)
	 */
	void UBPW_SmartSplitterRule_C::GetList(TArray<class UClass*>* Items)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_SmartSplitterRule.BPW_SmartSplitterRule_C.GetList");
		
		UBPW_SmartSplitterRule_C_GetList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Items != nullptr)
			*Items = params.Items;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_SmartSplitterRule.BPW_SmartSplitterRule_C.SetCachedSmartDescriptor
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      mCachedDescriptor                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	 * 		bool                                               CallCombobox                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_SmartSplitterRule_C::SetCachedSmartDescriptor(class UClass* mCachedDescriptor, bool CallCombobox)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_SmartSplitterRule.BPW_SmartSplitterRule_C.SetCachedSmartDescriptor");
		
		UBPW_SmartSplitterRule_C_SetCachedSmartDescriptor_Params params {};
		params.mCachedDescriptor = mCachedDescriptor;
		params.CallCombobox = CallCombobox;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_SmartSplitterRule.BPW_SmartSplitterRule_C.SetIndex
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_SmartSplitterRule_C::SetIndex(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_SmartSplitterRule.BPW_SmartSplitterRule_C.SetIndex");
		
		UBPW_SmartSplitterRule_C_SetIndex_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_SmartSplitterRule.BPW_SmartSplitterRule_C.SetDescriptors
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<class UClass*>                              mDescriptors                                               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UBPW_SmartSplitterRule_C::SetDescriptors(TArray<class UClass*>* mDescriptors)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_SmartSplitterRule.BPW_SmartSplitterRule_C.SetDescriptors");
		
		UBPW_SmartSplitterRule_C_SetDescriptors_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (mDescriptors != nullptr)
			*mDescriptors = params.mDescriptors;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_SmartSplitterRule.BPW_SmartSplitterRule_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_SmartSplitterRule_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_SmartSplitterRule.BPW_SmartSplitterRule_C.PreConstruct");
		
		UBPW_SmartSplitterRule_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_SmartSplitterRule.BPW_SmartSplitterRule_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UBPW_SmartSplitterRule_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_SmartSplitterRule.BPW_SmartSplitterRule_C.Construct");
		
		UBPW_SmartSplitterRule_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_SmartSplitterRule.BPW_SmartSplitterRule_C.BndEvt__BPW_SmartSplitterRule_BPW_ComboboxSearch_K2Node_ComponentBoundEvent_0_OnSelectionChanged__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      SelectedOption                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		int32_t                                            selectedIndex                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_SmartSplitterRule_C::BndEvt__BPW_SmartSplitterRule_BPW_ComboboxSearch_K2Node_ComponentBoundEvent_0_OnSelectionChanged__DelegateSignature(const class FString& SelectedOption, int32_t selectedIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_SmartSplitterRule.BPW_SmartSplitterRule_C.BndEvt__BPW_SmartSplitterRule_BPW_ComboboxSearch_K2Node_ComponentBoundEvent_0_OnSelectionChanged__DelegateSignature");
		
		UBPW_SmartSplitterRule_C_BndEvt__BPW_SmartSplitterRule_BPW_ComboboxSearch_K2Node_ComponentBoundEvent_0_OnSelectionChanged__DelegateSignature_Params params {};
		params.SelectedOption = SelectedOption;
		params.selectedIndex = selectedIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_SmartSplitterRule.BPW_SmartSplitterRule_C.BndEvt__BPW_SmartSplitterRule_mProgrammableSplitterSettings_K2Node_ComponentBoundEvent_1_OnListChanged__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBPW_SmartSplitterRule_C::BndEvt__BPW_SmartSplitterRule_mProgrammableSplitterSettings_K2Node_ComponentBoundEvent_1_OnListChanged__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_SmartSplitterRule.BPW_SmartSplitterRule_C.BndEvt__BPW_SmartSplitterRule_mProgrammableSplitterSettings_K2Node_ComponentBoundEvent_1_OnListChanged__DelegateSignature");
		
		UBPW_SmartSplitterRule_C_BndEvt__BPW_SmartSplitterRule_mProgrammableSplitterSettings_K2Node_ComponentBoundEvent_1_OnListChanged__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_SmartSplitterRule.BPW_SmartSplitterRule_C.ExecuteUbergraph_BPW_SmartSplitterRule
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_SmartSplitterRule_C::ExecuteUbergraph_BPW_SmartSplitterRule(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_SmartSplitterRule.BPW_SmartSplitterRule_C.ExecuteUbergraph_BPW_SmartSplitterRule");
		
		UBPW_SmartSplitterRule_C_ExecuteUbergraph_BPW_SmartSplitterRule_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_SmartSplitterRule.BPW_SmartSplitterRule_C.OnListChanged__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_SmartSplitterRule_C::OnListChanged__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_SmartSplitterRule.BPW_SmartSplitterRule_C.OnListChanged__DelegateSignature");
		
		UBPW_SmartSplitterRule_C_OnListChanged__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPW_SmartSplitterRule_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPW_SmartSplitterRule_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BPW_SmartSplitterRule.BPW_SmartSplitterRule_C");
		return ptr;
	}

}


