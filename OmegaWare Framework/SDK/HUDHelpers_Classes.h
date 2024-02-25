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
	 * BlueprintGeneratedClass HUDHelpers.HUDHelpers_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UHUDHelpers_C : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_GetWidgetInListView(class UListView* mListView, class UObject* Item, class UObject* __WorldContext, class UUserWidget** mWidget);
		void STATIC_GetKeyNameforActionSimple(class AController* Controller, const class FName& buttonName, class UObject* __WorldContext, class FText* Button);
		void STATIC_GetAdminInterface(class APlayerController* PlayerController, class UObject* __WorldContext, class AFGAdminInterface** adminInterface);
		void STATIC_HasValidAdminInterface(class APlayerController* Controller, class UObject* __WorldContext, bool* Valid);
		void STATIC_IsInMainMenu(class UObject* WorldContext, class UObject* __WorldContext, bool* IsInMainMenu);
		void STATIC_GetFGGameUI(class AController* Controller, class UObject* __WorldContext, class UFGGameUI** gameUI);
		void STATIC_GetNumItemsFromCentralStorage(class APawn* OwningPawn, class UClass* mItemClass, class UObject* __WorldContext, int32_t* NumItems);
		void STATIC_GetNumItemsOwned(class UObject* __WorldContext);
		void STATIC_GetScanningObjectName(class APawn* OwningPawn, class UObject* __WorldContext, class FText* ObjectName);
		void STATIC_ShowHideHUD(bool IsMenuOpen, class APawn* OwningPawn, class AController* Controller, class UObject* __WorldContext);
		void STATIC_GetNumItemsFromInventory(class UFGInventoryComponent* InventoryComponent, class UClass* mItemClass, class UObject* __WorldContext, int32_t* NumItems);
		void STATIC_GetNumItemsFromPlayerInventory(class APawn* OwningPawn, class UClass* mItemClass, class UObject* __WorldContext, int32_t* NumItems);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
