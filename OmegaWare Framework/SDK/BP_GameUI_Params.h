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
	 * Function BP_GameUI.BP_GameUI_C.IsPlayerInventoryOpen
	 */
	struct UBP_GameUI_C_IsPlayerInventoryOpen_Params
	{
	public:
		bool                                                       IsOpen;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_GameUI.BP_GameUI_C.GetHUDOverlayOfClass
	 */
	struct UBP_GameUI_C_GetHUDOverlayOfClass_Params
	{
	public:
		class UClass*                                              Class;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		class UWidget*                                             Widget;                                                  // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
		bool                                                       Success;                                                 // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_5G1A[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_GameUI.BP_GameUI_C.OpenCodexOnItemDescriptor
	 */
	struct UBP_GameUI_C_OpenCodexOnItemDescriptor_Params
	{
	public:
		class UClass*                                              itemDescriptor;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_GameUI.BP_GameUI_C.CreateAddonPlayerInventory
	 */
	struct UBP_GameUI_C_CreateAddonPlayerInventory_Params
	{
	public:
		class UPanelWidget*                                        Container;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
		class UWidget*                                             CachedPlayerInventoryAddon;                              // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_GameUI.BP_GameUI_C.GetEquipmentHUDParent
	 */
	struct UBP_GameUI_C_GetEquipmentHUDParent_Params
	{
	public:
		EEquipmentSlot                                             slotType;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_BA9T[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UOverlay*                                            overlayParent;                                           // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_GameUI.BP_GameUI_C.FindWidgetToPop
	 */
	struct UBP_GameUI_C_FindWidgetToPop_Params
	{
	public:
		class UFGInteractWidget*                                   Widget;                                                  // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_GameUI.BP_GameUI_C.GetMessageBox
	 */
	struct UBP_GameUI_C_GetMessageBox_Params
	{
	public:
		class UVerticalBox*                                        messageBox;                                              // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_GameUI.BP_GameUI_C.GetShoppingList
	 */
	struct UBP_GameUI_C_GetShoppingList_Params
	{
	public:
		class UWidget*                                             shoppingList;                                            // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_GameUI.BP_GameUI_C.OnShortcutPressed
	 */
	struct UBP_GameUI_C_OnShortcutPressed_Params
	{
	public:
		int32_t                                                    shortcutIndex;                                           // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_LLAG[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_GameUI.BP_GameUI_C.HandlePauseGamePressed
	 */
	struct UBP_GameUI_C_HandlePauseGamePressed_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_GameUI.BP_GameUI_C.OnHiddenHUDModeUpdated
	 */
	struct UBP_GameUI_C_OnHiddenHUDModeUpdated_Params
	{
	public:
		bool                                                       HideHUD;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_GameUI.BP_GameUI_C.ResetInteractionText
	 */
	struct UBP_GameUI_C_ResetInteractionText_Params
	{	};

	/**
	 * Function BP_GameUI.BP_GameUI_C.OnPlayerDeath
	 */
	struct UBP_GameUI_C_OnPlayerDeath_Params
	{
	public:
		class AActor*                                              DeadActor;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_GameUI.BP_GameUI_C.OnReviveEnded
	 */
	struct UBP_GameUI_C_OnReviveEnded_Params
	{
	public:
		bool                                                       isReviveCompleted;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_OYLC[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_GameUI.BP_GameUI_C.OnReviveStarted
	 */
	struct UBP_GameUI_C_OnReviveStarted_Params
	{
	public:
		bool                                                       isReviver;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_GameUI.BP_GameUI_C.OnUsableActorUpdated
	 */
	struct UBP_GameUI_C_OnUsableActorUpdated_Params
	{
	public:
		bool                                                       IsValid;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_52K4[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              BestUseableActor;                                        // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_GameUI.BP_GameUI_C.GetAudioMessageSlot
	 */
	struct UBP_GameUI_C_GetAudioMessageSlot_Params
	{
	public:
		class UNamedSlot*                                          ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_GameUI.BP_GameUI_C.GetTutorialInfoSlot
	 */
	struct UBP_GameUI_C_GetTutorialInfoSlot_Params
	{
	public:
		class UNamedSlot*                                          ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_GameUI.BP_GameUI_C.AddHUDNotification
	 */
	struct UBP_GameUI_C_AddHUDNotification_Params
	{
	public:
		class UFGPushNotificationWidget*                           Widget;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_GameUI.BP_GameUI_C.ShouldShowAutoSaveNotification
	 */
	struct UBP_GameUI_C_ShouldShowAutoSaveNotification_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_XA9Q[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_GameUI.BP_GameUI_C.PopWidget
	 */
	struct UBP_GameUI_C_PopWidget_Params
	{
	public:
		class UFGInteractWidget*                                   WidgetToRemove;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_GameUI.BP_GameUI_C.OnPreviewKeyDown
	 */
	struct UBP_GameUI_C_OnPreviewKeyDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0038(0x0040)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0078(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_GameUI.BP_GameUI_C.SetVersionLabelPosition
	 */
	struct UBP_GameUI_C_SetVersionLabelPosition_Params
	{	};

	/**
	 * Function BP_GameUI.BP_GameUI_C.SetExperimentalVisibility
	 */
	struct UBP_GameUI_C_SetExperimentalVisibility_Params
	{	};

	/**
	 * Function BP_GameUI.BP_GameUI_C.UpdatePartialPumpiModeUIVisibility
	 */
	struct UBP_GameUI_C_UpdatePartialPumpiModeUIVisibility_Params
	{
	public:
		bool                                                       IsPumpiModeActive;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_GameUI.BP_GameUI_C.PrePopWidget
	 */
	struct UBP_GameUI_C_PrePopWidget_Params
	{
	public:
		class UFGInteractWidget*                                   WidgetBeingRemoved;                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_GameUI.BP_GameUI_C.GetFGHud
	 */
	struct UBP_GameUI_C_GetFGHud_Params
	{
	public:
		class AFGHUD*                                              HUD;                                                     // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_GameUI.BP_GameUI_C.SetPrototypeVisibility
	 */
	struct UBP_GameUI_C_SetPrototypeVisibility_Params
	{
	public:
		bool                                                       NewVisibility;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_GameUI.BP_GameUI_C.OnInventorySlotStackMove
	 */
	struct UBP_GameUI_C_OnInventorySlotStackMove_Params
	{
	public:
		class UWidget_InventorySlot_C*                             InventorySlot;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
		EInteractionDirection                                      InteractionDirection;                                    // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_LP0H[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_GameUI.BP_GameUI_C.CreateAddOnPlayerInventoryInternal
	 */
	struct UBP_GameUI_C_CreateAddOnPlayerInventoryInternal_Params
	{
	public:
		class UPanelWidget*                                        Container;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
		class UWidget_PlayerInventoryAddon_C*                      CachedPlayerInventoryAddon;                              // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_GameUI.BP_GameUI_C.IsChatWindowVisible
	 */
	struct UBP_GameUI_C_IsChatWindowVisible_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_GameUI.BP_GameUI_C.GetUIVisibility
	 */
	struct UBP_GameUI_C_GetUIVisibility_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_Q973[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_GameUI.BP_GameUI_C.UpdateHUDPanelVisibility
	 */
	struct UBP_GameUI_C_UpdateHUDPanelVisibility_Params
	{
	public:
		bool                                                       IsVisible;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_GameUI.BP_GameUI_C.GetMessageNotifierVisibility
	 */
	struct UBP_GameUI_C_GetMessageNotifierVisibility_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_B5E6[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_GameUI.BP_GameUI_C.UpdateHUDVisibility
	 */
	struct UBP_GameUI_C_UpdateHUDVisibility_Params
	{	};

	/**
	 * Function BP_GameUI.BP_GameUI_C.AddMessageNotification
	 */
	struct UBP_GameUI_C_AddMessageNotification_Params
	{
	public:
		class UClass*                                              newMessage;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_GameUI.BP_GameUI_C.GetItemDropLocation
	 */
	struct UBP_GameUI_C_GetItemDropLocation_Params
	{
	public:
		struct FVector                                             dropLocation;                                            // 0x0000(0x0018)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_GameUI.BP_GameUI_C.OnDrop
	 */
	struct UBP_GameUI_C_OnDrop_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       PointerEvent;                                            // 0x0038(0x0078)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class UDragDropOperation*                                  Operation;                                               // 0x00B0(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x00B8(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_GameUI.BP_GameUI_C.RefreshInputMode
	 */
	struct UBP_GameUI_C_RefreshInputMode_Params
	{	};

	/**
	 * Function BP_GameUI.BP_GameUI_C.CreatePopupWidget
	 */
	struct UBP_GameUI_C_CreatePopupWidget_Params
	{
	public:
		struct FPopupData                                          PopupData;                                               // 0x0000(0x0070)  (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
		class UFGPopupWidget*                                      ReturnValue;                                             // 0x0070(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_GameUI.BP_GameUI_C.GetReloadRespawnText
	 */
	struct UBP_GameUI_C_GetReloadRespawnText_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_GameUI.BP_GameUI_C.GetReloadRespawnTextVisibility
	 */
	struct UBP_GameUI_C_GetReloadRespawnTextVisibility_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_GameUI.BP_GameUI_C.PopAllWidgets_Internal
	 */
	struct UBP_GameUI_C_PopAllWidgets_Internal_Params
	{	};

	/**
	 * Function BP_GameUI.BP_GameUI_C.DoesWidgetExist
	 */
	struct UBP_GameUI_C_DoesWidgetExist_Params
	{
	public:
		class UClass*                                              WidgetClass;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                                       doesExist;                                               // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_B2HR[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_GameUI.BP_GameUI_C.GetPlayerInteractionVisibility
	 */
	struct UBP_GameUI_C_GetPlayerInteractionVisibility_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_GameUI.BP_GameUI_C.Destruct
	 */
	struct UBP_GameUI_C_Destruct_Params
	{	};

	/**
	 * Function BP_GameUI.BP_GameUI_C.ReceivedMessage
	 */
	struct UBP_GameUI_C_ReceivedMessage_Params
	{
	public:
		class UClass*                                              InMessage;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	};

	/**
	 * Function BP_GameUI.BP_GameUI_C.HandleFocusLost
	 */
	struct UBP_GameUI_C_HandleFocusLost_Params
	{	};

	/**
	 * Function BP_GameUI.BP_GameUI_C.AddPawnHUD
	 */
	struct UBP_GameUI_C_AddPawnHUD_Params
	{
	public:
		class UUserWidget*                                         newContent;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_GameUI.BP_GameUI_C.RemovePawnHUD
	 */
	struct UBP_GameUI_C_RemovePawnHUD_Params
	{	};

	/**
	 * Function BP_GameUI.BP_GameUI_C.AddInteractWidget
	 */
	struct UBP_GameUI_C_AddInteractWidget_Params
	{
	public:
		class UFGInteractWidget*                                   widgetToAdd;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_GameUI.BP_GameUI_C.OnPlayerBeginTypeMessage
	 */
	struct UBP_GameUI_C_OnPlayerBeginTypeMessage_Params
	{	};

	/**
	 * Function BP_GameUI.BP_GameUI_C.Construct
	 */
	struct UBP_GameUI_C_Construct_Params
	{	};

	/**
	 * Function BP_GameUI.BP_GameUI_C.OnChatMessageReceived
	 */
	struct UBP_GameUI_C_OnChatMessageReceived_Params
	{	};

	/**
	 * Function BP_GameUI.BP_GameUI_C.ShowRespawnMessage
	 */
	struct UBP_GameUI_C_ShowRespawnMessage_Params
	{	};

	/**
	 * Function BP_GameUI.BP_GameUI_C.OnReceiveRadiationStart
	 */
	struct UBP_GameUI_C_OnReceiveRadiationStart_Params
	{	};

	/**
	 * Function BP_GameUI.BP_GameUI_C.OnReceiveRadiationStop
	 */
	struct UBP_GameUI_C_OnReceiveRadiationStop_Params
	{	};

	/**
	 * Function BP_GameUI.BP_GameUI_C.OnRadiationIntensityUpdated
	 */
	struct UBP_GameUI_C_OnRadiationIntensityUpdated_Params
	{
	public:
		float                                                      radiationIntensity;                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      radiationImmunity;                                       // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_GameUI.BP_GameUI_C.ForceStopRadiationUI
	 */
	struct UBP_GameUI_C_ForceStopRadiationUI_Params
	{	};

	/**
	 * Function BP_GameUI.BP_GameUI_C.PushWidget
	 */
	struct UBP_GameUI_C_PushWidget_Params
	{
	public:
		class UFGInteractWidget*                                   Widget;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_GameUI.BP_GameUI_C.ShowDirectionalSubtitle
	 */
	struct UBP_GameUI_C_ShowDirectionalSubtitle_Params
	{
	public:
		class FText                                                Subtitle;                                                // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		class AActor*                                              Instigator;                                              // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		float                                                      Duration;                                                // 0x0020(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bUseDuration;                                            // 0x0024(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_GameUI.BP_GameUI_C.StopSubtitle
	 */
	struct UBP_GameUI_C_StopSubtitle_Params
	{
	public:
		class AActor*                                              Instigator;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_GameUI.BP_GameUI_C.EventUpdateHUDScaling
	 */
	struct UBP_GameUI_C_EventUpdateHUDScaling_Params
	{
	public:
		class FString                                              updatedCvar;                                             // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_GameUI.BP_GameUI_C.OnResumeGame
	 */
	struct UBP_GameUI_C_OnResumeGame_Params
	{	};

	/**
	 * Function BP_GameUI.BP_GameUI_C.ShowQuickSearch
	 */
	struct UBP_GameUI_C_ShowQuickSearch_Params
	{	};

	/**
	 * Function BP_GameUI.BP_GameUI_C.CreateBreakNotification
	 */
	struct UBP_GameUI_C_CreateBreakNotification_Params
	{	};

	/**
	 * Function BP_GameUI.BP_GameUI_C.ClosePopup
	 */
	struct UBP_GameUI_C_ClosePopup_Params
	{	};

	/**
	 * Function BP_GameUI.BP_GameUI_C.PopAllWidgets
	 */
	struct UBP_GameUI_C_PopAllWidgets_Params
	{	};

	/**
	 * Function BP_GameUI.BP_GameUI_C.OnInitialized
	 */
	struct UBP_GameUI_C_OnInitialized_Params
	{	};

	/**
	 * Function BP_GameUI.BP_GameUI_C.OnAutosaveStart
	 */
	struct UBP_GameUI_C_OnAutosaveStart_Params
	{
	public:
		float                                                      TimeUntilAutosave;                                       // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_GameUI.BP_GameUI_C.OnAutosaveFinished
	 */
	struct UBP_GameUI_C_OnAutosaveFinished_Params
	{	};

	/**
	 * Function BP_GameUI.BP_GameUI_C.ResetInput
	 */
	struct UBP_GameUI_C_ResetInput_Params
	{	};

	/**
	 * Function BP_GameUI.BP_GameUI_C.ShowAttentionPing
	 */
	struct UBP_GameUI_C_ShowAttentionPing_Params
	{
	public:
		class AFGPlayerState*                                      PlayerState;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             WorldLocation;                                           // 0x0008(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_GameUI.BP_GameUI_C.PushNotificationWidget
	 */
	struct UBP_GameUI_C_PushNotificationWidget_Params
	{
	public:
		class UFGPushNotificationWidget*                           Widget;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_GameUI.BP_GameUI_C.OnResearchCompleted
	 */
	struct UBP_GameUI_C_OnResearchCompleted_Params
	{
	public:
		class UClass*                                              schematic;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_GameUI.BP_GameUI_C.OnBeginTypeChat
	 */
	struct UBP_GameUI_C_OnBeginTypeChat_Params
	{	};

	/**
	 * Function BP_GameUI.BP_GameUI_C.ReceiveShowTutorialHint
	 */
	struct UBP_GameUI_C_ReceiveShowTutorialHint_Params
	{	};

	/**
	 * Function BP_GameUI.BP_GameUI_C.ShowBasicNotification
	 */
	struct UBP_GameUI_C_ShowBasicNotification_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BP_GameUI.BP_GameUI_C.ShowInteractionText
	 */
	struct UBP_GameUI_C_ShowInteractionText_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BP_GameUI.BP_GameUI_C.HideInteractionText
	 */
	struct UBP_GameUI_C_HideInteractionText_Params
	{	};

	/**
	 * Function BP_GameUI.BP_GameUI_C.SetupPawnBindings
	 */
	struct UBP_GameUI_C_SetupPawnBindings_Params
	{	};

	/**
	 * Function BP_GameUI.BP_GameUI_C.ShowBuildDisqualifier
	 */
	struct UBP_GameUI_C_ShowBuildDisqualifier_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BP_GameUI.BP_GameUI_C.OnDisqualifierDestroyed
	 */
	struct UBP_GameUI_C_OnDisqualifierDestroyed_Params
	{	};

	/**
	 * Function BP_GameUI.BP_GameUI_C.OnPawnChanged
	 */
	struct UBP_GameUI_C_OnPawnChanged_Params
	{
	public:
		class APawn*                                               NewPawn;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_GameUI.BP_GameUI_C.BndEvt__mShoppingListWidget_K2Node_ComponentBoundEvent_0_OnToDoListOpen__DelegateSignature
	 */
	struct UBP_GameUI_C_BndEvt__mShoppingListWidget_K2Node_ComponentBoundEvent_0_OnToDoListOpen__DelegateSignature_Params
	{	};

	/**
	 * Function BP_GameUI.BP_GameUI_C.BndEvt__mShoppingListWidget_K2Node_ComponentBoundEvent_1_OnToDoListClosed__DelegateSignature
	 */
	struct UBP_GameUI_C_BndEvt__mShoppingListWidget_K2Node_ComponentBoundEvent_1_OnToDoListClosed__DelegateSignature_Params
	{	};

	/**
	 * Function BP_GameUI.BP_GameUI_C.OnFactoryClipboardCopied
	 */
	struct UBP_GameUI_C_OnFactoryClipboardCopied_Params
	{
	public:
		class UObject*                                             interactObject;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		class UFGFactoryClipboardSettings*                         factoryClipboardSettings;                                // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_GameUI.BP_GameUI_C.OnFactoryClipboardPasted
	 */
	struct UBP_GameUI_C_OnFactoryClipboardPasted_Params
	{
	public:
		class UObject*                                             interactObject;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		class UFGFactoryClipboardSettings*                         factoryClipboardSettings;                                // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_GameUI.BP_GameUI_C.AddWordObjectIndicatorWidget
	 */
	struct UBP_GameUI_C_AddWordObjectIndicatorWidget_Params
	{
	public:
		class UBPW_WorldObjectHUDIndicator_Object_C*               mWorldObjectHudIndicatorObjectWidget;                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             Location;                                                // 0x0008(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_GameUI.BP_GameUI_C.ClearHUDHints
	 */
	struct UBP_GameUI_C_ClearHUDHints_Params
	{	};

	/**
	 * Function BP_GameUI.BP_GameUI_C.SetHUDHints
	 */
	struct UBP_GameUI_C_SetHUDHints_Params
	{
	public:
		TArray<struct FStruct_KeybindingHint>                      KeybindingHints;                                         // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BP_GameUI.BP_GameUI_C.ShowTextNotification
	 */
	struct UBP_GameUI_C_ShowTextNotification_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BP_GameUI.BP_GameUI_C.AddHUDOverlay
	 */
	struct UBP_GameUI_C_AddHUDOverlay_Params
	{
	public:
		class UWidget*                                             Widget;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_GameUI.BP_GameUI_C.OnUpdateHUD_ESlot
	 */
	struct UBP_GameUI_C_OnUpdateHUD_ESlot_Params
	{
	public:
		EEquipmentSlot                                             EquipmentSlotType;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_GameUI.BP_GameUI_C.CloseAllHUD_ESlots
	 */
	struct UBP_GameUI_C_CloseAllHUD_ESlots_Params
	{	};

	/**
	 * Function BP_GameUI.BP_GameUI_C.OpenAllHUD_ESlots
	 */
	struct UBP_GameUI_C_OpenAllHUD_ESlots_Params
	{	};

	/**
	 * Function BP_GameUI.BP_GameUI_C.OnPauseGame
	 */
	struct UBP_GameUI_C_OnPauseGame_Params
	{	};

	/**
	 * Function BP_GameUI.BP_GameUI_C.ForceUpdateEquipmentCrosshair
	 */
	struct UBP_GameUI_C_ForceUpdateEquipmentCrosshair_Params
	{	};

	/**
	 * Function BP_GameUI.BP_GameUI_C.ToggleInteractWidget
	 */
	struct UBP_GameUI_C_ToggleInteractWidget_Params
	{
	public:
		class UClass*                                              WidgetToToggle;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             interactObject;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_GameUI.BP_GameUI_C.OnToggleInteractWidget
	 */
	struct UBP_GameUI_C_OnToggleInteractWidget_Params
	{
	public:
		class UClass*                                              widgetToToogle;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
		class UObject*                                             interactObject;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_GameUI.BP_GameUI_C.ExecuteUbergraph_BP_GameUI
	 */
	struct UBP_GameUI_C_ExecuteUbergraph_BP_GameUI_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_RSI1[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
