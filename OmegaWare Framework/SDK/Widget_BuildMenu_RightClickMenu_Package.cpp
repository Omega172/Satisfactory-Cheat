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
	 * 		Name   -> Function Widget_BuildMenu_RightClickMenu.Widget_BuildMenu_RightClickMenu_C.TryGetExisitingShoppingListObject
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_BuildMenu_RightClickMenu_C::TryGetExisitingShoppingListObject()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_BuildMenu_RightClickMenu.Widget_BuildMenu_RightClickMenu_C.TryGetExisitingShoppingListObject");
		
		UWidget_BuildMenu_RightClickMenu_C_TryGetExisitingShoppingListObject_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_BuildMenu_RightClickMenu.Widget_BuildMenu_RightClickMenu_C.TryCreateMissingShoppingListObject
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_BuildMenu_RightClickMenu_C::TryCreateMissingShoppingListObject()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_BuildMenu_RightClickMenu.Widget_BuildMenu_RightClickMenu_C.TryCreateMissingShoppingListObject");
		
		UWidget_BuildMenu_RightClickMenu_C_TryCreateMissingShoppingListObject_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_BuildMenu_RightClickMenu.Widget_BuildMenu_RightClickMenu_C.GetAmountToAddOrRemove
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	int32_t UWidget_BuildMenu_RightClickMenu_C::GetAmountToAddOrRemove()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_BuildMenu_RightClickMenu.Widget_BuildMenu_RightClickMenu_C.GetAmountToAddOrRemove");
		
		UWidget_BuildMenu_RightClickMenu_C_GetAmountToAddOrRemove_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_BuildMenu_RightClickMenu.Widget_BuildMenu_RightClickMenu_C.UpdateRemoveFromTodoListVisibility
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_BuildMenu_RightClickMenu_C::UpdateRemoveFromTodoListVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_BuildMenu_RightClickMenu.Widget_BuildMenu_RightClickMenu_C.UpdateRemoveFromTodoListVisibility");
		
		UWidget_BuildMenu_RightClickMenu_C_UpdateRemoveFromTodoListVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_BuildMenu_RightClickMenu.Widget_BuildMenu_RightClickMenu_C.OnKeyUp
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FKeyEvent                                   InKeyEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	struct FEventReply UWidget_BuildMenu_RightClickMenu_C::OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_BuildMenu_RightClickMenu.Widget_BuildMenu_RightClickMenu_C.OnKeyUp");
		
		UWidget_BuildMenu_RightClickMenu_C_OnKeyUp_Params params {};
		params.MyGeometry = MyGeometry;
		params.InKeyEvent = InKeyEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_BuildMenu_RightClickMenu.Widget_BuildMenu_RightClickMenu_C.OnKeyDown
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FKeyEvent                                   InKeyEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	struct FEventReply UWidget_BuildMenu_RightClickMenu_C::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_BuildMenu_RightClickMenu.Widget_BuildMenu_RightClickMenu_C.OnKeyDown");
		
		UWidget_BuildMenu_RightClickMenu_C_OnKeyDown_Params params {};
		params.MyGeometry = MyGeometry;
		params.InKeyEvent = InKeyEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_BuildMenu_RightClickMenu.Widget_BuildMenu_RightClickMenu_C.GetRemoveItemButtonVisibility
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	ESlateVisibility UWidget_BuildMenu_RightClickMenu_C::GetRemoveItemButtonVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_BuildMenu_RightClickMenu.Widget_BuildMenu_RightClickMenu_C.GetRemoveItemButtonVisibility");
		
		UWidget_BuildMenu_RightClickMenu_C_GetRemoveItemButtonVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_BuildMenu_RightClickMenu.Widget_BuildMenu_RightClickMenu_C.GetAmount
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		int32_t                                            NumberRecipes                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_BuildMenu_RightClickMenu_C::GetAmount(int32_t* NumberRecipes)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_BuildMenu_RightClickMenu.Widget_BuildMenu_RightClickMenu_C.GetAmount");
		
		UWidget_BuildMenu_RightClickMenu_C_GetAmount_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NumberRecipes != nullptr)
			*NumberRecipes = params.NumberRecipes;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_BuildMenu_RightClickMenu.Widget_BuildMenu_RightClickMenu_C.GetNumberRecipesInShoppingList
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	class FText UWidget_BuildMenu_RightClickMenu_C::GetNumberRecipesInShoppingList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_BuildMenu_RightClickMenu.Widget_BuildMenu_RightClickMenu_C.GetNumberRecipesInShoppingList");
		
		UWidget_BuildMenu_RightClickMenu_C_GetNumberRecipesInShoppingList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_BuildMenu_RightClickMenu.Widget_BuildMenu_RightClickMenu_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UWidget_BuildMenu_RightClickMenu_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_BuildMenu_RightClickMenu.Widget_BuildMenu_RightClickMenu_C.Construct");
		
		UWidget_BuildMenu_RightClickMenu_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_BuildMenu_RightClickMenu.Widget_BuildMenu_RightClickMenu_C.BndEvt__mAddToTodolistButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UWidget_BuildMenu_RightClickMenu_C::BndEvt__mAddToTodolistButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_BuildMenu_RightClickMenu.Widget_BuildMenu_RightClickMenu_C.BndEvt__mAddToTodolistButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature");
		
		UWidget_BuildMenu_RightClickMenu_C_BndEvt__mAddToTodolistButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_BuildMenu_RightClickMenu.Widget_BuildMenu_RightClickMenu_C.BndEvt__mRemoveFromTodoList_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UWidget_BuildMenu_RightClickMenu_C::BndEvt__mRemoveFromTodoList_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_BuildMenu_RightClickMenu.Widget_BuildMenu_RightClickMenu_C.BndEvt__mRemoveFromTodoList_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature");
		
		UWidget_BuildMenu_RightClickMenu_C_BndEvt__mRemoveFromTodoList_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_BuildMenu_RightClickMenu.Widget_BuildMenu_RightClickMenu_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_BuildMenu_RightClickMenu_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_BuildMenu_RightClickMenu.Widget_BuildMenu_RightClickMenu_C.PreConstruct");
		
		UWidget_BuildMenu_RightClickMenu_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_BuildMenu_RightClickMenu.Widget_BuildMenu_RightClickMenu_C.OnShoppingListObjectRemoved
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UFGShoppingListObject*                       shoppingListObject                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_BuildMenu_RightClickMenu_C::OnShoppingListObjectRemoved(class UFGShoppingListObject* shoppingListObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_BuildMenu_RightClickMenu.Widget_BuildMenu_RightClickMenu_C.OnShoppingListObjectRemoved");
		
		UWidget_BuildMenu_RightClickMenu_C_OnShoppingListObjectRemoved_Params params {};
		params.shoppingListObject = shoppingListObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_BuildMenu_RightClickMenu.Widget_BuildMenu_RightClickMenu_C.ExecuteUbergraph_Widget_BuildMenu_RightClickMenu
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_BuildMenu_RightClickMenu_C::ExecuteUbergraph_Widget_BuildMenu_RightClickMenu(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_BuildMenu_RightClickMenu.Widget_BuildMenu_RightClickMenu_C.ExecuteUbergraph_Widget_BuildMenu_RightClickMenu");
		
		UWidget_BuildMenu_RightClickMenu_C_ExecuteUbergraph_Widget_BuildMenu_RightClickMenu_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_BuildMenu_RightClickMenu.Widget_BuildMenu_RightClickMenu_C.UpdateWindowWidgetOffset__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_BuildMenu_RightClickMenu_C::UpdateWindowWidgetOffset__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_BuildMenu_RightClickMenu.Widget_BuildMenu_RightClickMenu_C.UpdateWindowWidgetOffset__DelegateSignature");
		
		UWidget_BuildMenu_RightClickMenu_C_UpdateWindowWidgetOffset__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWidget_BuildMenu_RightClickMenu_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWidget_BuildMenu_RightClickMenu_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_BuildMenu_RightClickMenu.Widget_BuildMenu_RightClickMenu_C");
		return ptr;
	}

}


