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
	 * 		Name   -> Function BPW_GiveItem_GameMode.BPW_GiveItem_GameMode_C.TryEnableCreativeMode
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_GiveItem_GameMode_C::TryEnableCreativeMode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_GiveItem_GameMode.BPW_GiveItem_GameMode_C.TryEnableCreativeMode");
		
		UBPW_GiveItem_GameMode_C_TryEnableCreativeMode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_GiveItem_GameMode.BPW_GiveItem_GameMode_C.OnPreviewKeyDown
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FKeyEvent                                   InKeyEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	struct FEventReply UBPW_GiveItem_GameMode_C::OnPreviewKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_GiveItem_GameMode.BPW_GiveItem_GameMode_C.OnPreviewKeyDown");
		
		UBPW_GiveItem_GameMode_C_OnPreviewKeyDown_Params params {};
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
	 * 		Name   -> Function BPW_GiveItem_GameMode.BPW_GiveItem_GameMode_C.SetSearchbarUnfocused
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_GiveItem_GameMode_C::SetSearchbarUnfocused()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_GiveItem_GameMode.BPW_GiveItem_GameMode_C.SetSearchbarUnfocused");
		
		UBPW_GiveItem_GameMode_C_SetSearchbarUnfocused_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_GiveItem_GameMode.BPW_GiveItem_GameMode_C.SetSearchbarFocused
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_GiveItem_GameMode_C::SetSearchbarFocused()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_GiveItem_GameMode.BPW_GiveItem_GameMode_C.SetSearchbarFocused");
		
		UBPW_GiveItem_GameMode_C_SetSearchbarFocused_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_GiveItem_GameMode.BPW_GiveItem_GameMode_C.GetShouldOkayBeEnabled
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool UBPW_GiveItem_GameMode_C::GetShouldOkayBeEnabled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_GiveItem_GameMode.BPW_GiveItem_GameMode_C.GetShouldOkayBeEnabled");
		
		UBPW_GiveItem_GameMode_C_GetShouldOkayBeEnabled_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_GiveItem_GameMode.BPW_GiveItem_GameMode_C.GetNotificationNoSpace
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               HasNoSpace                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_GiveItem_GameMode_C::GetNotificationNoSpace(bool HasNoSpace)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_GiveItem_GameMode.BPW_GiveItem_GameMode_C.GetNotificationNoSpace");
		
		UBPW_GiveItem_GameMode_C_GetNotificationNoSpace_Params params {};
		params.HasNoSpace = HasNoSpace;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_GiveItem_GameMode.BPW_GiveItem_GameMode_C.SetCategoryVisibility
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		E_GiveItemCategories                               Category                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               isCollapsed                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_GiveItem_GameMode_C::SetCategoryVisibility(E_GiveItemCategories Category, bool isCollapsed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_GiveItem_GameMode.BPW_GiveItem_GameMode_C.SetCategoryVisibility");
		
		UBPW_GiveItem_GameMode_C_SetCategoryVisibility_Params params {};
		params.Category = Category;
		params.isCollapsed = isCollapsed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_GiveItem_GameMode.BPW_GiveItem_GameMode_C.OnSearchCreateResults
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        mTextSearch                                                (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UBPW_GiveItem_GameMode_C::OnSearchCreateResults(const class FText& mTextSearch)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_GiveItem_GameMode.BPW_GiveItem_GameMode_C.OnSearchCreateResults");
		
		UBPW_GiveItem_GameMode_C_OnSearchCreateResults_Params params {};
		params.mTextSearch = mTextSearch;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_GiveItem_GameMode.BPW_GiveItem_GameMode_C.GiveItems
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FItemAmount                                 Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UBPW_GiveItem_GameMode_C::GiveItems(const struct FItemAmount& Item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_GiveItem_GameMode.BPW_GiveItem_GameMode_C.GiveItems");
		
		UBPW_GiveItem_GameMode_C_GiveItems_Params params {};
		params.Item = Item;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_GiveItem_GameMode.BPW_GiveItem_GameMode_C.AddObjectsToCategory
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		E_GiveItemCategories                               Category                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<class UBP_GiveItemListObject_C*>            UncatgorizedObjects                                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<class UObject*>                             AllListObjects                                             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UBPW_GiveItem_GameMode_C::AddObjectsToCategory(E_GiveItemCategories Category, TArray<class UBP_GiveItemListObject_C*>* UncatgorizedObjects, TArray<class UObject*>* AllListObjects)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_GiveItem_GameMode.BPW_GiveItem_GameMode_C.AddObjectsToCategory");
		
		UBPW_GiveItem_GameMode_C_AddObjectsToCategory_Params params {};
		params.Category = Category;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (UncatgorizedObjects != nullptr)
			*UncatgorizedObjects = params.UncatgorizedObjects;
		if (AllListObjects != nullptr)
			*AllListObjects = params.AllListObjects;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_GiveItem_GameMode.BPW_GiveItem_GameMode_C.CreateCategories
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_GiveItem_GameMode_C::CreateCategories()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_GiveItem_GameMode.BPW_GiveItem_GameMode_C.CreateCategories");
		
		UBPW_GiveItem_GameMode_C_CreateCategories_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_GiveItem_GameMode.BPW_GiveItem_GameMode_C.PopulateItems
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_GiveItem_GameMode_C::PopulateItems()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_GiveItem_GameMode.BPW_GiveItem_GameMode_C.PopulateItems");
		
		UBPW_GiveItem_GameMode_C_PopulateItems_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_GiveItem_GameMode.BPW_GiveItem_GameMode_C.BndEvt__BPW_GiveItem_GameMode_mListOfItems_K2Node_ComponentBoundEvent_5_SimpleListItemEventDynamic__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_GiveItem_GameMode_C::BndEvt__BPW_GiveItem_GameMode_mListOfItems_K2Node_ComponentBoundEvent_5_SimpleListItemEventDynamic__DelegateSignature(class UObject* Item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_GiveItem_GameMode.BPW_GiveItem_GameMode_C.BndEvt__BPW_GiveItem_GameMode_mListOfItems_K2Node_ComponentBoundEvent_5_SimpleListItemEventDynamic__DelegateSignature");
		
		UBPW_GiveItem_GameMode_C_BndEvt__BPW_GiveItem_GameMode_mListOfItems_K2Node_ComponentBoundEvent_5_SimpleListItemEventDynamic__DelegateSignature_Params params {};
		params.Item = Item;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_GiveItem_GameMode.BPW_GiveItem_GameMode_C.BndEvt__BPW_GiveItem_GameMode_mSearchbar_K2Node_ComponentBoundEvent_2_OnTextComitted__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		ETextCommit                                        CommitMethod                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_GiveItem_GameMode_C::BndEvt__BPW_GiveItem_GameMode_mSearchbar_K2Node_ComponentBoundEvent_2_OnTextComitted__DelegateSignature(const class FText& Text, ETextCommit CommitMethod)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_GiveItem_GameMode.BPW_GiveItem_GameMode_C.BndEvt__BPW_GiveItem_GameMode_mSearchbar_K2Node_ComponentBoundEvent_2_OnTextComitted__DelegateSignature");
		
		UBPW_GiveItem_GameMode_C_BndEvt__BPW_GiveItem_GameMode_mSearchbar_K2Node_ComponentBoundEvent_2_OnTextComitted__DelegateSignature_Params params {};
		params.Text = Text;
		params.CommitMethod = CommitMethod;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_GiveItem_GameMode.BPW_GiveItem_GameMode_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UBPW_GiveItem_GameMode_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_GiveItem_GameMode.BPW_GiveItem_GameMode_C.Construct");
		
		UBPW_GiveItem_GameMode_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_GiveItem_GameMode.BPW_GiveItem_GameMode_C.BndEvt__BPW_GiveItem_GameMode_mSearchbar_K2Node_ComponentBoundEvent_4_OnTextChanged__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UBPW_GiveItem_GameMode_C::BndEvt__BPW_GiveItem_GameMode_mSearchbar_K2Node_ComponentBoundEvent_4_OnTextChanged__DelegateSignature(const class FText& Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_GiveItem_GameMode.BPW_GiveItem_GameMode_C.BndEvt__BPW_GiveItem_GameMode_mSearchbar_K2Node_ComponentBoundEvent_4_OnTextChanged__DelegateSignature");
		
		UBPW_GiveItem_GameMode_C_BndEvt__BPW_GiveItem_GameMode_mSearchbar_K2Node_ComponentBoundEvent_4_OnTextChanged__DelegateSignature_Params params {};
		params.Text = Text;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_GiveItem_GameMode.BPW_GiveItem_GameMode_C.ExecuteUbergraph_BPW_GiveItem_GameMode
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_GiveItem_GameMode_C::ExecuteUbergraph_BPW_GiveItem_GameMode(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_GiveItem_GameMode.BPW_GiveItem_GameMode_C.ExecuteUbergraph_BPW_GiveItem_GameMode");
		
		UBPW_GiveItem_GameMode_C_ExecuteUbergraph_BPW_GiveItem_GameMode_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPW_GiveItem_GameMode_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPW_GiveItem_GameMode_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BPW_GiveItem_GameMode.BPW_GiveItem_GameMode_C");
		return ptr;
	}

}


