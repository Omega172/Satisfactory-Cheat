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
	 * 		Name   -> Function BPW_QuickSearch.BPW_QuickSearch_C.OnBlueprintSelected
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UFGBlueprintDescriptor*                      Blueprint                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_QuickSearch_C::OnBlueprintSelected(class UFGBlueprintDescriptor* Blueprint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_QuickSearch.BPW_QuickSearch_C.OnBlueprintSelected");
		
		UBPW_QuickSearch_C_OnBlueprintSelected_Params params {};
		params.Blueprint = Blueprint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_QuickSearch.BPW_QuickSearch_C.OpenQuickSearch
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_QuickSearch_C::OpenQuickSearch()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_QuickSearch.BPW_QuickSearch_C.OpenQuickSearch");
		
		UBPW_QuickSearch_C_OpenQuickSearch_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_QuickSearch.BPW_QuickSearch_C.CloseQuickSearch
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_QuickSearch_C::CloseQuickSearch()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_QuickSearch.BPW_QuickSearch_C.CloseQuickSearch");
		
		UBPW_QuickSearch_C_CloseQuickSearch_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_QuickSearch.BPW_QuickSearch_C.SetQuickSearchVisibility
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsVisibile                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_QuickSearch_C::SetQuickSearchVisibility(bool IsVisibile)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_QuickSearch.BPW_QuickSearch_C.SetQuickSearchVisibility");
		
		UBPW_QuickSearch_C_SetQuickSearchVisibility_Params params {};
		params.IsVisibile = IsVisibile;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_QuickSearch.BPW_QuickSearch_C.GenerateMathAnswer
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        mSearchWords                                               (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UBPW_QuickSearch_C::GenerateMathAnswer(const class FText& mSearchWords)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_QuickSearch.BPW_QuickSearch_C.GenerateMathAnswer");
		
		UBPW_QuickSearch_C_GenerateMathAnswer_Params params {};
		params.mSearchWords = mSearchWords;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_QuickSearch.BPW_QuickSearch_C.IsMathExpression
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class FText                                        mSearchWords                                               (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	bool UBPW_QuickSearch_C::IsMathExpression(const class FText& mSearchWords)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_QuickSearch.BPW_QuickSearch_C.IsMathExpression");
		
		UBPW_QuickSearch_C_IsMathExpression_Params params {};
		params.mSearchWords = mSearchWords;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_QuickSearch.BPW_QuickSearch_C.OnPartSelected
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      product                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_QuickSearch_C::OnPartSelected(class UClass* product)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_QuickSearch.BPW_QuickSearch_C.OnPartSelected");
		
		UBPW_QuickSearch_C_OnPartSelected_Params params {};
		params.product = product;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_QuickSearch.BPW_QuickSearch_C.OnBuildingSelected
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      product                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_QuickSearch_C::OnBuildingSelected(class UClass* product)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_QuickSearch.BPW_QuickSearch_C.OnBuildingSelected");
		
		UBPW_QuickSearch_C_OnBuildingSelected_Params params {};
		params.product = product;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_QuickSearch.BPW_QuickSearch_C.OnIndexClicked
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UWidget_ListButton_C*                        ListButton                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_QuickSearch_C::OnIndexClicked(int32_t Index, class UWidget_ListButton_C* ListButton)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_QuickSearch.BPW_QuickSearch_C.OnIndexClicked");
		
		UBPW_QuickSearch_C_OnIndexClicked_Params params {};
		params.Index = Index;
		params.ListButton = ListButton;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_QuickSearch.BPW_QuickSearch_C.SetSelectedIndex
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            NewSelectedIndex                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_QuickSearch_C::SetSelectedIndex(int32_t NewSelectedIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_QuickSearch.BPW_QuickSearch_C.SetSelectedIndex");
		
		UBPW_QuickSearch_C_SetSelectedIndex_Params params {};
		params.NewSelectedIndex = NewSelectedIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_QuickSearch.BPW_QuickSearch_C.OnKeyUp
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FKeyEvent                                   InKeyEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	struct FEventReply UBPW_QuickSearch_C::OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_QuickSearch.BPW_QuickSearch_C.OnKeyUp");
		
		UBPW_QuickSearch_C_OnKeyUp_Params params {};
		params.MyGeometry = MyGeometry;
		params.InKeyEvent = InKeyEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_QuickSearch.BPW_QuickSearch_C.CreateSearchResultList
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        SearchWords                                                (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UBPW_QuickSearch_C::CreateSearchResultList(const class FText& SearchWords)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_QuickSearch.BPW_QuickSearch_C.CreateSearchResultList");
		
		UBPW_QuickSearch_C_CreateSearchResultList_Params params {};
		params.SearchWords = SearchWords;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_QuickSearch.BPW_QuickSearch_C.GenerateSearchResults
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        SearchWords                                                (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UBPW_QuickSearch_C::GenerateSearchResults(const class FText& SearchWords)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_QuickSearch.BPW_QuickSearch_C.GenerateSearchResults");
		
		UBPW_QuickSearch_C_GenerateSearchResults_Params params {};
		params.SearchWords = SearchWords;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_QuickSearch.BPW_QuickSearch_C.InitAllRecipes
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_QuickSearch_C::InitAllRecipes()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_QuickSearch.BPW_QuickSearch_C.InitAllRecipes");
		
		UBPW_QuickSearch_C_InitAllRecipes_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_QuickSearch.BPW_QuickSearch_C.BndEvt__FGEditableText_357_K2Node_ComponentBoundEvent_3_OnEditableTextChangedEvent__DelegateSignature
	 * 		Flags  -> (HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        Text                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UBPW_QuickSearch_C::BndEvt__FGEditableText_357_K2Node_ComponentBoundEvent_3_OnEditableTextChangedEvent__DelegateSignature(const class FText& Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_QuickSearch.BPW_QuickSearch_C.BndEvt__FGEditableText_357_K2Node_ComponentBoundEvent_3_OnEditableTextChangedEvent__DelegateSignature");
		
		UBPW_QuickSearch_C_BndEvt__FGEditableText_357_K2Node_ComponentBoundEvent_3_OnEditableTextChangedEvent__DelegateSignature_Params params {};
		params.Text = Text;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_QuickSearch.BPW_QuickSearch_C.BndEvt__BPW_QuickSearch_mCloseButton_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBPW_QuickSearch_C::BndEvt__BPW_QuickSearch_mCloseButton_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_QuickSearch.BPW_QuickSearch_C.BndEvt__BPW_QuickSearch_mCloseButton_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature");
		
		UBPW_QuickSearch_C_BndEvt__BPW_QuickSearch_mCloseButton_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_QuickSearch.BPW_QuickSearch_C.BndEvt__BPW_QuickSearch_Button_101_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBPW_QuickSearch_C::BndEvt__BPW_QuickSearch_Button_101_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_QuickSearch.BPW_QuickSearch_C.BndEvt__BPW_QuickSearch_Button_101_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");
		
		UBPW_QuickSearch_C_BndEvt__BPW_QuickSearch_Button_101_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_QuickSearch.BPW_QuickSearch_C.ExecuteUbergraph_BPW_QuickSearch
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_QuickSearch_C::ExecuteUbergraph_BPW_QuickSearch(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_QuickSearch.BPW_QuickSearch_C.ExecuteUbergraph_BPW_QuickSearch");
		
		UBPW_QuickSearch_C_ExecuteUbergraph_BPW_QuickSearch_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPW_QuickSearch_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPW_QuickSearch_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BPW_QuickSearch.BPW_QuickSearch_C");
		return ptr;
	}

}


