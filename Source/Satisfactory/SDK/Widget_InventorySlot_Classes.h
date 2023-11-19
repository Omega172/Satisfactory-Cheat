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
	 * WidgetBlueprintGeneratedClass Widget_InventorySlot.Widget_InventorySlot_C
	 * Size -> 0x01A9 (FullSize[0x0429] - InheritedSize[0x0280])
	 */
	class UWidget_InventorySlot_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0280(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    animOnNewSlotsAdded;                                     // 0x0288(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    OnHover;                                                 // 0x0290(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash
		class UBorder*                                             mAmountBackground;                                       // 0x0298(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          mAmountText;                                             // 0x02A0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        mContainer;                                              // 0x02A8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          mItemAbbreviation;                                       // 0x02B0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              mSlotBg;                                                 // 0x02B8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UMenuAnchor*                                         mSplitMenuAnchor;                                        // 0x02C0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		int32_t                                                    mSlotIdx;                                                // 0x02C8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		int32_t                                                    mNumItems;                                               // 0x02CC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UFGInventoryComponent*                               mCachedInventoryComponent;                               // 0x02D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		class UClass*                                              mItemClass;                                              // 0x02D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class UObject*                                             mTooltipWidget;                                          // 0x02E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class UClass*                                              mFilterItemDescriptor;                                   // 0x02E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnSlotHovered;                                           // 0x02F0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       mShouldGrabAllOfType;                                    // 0x0300(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_A9GO[0x7];                                   // 0x0301(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTexture*                                            mCostSlotBrush;                                          // 0x0308(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnMoveStack;                                             // 0x0310(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class UMaterialInstanceDynamic*                            mSlotBgMaterial;                                         // 0x0320(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		struct FTimerHandle                                        mSplitStackTimerHandle;                                  // 0x0328(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		double                                                     mSplitStackHoldTime;                                     // 0x0330(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UWidget_InventorySlot_C*                             mInventorySlotToRepresent;                               // 0x0338(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash
		EInventorySlot_State_Content                               mContentState;                                           // 0x0340(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EDragNDropHoverState                                       mDragAndDropState;                                       // 0x0341(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EInventorySlot_State_Interact                              mInteractState;                                          // 0x0342(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EResourceForm                                              mResourceForm;                                           // 0x0343(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_BKOE[0x4];                                   // 0x0344(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              mPreviousItemClass;                                      // 0x0348(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		bool                                                       mIsCostSlot;                                             // 0x0350(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		bool                                                       mBigSlot;                                                // 0x0351(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       mSmallSlot;                                              // 0x0352(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       mIsLocked;                                               // 0x0353(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		bool                                                       mNonSplitMenuOpened;                                     // 0x0354(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       mUseItemAbbreviation;                                    // 0x0355(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_Y8M0[0x2];                                   // 0x0356(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSlateFontInfo                                      SmallAbbreviationFontSize;                               // 0x0358(0x0058) Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash
		struct FSlateFontInfo                                      LargeAbbreviationFontSize;                               // 0x03B0(0x0058) Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash
		int32_t                                                    mSlotSize;                                               // 0x0408(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    mTempCount;                                              // 0x040C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnStackDroppedOnSlot;                                    // 0x0410(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class UBPW_InventorySlotSetting_C*                         mInventorySlotSetting;                                   // 0x0420(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash
		bool                                                       mShowInventorySlotSettings;                              // 0x0428(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash

	public:
		void GetItemDescriptor(class UClass** itemDescriptor);
		void GetDragAndDropType(EInventorySlot_DragAndDropTypes* Type);
		void SetShowInventorySlotSetting(bool mShowInventorySlotSettings);
		void SetupInventorySetting();
		void SplitStack(int32_t numResourceToMove);
		void DragEnter(class UObject* Object);
		void OnMenuClosed();
		void UpdateAmountBGVisbility();
		void UpdateSlotInformation();
		void OnSlotUpdated(int32_t Index);
		void SetFontSize(bool SmallSlot, bool BigSlot);
		void SetItemAbbreviationText();
		void OpenNonSplitMenu();
		void UpdateResourceFormVisuals();
		class UClass* GetItemOrFilterClass();
		class UClass* GetFilterClass();
		void OnItemClassUpdated();
		void GetIsItemStackable(bool* IsStackable);
		void SetResourceForm(EResourceForm NewResourceForm);
		void GetContentState(EInventorySlot_State_Content* ContentState);
		void SetInteractState(EInventorySlot_State_Interact NewInteractState);
		void SetDragAndDropState(EDragNDropHoverState NewDragAndDropState);
		void SetContentState(EInventorySlot_State_Content NewContentState);
		void MoveAllWithSameItemClass();
		void ShowSplitStackWidget();
		struct FEventReply OnMouseButtonDoubleClick(const struct FGeometry& InMyGeometry, const struct FPointerEvent& InMouseEvent);
		void GetItemForm(EResourceForm* form);
		void CheckForNuclearWaste(class UClass* Object);
		void QuickMoveInventory(bool MoveAllItemsOfSameType);
		void SetSlotSize(bool SmallSlot, bool BigSlot);
		void DropOntoInventorySlot(class UWidget_InventorySlot_C* OtherInventorySlot, bool* Result);
		struct FEventReply OnMouseButtonUp(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
		struct FEventReply OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
		struct FEventReply OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
		void CheckSlotHasItems(bool* slotHasItems);
		void GetNumItems(int32_t* Num);
		void GetItemClass(class UClass** ItemClass);
		void GetStack(struct FInventoryStack* stack);
		class UWidget* GetTooltipWidget();
		class UWidget* CreateSplitSlider();
		struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent);
		bool GetGamepadButtonIsEnabled();
		struct FSlateBrush GetFilterImage();
		void PlaySomeSound();
		struct FSlateBrush GetItemImageBrush();
		bool OnDrop(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation);
		struct FEventReply OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
		void OnDragDetected(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation** Operation);
		class FText GetStackSizeText();
		void CacheSlotData();
		void OnDragLeave(const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation);
		void OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
		void OnMouseLeave(const struct FPointerEvent& MouseEvent);
		void OnFocusLost(const struct FFocusEvent& InFocusEvent);
		void PreConstruct(bool IsDesignTime);
		void Destruct();
		void Construct();
		void EventCreateNuclearWastePopup(bool isNuclearWaste);
		void CloseNuclearWastePopup(bool ConfirmClicked);
		void OnDragEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation);
		void CloseSplitStack();
		void CentralStorageSlotWasDropped(class UFGInventoryComponent* TargetInventory, int32_t TargetIdx);
		void EventPlayOnNewSlotsAddedAnimation();
		void SetupInventorySlot(class UFGInventoryComponent* InventoryComponent, int32_t slotIdx);
		void ExecuteUbergraph_Widget_InventorySlot(int32_t EntryPoint);
		void OnStackDroppedOnSlot__DelegateSignature();
		void OnMoveStack__DelegateSignature(class UWidget_InventorySlot_C* Sender);
		void OnSlotHovered__DelegateSignature(class UWidget_InventorySlot_C* SelfInventorySlot);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
