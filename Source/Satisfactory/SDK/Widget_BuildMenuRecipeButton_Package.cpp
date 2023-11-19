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
	 * 		Name   -> Function Widget_BuildMenuRecipeButton.Widget_BuildMenuRecipeButton_C.PlaySFXSideMenu
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_BuildMenuRecipeButton_C::PlaySFXSideMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_BuildMenuRecipeButton.Widget_BuildMenuRecipeButton_C.PlaySFXSideMenu");
		
		UWidget_BuildMenuRecipeButton_C_PlaySFXSideMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_BuildMenuRecipeButton.Widget_BuildMenuRecipeButton_C.PlayClickedSFX
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_BuildMenuRecipeButton_C::PlayClickedSFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_BuildMenuRecipeButton.Widget_BuildMenuRecipeButton_C.PlayClickedSFX");
		
		UWidget_BuildMenuRecipeButton_C_PlayClickedSFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_BuildMenuRecipeButton.Widget_BuildMenuRecipeButton_C.PlayHoveringSFX
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_BuildMenuRecipeButton_C::PlayHoveringSFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_BuildMenuRecipeButton.Widget_BuildMenuRecipeButton_C.PlayHoveringSFX");
		
		UWidget_BuildMenuRecipeButton_C_PlayHoveringSFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_BuildMenuRecipeButton.Widget_BuildMenuRecipeButton_C.SetFontScaleForLanguage
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_BuildMenuRecipeButton_C::SetFontScaleForLanguage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_BuildMenuRecipeButton.Widget_BuildMenuRecipeButton_C.SetFontScaleForLanguage");
		
		UWidget_BuildMenuRecipeButton_C_SetFontScaleForLanguage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_BuildMenuRecipeButton.Widget_BuildMenuRecipeButton_C.UpdateNewItemOverlayVisibility
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_BuildMenuRecipeButton_C::UpdateNewItemOverlayVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_BuildMenuRecipeButton.Widget_BuildMenuRecipeButton_C.UpdateNewItemOverlayVisibility");
		
		UWidget_BuildMenuRecipeButton_C_UpdateNewItemOverlayVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_BuildMenuRecipeButton.Widget_BuildMenuRecipeButton_C.OnKeyDown
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FKeyEvent                                   InKeyEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	struct FEventReply UWidget_BuildMenuRecipeButton_C::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_BuildMenuRecipeButton.Widget_BuildMenuRecipeButton_C.OnKeyDown");
		
		UWidget_BuildMenuRecipeButton_C_OnKeyDown_Params params {};
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
	 * 		Name   -> Function Widget_BuildMenuRecipeButton.Widget_BuildMenuRecipeButton_C.CreateRightClickMenu
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	class UWidget* UWidget_BuildMenuRecipeButton_C::CreateRightClickMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_BuildMenuRecipeButton.Widget_BuildMenuRecipeButton_C.CreateRightClickMenu");
		
		UWidget_BuildMenuRecipeButton_C_CreateRightClickMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_BuildMenuRecipeButton.Widget_BuildMenuRecipeButton_C.OnMouseButtonDown
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	struct FEventReply UWidget_BuildMenuRecipeButton_C::OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_BuildMenuRecipeButton.Widget_BuildMenuRecipeButton_C.OnMouseButtonDown");
		
		UWidget_BuildMenuRecipeButton_C_OnMouseButtonDown_Params params {};
		params.MyGeometry = MyGeometry;
		params.MouseEvent = MouseEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_BuildMenuRecipeButton.Widget_BuildMenuRecipeButton_C.ResolveHotkeyIndex
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_BuildMenuRecipeButton_C::ResolveHotkeyIndex()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_BuildMenuRecipeButton.Widget_BuildMenuRecipeButton_C.ResolveHotkeyIndex");
		
		UWidget_BuildMenuRecipeButton_C_ResolveHotkeyIndex_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_BuildMenuRecipeButton.Widget_BuildMenuRecipeButton_C.CreateShoppingListButtons
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_BuildMenuRecipeButton_C::CreateShoppingListButtons()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_BuildMenuRecipeButton.Widget_BuildMenuRecipeButton_C.CreateShoppingListButtons");
		
		UWidget_BuildMenuRecipeButton_C_CreateShoppingListButtons_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_BuildMenuRecipeButton.Widget_BuildMenuRecipeButton_C.GetBuildingIcon
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_BuildMenuRecipeButton_C::GetBuildingIcon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_BuildMenuRecipeButton.Widget_BuildMenuRecipeButton_C.GetBuildingIcon");
		
		UWidget_BuildMenuRecipeButton_C_GetBuildingIcon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_BuildMenuRecipeButton.Widget_BuildMenuRecipeButton_C.OnFocusReceived
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FFocusEvent                                 InFocusEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	struct FEventReply UWidget_BuildMenuRecipeButton_C::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_BuildMenuRecipeButton.Widget_BuildMenuRecipeButton_C.OnFocusReceived");
		
		UWidget_BuildMenuRecipeButton_C_OnFocusReceived_Params params {};
		params.MyGeometry = MyGeometry;
		params.InFocusEvent = InFocusEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_BuildMenuRecipeButton.Widget_BuildMenuRecipeButton_C.GetRecipeName
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_BuildMenuRecipeButton_C::GetRecipeName()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_BuildMenuRecipeButton.Widget_BuildMenuRecipeButton_C.GetRecipeName");
		
		UWidget_BuildMenuRecipeButton_C_GetRecipeName_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_BuildMenuRecipeButton.Widget_BuildMenuRecipeButton_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UWidget_BuildMenuRecipeButton_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_BuildMenuRecipeButton.Widget_BuildMenuRecipeButton_C.Construct");
		
		UWidget_BuildMenuRecipeButton_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_BuildMenuRecipeButton.Widget_BuildMenuRecipeButton_C.BndEvt__mRecipeOverlay_K2Node_ComponentBoundEvent_35_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UWidget_BuildMenuRecipeButton_C::BndEvt__mRecipeOverlay_K2Node_ComponentBoundEvent_35_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_BuildMenuRecipeButton.Widget_BuildMenuRecipeButton_C.BndEvt__mRecipeOverlay_K2Node_ComponentBoundEvent_35_OnButtonHoverEvent__DelegateSignature");
		
		UWidget_BuildMenuRecipeButton_C_BndEvt__mRecipeOverlay_K2Node_ComponentBoundEvent_35_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_BuildMenuRecipeButton.Widget_BuildMenuRecipeButton_C.BndEvt__mRecipeOverlay_K2Node_ComponentBoundEvent_439_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UWidget_BuildMenuRecipeButton_C::BndEvt__mRecipeOverlay_K2Node_ComponentBoundEvent_439_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_BuildMenuRecipeButton.Widget_BuildMenuRecipeButton_C.BndEvt__mRecipeOverlay_K2Node_ComponentBoundEvent_439_OnButtonClickedEvent__DelegateSignature");
		
		UWidget_BuildMenuRecipeButton_C_BndEvt__mRecipeOverlay_K2Node_ComponentBoundEvent_439_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_BuildMenuRecipeButton.Widget_BuildMenuRecipeButton_C.BndEvt__mRecipeOverlay_K2Node_ComponentBoundEvent_16_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UWidget_BuildMenuRecipeButton_C::BndEvt__mRecipeOverlay_K2Node_ComponentBoundEvent_16_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_BuildMenuRecipeButton.Widget_BuildMenuRecipeButton_C.BndEvt__mRecipeOverlay_K2Node_ComponentBoundEvent_16_OnButtonHoverEvent__DelegateSignature");
		
		UWidget_BuildMenuRecipeButton_C_BndEvt__mRecipeOverlay_K2Node_ComponentBoundEvent_16_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_BuildMenuRecipeButton.Widget_BuildMenuRecipeButton_C.SimulateOnHovered
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_BuildMenuRecipeButton_C::SimulateOnHovered()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_BuildMenuRecipeButton.Widget_BuildMenuRecipeButton_C.SimulateOnHovered");
		
		UWidget_BuildMenuRecipeButton_C_SimulateOnHovered_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_BuildMenuRecipeButton.Widget_BuildMenuRecipeButton_C.SimulateOnUnhovered
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_BuildMenuRecipeButton_C::SimulateOnUnhovered()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_BuildMenuRecipeButton.Widget_BuildMenuRecipeButton_C.SimulateOnUnhovered");
		
		UWidget_BuildMenuRecipeButton_C_SimulateOnUnhovered_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_BuildMenuRecipeButton.Widget_BuildMenuRecipeButton_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_BuildMenuRecipeButton_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_BuildMenuRecipeButton.Widget_BuildMenuRecipeButton_C.PreConstruct");
		
		UWidget_BuildMenuRecipeButton_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_BuildMenuRecipeButton.Widget_BuildMenuRecipeButton_C.BndEvt__mRightClickMenu_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bIsOpen                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_BuildMenuRecipeButton_C::BndEvt__mRightClickMenu_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature(bool bIsOpen)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_BuildMenuRecipeButton.Widget_BuildMenuRecipeButton_C.BndEvt__mRightClickMenu_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature");
		
		UWidget_BuildMenuRecipeButton_C_BndEvt__mRightClickMenu_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature_Params params {};
		params.bIsOpen = bIsOpen;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_BuildMenuRecipeButton.Widget_BuildMenuRecipeButton_C.SetupRecipeButton
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_BuildMenuRecipeButton_C::SetupRecipeButton()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_BuildMenuRecipeButton.Widget_BuildMenuRecipeButton_C.SetupRecipeButton");
		
		UWidget_BuildMenuRecipeButton_C_SetupRecipeButton_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_BuildMenuRecipeButton.Widget_BuildMenuRecipeButton_C.ExecuteUbergraph_Widget_BuildMenuRecipeButton
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_BuildMenuRecipeButton_C::ExecuteUbergraph_Widget_BuildMenuRecipeButton(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_BuildMenuRecipeButton.Widget_BuildMenuRecipeButton_C.ExecuteUbergraph_Widget_BuildMenuRecipeButton");
		
		UWidget_BuildMenuRecipeButton_C_ExecuteUbergraph_Widget_BuildMenuRecipeButton_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_BuildMenuRecipeButton.Widget_BuildMenuRecipeButton_C.OnStopHoveringRecipe__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      recipe                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		class UWidget_BuildMenuRecipeButton_C*             RecipeButton                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_BuildMenuRecipeButton_C::OnStopHoveringRecipe__DelegateSignature(class UClass* recipe, class UWidget_BuildMenuRecipeButton_C* RecipeButton)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_BuildMenuRecipeButton.Widget_BuildMenuRecipeButton_C.OnStopHoveringRecipe__DelegateSignature");
		
		UWidget_BuildMenuRecipeButton_C_OnStopHoveringRecipe__DelegateSignature_Params params {};
		params.recipe = recipe;
		params.RecipeButton = RecipeButton;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_BuildMenuRecipeButton.Widget_BuildMenuRecipeButton_C.OnRecipeHovered__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      RecipeHover                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		class UWidget_BuildMenuRecipeButton_C*             RecipeButton                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_BuildMenuRecipeButton_C::OnRecipeHovered__DelegateSignature(class UClass* RecipeHover, class UWidget_BuildMenuRecipeButton_C* RecipeButton)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_BuildMenuRecipeButton.Widget_BuildMenuRecipeButton_C.OnRecipeHovered__DelegateSignature");
		
		UWidget_BuildMenuRecipeButton_C_OnRecipeHovered__DelegateSignature_Params params {};
		params.RecipeHover = RecipeHover;
		params.RecipeButton = RecipeButton;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_BuildMenuRecipeButton.Widget_BuildMenuRecipeButton_C.OnRecipeClicked__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      recipe                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_BuildMenuRecipeButton_C::OnRecipeClicked__DelegateSignature(class UClass* recipe)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_BuildMenuRecipeButton.Widget_BuildMenuRecipeButton_C.OnRecipeClicked__DelegateSignature");
		
		UWidget_BuildMenuRecipeButton_C_OnRecipeClicked__DelegateSignature_Params params {};
		params.recipe = recipe;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWidget_BuildMenuRecipeButton_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWidget_BuildMenuRecipeButton_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_BuildMenuRecipeButton.Widget_BuildMenuRecipeButton_C");
		return ptr;
	}

}


