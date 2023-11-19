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
	 * 		Name   -> Function Widget_ShoppingList.Widget_ShoppingList_C.UpdateIngredientList
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_ShoppingList_C::UpdateIngredientList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_ShoppingList.Widget_ShoppingList_C.UpdateIngredientList");
		
		UWidget_ShoppingList_C_UpdateIngredientList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_ShoppingList.Widget_ShoppingList_C.IsProductListEmpty
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	bool UWidget_ShoppingList_C::IsProductListEmpty()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_ShoppingList.Widget_ShoppingList_C.IsProductListEmpty");
		
		UWidget_ShoppingList_C_IsProductListEmpty_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_ShoppingList.Widget_ShoppingList_C.UpdateProductList
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_ShoppingList_C::UpdateProductList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_ShoppingList.Widget_ShoppingList_C.UpdateProductList");
		
		UWidget_ShoppingList_C_UpdateProductList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_ShoppingList.Widget_ShoppingList_C.UpdateSettings
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_ShoppingList_C::UpdateSettings()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_ShoppingList.Widget_ShoppingList_C.UpdateSettings");
		
		UWidget_ShoppingList_C_UpdateSettings_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_ShoppingList.Widget_ShoppingList_C.InitSettings
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_ShoppingList_C::InitSettings()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_ShoppingList.Widget_ShoppingList_C.InitSettings");
		
		UWidget_ShoppingList_C_InitSettings_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_ShoppingList.Widget_ShoppingList_C.ConvertSize
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		double                                             In                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               FromSliderToSizeBox                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             Out                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_ShoppingList_C::ConvertSize(double In, bool FromSliderToSizeBox, double* Out)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_ShoppingList.Widget_ShoppingList_C.ConvertSize");
		
		UWidget_ShoppingList_C_ConvertSize_Params params {};
		params.In = In;
		params.FromSliderToSizeBox = FromSliderToSizeBox;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Out != nullptr)
			*Out = params.Out;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_ShoppingList.Widget_ShoppingList_C.CharCountLimiter
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class FText                                        InText                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		bool                                               IsOverLimit                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	class FText UWidget_ShoppingList_C::CharCountLimiter(const class FText& InText, bool* IsOverLimit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_ShoppingList.Widget_ShoppingList_C.CharCountLimiter");
		
		UWidget_ShoppingList_C_CharCountLimiter_Params params {};
		params.InText = InText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsOverLimit != nullptr)
			*IsOverLimit = params.IsOverLimit;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_ShoppingList.Widget_ShoppingList_C.AreRecipesVisible
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	bool UWidget_ShoppingList_C::AreRecipesVisible()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_ShoppingList.Widget_ShoppingList_C.AreRecipesVisible");
		
		UWidget_ShoppingList_C_AreRecipesVisible_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_ShoppingList.Widget_ShoppingList_C.UpdatePublicNotes
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_ShoppingList_C::UpdatePublicNotes()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_ShoppingList.Widget_ShoppingList_C.UpdatePublicNotes");
		
		UWidget_ShoppingList_C_UpdatePublicNotes_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_ShoppingList.Widget_ShoppingList_C.UpdatePrivateNotes
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_ShoppingList_C::UpdatePrivateNotes()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_ShoppingList.Widget_ShoppingList_C.UpdatePrivateNotes");
		
		UWidget_ShoppingList_C_UpdatePrivateNotes_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_ShoppingList.Widget_ShoppingList_C.ParseNotes
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class FString                                      InText                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FText                                        OutText                                                    (Parm, OutParm)
	 */
	void UWidget_ShoppingList_C::ParseNotes(const class FString& InText, class FText* OutText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_ShoppingList.Widget_ShoppingList_C.ParseNotes");
		
		UWidget_ShoppingList_C_ParseNotes_Params params {};
		params.InText = InText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutText != nullptr)
			*OutText = params.OutText;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_ShoppingList.Widget_ShoppingList_C.UpdateContentVisibility
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_ShoppingList_C::UpdateContentVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_ShoppingList.Widget_ShoppingList_C.UpdateContentVisibility");
		
		UWidget_ShoppingList_C_UpdateContentVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_ShoppingList.Widget_ShoppingList_C.Show Hide Open Button
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Show                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_ShoppingList_C::ShowHideOpenButton(bool Show)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_ShoppingList.Widget_ShoppingList_C.Show Hide Open Button");
		
		UWidget_ShoppingList_C_ShowHideOpenButton_Params params {};
		params.Show = Show;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_ShoppingList.Widget_ShoppingList_C.SetTodolistContentStyle
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsTodoListOpen                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_ShoppingList_C::SetTodolistContentStyle(bool IsTodoListOpen)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_ShoppingList.Widget_ShoppingList_C.SetTodolistContentStyle");
		
		UWidget_ShoppingList_C_SetTodolistContentStyle_Params params {};
		params.IsTodoListOpen = IsTodoListOpen;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_ShoppingList.Widget_ShoppingList_C.SetClearListButtonVisibility
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_ShoppingList_C::SetClearListButtonVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_ShoppingList.Widget_ShoppingList_C.SetClearListButtonVisibility");
		
		UWidget_ShoppingList_C_SetClearListButtonVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_ShoppingList.Widget_ShoppingList_C.SetIsOpen
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsOpen                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_ShoppingList_C::SetIsOpen(bool IsOpen)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_ShoppingList.Widget_ShoppingList_C.SetIsOpen");
		
		UWidget_ShoppingList_C_SetIsOpen_Params params {};
		params.IsOpen = IsOpen;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_ShoppingList.Widget_ShoppingList_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UWidget_ShoppingList_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_ShoppingList.Widget_ShoppingList_C.Construct");
		
		UWidget_ShoppingList_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_ShoppingList.Widget_ShoppingList_C.UpdateShoppingListRows
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_ShoppingList_C::UpdateShoppingListRows()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_ShoppingList.Widget_ShoppingList_C.UpdateShoppingListRows");
		
		UWidget_ShoppingList_C_UpdateShoppingListRows_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_ShoppingList.Widget_ShoppingList_C.BndEvt__Widget_StandardButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UWidget_ShoppingList_C::BndEvt__Widget_StandardButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_ShoppingList.Widget_ShoppingList_C.BndEvt__Widget_StandardButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");
		
		UWidget_ShoppingList_C_BndEvt__Widget_StandardButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_ShoppingList.Widget_ShoppingList_C.Event On Update Shopping List
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_ShoppingList_C::EventOnUpdateShoppingList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_ShoppingList.Widget_ShoppingList_C.Event On Update Shopping List");
		
		UWidget_ShoppingList_C_EventOnUpdateShoppingList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_ShoppingList.Widget_ShoppingList_C.BndEvt__Button_87_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UWidget_ShoppingList_C::BndEvt__Button_87_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_ShoppingList.Widget_ShoppingList_C.BndEvt__Button_87_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");
		
		UWidget_ShoppingList_C_BndEvt__Button_87_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_ShoppingList.Widget_ShoppingList_C.BndEvt__Button_87_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UWidget_ShoppingList_C::BndEvt__Button_87_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_ShoppingList.Widget_ShoppingList_C.BndEvt__Button_87_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");
		
		UWidget_ShoppingList_C_BndEvt__Button_87_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_ShoppingList.Widget_ShoppingList_C.BndEvt__Button_87_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UWidget_ShoppingList_C::BndEvt__Button_87_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_ShoppingList.Widget_ShoppingList_C.BndEvt__Button_87_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature");
		
		UWidget_ShoppingList_C_BndEvt__Button_87_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_ShoppingList.Widget_ShoppingList_C.BndEvt__Widget_TitleButton_DarkMode_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UWidget_ShoppingList_C::BndEvt__Widget_TitleButton_DarkMode_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_ShoppingList.Widget_ShoppingList_C.BndEvt__Widget_TitleButton_DarkMode_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature");
		
		UWidget_ShoppingList_C_BndEvt__Widget_TitleButton_DarkMode_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_ShoppingList.Widget_ShoppingList_C.BndEvt__Button_911_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UWidget_ShoppingList_C::BndEvt__Button_911_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_ShoppingList.Widget_ShoppingList_C.BndEvt__Button_911_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature");
		
		UWidget_ShoppingList_C_BndEvt__Button_911_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_ShoppingList.Widget_ShoppingList_C.BndEvt__Button_911_K2Node_ComponentBoundEvent_12_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UWidget_ShoppingList_C::BndEvt__Button_911_K2Node_ComponentBoundEvent_12_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_ShoppingList.Widget_ShoppingList_C.BndEvt__Button_911_K2Node_ComponentBoundEvent_12_OnButtonHoverEvent__DelegateSignature");
		
		UWidget_ShoppingList_C_BndEvt__Button_911_K2Node_ComponentBoundEvent_12_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_ShoppingList.Widget_ShoppingList_C.BndEvt__Button_911_K2Node_ComponentBoundEvent_13_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UWidget_ShoppingList_C::BndEvt__Button_911_K2Node_ComponentBoundEvent_13_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_ShoppingList.Widget_ShoppingList_C.BndEvt__Button_911_K2Node_ComponentBoundEvent_13_OnButtonHoverEvent__DelegateSignature");
		
		UWidget_ShoppingList_C_BndEvt__Button_911_K2Node_ComponentBoundEvent_13_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_ShoppingList.Widget_ShoppingList_C.BndEvt__Slider_77_K2Node_ComponentBoundEvent_15_OnFloatValueChangedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_ShoppingList_C::BndEvt__Slider_77_K2Node_ComponentBoundEvent_15_OnFloatValueChangedEvent__DelegateSignature(float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_ShoppingList.Widget_ShoppingList_C.BndEvt__Slider_77_K2Node_ComponentBoundEvent_15_OnFloatValueChangedEvent__DelegateSignature");
		
		UWidget_ShoppingList_C_BndEvt__Slider_77_K2Node_ComponentBoundEvent_15_OnFloatValueChangedEvent__DelegateSignature_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_ShoppingList.Widget_ShoppingList_C.BndEvt__Slider_77_K2Node_ComponentBoundEvent_16_OnMouseCaptureBeginEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UWidget_ShoppingList_C::BndEvt__Slider_77_K2Node_ComponentBoundEvent_16_OnMouseCaptureBeginEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_ShoppingList.Widget_ShoppingList_C.BndEvt__Slider_77_K2Node_ComponentBoundEvent_16_OnMouseCaptureBeginEvent__DelegateSignature");
		
		UWidget_ShoppingList_C_BndEvt__Slider_77_K2Node_ComponentBoundEvent_16_OnMouseCaptureBeginEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_ShoppingList.Widget_ShoppingList_C.BndEvt__Slider_77_K2Node_ComponentBoundEvent_17_OnMouseCaptureEndEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UWidget_ShoppingList_C::BndEvt__Slider_77_K2Node_ComponentBoundEvent_17_OnMouseCaptureEndEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_ShoppingList.Widget_ShoppingList_C.BndEvt__Slider_77_K2Node_ComponentBoundEvent_17_OnMouseCaptureEndEvent__DelegateSignature");
		
		UWidget_ShoppingList_C_BndEvt__Slider_77_K2Node_ComponentBoundEvent_17_OnMouseCaptureEndEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_ShoppingList.Widget_ShoppingList_C.BndEvt__Slider_77_K2Node_ComponentBoundEvent_18_OnControllerCaptureBeginEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UWidget_ShoppingList_C::BndEvt__Slider_77_K2Node_ComponentBoundEvent_18_OnControllerCaptureBeginEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_ShoppingList.Widget_ShoppingList_C.BndEvt__Slider_77_K2Node_ComponentBoundEvent_18_OnControllerCaptureBeginEvent__DelegateSignature");
		
		UWidget_ShoppingList_C_BndEvt__Slider_77_K2Node_ComponentBoundEvent_18_OnControllerCaptureBeginEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_ShoppingList.Widget_ShoppingList_C.BndEvt__Slider_77_K2Node_ComponentBoundEvent_19_OnControllerCaptureEndEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UWidget_ShoppingList_C::BndEvt__Slider_77_K2Node_ComponentBoundEvent_19_OnControllerCaptureEndEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_ShoppingList.Widget_ShoppingList_C.BndEvt__Slider_77_K2Node_ComponentBoundEvent_19_OnControllerCaptureEndEvent__DelegateSignature");
		
		UWidget_ShoppingList_C_BndEvt__Slider_77_K2Node_ComponentBoundEvent_19_OnControllerCaptureEndEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_ShoppingList.Widget_ShoppingList_C.Destruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UWidget_ShoppingList_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_ShoppingList.Widget_ShoppingList_C.Destruct");
		
		UWidget_ShoppingList_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_ShoppingList.Widget_ShoppingList_C.BndEvt__Widget_ShoppingList_mEditablePublicNotes_K2Node_ComponentBoundEvent_10_OnMultiLineEditableTextCommittedEvent__DelegateSignature
	 * 		Flags  -> (HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        Text                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		ETextCommit                                        CommitMethod                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_ShoppingList_C::BndEvt__Widget_ShoppingList_mEditablePublicNotes_K2Node_ComponentBoundEvent_10_OnMultiLineEditableTextCommittedEvent__DelegateSignature(const class FText& Text, ETextCommit CommitMethod)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_ShoppingList.Widget_ShoppingList_C.BndEvt__Widget_ShoppingList_mEditablePublicNotes_K2Node_ComponentBoundEvent_10_OnMultiLineEditableTextCommittedEvent__DelegateSignature");
		
		UWidget_ShoppingList_C_BndEvt__Widget_ShoppingList_mEditablePublicNotes_K2Node_ComponentBoundEvent_10_OnMultiLineEditableTextCommittedEvent__DelegateSignature_Params params {};
		params.Text = Text;
		params.CommitMethod = CommitMethod;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_ShoppingList.Widget_ShoppingList_C.BndEvt__Widget_ShoppingList_mEditablePrivateNotes_K2Node_ComponentBoundEvent_11_OnMultiLineEditableTextChangedEvent__DelegateSignature
	 * 		Flags  -> (HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        Text                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UWidget_ShoppingList_C::BndEvt__Widget_ShoppingList_mEditablePrivateNotes_K2Node_ComponentBoundEvent_11_OnMultiLineEditableTextChangedEvent__DelegateSignature(const class FText& Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_ShoppingList.Widget_ShoppingList_C.BndEvt__Widget_ShoppingList_mEditablePrivateNotes_K2Node_ComponentBoundEvent_11_OnMultiLineEditableTextChangedEvent__DelegateSignature");
		
		UWidget_ShoppingList_C_BndEvt__Widget_ShoppingList_mEditablePrivateNotes_K2Node_ComponentBoundEvent_11_OnMultiLineEditableTextChangedEvent__DelegateSignature_Params params {};
		params.Text = Text;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_ShoppingList.Widget_ShoppingList_C.BndEvt__Widget_ShoppingList_mDivPrivateNotes_K2Node_ComponentBoundEvent_8_OnStateChanged__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsOpen                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_ShoppingList_C::BndEvt__Widget_ShoppingList_mDivPrivateNotes_K2Node_ComponentBoundEvent_8_OnStateChanged__DelegateSignature(bool IsOpen)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_ShoppingList.Widget_ShoppingList_C.BndEvt__Widget_ShoppingList_mDivPrivateNotes_K2Node_ComponentBoundEvent_8_OnStateChanged__DelegateSignature");
		
		UWidget_ShoppingList_C_BndEvt__Widget_ShoppingList_mDivPrivateNotes_K2Node_ComponentBoundEvent_8_OnStateChanged__DelegateSignature_Params params {};
		params.IsOpen = IsOpen;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_ShoppingList.Widget_ShoppingList_C.BndEvt__Widget_ShoppingList_mDivPublicNotes_K2Node_ComponentBoundEvent_9_OnStateChanged__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsOpen                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_ShoppingList_C::BndEvt__Widget_ShoppingList_mDivPublicNotes_K2Node_ComponentBoundEvent_9_OnStateChanged__DelegateSignature(bool IsOpen)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_ShoppingList.Widget_ShoppingList_C.BndEvt__Widget_ShoppingList_mDivPublicNotes_K2Node_ComponentBoundEvent_9_OnStateChanged__DelegateSignature");
		
		UWidget_ShoppingList_C_BndEvt__Widget_ShoppingList_mDivPublicNotes_K2Node_ComponentBoundEvent_9_OnStateChanged__DelegateSignature_Params params {};
		params.IsOpen = IsOpen;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_ShoppingList.Widget_ShoppingList_C.BndEvt__Widget_ShoppingList_mDivRecipes_K2Node_ComponentBoundEvent_20_OnStateChanged__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsOpen                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_ShoppingList_C::BndEvt__Widget_ShoppingList_mDivRecipes_K2Node_ComponentBoundEvent_20_OnStateChanged__DelegateSignature(bool IsOpen)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_ShoppingList.Widget_ShoppingList_C.BndEvt__Widget_ShoppingList_mDivRecipes_K2Node_ComponentBoundEvent_20_OnStateChanged__DelegateSignature");
		
		UWidget_ShoppingList_C_BndEvt__Widget_ShoppingList_mDivRecipes_K2Node_ComponentBoundEvent_20_OnStateChanged__DelegateSignature_Params params {};
		params.IsOpen = IsOpen;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_ShoppingList.Widget_ShoppingList_C.BndEvt__Widget_ShoppingList_mEditablePrivateNotes_K2Node_ComponentBoundEvent_4_OnMultiLineEditableTextCommittedEvent__DelegateSignature
	 * 		Flags  -> (HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        Text                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		ETextCommit                                        CommitMethod                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_ShoppingList_C::BndEvt__Widget_ShoppingList_mEditablePrivateNotes_K2Node_ComponentBoundEvent_4_OnMultiLineEditableTextCommittedEvent__DelegateSignature(const class FText& Text, ETextCommit CommitMethod)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_ShoppingList.Widget_ShoppingList_C.BndEvt__Widget_ShoppingList_mEditablePrivateNotes_K2Node_ComponentBoundEvent_4_OnMultiLineEditableTextCommittedEvent__DelegateSignature");
		
		UWidget_ShoppingList_C_BndEvt__Widget_ShoppingList_mEditablePrivateNotes_K2Node_ComponentBoundEvent_4_OnMultiLineEditableTextCommittedEvent__DelegateSignature_Params params {};
		params.Text = Text;
		params.CommitMethod = CommitMethod;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_ShoppingList.Widget_ShoppingList_C.BndEvt__Widget_ShoppingList_mEditablePublicNotes_K2Node_ComponentBoundEvent_7_OnMultiLineEditableTextChangedEvent__DelegateSignature
	 * 		Flags  -> (HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        Text                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UWidget_ShoppingList_C::BndEvt__Widget_ShoppingList_mEditablePublicNotes_K2Node_ComponentBoundEvent_7_OnMultiLineEditableTextChangedEvent__DelegateSignature(const class FText& Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_ShoppingList.Widget_ShoppingList_C.BndEvt__Widget_ShoppingList_mEditablePublicNotes_K2Node_ComponentBoundEvent_7_OnMultiLineEditableTextChangedEvent__DelegateSignature");
		
		UWidget_ShoppingList_C_BndEvt__Widget_ShoppingList_mEditablePublicNotes_K2Node_ComponentBoundEvent_7_OnMultiLineEditableTextChangedEvent__DelegateSignature_Params params {};
		params.Text = Text;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_ShoppingList.Widget_ShoppingList_C.BndEvt__Widget_ShoppingList_mProductList_K2Node_ComponentBoundEvent_14_OnItemIsHoveredChangedDynamic__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bIsHovered                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_ShoppingList_C::BndEvt__Widget_ShoppingList_mProductList_K2Node_ComponentBoundEvent_14_OnItemIsHoveredChangedDynamic__DelegateSignature(class UObject* Item, bool bIsHovered)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_ShoppingList.Widget_ShoppingList_C.BndEvt__Widget_ShoppingList_mProductList_K2Node_ComponentBoundEvent_14_OnItemIsHoveredChangedDynamic__DelegateSignature");
		
		UWidget_ShoppingList_C_BndEvt__Widget_ShoppingList_mProductList_K2Node_ComponentBoundEvent_14_OnItemIsHoveredChangedDynamic__DelegateSignature_Params params {};
		params.Item = Item;
		params.bIsHovered = bIsHovered;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_ShoppingList.Widget_ShoppingList_C.ExecuteUbergraph_Widget_ShoppingList
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_ShoppingList_C::ExecuteUbergraph_Widget_ShoppingList(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_ShoppingList.Widget_ShoppingList_C.ExecuteUbergraph_Widget_ShoppingList");
		
		UWidget_ShoppingList_C_ExecuteUbergraph_Widget_ShoppingList_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_ShoppingList.Widget_ShoppingList_C.OnToDoListClosed__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_ShoppingList_C::OnToDoListClosed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_ShoppingList.Widget_ShoppingList_C.OnToDoListClosed__DelegateSignature");
		
		UWidget_ShoppingList_C_OnToDoListClosed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_ShoppingList.Widget_ShoppingList_C.OnToDoListOpen__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_ShoppingList_C::OnToDoListOpen__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_ShoppingList.Widget_ShoppingList_C.OnToDoListOpen__DelegateSignature");
		
		UWidget_ShoppingList_C_OnToDoListOpen__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWidget_ShoppingList_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWidget_ShoppingList_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_ShoppingList.Widget_ShoppingList_C");
		return ptr;
	}

}


