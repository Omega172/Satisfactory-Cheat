#pragma once

/**
 * Name: Satisfactory
 * Version: Early_Access_CL#273254
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Classes
	// --------------------------------------------------
	/**
	 * BlueprintGeneratedClass BPI_GameUI.BPI_GameUI_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UBPI_GameUI_C : public UInterface
	{
	public:
		void ToggleInteractWidget(class UClass* WidgetToToggle, class UObject* interactObject);
		void IsPlayerInventoryOpen(bool* IsOpen);
		void ForceUpdateEquipmentCrosshair();
		void CloseAllHUD_ESlots();
		void OpenAllHUD_ESlots();
		void OnUpdateHUD_ESlot(EEquipmentSlot EquipmentSlotType);
		void GetHUDOverlayOfClass(class UClass* Class, class UWidget** Widget, bool* Success);
		void AddHUDOverlay(class UWidget* Widget);
		void ClearHUDHints();
		void SetHUDHints(TArray<struct FStruct_KeybindingHint> KeybindingHints);
		void AddWordObjectIndicatorWidget(class UBPW_WorldObjectHUDIndicator_Object_C* mWorldObjectHudIndicatorObjectWidget, const struct FVector& Location);
		void ShowBuildDisqualifier(const class FText& Text);
		void HideInteractionText();
		void ShowInteractionText(const class FText& Text);
		void ShowBasicNotification(const class FText& Text);
		void OnBeginTypeChat();
		void OpenCodexOnItemDescriptor(class UClass* itemDescriptor);
		void CreateAddonPlayerInventory(class UPanelWidget* Container, class UWidget** CachedPlayerInventoryAddon);
		void GetEquipmentHUDParent(EEquipmentSlot slotType, class UOverlay** overlayParent);
		void FindWidgetToPop(class UFGInteractWidget** Widget);
		void GetMessageBox(class UVerticalBox** messageBox);
		void GetShoppingList(class UWidget** shoppingList);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
