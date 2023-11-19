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
	 * WidgetBlueprintGeneratedClass Widget_UseableBase.Widget_UseableBase_C
	 * Size -> 0x006B (FullSize[0x0353] - InheritedSize[0x02E8])
	 */
	class UWidget_UseableBase_C : public UFGInteractWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02E8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		bool                                                       mShouldOpenInventory;                                    // 0x02F0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		unsigned char                                              UnknownData_GNN9[0x7];                                   // 0x02F1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             InventorySlotStackMoveEvent;                             // 0x02F8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       mDidPressModifier;                                       // 0x0308(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_SI2I[0x7];                                   // 0x0309(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             ModifierPressed;                                         // 0x0310(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             ModifierReleased;                                        // 0x0320(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class UClass*                                              mOverwriteCopyPasteClass;                                // 0x0330(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		bool                                                       mClearInputBindingsOnClose;                              // 0x0338(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_L0G0[0x7];                                   // 0x0339(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FStruct_UIMappingContextData>                mInputMappingContexts;                                   // 0x0340(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                       mCloseOnInteractKey;                                     // 0x0350(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		bool                                                       mInputDelayGateOpen;                                     // 0x0351(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       mCenterMouseOnConstruct;                                 // 0x0352(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void GetInteractObject(class UObject** interactObject);
		void UnbindMappingContexts();
		void SetupMappingContexts();
		void OpenCodexOnItem(class UClass* mOpenOnRecipe);
		void DropInventoryStackOnInventoryComponent(class UWidget_InventorySlot_C* InventorySlot, class UFGInventoryComponent* InventoryComponent, bool* Result);
		void DropInventoryStackOnInventoryWidget(class UWidget_InventorySlot_C* InventorySlot, class UWidget_Inventory_C* WidgetInventory, bool* Result);
		void InitInventoryWidgetCallbacks(class UWidget_Inventory_C* InventoryComponent);
		void OnInventorySlotStackMove(class UWidget_InventorySlot_C* InventorySlot);
		void DropInventorySlotStack(class UWidget_InventorySlot_C* InventorySlot, bool* WasStackMoved);
		void SetInventoryVisibility(bool Visible);
		void GetDefaultRCO(class UBP_RemoteCallObject_C** RCO);
		void InpActEvt_IA_CloseWindow_K2Node_EnhancedInputActionEvent_3(const struct FInputActionValue& ActionValue, float ElapsedTime, float TriggeredTime, class UInputAction* SourceAction);
		void InpActEvt_IA_UI_Use_K2Node_EnhancedInputActionEvent_2(const struct FInputActionValue& ActionValue, float ElapsedTime, float TriggeredTime, class UInputAction* SourceAction);
		void InpActEvt_IA_UI_Use_K2Node_EnhancedInputActionEvent_1(const struct FInputActionValue& ActionValue, float ElapsedTime, float TriggeredTime, class UInputAction* SourceAction);
		void PreConstruct(bool IsDesignTime);
		void Construct();
		void Destruct();
		void Init();
		void OnInteractActorDestoyed(class AActor* DestroyedActor);
		void OpenInputDelayGate();
		void ExecuteUbergraph_Widget_UseableBase(int32_t EntryPoint);
		void ModifierReleased__DelegateSignature(class UFGInteractWidget* Owner);
		void ModifierPressed__DelegateSignature(class UFGInteractWidget* NewParam);
		void InventorySlotStackMoveEvent__DelegateSignature(class UWidget_InventorySlot_C* InventorySlot, EInteractionDirection InteractionDirection);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
