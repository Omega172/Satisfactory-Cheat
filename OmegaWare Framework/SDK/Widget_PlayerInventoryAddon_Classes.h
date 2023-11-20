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
	 * WidgetBlueprintGeneratedClass Widget_PlayerInventoryAddon.Widget_PlayerInventoryAddon_C
	 * Size -> 0x00D0 (FullSize[0x03B8] - InheritedSize[0x02E8])
	 */
	class UWidget_PlayerInventoryAddon_C : public UFGInteractWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02E8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UVerticalBox*                                        mCompleteContainer;                                      // 0x02F0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              mDivider;                                                // 0x02F8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidget_Inventory_C*                                 mInventoryWidget;                                        // 0x0300(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWrapBox*                                            mRelevantInventory;                                      // 0x0308(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                        mRelevantInventoryContainer;                             // 0x0310(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          mRelevantItemsTextObject;                                // 0x0318(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidget_StandardButton_C*                            mSortButton;                                             // 0x0320(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              mTrashBG;                                                // 0x0328(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidget_Inventory_C*                                 mTrashInventoryWidget;                                   // 0x0330(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidget_Scrollbox_C*                                 Widget_Scrollbox;                                        // 0x0338(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidget_Window_AlternateContentBackground_DarkMode_C* Widget_Window_AlternateContentBackground_DarkMode;       // 0x0340(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidget_Window_ContentBackground_DarkMode_C*         Widget_Window_ContentBackground_DarkMode;                // 0x0348(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UFGInventoryComponent*                               mInventoryComponent;                                     // 0x0350(0x0008) Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		class UFGInventoryComponent*                               mTrashInventoryComponent;                                // 0x0358(0x0008) Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		class FScriptMulticastDelegate                             SlotStackMoveEvent;                                      // 0x0360(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		TArray<class UClass*>                                      mRelevantClasses;                                        // 0x0370(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                mRelevantItemsText;                                      // 0x0380(0x0018) Edit, BlueprintVisible, ExposeOnSpawn
		int32_t                                                    mRelevantInventoryStackLimit;                            // 0x0398(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_V5HW[0x4];                                   // 0x039C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AFGPlayerState*                                      PlayerState;                                             // 0x03A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		int32_t                                                    mCurrentNumSlots;                                        // 0x03A8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_B5RB[0x4];                                   // 0x03AC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTimerHandle                                        UpdateRelevantInventoryTimer;                            // 0x03B0(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash

	public:
		void Internal_UpdateRelevantInventory();
		void AnimateNewInventorySlots(int32_t InputPin);
		void FindInventorySlotWithIdx(int32_t slotIdx, class UWidget_InventorySlot_C** ArrayElement);
		void SetDividerVisibility(bool IsVisible);
		void SetRelevantItemsText(const class FText& mRelevantItemsText);
		void ShouldItemClassUpdateRelevantInventory(class UClass* UpdatedItemClass, bool* Return);
		void SetupRelevantInventory(TArray<class UClass*>* mRelevantClasses);
		void UpdateRelevantInventory();
		void OnInventorySlotMoveStack(class UWidget_InventorySlot_C* InventorySlotSender);
		void SetInventoryComponents(class UFGInventoryComponent* InventoryComponent, class UFGInventoryComponent* trash);
		void Construct();
		void BndEvt__mSortButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
		void OnUpdateRelevantInventory(class UClass* ItemClass, int32_t numAdded);
		void PreConstruct(bool IsDesignTime);
		void BndEvt__mTrashInventoryWidget_K2Node_ComponentBoundEvent_1_OnInventoryDragEnter__DelegateSignature();
		void BndEvt__mTrashInventoryWidget_K2Node_ComponentBoundEvent_2_OnInventoryDragLeave__DelegateSignature();
		void BndEvt__mTrashInventoryWidget_K2Node_ComponentBoundEvent_3_OnInventoryMouseLeave__DelegateSignature();
		void Init();
		void ExecuteUbergraph_Widget_PlayerInventoryAddon(int32_t EntryPoint);
		void SlotStackMoveEvent__DelegateSignature(class UWidget_InventorySlot_C* InventorySlot, EInteractionDirection Direction);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
