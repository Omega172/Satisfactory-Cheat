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
	// # Structs
	// --------------------------------------------------
	/**
	 * Function BPI_GameUI.BPI_GameUI_C.ToggleInteractWidget
	 */
	struct UBPI_GameUI_C_ToggleInteractWidget_Params
	{
	public:
		class UClass*                                              WidgetToToggle;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             interactObject;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPI_GameUI.BPI_GameUI_C.IsPlayerInventoryOpen
	 */
	struct UBPI_GameUI_C_IsPlayerInventoryOpen_Params
	{
	public:
		bool                                                       IsOpen;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPI_GameUI.BPI_GameUI_C.ForceUpdateEquipmentCrosshair
	 */
	struct UBPI_GameUI_C_ForceUpdateEquipmentCrosshair_Params
	{	};

	/**
	 * Function BPI_GameUI.BPI_GameUI_C.CloseAllHUD_ESlots
	 */
	struct UBPI_GameUI_C_CloseAllHUD_ESlots_Params
	{	};

	/**
	 * Function BPI_GameUI.BPI_GameUI_C.OpenAllHUD_ESlots
	 */
	struct UBPI_GameUI_C_OpenAllHUD_ESlots_Params
	{	};

	/**
	 * Function BPI_GameUI.BPI_GameUI_C.OnUpdateHUD_ESlot
	 */
	struct UBPI_GameUI_C_OnUpdateHUD_ESlot_Params
	{
	public:
		EEquipmentSlot                                             EquipmentSlotType;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPI_GameUI.BPI_GameUI_C.GetHUDOverlayOfClass
	 */
	struct UBPI_GameUI_C_GetHUDOverlayOfClass_Params
	{
	public:
		class UClass*                                              Class;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		class UWidget*                                             Widget;                                                  // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
		bool                                                       Success;                                                 // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPI_GameUI.BPI_GameUI_C.AddHUDOverlay
	 */
	struct UBPI_GameUI_C_AddHUDOverlay_Params
	{
	public:
		class UWidget*                                             Widget;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPI_GameUI.BPI_GameUI_C.ClearHUDHints
	 */
	struct UBPI_GameUI_C_ClearHUDHints_Params
	{	};

	/**
	 * Function BPI_GameUI.BPI_GameUI_C.SetHUDHints
	 */
	struct UBPI_GameUI_C_SetHUDHints_Params
	{
	public:
		TArray<struct FStruct_KeybindingHint>                      KeybindingHints;                                         // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BPI_GameUI.BPI_GameUI_C.AddWordObjectIndicatorWidget
	 */
	struct UBPI_GameUI_C_AddWordObjectIndicatorWidget_Params
	{
	public:
		class UBPW_WorldObjectHUDIndicator_Object_C*               mWorldObjectHudIndicatorObjectWidget;                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             Location;                                                // 0x0008(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPI_GameUI.BPI_GameUI_C.ShowBuildDisqualifier
	 */
	struct UBPI_GameUI_C_ShowBuildDisqualifier_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BPI_GameUI.BPI_GameUI_C.HideInteractionText
	 */
	struct UBPI_GameUI_C_HideInteractionText_Params
	{	};

	/**
	 * Function BPI_GameUI.BPI_GameUI_C.ShowInteractionText
	 */
	struct UBPI_GameUI_C_ShowInteractionText_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BPI_GameUI.BPI_GameUI_C.ShowBasicNotification
	 */
	struct UBPI_GameUI_C_ShowBasicNotification_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BPI_GameUI.BPI_GameUI_C.OnBeginTypeChat
	 */
	struct UBPI_GameUI_C_OnBeginTypeChat_Params
	{	};

	/**
	 * Function BPI_GameUI.BPI_GameUI_C.OpenCodexOnItemDescriptor
	 */
	struct UBPI_GameUI_C_OpenCodexOnItemDescriptor_Params
	{
	public:
		class UClass*                                              itemDescriptor;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPI_GameUI.BPI_GameUI_C.CreateAddonPlayerInventory
	 */
	struct UBPI_GameUI_C_CreateAddonPlayerInventory_Params
	{
	public:
		class UPanelWidget*                                        Container;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
		class UWidget*                                             CachedPlayerInventoryAddon;                              // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPI_GameUI.BPI_GameUI_C.GetEquipmentHUDParent
	 */
	struct UBPI_GameUI_C_GetEquipmentHUDParent_Params
	{
	public:
		EEquipmentSlot                                             slotType;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_I1J0[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UOverlay*                                            overlayParent;                                           // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPI_GameUI.BPI_GameUI_C.FindWidgetToPop
	 */
	struct UBPI_GameUI_C_FindWidgetToPop_Params
	{
	public:
		class UFGInteractWidget*                                   Widget;                                                  // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPI_GameUI.BPI_GameUI_C.GetMessageBox
	 */
	struct UBPI_GameUI_C_GetMessageBox_Params
	{
	public:
		class UVerticalBox*                                        messageBox;                                              // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPI_GameUI.BPI_GameUI_C.GetShoppingList
	 */
	struct UBPI_GameUI_C_GetShoppingList_Params
	{
	public:
		class UWidget*                                             shoppingList;                                            // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
