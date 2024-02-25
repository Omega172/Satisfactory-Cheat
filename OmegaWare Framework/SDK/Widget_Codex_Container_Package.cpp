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
	 * 		Name   -> Function Widget_Codex_Container.Widget_Codex_Container_C.UpdateDirectory
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      itemDescriptor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_Codex_Container_C::UpdateDirectory(class UClass* itemDescriptor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_Codex_Container.Widget_Codex_Container_C.UpdateDirectory");
		
		UWidget_Codex_Container_C_UpdateDirectory_Params params {};
		params.itemDescriptor = itemDescriptor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_Codex_Container.Widget_Codex_Container_C.GetClassCategory
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class UClass*                                      itemDescriptor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<class UClass*>                              Category                                                   (Parm, OutParm)
	 * 		int32_t                                            CategoryIndex                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_Codex_Container_C::GetClassCategory(class UClass* itemDescriptor, TArray<class UClass*>* Category, int32_t* CategoryIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_Codex_Container.Widget_Codex_Container_C.GetClassCategory");
		
		UWidget_Codex_Container_C_GetClassCategory_Params params {};
		params.itemDescriptor = itemDescriptor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Category != nullptr)
			*Category = params.Category;
		if (CategoryIndex != nullptr)
			*CategoryIndex = params.CategoryIndex;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_Codex_Container.Widget_Codex_Container_C.PopulateSearchResults
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        InText                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UWidget_Codex_Container_C::PopulateSearchResults(const class FText& InText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_Codex_Container.Widget_Codex_Container_C.PopulateSearchResults");
		
		UWidget_Codex_Container_C_PopulateSearchResults_Params params {};
		params.InText = InText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_Codex_Container.Widget_Codex_Container_C.UpdateItemInfo
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      product                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               UpdateDirectory                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_Codex_Container_C::UpdateItemInfo(class UClass* product, bool UpdateDirectory)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_Codex_Container.Widget_Codex_Container_C.UpdateItemInfo");
		
		UWidget_Codex_Container_C_UpdateItemInfo_Params params {};
		params.product = product;
		params.UpdateDirectory = UpdateDirectory;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_Codex_Container.Widget_Codex_Container_C.SetAllItemsAndBuildings
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_Codex_Container_C::SetAllItemsAndBuildings()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_Codex_Container.Widget_Codex_Container_C.SetAllItemsAndBuildings");
		
		UWidget_Codex_Container_C_SetAllItemsAndBuildings_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_Codex_Container.Widget_Codex_Container_C.GenerateReceipes
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<class UClass*>                              InRecipes                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UWidget_Codex_Container_C::GenerateReceipes(TArray<class UClass*>* InRecipes)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_Codex_Container.Widget_Codex_Container_C.GenerateReceipes");
		
		UWidget_Codex_Container_C_GenerateReceipes_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InRecipes != nullptr)
			*InRecipes = params.InRecipes;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_Codex_Container.Widget_Codex_Container_C.SelectButtonWithMessage
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      InMessage                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_Codex_Container_C::SelectButtonWithMessage(class UClass* InMessage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_Codex_Container.Widget_Codex_Container_C.SelectButtonWithMessage");
		
		UWidget_Codex_Container_C_SelectButtonWithMessage_Params params {};
		params.InMessage = InMessage;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_Codex_Container.Widget_Codex_Container_C.CheckShouldOpenMessage
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_Codex_Container_C::CheckShouldOpenMessage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_Codex_Container.Widget_Codex_Container_C.CheckShouldOpenMessage");
		
		UWidget_Codex_Container_C_CheckShouldOpenMessage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_Codex_Container.Widget_Codex_Container_C.PopulateList
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_Codex_Container_C::PopulateList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_Codex_Container.Widget_Codex_Container_C.PopulateList");
		
		UWidget_Codex_Container_C_PopulateList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_Codex_Container.Widget_Codex_Container_C.GetActiveTabFeedback
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_Codex_Container_C::GetActiveTabFeedback()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_Codex_Container.Widget_Codex_Container_C.GetActiveTabFeedback");
		
		UWidget_Codex_Container_C_GetActiveTabFeedback_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_Codex_Container.Widget_Codex_Container_C.GetMessageVisiblity
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	ESlateVisibility UWidget_Codex_Container_C::GetMessageVisiblity()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_Codex_Container.Widget_Codex_Container_C.GetMessageVisiblity");
		
		UWidget_Codex_Container_C_GetMessageVisiblity_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_Codex_Container.Widget_Codex_Container_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UWidget_Codex_Container_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_Codex_Container.Widget_Codex_Container_C.Construct");
		
		UWidget_Codex_Container_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_Codex_Container.Widget_Codex_Container_C.CloseCodex
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_Codex_Container_C::CloseCodex()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_Codex_Container.Widget_Codex_Container_C.CloseCodex");
		
		UWidget_Codex_Container_C_CloseCodex_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_Codex_Container.Widget_Codex_Container_C.MarkAllAsRead
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_Codex_Container_C::MarkAllAsRead()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_Codex_Container.Widget_Codex_Container_C.MarkAllAsRead");
		
		UWidget_Codex_Container_C_MarkAllAsRead_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_Codex_Container.Widget_Codex_Container_C.OnRecipeButtonClicked
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UWidget_ListButton_C*                        ListButton                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_Codex_Container_C::OnRecipeButtonClicked(int32_t Index, class UWidget_ListButton_C* ListButton)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_Codex_Container.Widget_Codex_Container_C.OnRecipeButtonClicked");
		
		UWidget_Codex_Container_C_OnRecipeButtonClicked_Params params {};
		params.Index = Index;
		params.ListButton = ListButton;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_Codex_Container.Widget_Codex_Container_C.BndEvt__mSearchBar_K2Node_ComponentBoundEvent_1_OnTextChanged__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UWidget_Codex_Container_C::BndEvt__mSearchBar_K2Node_ComponentBoundEvent_1_OnTextChanged__DelegateSignature(const class FText& Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_Codex_Container.Widget_Codex_Container_C.BndEvt__mSearchBar_K2Node_ComponentBoundEvent_1_OnTextChanged__DelegateSignature");
		
		UWidget_Codex_Container_C_BndEvt__mSearchBar_K2Node_ComponentBoundEvent_1_OnTextChanged__DelegateSignature_Params params {};
		params.Text = Text;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_Codex_Container.Widget_Codex_Container_C.OnSearchResultClicked
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UWidget_ListButton_C*                        ListButton                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_Codex_Container_C::OnSearchResultClicked(int32_t Index, class UWidget_ListButton_C* ListButton)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_Codex_Container.Widget_Codex_Container_C.OnSearchResultClicked");
		
		UWidget_Codex_Container_C_OnSearchResultClicked_Params params {};
		params.Index = Index;
		params.ListButton = ListButton;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_Codex_Container.Widget_Codex_Container_C.BndEvt__Widget_ListButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UWidget_ListButton_C*                        ListButton                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_Codex_Container_C::BndEvt__Widget_ListButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature(int32_t Index, class UWidget_ListButton_C* ListButton)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_Codex_Container.Widget_Codex_Container_C.BndEvt__Widget_ListButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature");
		
		UWidget_Codex_Container_C_BndEvt__Widget_ListButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature_Params params {};
		params.Index = Index;
		params.ListButton = ListButton;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_Codex_Container.Widget_Codex_Container_C.BndEvt__Widget_ListButton_C_0_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UWidget_ListButton_C*                        ListButton                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_Codex_Container_C::BndEvt__Widget_ListButton_C_0_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature(int32_t Index, class UWidget_ListButton_C* ListButton)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_Codex_Container.Widget_Codex_Container_C.BndEvt__Widget_ListButton_C_0_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature");
		
		UWidget_Codex_Container_C_BndEvt__Widget_ListButton_C_0_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature_Params params {};
		params.Index = Index;
		params.ListButton = ListButton;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_Codex_Container.Widget_Codex_Container_C.BndEvt__Widget_ListButton_C_1_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UWidget_ListButton_C*                        ListButton                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_Codex_Container_C::BndEvt__Widget_ListButton_C_1_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature(int32_t Index, class UWidget_ListButton_C* ListButton)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_Codex_Container.Widget_Codex_Container_C.BndEvt__Widget_ListButton_C_1_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature");
		
		UWidget_Codex_Container_C_BndEvt__Widget_ListButton_C_1_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature_Params params {};
		params.Index = Index;
		params.ListButton = ListButton;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_Codex_Container.Widget_Codex_Container_C.BndEvt__mCategoryVehicles_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UWidget_ListButton_C*                        ListButton                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_Codex_Container_C::BndEvt__mCategoryVehicles_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature(int32_t Index, class UWidget_ListButton_C* ListButton)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_Codex_Container.Widget_Codex_Container_C.BndEvt__mCategoryVehicles_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature");
		
		UWidget_Codex_Container_C_BndEvt__mCategoryVehicles_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature_Params params {};
		params.Index = Index;
		params.ListButton = ListButton;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_Codex_Container.Widget_Codex_Container_C.BndEvt__BPW_DarkMode_K2Node_ComponentBoundEvent_6_OnTabButtonClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            ButtonIndex                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_Codex_Container_C::BndEvt__BPW_DarkMode_K2Node_ComponentBoundEvent_6_OnTabButtonClicked__DelegateSignature(int32_t ButtonIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_Codex_Container.Widget_Codex_Container_C.BndEvt__BPW_DarkMode_K2Node_ComponentBoundEvent_6_OnTabButtonClicked__DelegateSignature");
		
		UWidget_Codex_Container_C_BndEvt__BPW_DarkMode_K2Node_ComponentBoundEvent_6_OnTabButtonClicked__DelegateSignature_Params params {};
		params.ButtonIndex = ButtonIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_Codex_Container.Widget_Codex_Container_C.ExecuteUbergraph_Widget_Codex_Container
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_Codex_Container_C::ExecuteUbergraph_Widget_Codex_Container(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_Codex_Container.Widget_Codex_Container_C.ExecuteUbergraph_Widget_Codex_Container");
		
		UWidget_Codex_Container_C_ExecuteUbergraph_Widget_Codex_Container_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWidget_Codex_Container_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWidget_Codex_Container_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_Codex_Container.Widget_Codex_Container_C");
		return ptr;
	}

}


