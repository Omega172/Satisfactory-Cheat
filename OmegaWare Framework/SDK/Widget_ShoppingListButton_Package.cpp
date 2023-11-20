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
	 * 		Name   -> Function Widget_ShoppingListButton.Widget_ShoppingListButton_C.CheckIfShoppingListObjectIsRelevant
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UFGShoppingListObject*                       InShoppingListObject                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsRelevant                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_ShoppingListButton_C::CheckIfShoppingListObjectIsRelevant(class UFGShoppingListObject* InShoppingListObject, bool* IsRelevant)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_ShoppingListButton.Widget_ShoppingListButton_C.CheckIfShoppingListObjectIsRelevant");
		
		UWidget_ShoppingListButton_C_CheckIfShoppingListObjectIsRelevant_Params params {};
		params.InShoppingListObject = InShoppingListObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsRelevant != nullptr)
			*IsRelevant = params.IsRelevant;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_ShoppingListButton.Widget_ShoppingListButton_C.PlaySFXOnClick
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_ShoppingListButton_C::PlaySFXOnClick()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_ShoppingListButton.Widget_ShoppingListButton_C.PlaySFXOnClick");
		
		UWidget_ShoppingListButton_C_PlaySFXOnClick_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_ShoppingListButton.Widget_ShoppingListButton_C.SetShoppingListObjectFromObject
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     ShoppingListDataObject                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_ShoppingListButton_C::SetShoppingListObjectFromObject(class UObject* ShoppingListDataObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_ShoppingListButton.Widget_ShoppingListButton_C.SetShoppingListObjectFromObject");
		
		UWidget_ShoppingListButton_C_SetShoppingListObjectFromObject_Params params {};
		params.ShoppingListDataObject = ShoppingListDataObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_ShoppingListButton.Widget_ShoppingListButton_C.GetAmount
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	int32_t UWidget_ShoppingListButton_C::GetAmount()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_ShoppingListButton.Widget_ShoppingListButton_C.GetAmount");
		
		UWidget_ShoppingListButton_C_GetAmount_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_ShoppingListButton.Widget_ShoppingListButton_C.TrySetupMissingShoppingListObject
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_ShoppingListButton_C::TrySetupMissingShoppingListObject()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_ShoppingListButton.Widget_ShoppingListButton_C.TrySetupMissingShoppingListObject");
		
		UWidget_ShoppingListButton_C_TrySetupMissingShoppingListObject_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_ShoppingListButton.Widget_ShoppingListButton_C.SetShoppingListObjectFromClass
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      ShoppingListDataClass                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_ShoppingListButton_C::SetShoppingListObjectFromClass(class UClass* ShoppingListDataClass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_ShoppingListButton.Widget_ShoppingListButton_C.SetShoppingListObjectFromClass");
		
		UWidget_ShoppingListButton_C_SetShoppingListObjectFromClass_Params params {};
		params.ShoppingListDataClass = ShoppingListDataClass;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_ShoppingListButton.Widget_ShoppingListButton_C.UpdateShoppinglistVisibility
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_ShoppingListButton_C::UpdateShoppinglistVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_ShoppingListButton.Widget_ShoppingListButton_C.UpdateShoppinglistVisibility");
		
		UWidget_ShoppingListButton_C_UpdateShoppinglistVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_ShoppingListButton.Widget_ShoppingListButton_C.OnUnhoverShoppingList
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_ShoppingListButton_C::OnUnhoverShoppingList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_ShoppingListButton.Widget_ShoppingListButton_C.OnUnhoverShoppingList");
		
		UWidget_ShoppingListButton_C_OnUnhoverShoppingList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_ShoppingListButton.Widget_ShoppingListButton_C.OnHoverShoppingList
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_ShoppingListButton_C::OnHoverShoppingList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_ShoppingListButton.Widget_ShoppingListButton_C.OnHoverShoppingList");
		
		UWidget_ShoppingListButton_C_OnHoverShoppingList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_ShoppingListButton.Widget_ShoppingListButton_C.DoesImplementAndIsValid
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class APlayerState*                                PlayerState                                                (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	bool UWidget_ShoppingListButton_C::DoesImplementAndIsValid(class APlayerState** PlayerState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_ShoppingListButton.Widget_ShoppingListButton_C.DoesImplementAndIsValid");
		
		UWidget_ShoppingListButton_C_DoesImplementAndIsValid_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PlayerState != nullptr)
			*PlayerState = params.PlayerState;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_ShoppingListButton.Widget_ShoppingListButton_C.OnKeyDown
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FKeyEvent                                   InKeyEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	struct FEventReply UWidget_ShoppingListButton_C::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_ShoppingListButton.Widget_ShoppingListButton_C.OnKeyDown");
		
		UWidget_ShoppingListButton_C_OnKeyDown_Params params {};
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
	 * 		Name   -> Function Widget_ShoppingListButton.Widget_ShoppingListButton_C.GetInputNumberTooltip
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	class UWidget* UWidget_ShoppingListButton_C::GetInputNumberTooltip()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_ShoppingListButton.Widget_ShoppingListButton_C.GetInputNumberTooltip");
		
		UWidget_ShoppingListButton_C_GetInputNumberTooltip_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_ShoppingListButton.Widget_ShoppingListButton_C.GetButtonTooltip
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	class UWidget* UWidget_ShoppingListButton_C::GetButtonTooltip()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_ShoppingListButton.Widget_ShoppingListButton_C.GetButtonTooltip");
		
		UWidget_ShoppingListButton_C_GetButtonTooltip_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_ShoppingListButton.Widget_ShoppingListButton_C.Set Additional Info Visibility
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsVisible                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_ShoppingListButton_C::SetAdditionalInfoVisibility(bool IsVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_ShoppingListButton.Widget_ShoppingListButton_C.Set Additional Info Visibility");
		
		UWidget_ShoppingListButton_C_SetAdditionalInfoVisibility_Params params {};
		params.IsVisible = IsVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_ShoppingListButton.Widget_ShoppingListButton_C.UpdateAmountText
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_ShoppingListButton_C::UpdateAmountText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_ShoppingListButton.Widget_ShoppingListButton_C.UpdateAmountText");
		
		UWidget_ShoppingListButton_C_UpdateAmountText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_ShoppingListButton.Widget_ShoppingListButton_C.BndEvt__mInputNumberToAdd_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature
	 * 		Flags  -> (HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        Text                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		ETextCommit                                        CommitMethod                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_ShoppingListButton_C::BndEvt__mInputNumberToAdd_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature(const class FText& Text, ETextCommit CommitMethod)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_ShoppingListButton.Widget_ShoppingListButton_C.BndEvt__mInputNumberToAdd_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature");
		
		UWidget_ShoppingListButton_C_BndEvt__mInputNumberToAdd_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature_Params params {};
		params.Text = Text;
		params.CommitMethod = CommitMethod;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_ShoppingListButton.Widget_ShoppingListButton_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UWidget_ShoppingListButton_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_ShoppingListButton.Widget_ShoppingListButton_C.Construct");
		
		UWidget_ShoppingListButton_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_ShoppingListButton.Widget_ShoppingListButton_C.Event Update Shopping List
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UFGShoppingListObject*                       shoppingListObject                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_ShoppingListButton_C::EventUpdateShoppingList(class UFGShoppingListObject* shoppingListObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_ShoppingListButton.Widget_ShoppingListButton_C.Event Update Shopping List");
		
		UWidget_ShoppingListButton_C_EventUpdateShoppingList_Params params {};
		params.shoppingListObject = shoppingListObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_ShoppingListButton.Widget_ShoppingListButton_C.Destruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UWidget_ShoppingListButton_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_ShoppingListButton.Widget_ShoppingListButton_C.Destruct");
		
		UWidget_ShoppingListButton_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_ShoppingListButton.Widget_ShoppingListButton_C.BndEvt__Remove1_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UWidget_ShoppingListButton_C::BndEvt__Remove1_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_ShoppingListButton.Widget_ShoppingListButton_C.BndEvt__Remove1_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");
		
		UWidget_ShoppingListButton_C_BndEvt__Remove1_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_ShoppingListButton.Widget_ShoppingListButton_C.BndEvt__Widget_ShoppingListButton_mInputNumberToAdd_K2Node_ComponentBoundEvent_3_OnEditableTextBoxChangedEvent__DelegateSignature
	 * 		Flags  -> (HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        Text                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UWidget_ShoppingListButton_C::BndEvt__Widget_ShoppingListButton_mInputNumberToAdd_K2Node_ComponentBoundEvent_3_OnEditableTextBoxChangedEvent__DelegateSignature(const class FText& Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_ShoppingListButton.Widget_ShoppingListButton_C.BndEvt__Widget_ShoppingListButton_mInputNumberToAdd_K2Node_ComponentBoundEvent_3_OnEditableTextBoxChangedEvent__DelegateSignature");
		
		UWidget_ShoppingListButton_C_BndEvt__Widget_ShoppingListButton_mInputNumberToAdd_K2Node_ComponentBoundEvent_3_OnEditableTextBoxChangedEvent__DelegateSignature_Params params {};
		params.Text = Text;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_ShoppingListButton.Widget_ShoppingListButton_C.BndEvt__Add1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UWidget_ShoppingListButton_C::BndEvt__Add1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_ShoppingListButton.Widget_ShoppingListButton_C.BndEvt__Add1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UWidget_ShoppingListButton_C_BndEvt__Add1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_ShoppingListButton.Widget_ShoppingListButton_C.OnShoppingListObjectRemoved
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UFGShoppingListObject*                       shoppingListObject                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_ShoppingListButton_C::OnShoppingListObjectRemoved(class UFGShoppingListObject* shoppingListObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_ShoppingListButton.Widget_ShoppingListButton_C.OnShoppingListObjectRemoved");
		
		UWidget_ShoppingListButton_C_OnShoppingListObjectRemoved_Params params {};
		params.shoppingListObject = shoppingListObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_ShoppingListButton.Widget_ShoppingListButton_C.ExecuteUbergraph_Widget_ShoppingListButton
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_ShoppingListButton_C::ExecuteUbergraph_Widget_ShoppingListButton(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_ShoppingListButton.Widget_ShoppingListButton_C.ExecuteUbergraph_Widget_ShoppingListButton");
		
		UWidget_ShoppingListButton_C_ExecuteUbergraph_Widget_ShoppingListButton_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_ShoppingListButton.Widget_ShoppingListButton_C.OnShortcutRemapClicked__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            shortcutIndex                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UClass*                                      newRecipe                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_ShoppingListButton_C::OnShortcutRemapClicked__DelegateSignature(int32_t shortcutIndex, class UClass* newRecipe)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_ShoppingListButton.Widget_ShoppingListButton_C.OnShortcutRemapClicked__DelegateSignature");
		
		UWidget_ShoppingListButton_C_OnShortcutRemapClicked__DelegateSignature_Params params {};
		params.shortcutIndex = shortcutIndex;
		params.newRecipe = newRecipe;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWidget_ShoppingListButton_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWidget_ShoppingListButton_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_ShoppingListButton.Widget_ShoppingListButton_C");
		return ptr;
	}

}


