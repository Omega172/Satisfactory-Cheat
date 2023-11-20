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
	 * 		Name   -> Function Widget_BuildMenu.Widget_BuildMenu_C.On Hotbar Slot Updated Visual
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UFGPlayerHotbar*                             Hotbar                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            SlotIndex                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_BuildMenu_C::OnHotbarSlotUpdatedVisual(class UFGPlayerHotbar* Hotbar, int32_t SlotIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_BuildMenu.Widget_BuildMenu_C.On Hotbar Slot Updated Visual");
		
		UWidget_BuildMenu_C_OnHotbarSlotUpdatedVisual_Params params {};
		params.Hotbar = Hotbar;
		params.SlotIndex = SlotIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_BuildMenu.Widget_BuildMenu_C.OnMenuStateChanged
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EMenuStateSection                                  NewState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_BuildMenu_C::OnMenuStateChanged(EMenuStateSection NewState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_BuildMenu.Widget_BuildMenu_C.OnMenuStateChanged");
		
		UWidget_BuildMenu_C_OnMenuStateChanged_Params params {};
		params.NewState = NewState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_BuildMenu.Widget_BuildMenu_C.OnBlueprintSettingsPopupCreated
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UWidget*                                     PopupWidget                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_BuildMenu_C::OnBlueprintSettingsPopupCreated(class UWidget* PopupWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_BuildMenu.Widget_BuildMenu_C.OnBlueprintSettingsPopupCreated");
		
		UWidget_BuildMenu_C_OnBlueprintSettingsPopupCreated_Params params {};
		params.PopupWidget = PopupWidget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_BuildMenu.Widget_BuildMenu_C.OnBlueprintClicked
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UFGBlueprintDescriptor*                      blueprintDescriptor                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_BuildMenu_C::OnBlueprintClicked(class UFGBlueprintDescriptor* blueprintDescriptor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_BuildMenu.Widget_BuildMenu_C.OnBlueprintClicked");
		
		UWidget_BuildMenu_C_OnBlueprintClicked_Params params {};
		params.blueprintDescriptor = blueprintDescriptor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_BuildMenu.Widget_BuildMenu_C.SetKeybindingsForTabs
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_BuildMenu_C::SetKeybindingsForTabs()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_BuildMenu.Widget_BuildMenu_C.SetKeybindingsForTabs");
		
		UWidget_BuildMenu_C_SetKeybindingsForTabs_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_BuildMenu.Widget_BuildMenu_C.OnShortcutPressed
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UWidget_BuildMenu_C::OnShortcutPressed(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_BuildMenu.Widget_BuildMenu_C.OnShortcutPressed");
		
		UWidget_BuildMenu_C_OnShortcutPressed_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_BuildMenu.Widget_BuildMenu_C.ScrollToLastRecipe
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_BuildMenu_C::ScrollToLastRecipe()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_BuildMenu.Widget_BuildMenu_C.ScrollToLastRecipe");
		
		UWidget_BuildMenu_C_ScrollToLastRecipe_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_BuildMenu.Widget_BuildMenu_C.OnToggleBuildGunPaintPressed
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_BuildMenu_C::OnToggleBuildGunPaintPressed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_BuildMenu.Widget_BuildMenu_C.OnToggleBuildGunPaintPressed");
		
		UWidget_BuildMenu_C_OnToggleBuildGunPaintPressed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_BuildMenu.Widget_BuildMenu_C.OnToggleBuildGunPressed
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_BuildMenu_C::OnToggleBuildGunPressed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_BuildMenu.Widget_BuildMenu_C.OnToggleBuildGunPressed");
		
		UWidget_BuildMenu_C_OnToggleBuildGunPressed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_BuildMenu.Widget_BuildMenu_C.On Apply Material to Hotbar
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      CustomisationRecipe                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	 */
	void UWidget_BuildMenu_C::OnApplyMaterialtoHotbar(class UClass* CustomisationRecipe)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_BuildMenu.Widget_BuildMenu_C.On Apply Material to Hotbar");
		
		UWidget_BuildMenu_C_OnApplyMaterialtoHotbar_Params params {};
		params.CustomisationRecipe = CustomisationRecipe;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_BuildMenu.Widget_BuildMenu_C.OnDefaultMaterialHovered
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      CustomiserRecipe                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		ECustomiserType                                    CustomiserType                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_BuildMenu_C::OnDefaultMaterialHovered(class UClass* CustomiserRecipe, ECustomiserType CustomiserType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_BuildMenu.Widget_BuildMenu_C.OnDefaultMaterialHovered");
		
		UWidget_BuildMenu_C_OnDefaultMaterialHovered_Params params {};
		params.CustomiserRecipe = CustomiserRecipe;
		params.CustomiserType = CustomiserType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_BuildMenu.Widget_BuildMenu_C.OnDefaultMaterialChanged
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      SubCategory                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		class UClass*                                      NewDefaultRecipe                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_BuildMenu_C::OnDefaultMaterialChanged(class UClass* SubCategory, class UClass* NewDefaultRecipe)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_BuildMenu.Widget_BuildMenu_C.OnDefaultMaterialChanged");
		
		UWidget_BuildMenu_C_OnDefaultMaterialChanged_Params params {};
		params.SubCategory = SubCategory;
		params.NewDefaultRecipe = NewDefaultRecipe;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_BuildMenu.Widget_BuildMenu_C.OnSearchFocused
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_BuildMenu_C::OnSearchFocused()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_BuildMenu.Widget_BuildMenu_C.OnSearchFocused");
		
		UWidget_BuildMenu_C_OnSearchFocused_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_BuildMenu.Widget_BuildMenu_C.SetupSubCategoryButtons
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_BuildMenu_C::SetupSubCategoryButtons()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_BuildMenu.Widget_BuildMenu_C.SetupSubCategoryButtons");
		
		UWidget_BuildMenu_C_SetupSubCategoryButtons_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_BuildMenu.Widget_BuildMenu_C.SetupCategoryButtons
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_BuildMenu_C::SetupCategoryButtons()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_BuildMenu.Widget_BuildMenu_C.SetupCategoryButtons");
		
		UWidget_BuildMenu_C_SetupCategoryButtons_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_BuildMenu.Widget_BuildMenu_C.SetupBindings
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Construct                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_BuildMenu_C::SetupBindings(bool Construct)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_BuildMenu.Widget_BuildMenu_C.SetupBindings");
		
		UWidget_BuildMenu_C_SetupBindings_Params params {};
		params.Construct = Construct;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_BuildMenu.Widget_BuildMenu_C.UpdateBuildMenuMode
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EBuildMenu_Modes                                   mBuildMenuMode                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               SwitchTabs                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               UpdateOnBuildgun                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               BroadcastBuildgunUpdate                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_BuildMenu_C::UpdateBuildMenuMode(EBuildMenu_Modes mBuildMenuMode, bool SwitchTabs, bool UpdateOnBuildgun, bool BroadcastBuildgunUpdate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_BuildMenu.Widget_BuildMenu_C.UpdateBuildMenuMode");
		
		UWidget_BuildMenu_C_UpdateBuildMenuMode_Params params {};
		params.mBuildMenuMode = mBuildMenuMode;
		params.SwitchTabs = SwitchTabs;
		params.UpdateOnBuildgun = UpdateOnBuildgun;
		params.BroadcastBuildgunUpdate = BroadcastBuildgunUpdate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_BuildMenu.Widget_BuildMenu_C.GetShortcutKeys
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		TArray<struct FKey>                                ShortcutKeys                                               (Parm, OutParm)
	 */
	void UWidget_BuildMenu_C::GetShortcutKeys(TArray<struct FKey>* ShortcutKeys)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_BuildMenu.Widget_BuildMenu_C.GetShortcutKeys");
		
		UWidget_BuildMenu_C_GetShortcutKeys_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ShortcutKeys != nullptr)
			*ShortcutKeys = params.ShortcutKeys;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_BuildMenu.Widget_BuildMenu_C.GetShouldSearchResultBeBoundToHotbar
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		struct FKeyEvent                                   KeyEvent                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	bool UWidget_BuildMenu_C::GetShouldSearchResultBeBoundToHotbar(const struct FKeyEvent& KeyEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_BuildMenu.Widget_BuildMenu_C.GetShouldSearchResultBeBoundToHotbar");
		
		UWidget_BuildMenu_C_GetShouldSearchResultBeBoundToHotbar_Params params {};
		params.KeyEvent = KeyEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_BuildMenu.Widget_BuildMenu_C.OnMouseMove
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	struct FEventReply UWidget_BuildMenu_C::OnMouseMove(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_BuildMenu.Widget_BuildMenu_C.OnMouseMove");
		
		UWidget_BuildMenu_C_OnMouseMove_Params params {};
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
	 * 		Name   -> Function Widget_BuildMenu.Widget_BuildMenu_C.OnPreviewKeyDown
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FKeyEvent                                   InKeyEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	struct FEventReply UWidget_BuildMenu_C::OnPreviewKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_BuildMenu.Widget_BuildMenu_C.OnPreviewKeyDown");
		
		UWidget_BuildMenu_C_OnPreviewKeyDown_Params params {};
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
	 * 		Name   -> Function Widget_BuildMenu.Widget_BuildMenu_C.OnCategoryClicked
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_BuildMenu_C::OnCategoryClicked(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_BuildMenu.Widget_BuildMenu_C.OnCategoryClicked");
		
		UWidget_BuildMenu_C_OnCategoryClicked_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_BuildMenu.Widget_BuildMenu_C.SetSearchbarUnfocused
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_BuildMenu_C::SetSearchbarUnfocused()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_BuildMenu.Widget_BuildMenu_C.SetSearchbarUnfocused");
		
		UWidget_BuildMenu_C_SetSearchbarUnfocused_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_BuildMenu.Widget_BuildMenu_C.SetSearchbarFocused
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UBPW_BuildMenu_Browser_C*                    ActiveBrowser                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_BuildMenu_C::SetSearchbarFocused(class UBPW_BuildMenu_Browser_C* ActiveBrowser)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_BuildMenu.Widget_BuildMenu_C.SetSearchbarFocused");
		
		UWidget_BuildMenu_C_SetSearchbarFocused_Params params {};
		params.ActiveBrowser = ActiveBrowser;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_BuildMenu.Widget_BuildMenu_C.IsShortcutSettingAllowed
	 * 		Flags  -> (Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	bool UWidget_BuildMenu_C::IsShortcutSettingAllowed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_BuildMenu.Widget_BuildMenu_C.IsShortcutSettingAllowed");
		
		UWidget_BuildMenu_C_IsShortcutSettingAllowed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_BuildMenu.Widget_BuildMenu_C.OnSearchCreateResults
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        mText                                                      (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UWidget_BuildMenu_C::OnSearchCreateResults(const class FText& mText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_BuildMenu.Widget_BuildMenu_C.OnSearchCreateResults");
		
		UWidget_BuildMenu_C_OnSearchCreateResults_Params params {};
		params.mText = mText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_BuildMenu.Widget_BuildMenu_C.UpdateShortcuts
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_BuildMenu_C::UpdateShortcuts()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_BuildMenu.Widget_BuildMenu_C.UpdateShortcuts");
		
		UWidget_BuildMenu_C_UpdateShortcuts_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_BuildMenu.Widget_BuildMenu_C.HandleShortcutPressed
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            shortcutIndex                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               setupNewShortcut                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_BuildMenu_C::HandleShortcutPressed(int32_t shortcutIndex, bool* setupNewShortcut)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_BuildMenu.Widget_BuildMenu_C.HandleShortcutPressed");
		
		UWidget_BuildMenu_C_HandleShortcutPressed_Params params {};
		params.shortcutIndex = shortcutIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (setupNewShortcut != nullptr)
			*setupNewShortcut = params.setupNewShortcut;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_BuildMenu.Widget_BuildMenu_C.OnStopHoveringRecipe
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      recipe                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		class UWidget_BuildMenuRecipeButton_C*             RecipeButton                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_BuildMenu_C::OnStopHoveringRecipe(class UClass* recipe, class UWidget_BuildMenuRecipeButton_C* RecipeButton)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_BuildMenu.Widget_BuildMenu_C.OnStopHoveringRecipe");
		
		UWidget_BuildMenu_C_OnStopHoveringRecipe_Params params {};
		params.recipe = recipe;
		params.RecipeButton = RecipeButton;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_BuildMenu.Widget_BuildMenu_C.OnRecipeHovered
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      recipe                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		class UWidget_BuildMenuRecipeButton_C*             RecipeButton                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_BuildMenu_C::OnRecipeHovered(class UClass* recipe, class UWidget_BuildMenuRecipeButton_C* RecipeButton)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_BuildMenu.Widget_BuildMenu_C.OnRecipeHovered");
		
		UWidget_BuildMenu_C_OnRecipeHovered_Params params {};
		params.recipe = recipe;
		params.RecipeButton = RecipeButton;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_BuildMenu.Widget_BuildMenu_C.IsCentralStorageBuilt
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               IsBuilt                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_BuildMenu_C::IsCentralStorageBuilt(bool* IsBuilt)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_BuildMenu.Widget_BuildMenu_C.IsCentralStorageBuilt");
		
		UWidget_BuildMenu_C_IsCentralStorageBuilt_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsBuilt != nullptr)
			*IsBuilt = params.IsBuilt;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_BuildMenu.Widget_BuildMenu_C.IsSpaceElevatorBuilt
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               IsBuilt                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_BuildMenu_C::IsSpaceElevatorBuilt(bool* IsBuilt)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_BuildMenu.Widget_BuildMenu_C.IsSpaceElevatorBuilt");
		
		UWidget_BuildMenu_C_IsSpaceElevatorBuilt_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsBuilt != nullptr)
			*IsBuilt = params.IsBuilt;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_BuildMenu.Widget_BuildMenu_C.IsTradingPostBuilt
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               IsBuilt                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_BuildMenu_C::IsTradingPostBuilt(bool* IsBuilt)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_BuildMenu.Widget_BuildMenu_C.IsTradingPostBuilt");
		
		UWidget_BuildMenu_C_IsTradingPostBuilt_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsBuilt != nullptr)
			*IsBuilt = params.IsBuilt;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_BuildMenu.Widget_BuildMenu_C.InitBuildMenu
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_BuildMenu_C::InitBuildMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_BuildMenu.Widget_BuildMenu_C.InitBuildMenu");
		
		UWidget_BuildMenu_C_InitBuildMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_BuildMenu.Widget_BuildMenu_C.OnRecipeClicked
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      InputPin                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_BuildMenu_C::OnRecipeClicked(class UClass* InputPin)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_BuildMenu.Widget_BuildMenu_C.OnRecipeClicked");
		
		UWidget_BuildMenu_C_OnRecipeClicked_Params params {};
		params.InputPin = InputPin;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_BuildMenu.Widget_BuildMenu_C.CreateInfoBox
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      recipe                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_BuildMenu_C::CreateInfoBox(class UClass* recipe)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_BuildMenu.Widget_BuildMenu_C.CreateInfoBox");
		
		UWidget_BuildMenu_C_CreateInfoBox_Params params {};
		params.recipe = recipe;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_BuildMenu.Widget_BuildMenu_C.InpActEvt_IA_FocusSearch_K2Node_EnhancedInputActionEvent_1
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FInputActionValue                           ActionValue                                                (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		float                                              ElapsedTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              TriggeredTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UInputAction*                                SourceAction                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_BuildMenu_C::InpActEvt_IA_FocusSearch_K2Node_EnhancedInputActionEvent_1(const struct FInputActionValue& ActionValue, float ElapsedTime, float TriggeredTime, class UInputAction* SourceAction)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_BuildMenu.Widget_BuildMenu_C.InpActEvt_IA_FocusSearch_K2Node_EnhancedInputActionEvent_1");
		
		UWidget_BuildMenu_C_InpActEvt_IA_FocusSearch_K2Node_EnhancedInputActionEvent_1_Params params {};
		params.ActionValue = ActionValue;
		params.ElapsedTime = ElapsedTime;
		params.TriggeredTime = TriggeredTime;
		params.SourceAction = SourceAction;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_BuildMenu.Widget_BuildMenu_C.Destruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UWidget_BuildMenu_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_BuildMenu.Widget_BuildMenu_C.Destruct");
		
		UWidget_BuildMenu_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_BuildMenu.Widget_BuildMenu_C.UnBlockMouse
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_BuildMenu_C::UnBlockMouse()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_BuildMenu.Widget_BuildMenu_C.UnBlockMouse");
		
		UWidget_BuildMenu_C_UnBlockMouse_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_BuildMenu.Widget_BuildMenu_C.BndEvt__Widget_MouseMoveChecker_K2Node_ComponentBoundEvent_0_OnMouseMoved__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UWidget_BuildMenu_C::BndEvt__Widget_MouseMoveChecker_K2Node_ComponentBoundEvent_0_OnMouseMoved__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_BuildMenu.Widget_BuildMenu_C.BndEvt__Widget_MouseMoveChecker_K2Node_ComponentBoundEvent_0_OnMouseMoved__DelegateSignature");
		
		UWidget_BuildMenu_C_BndEvt__Widget_MouseMoveChecker_K2Node_ComponentBoundEvent_0_OnMouseMoved__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_BuildMenu.Widget_BuildMenu_C.BlockMouse
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_BuildMenu_C::BlockMouse()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_BuildMenu.Widget_BuildMenu_C.BlockMouse");
		
		UWidget_BuildMenu_C_BlockMouse_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_BuildMenu.Widget_BuildMenu_C.BndEvt__BPW_Customiser_K2Node_ComponentBoundEvent_5_OnStyleSelected__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      CustomiserRecipe                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_BuildMenu_C::BndEvt__BPW_Customiser_K2Node_ComponentBoundEvent_5_OnStyleSelected__DelegateSignature(class UClass* CustomiserRecipe)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_BuildMenu.Widget_BuildMenu_C.BndEvt__BPW_Customiser_K2Node_ComponentBoundEvent_5_OnStyleSelected__DelegateSignature");
		
		UWidget_BuildMenu_C_BndEvt__BPW_Customiser_K2Node_ComponentBoundEvent_5_OnStyleSelected__DelegateSignature_Params params {};
		params.CustomiserRecipe = CustomiserRecipe;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_BuildMenu.Widget_BuildMenu_C.BndEvt__BPW_Customiser_K2Node_ComponentBoundEvent_3_OnStyleHovered__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      CustomiserRecipe                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_BuildMenu_C::BndEvt__BPW_Customiser_K2Node_ComponentBoundEvent_3_OnStyleHovered__DelegateSignature(class UClass* CustomiserRecipe)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_BuildMenu.Widget_BuildMenu_C.BndEvt__BPW_Customiser_K2Node_ComponentBoundEvent_3_OnStyleHovered__DelegateSignature");
		
		UWidget_BuildMenu_C_BndEvt__BPW_Customiser_K2Node_ComponentBoundEvent_3_OnStyleHovered__DelegateSignature_Params params {};
		params.CustomiserRecipe = CustomiserRecipe;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_BuildMenu.Widget_BuildMenu_C.BndEvt__BPW_Customiser_K2Node_ComponentBoundEvent_4_OnStyleUnhovered__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UWidget_BuildMenu_C::BndEvt__BPW_Customiser_K2Node_ComponentBoundEvent_4_OnStyleUnhovered__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_BuildMenu.Widget_BuildMenu_C.BndEvt__BPW_Customiser_K2Node_ComponentBoundEvent_4_OnStyleUnhovered__DelegateSignature");
		
		UWidget_BuildMenu_C_BndEvt__BPW_Customiser_K2Node_ComponentBoundEvent_4_OnStyleUnhovered__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_BuildMenu.Widget_BuildMenu_C.SetBuildMenuMode
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EBuildMenu_Modes                                   NewMode                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_BuildMenu_C::SetBuildMenuMode(EBuildMenu_Modes NewMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_BuildMenu.Widget_BuildMenu_C.SetBuildMenuMode");
		
		UWidget_BuildMenu_C_SetBuildMenuMode_Params params {};
		params.NewMode = NewMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_BuildMenu.Widget_BuildMenu_C.BndEvt__Widget_Window_DarkMode_K2Node_ComponentBoundEvent_7_OnTabButtonClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            ButtonIndex                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_BuildMenu_C::BndEvt__Widget_Window_DarkMode_K2Node_ComponentBoundEvent_7_OnTabButtonClicked__DelegateSignature(int32_t ButtonIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_BuildMenu.Widget_BuildMenu_C.BndEvt__Widget_Window_DarkMode_K2Node_ComponentBoundEvent_7_OnTabButtonClicked__DelegateSignature");
		
		UWidget_BuildMenu_C_BndEvt__Widget_Window_DarkMode_K2Node_ComponentBoundEvent_7_OnTabButtonClicked__DelegateSignature_Params params {};
		params.ButtonIndex = ButtonIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_BuildMenu.Widget_BuildMenu_C.BndEvt__BPW_Customiser_K2Node_ComponentBoundEvent_8_OnSwatchUpdated__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		unsigned char                                      SlotIndex                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FFactoryCustomizationColorSlot              slotData                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UWidget_BuildMenu_C::BndEvt__BPW_Customiser_K2Node_ComponentBoundEvent_8_OnSwatchUpdated__DelegateSignature(unsigned char SlotIndex, const struct FFactoryCustomizationColorSlot& slotData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_BuildMenu.Widget_BuildMenu_C.BndEvt__BPW_Customiser_K2Node_ComponentBoundEvent_8_OnSwatchUpdated__DelegateSignature");
		
		UWidget_BuildMenu_C_BndEvt__BPW_Customiser_K2Node_ComponentBoundEvent_8_OnSwatchUpdated__DelegateSignature_Params params {};
		params.SlotIndex = SlotIndex;
		params.slotData = slotData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_BuildMenu.Widget_BuildMenu_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UWidget_BuildMenu_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_BuildMenu.Widget_BuildMenu_C.Construct");
		
		UWidget_BuildMenu_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_BuildMenu.Widget_BuildMenu_C.OnEscapePressed
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_BuildMenu_C::OnEscapePressed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_BuildMenu.Widget_BuildMenu_C.OnEscapePressed");
		
		UWidget_BuildMenu_C_OnEscapePressed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_BuildMenu.Widget_BuildMenu_C.BndEvt__BPW_BuildMenu_Browser_K2Node_ComponentBoundEvent_9_OnSearchTextChanged__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UWidget_BuildMenu_C::BndEvt__BPW_BuildMenu_Browser_K2Node_ComponentBoundEvent_9_OnSearchTextChanged__DelegateSignature(const class FText& Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_BuildMenu.Widget_BuildMenu_C.BndEvt__BPW_BuildMenu_Browser_K2Node_ComponentBoundEvent_9_OnSearchTextChanged__DelegateSignature");
		
		UWidget_BuildMenu_C_BndEvt__BPW_BuildMenu_Browser_K2Node_ComponentBoundEvent_9_OnSearchTextChanged__DelegateSignature_Params params {};
		params.Text = Text;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_BuildMenu.Widget_BuildMenu_C.BndEvt__BPW_BuildMenu_Browser_K2Node_ComponentBoundEvent_11_OnSearchInputBoxFocusReceived__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FFocusEvent                                 FocusEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UWidget_BuildMenu_C::BndEvt__BPW_BuildMenu_Browser_K2Node_ComponentBoundEvent_11_OnSearchInputBoxFocusReceived__DelegateSignature(const struct FFocusEvent& FocusEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_BuildMenu.Widget_BuildMenu_C.BndEvt__BPW_BuildMenu_Browser_K2Node_ComponentBoundEvent_11_OnSearchInputBoxFocusReceived__DelegateSignature");
		
		UWidget_BuildMenu_C_BndEvt__BPW_BuildMenu_Browser_K2Node_ComponentBoundEvent_11_OnSearchInputBoxFocusReceived__DelegateSignature_Params params {};
		params.FocusEvent = FocusEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_BuildMenu.Widget_BuildMenu_C.BndEvt__BPW_BuildMenu_Browser_K2Node_ComponentBoundEvent_12_OnDeselectFirstSearchResultIfOtherOptionIsHovered__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UWidget*                                     FirstResultWidget                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_BuildMenu_C::BndEvt__BPW_BuildMenu_Browser_K2Node_ComponentBoundEvent_12_OnDeselectFirstSearchResultIfOtherOptionIsHovered__DelegateSignature(class UWidget* FirstResultWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_BuildMenu.Widget_BuildMenu_C.BndEvt__BPW_BuildMenu_Browser_K2Node_ComponentBoundEvent_12_OnDeselectFirstSearchResultIfOtherOptionIsHovered__DelegateSignature");
		
		UWidget_BuildMenu_C_BndEvt__BPW_BuildMenu_Browser_K2Node_ComponentBoundEvent_12_OnDeselectFirstSearchResultIfOtherOptionIsHovered__DelegateSignature_Params params {};
		params.FirstResultWidget = FirstResultWidget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_BuildMenu.Widget_BuildMenu_C.BndEvt__BPW_BuildMenu_Browser_K2Node_ComponentBoundEvent_13_OnSearchComittedEnter__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UWidget*                                     FirstResultWidget                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_BuildMenu_C::BndEvt__BPW_BuildMenu_Browser_K2Node_ComponentBoundEvent_13_OnSearchComittedEnter__DelegateSignature(class UWidget* FirstResultWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_BuildMenu.Widget_BuildMenu_C.BndEvt__BPW_BuildMenu_Browser_K2Node_ComponentBoundEvent_13_OnSearchComittedEnter__DelegateSignature");
		
		UWidget_BuildMenu_C_BndEvt__BPW_BuildMenu_Browser_K2Node_ComponentBoundEvent_13_OnSearchComittedEnter__DelegateSignature_Params params {};
		params.FirstResultWidget = FirstResultWidget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_BuildMenu.Widget_BuildMenu_C.BndEvt__BPW_Customiser_K2Node_ComponentBoundEvent_1_OnSetDefualtMaterialOnAllClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      CustomiserRecipe                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_BuildMenu_C::BndEvt__BPW_Customiser_K2Node_ComponentBoundEvent_1_OnSetDefualtMaterialOnAllClicked__DelegateSignature(class UClass* CustomiserRecipe)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_BuildMenu.Widget_BuildMenu_C.BndEvt__BPW_Customiser_K2Node_ComponentBoundEvent_1_OnSetDefualtMaterialOnAllClicked__DelegateSignature");
		
		UWidget_BuildMenu_C_BndEvt__BPW_Customiser_K2Node_ComponentBoundEvent_1_OnSetDefualtMaterialOnAllClicked__DelegateSignature_Params params {};
		params.CustomiserRecipe = CustomiserRecipe;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_BuildMenu.Widget_BuildMenu_C.BndEvt__BPW_Customiser_K2Node_ComponentBoundEvent_2_OnColorPickerOpened__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UWidget_BuildMenu_C::BndEvt__BPW_Customiser_K2Node_ComponentBoundEvent_2_OnColorPickerOpened__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_BuildMenu.Widget_BuildMenu_C.BndEvt__BPW_Customiser_K2Node_ComponentBoundEvent_2_OnColorPickerOpened__DelegateSignature");
		
		UWidget_BuildMenu_C_BndEvt__BPW_Customiser_K2Node_ComponentBoundEvent_2_OnColorPickerOpened__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_BuildMenu.Widget_BuildMenu_C.BndEvt__BPW_Customiser_K2Node_ComponentBoundEvent_6_OnColorPickerClosed__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UWidget_BuildMenu_C::BndEvt__BPW_Customiser_K2Node_ComponentBoundEvent_6_OnColorPickerClosed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_BuildMenu.Widget_BuildMenu_C.BndEvt__BPW_Customiser_K2Node_ComponentBoundEvent_6_OnColorPickerClosed__DelegateSignature");
		
		UWidget_BuildMenu_C_BndEvt__BPW_Customiser_K2Node_ComponentBoundEvent_6_OnColorPickerClosed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_BuildMenu.Widget_BuildMenu_C.OnBlueprintChenagesPromptClosed
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               StayInEditMode                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_BuildMenu_C::OnBlueprintChenagesPromptClosed(bool StayInEditMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_BuildMenu.Widget_BuildMenu_C.OnBlueprintChenagesPromptClosed");
		
		UWidget_BuildMenu_C_OnBlueprintChenagesPromptClosed_Params params {};
		params.StayInEditMode = StayInEditMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_BuildMenu.Widget_BuildMenu_C.OnRecipeClickedPopupClosed
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               ConfirmClicked                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_BuildMenu_C::OnRecipeClickedPopupClosed(bool ConfirmClicked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_BuildMenu.Widget_BuildMenu_C.OnRecipeClickedPopupClosed");
		
		UWidget_BuildMenu_C_OnRecipeClickedPopupClosed_Params params {};
		params.ConfirmClicked = ConfirmClicked;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_BuildMenu.Widget_BuildMenu_C.BndEvt__Widget_BuildMenu_BPW_BlueprintMenu_K2Node_ComponentBoundEvent_10_OnBlueprintButtonHovered__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UFGBlueprintDescriptor*                      blueprintDescriptor                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_BuildMenu_C::BndEvt__Widget_BuildMenu_BPW_BlueprintMenu_K2Node_ComponentBoundEvent_10_OnBlueprintButtonHovered__DelegateSignature(class UFGBlueprintDescriptor* blueprintDescriptor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_BuildMenu.Widget_BuildMenu_C.BndEvt__Widget_BuildMenu_BPW_BlueprintMenu_K2Node_ComponentBoundEvent_10_OnBlueprintButtonHovered__DelegateSignature");
		
		UWidget_BuildMenu_C_BndEvt__Widget_BuildMenu_BPW_BlueprintMenu_K2Node_ComponentBoundEvent_10_OnBlueprintButtonHovered__DelegateSignature_Params params {};
		params.blueprintDescriptor = blueprintDescriptor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_BuildMenu.Widget_BuildMenu_C.BndEvt__Widget_BuildMenu_BPW_BlueprintMenu_K2Node_ComponentBoundEvent_14_OnBlueprintButtonUnhovered__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UWidget_BuildMenu_C::BndEvt__Widget_BuildMenu_BPW_BlueprintMenu_K2Node_ComponentBoundEvent_14_OnBlueprintButtonUnhovered__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_BuildMenu.Widget_BuildMenu_C.BndEvt__Widget_BuildMenu_BPW_BlueprintMenu_K2Node_ComponentBoundEvent_14_OnBlueprintButtonUnhovered__DelegateSignature");
		
		UWidget_BuildMenu_C_BndEvt__Widget_BuildMenu_BPW_BlueprintMenu_K2Node_ComponentBoundEvent_14_OnBlueprintButtonUnhovered__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_BuildMenu.Widget_BuildMenu_C.BndEvt__Widget_BuildMenu_Widget_Window_DarkMode_K2Node_ComponentBoundEvent_15_OnClose__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UWidget_BuildMenu_C::BndEvt__Widget_BuildMenu_Widget_Window_DarkMode_K2Node_ComponentBoundEvent_15_OnClose__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_BuildMenu.Widget_BuildMenu_C.BndEvt__Widget_BuildMenu_Widget_Window_DarkMode_K2Node_ComponentBoundEvent_15_OnClose__DelegateSignature");
		
		UWidget_BuildMenu_C_BndEvt__Widget_BuildMenu_Widget_Window_DarkMode_K2Node_ComponentBoundEvent_15_OnClose__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_BuildMenu.Widget_BuildMenu_C.ExecuteUbergraph_Widget_BuildMenu
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_BuildMenu_C::ExecuteUbergraph_Widget_BuildMenu(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_BuildMenu.Widget_BuildMenu_C.ExecuteUbergraph_Widget_BuildMenu");
		
		UWidget_BuildMenu_C_ExecuteUbergraph_Widget_BuildMenu_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_BuildMenu.Widget_BuildMenu_C.OnClicked__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_BuildMenu_C::OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_BuildMenu.Widget_BuildMenu_C.OnClicked__DelegateSignature");
		
		UWidget_BuildMenu_C_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWidget_BuildMenu_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWidget_BuildMenu_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_BuildMenu.Widget_BuildMenu_C");
		return ptr;
	}

}


