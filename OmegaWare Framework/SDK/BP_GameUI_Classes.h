#pragma once

/**
 * Name: Satisfactory
 * Version: Early_Access_CL#264901
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
	 * WidgetBlueprintGeneratedClass BP_GameUI.BP_GameUI_C
	 * Size -> 0x0239 (FullSize[0x0629] - InheritedSize[0x03F0])
	 */
	class UBP_GameUI_C : public UFGGameUI
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x03F0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    FadeAnim;                                                // 0x03F8(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    JumpLand;                                                // 0x0400(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash
		class UBPW_CreatureIndicator_C*                            BPW_CreatureIndicator;                                   // 0x0408(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBPW_Crosshair_C*                                    BPW_Crosshair;                                           // 0x0410(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBPW_ExperimentalLabel_C*                            BPW_ExperimentalLabel;                                   // 0x0418(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBPW_RespawnBar_C*                                   BPW_RespawnBar;                                          // 0x0420(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class URetainerBox*                                        CurvedElements;                                          // 0x0428(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UOverlay*                                            HUD_Overlay;                                             // 0x0430(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        InteractPanel;                                           // 0x0438(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UNamedSlot*                                          mAudioMessageSlot;                                       // 0x0440(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBPW_AutosaveNotification_C*                         mAutosaveNotificationWidget;                             // 0x0448(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UOverlay*                                            mBodySlotOverlay;                                        // 0x0450(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                        mBreakNotificationBox;                                   // 0x0458(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHorizontalBox*                                      mCenterWidgetBox;                                        // 0x0460(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidget_ChatWindow_C*                                mChatWindow;                                             // 0x0468(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBPW_CopyNotification_C*                             mCopyNotification;                                       // 0x0470(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidget_FicsitLogoSplash_C*                          mFicsitLogoSplashWidget;                                 // 0x0478(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UOverlay*                                            mHandSlotOverlay;                                        // 0x0480(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UOverlay*                                            mHudContainer;                                           // 0x0488(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidget_HintContainer_C*                             mHUDHints;                                               // 0x0490(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                        mHUDNotificationContainer;                               // 0x0498(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        mHUDOverlaySlot;                                         // 0x04A0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UScaleBox*                                           mHUDScaler;                                              // 0x04A8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidget_InviteNotification_C*                        mInviteNotificationWidget;                               // 0x04B0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBPW_WorldObjectHUDIndicator_C*                      mInWorldIndicatorManager;                                // 0x04B8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UNamedSlot*                                          mMenuSlot;                                               // 0x04C0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                        mMessageBox;                                             // 0x04C8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBPW_AlignableWrapBox_C*                             mNonbuildDisqualifiers;                                  // 0x04D0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UOverlay*                                            mPawnHUDOverlay;                                         // 0x04D8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidget_PlayerInteraction_C*                         mPlayerInteractionMessages;                              // 0x04E0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBackgroundBlur*                                     mPopupBlur;                                              // 0x04E8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidget_FocusGrab_C*                                 mPopupModal;                                             // 0x04F0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UOverlay*                                            mPopupOverlay;                                           // 0x04F8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBPW_QuickSearch_C*                                  mQuickSearchWidget;                                      // 0x0500(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UOverlay*                                            mRespawnOverlay;                                         // 0x0508(0x0008) ExportObject, ZeroConstructor, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidget_RestartNotification_C*                       mRestartNotificationWidget;                              // 0x0510(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidget_ShoppingList_C*                              mShoppingListWidget;                                     // 0x0518(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UNamedSlot*                                          mTutorialInfoSlot;                                       // 0x0520(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          mVersionLabel;                                           // 0x0528(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UNamedSlot*                                          PopupSlot;                                               // 0x0530(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          ReloadText;                                              // 0x0538(0x0008) ExportObject, ZeroConstructor, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        StandardUI;                                              // 0x0540(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USafeZone*                                           UISafeZone;                                              // 0x0548(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidget_Compass_new_C*                               Widget_Compass_new;                                      // 0x0550(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidget_DirectionalSubtitlesContainer_C*             Widget_DirectionalSubtitlesContainer;                    // 0x0558(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidget_TakeDamage_C*                                Widget_TakeDamage;                                       // 0x0560(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		TArray<class UFGInteractWidget*>                           mWidgetStack;                                            // 0x0568(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		class ABP_HUD_C*                                           bpHUD;                                                   // 0x0578(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		class UDebug_Aggro_C*                                      mAIDebug;                                                // 0x0580(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash
		bool                                                       mHUDShakeActive;                                         // 0x0588(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		unsigned char                                              UnknownData_G8C9[0x7];                                   // 0x0589(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UWidget_PlayerInventoryAddon_C*                      CachedPlayerInventoryAddon;                              // 0x0590(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash
		bool                                                       mIsSkippingIntro;                                        // 0x0598(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_99Z5[0x7];                                   // 0x0599(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FText>                                        mPlaytimeWarningMessages;                                // 0x05A0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		int32_t                                                    mPlaytimeWarningMessageIndex;                            // 0x05B0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_POQ0[0x4];                                   // 0x05B4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTimerHandle                                        mBreakNotificationTimer;                                 // 0x05B8(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class AFGGameState*                                        mFGGameState;                                            // 0x05C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		TMap<class UWidget*, ESlateVisibility>                     CachedVisibility;                                        // 0x05C8(0x0050) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		TArray<struct FStruct_KeybindingHint>                      mKeyBindingHints;                                        // 0x0618(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                       mIsPauseMenuOpen;                                        // 0x0628(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void IsPlayerInventoryOpen(bool* IsOpen);
		void GetHUDOverlayOfClass(class UClass* Class, class UWidget** Widget, bool* Success);
		void OpenCodexOnItemDescriptor(class UClass* itemDescriptor);
		void CreateAddonPlayerInventory(class UPanelWidget* Container, class UWidget** CachedPlayerInventoryAddon);
		void GetEquipmentHUDParent(EEquipmentSlot slotType, class UOverlay** overlayParent);
		void FindWidgetToPop(class UFGInteractWidget** Widget);
		void GetMessageBox(class UVerticalBox** messageBox);
		void GetShoppingList(class UWidget** shoppingList);
		bool OnShortcutPressed(int32_t shortcutIndex);
		bool HandlePauseGamePressed();
		void OnHiddenHUDModeUpdated(bool HideHUD);
		void ResetInteractionText();
		void OnPlayerDeath(class AActor* DeadActor);
		void OnReviveEnded(bool isReviveCompleted);
		void OnReviveStarted(bool isReviver);
		void OnUsableActorUpdated(bool IsValid, class AActor* BestUseableActor);
		class UNamedSlot* GetAudioMessageSlot();
		class UNamedSlot* GetTutorialInfoSlot();
		void AddHUDNotification(class UFGPushNotificationWidget* Widget);
		bool ShouldShowAutoSaveNotification();
		bool PopWidget(class UFGInteractWidget* WidgetToRemove);
		struct FEventReply OnPreviewKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
		void SetVersionLabelPosition();
		void SetExperimentalVisibility();
		void UpdatePartialPumpiModeUIVisibility(bool IsPumpiModeActive);
		void PrePopWidget(class UFGInteractWidget* WidgetBeingRemoved);
		void GetFGHud(class AFGHUD** HUD);
		void SetPrototypeVisibility(bool NewVisibility);
		void OnInventorySlotStackMove(class UWidget_InventorySlot_C* InventorySlot, EInteractionDirection InteractionDirection);
		void CreateAddOnPlayerInventoryInternal(class UPanelWidget* Container, class UWidget_PlayerInventoryAddon_C** CachedPlayerInventoryAddon);
		ESlateVisibility IsChatWindowVisible();
		ESlateVisibility GetUIVisibility();
		void UpdateHUDPanelVisibility(bool IsVisible);
		ESlateVisibility GetMessageNotifierVisibility();
		void UpdateHUDVisibility();
		void AddMessageNotification(class UClass* newMessage);
		void GetItemDropLocation(struct FVector* dropLocation);
		bool OnDrop(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation);
		void RefreshInputMode();
		class UFGPopupWidget* CreatePopupWidget(const struct FPopupData& PopupData);
		class FText GetReloadRespawnText();
		ESlateVisibility GetReloadRespawnTextVisibility();
		void PopAllWidgets_Internal();
		void DoesWidgetExist(class UClass* WidgetClass, bool* doesExist);
		ESlateVisibility GetPlayerInteractionVisibility();
		void Destruct();
		void ReceivedMessage(class UClass* InMessage);
		void HandleFocusLost();
		void AddPawnHUD(class UUserWidget* newContent);
		void RemovePawnHUD();
		void AddInteractWidget(class UFGInteractWidget* widgetToAdd);
		void OnPlayerBeginTypeMessage();
		void Construct();
		void OnChatMessageReceived();
		void ShowRespawnMessage();
		void OnReceiveRadiationStart();
		void OnReceiveRadiationStop();
		void OnRadiationIntensityUpdated(float radiationIntensity, float radiationImmunity);
		void ForceStopRadiationUI();
		void PushWidget(class UFGInteractWidget* Widget);
		void ShowDirectionalSubtitle(const class FText& Subtitle, class AActor* Instigator, float Duration, bool bUseDuration);
		void StopSubtitle(class AActor* Instigator);
		void EventUpdateHUDScaling(const class FString& updatedCvar);
		void OnResumeGame();
		void ShowQuickSearch();
		void CreateBreakNotification();
		void ClosePopup();
		void PopAllWidgets();
		void OnInitialized();
		void OnAutosaveStart(float TimeUntilAutosave);
		void OnAutosaveFinished();
		void ResetInput();
		void ShowAttentionPing(class AFGPlayerState* PlayerState, const struct FVector& WorldLocation);
		void PushNotificationWidget(class UFGPushNotificationWidget* Widget);
		void OnResearchCompleted(class UClass* schematic);
		void OnBeginTypeChat();
		void ReceiveShowTutorialHint();
		void ShowBasicNotification(const class FText& Text);
		void ShowInteractionText(const class FText& Text);
		void HideInteractionText();
		void SetupPawnBindings();
		void ShowBuildDisqualifier(const class FText& Text);
		void OnDisqualifierDestroyed();
		void OnPawnChanged(class APawn* NewPawn);
		void BndEvt__mShoppingListWidget_K2Node_ComponentBoundEvent_0_OnToDoListOpen__DelegateSignature();
		void BndEvt__mShoppingListWidget_K2Node_ComponentBoundEvent_1_OnToDoListClosed__DelegateSignature();
		void OnFactoryClipboardCopied(class UObject* interactObject, class UFGFactoryClipboardSettings* factoryClipboardSettings);
		void OnFactoryClipboardPasted(class UObject* interactObject, class UFGFactoryClipboardSettings* factoryClipboardSettings);
		void AddWordObjectIndicatorWidget(class UBPW_WorldObjectHUDIndicator_Object_C* mWorldObjectHudIndicatorObjectWidget, const struct FVector& Location);
		void ClearHUDHints();
		void SetHUDHints(TArray<struct FStruct_KeybindingHint> KeybindingHints);
		void ShowTextNotification(const class FText& Text);
		void AddHUDOverlay(class UWidget* Widget);
		void OnUpdateHUD_ESlot(EEquipmentSlot EquipmentSlotType);
		void CloseAllHUD_ESlots();
		void OpenAllHUD_ESlots();
		void OnPauseGame();
		void ForceUpdateEquipmentCrosshair();
		void ToggleInteractWidget(class UClass* WidgetToToggle, class UObject* interactObject);
		void OnToggleInteractWidget(class UClass* widgetToToogle, class UObject* interactObject);
		void ExecuteUbergraph_BP_GameUI(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
