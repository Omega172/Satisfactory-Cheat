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
	 * 		Name   -> Function BPI_GameUI.BPI_GameUI_C.ToggleInteractWidget
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      WidgetToToggle                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     interactObject                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPI_GameUI_C::ToggleInteractWidget(class UClass* WidgetToToggle, class UObject* interactObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_GameUI.BPI_GameUI_C.ToggleInteractWidget");
		
		UBPI_GameUI_C_ToggleInteractWidget_Params params {};
		params.WidgetToToggle = WidgetToToggle;
		params.interactObject = interactObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPI_GameUI.BPI_GameUI_C.IsPlayerInventoryOpen
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsOpen                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPI_GameUI_C::IsPlayerInventoryOpen(bool* IsOpen)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_GameUI.BPI_GameUI_C.IsPlayerInventoryOpen");
		
		UBPI_GameUI_C_IsPlayerInventoryOpen_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsOpen != nullptr)
			*IsOpen = params.IsOpen;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPI_GameUI.BPI_GameUI_C.ForceUpdateEquipmentCrosshair
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBPI_GameUI_C::ForceUpdateEquipmentCrosshair()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_GameUI.BPI_GameUI_C.ForceUpdateEquipmentCrosshair");
		
		UBPI_GameUI_C_ForceUpdateEquipmentCrosshair_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPI_GameUI.BPI_GameUI_C.CloseAllHUD_ESlots
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBPI_GameUI_C::CloseAllHUD_ESlots()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_GameUI.BPI_GameUI_C.CloseAllHUD_ESlots");
		
		UBPI_GameUI_C_CloseAllHUD_ESlots_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPI_GameUI.BPI_GameUI_C.OpenAllHUD_ESlots
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBPI_GameUI_C::OpenAllHUD_ESlots()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_GameUI.BPI_GameUI_C.OpenAllHUD_ESlots");
		
		UBPI_GameUI_C_OpenAllHUD_ESlots_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPI_GameUI.BPI_GameUI_C.OnUpdateHUD_ESlot
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EEquipmentSlot                                     EquipmentSlotType                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPI_GameUI_C::OnUpdateHUD_ESlot(EEquipmentSlot EquipmentSlotType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_GameUI.BPI_GameUI_C.OnUpdateHUD_ESlot");
		
		UBPI_GameUI_C_OnUpdateHUD_ESlot_Params params {};
		params.EquipmentSlotType = EquipmentSlotType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPI_GameUI.BPI_GameUI_C.GetHUDOverlayOfClass
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      Class                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		class UWidget*                                     Widget                                                     (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPI_GameUI_C::GetHUDOverlayOfClass(class UClass* Class, class UWidget** Widget, bool* Success)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_GameUI.BPI_GameUI_C.GetHUDOverlayOfClass");
		
		UBPI_GameUI_C_GetHUDOverlayOfClass_Params params {};
		params.Class = Class;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Widget != nullptr)
			*Widget = params.Widget;
		if (Success != nullptr)
			*Success = params.Success;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPI_GameUI.BPI_GameUI_C.AddHUDOverlay
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UWidget*                                     Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPI_GameUI_C::AddHUDOverlay(class UWidget* Widget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_GameUI.BPI_GameUI_C.AddHUDOverlay");
		
		UBPI_GameUI_C_AddHUDOverlay_Params params {};
		params.Widget = Widget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPI_GameUI.BPI_GameUI_C.ClearHUDHints
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBPI_GameUI_C::ClearHUDHints()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_GameUI.BPI_GameUI_C.ClearHUDHints");
		
		UBPI_GameUI_C_ClearHUDHints_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPI_GameUI.BPI_GameUI_C.SetHUDHints
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<struct FStruct_KeybindingHint>              KeybindingHints                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UBPI_GameUI_C::SetHUDHints(TArray<struct FStruct_KeybindingHint> KeybindingHints)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_GameUI.BPI_GameUI_C.SetHUDHints");
		
		UBPI_GameUI_C_SetHUDHints_Params params {};
		params.KeybindingHints = KeybindingHints;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPI_GameUI.BPI_GameUI_C.AddWordObjectIndicatorWidget
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UBPW_WorldObjectHUDIndicator_Object_C*       mWorldObjectHudIndicatorObjectWidget                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     Location                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPI_GameUI_C::AddWordObjectIndicatorWidget(class UBPW_WorldObjectHUDIndicator_Object_C* mWorldObjectHudIndicatorObjectWidget, const struct FVector& Location)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_GameUI.BPI_GameUI_C.AddWordObjectIndicatorWidget");
		
		UBPI_GameUI_C_AddWordObjectIndicatorWidget_Params params {};
		params.mWorldObjectHudIndicatorObjectWidget = mWorldObjectHudIndicatorObjectWidget;
		params.Location = Location;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPI_GameUI.BPI_GameUI_C.ShowBuildDisqualifier
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UBPI_GameUI_C::ShowBuildDisqualifier(const class FText& Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_GameUI.BPI_GameUI_C.ShowBuildDisqualifier");
		
		UBPI_GameUI_C_ShowBuildDisqualifier_Params params {};
		params.Text = Text;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPI_GameUI.BPI_GameUI_C.HideInteractionText
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBPI_GameUI_C::HideInteractionText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_GameUI.BPI_GameUI_C.HideInteractionText");
		
		UBPI_GameUI_C_HideInteractionText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPI_GameUI.BPI_GameUI_C.ShowInteractionText
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UBPI_GameUI_C::ShowInteractionText(const class FText& Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_GameUI.BPI_GameUI_C.ShowInteractionText");
		
		UBPI_GameUI_C_ShowInteractionText_Params params {};
		params.Text = Text;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPI_GameUI.BPI_GameUI_C.ShowBasicNotification
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UBPI_GameUI_C::ShowBasicNotification(const class FText& Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_GameUI.BPI_GameUI_C.ShowBasicNotification");
		
		UBPI_GameUI_C_ShowBasicNotification_Params params {};
		params.Text = Text;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPI_GameUI.BPI_GameUI_C.OnBeginTypeChat
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBPI_GameUI_C::OnBeginTypeChat()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_GameUI.BPI_GameUI_C.OnBeginTypeChat");
		
		UBPI_GameUI_C_OnBeginTypeChat_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPI_GameUI.BPI_GameUI_C.OpenCodexOnItemDescriptor
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      itemDescriptor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPI_GameUI_C::OpenCodexOnItemDescriptor(class UClass* itemDescriptor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_GameUI.BPI_GameUI_C.OpenCodexOnItemDescriptor");
		
		UBPI_GameUI_C_OpenCodexOnItemDescriptor_Params params {};
		params.itemDescriptor = itemDescriptor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPI_GameUI.BPI_GameUI_C.CreateAddonPlayerInventory
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UPanelWidget*                                Container                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 * 		class UWidget*                                     CachedPlayerInventoryAddon                                 (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPI_GameUI_C::CreateAddonPlayerInventory(class UPanelWidget* Container, class UWidget** CachedPlayerInventoryAddon)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_GameUI.BPI_GameUI_C.CreateAddonPlayerInventory");
		
		UBPI_GameUI_C_CreateAddonPlayerInventory_Params params {};
		params.Container = Container;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CachedPlayerInventoryAddon != nullptr)
			*CachedPlayerInventoryAddon = params.CachedPlayerInventoryAddon;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPI_GameUI.BPI_GameUI_C.GetEquipmentHUDParent
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EEquipmentSlot                                     slotType                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UOverlay*                                    overlayParent                                              (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPI_GameUI_C::GetEquipmentHUDParent(EEquipmentSlot slotType, class UOverlay** overlayParent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_GameUI.BPI_GameUI_C.GetEquipmentHUDParent");
		
		UBPI_GameUI_C_GetEquipmentHUDParent_Params params {};
		params.slotType = slotType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (overlayParent != nullptr)
			*overlayParent = params.overlayParent;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPI_GameUI.BPI_GameUI_C.FindWidgetToPop
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UFGInteractWidget*                           Widget                                                     (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPI_GameUI_C::FindWidgetToPop(class UFGInteractWidget** Widget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_GameUI.BPI_GameUI_C.FindWidgetToPop");
		
		UBPI_GameUI_C_FindWidgetToPop_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Widget != nullptr)
			*Widget = params.Widget;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPI_GameUI.BPI_GameUI_C.GetMessageBox
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UVerticalBox*                                messageBox                                                 (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPI_GameUI_C::GetMessageBox(class UVerticalBox** messageBox)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_GameUI.BPI_GameUI_C.GetMessageBox");
		
		UBPI_GameUI_C_GetMessageBox_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (messageBox != nullptr)
			*messageBox = params.messageBox;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPI_GameUI.BPI_GameUI_C.GetShoppingList
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
	 * Parameters:
	 * 		class UWidget*                                     shoppingList                                               (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPI_GameUI_C::GetShoppingList(class UWidget** shoppingList)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_GameUI.BPI_GameUI_C.GetShoppingList");
		
		UBPI_GameUI_C_GetShoppingList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (shoppingList != nullptr)
			*shoppingList = params.shoppingList;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPI_GameUI_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPI_GameUI_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPI_GameUI.BPI_GameUI_C");
		return ptr;
	}

}


