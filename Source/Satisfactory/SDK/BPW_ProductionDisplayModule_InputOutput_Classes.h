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
	 * WidgetBlueprintGeneratedClass BPW_ProductionDisplayModule_InputOutput.BPW_ProductionDisplayModule_InputOutput_C
	 * Size -> 0x0090 (FullSize[0x0318] - InheritedSize[0x0288])
	 */
	class UBPW_ProductionDisplayModule_InputOutput_C : public UBPW_ProductionDisplayModule_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0288(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    AnimItemAmountInvalid;                                   // 0x0290(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash
		class UCanvasPanel*                                        mContent;                                                // 0x0298(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          mItemAmountText;                                         // 0x02A0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class URichTextBlock*                                      mPerMinText;                                             // 0x02A8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		E_InputOutput                                              mInputOrOutput;                                          // 0x02B0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		unsigned char                                              UnknownData_WK6R[0x7];                                   // 0x02B1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FItemAmount                                         mItemAmount;                                             // 0x02B8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
		class UWidget_CostSlotWrapper_C*                           mInputSlot;                                              // 0x02C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash
		class UWidget_InventorySlot_C*                             mOutputSlot;                                             // 0x02D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash
		class FText                                                PerMinTextSuffix;                                        // 0x02D8(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class UWidget_InventorySlot_C*                             mInputSlotNonCostSlot;                                   // 0x02F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash
		bool                                                       mDontUseCostSlotForInput;                                // 0x02F8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		unsigned char                                              UnknownData_XNK5[0x7];                                   // 0x02F9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                mInvalidAmountText;                                      // 0x0300(0x0018) Edit, BlueprintVisible, ExposeOnSpawn

	public:
		void UpdateItemAmountValidity();
		void GetInventorySlot(class UWidget_InventorySlot_C** InventorySlot, bool* Success);
		void DropInventoryStackOnPlayerInventory(class UWidget_InventorySlot_C* InventorySlot);
		void SetupInventoryComponent(class UFGInventoryComponent* mCachedInventoryComponent);
		void GetSuffix(class UClass* InClass, class FText* Result);
		void UpdatePerMinStat(double CycleTime);
		void UpdateItemAmount(const struct FItemAmount& ItemAmount);
		void ClearSlotWidget();
		void PositionInventorySlot(class UWidget* Slot);
		void CreateInventorySlot();
		void PreConstruct(bool IsDesignTime);
		void ExecuteUbergraph_BPW_ProductionDisplayModule_InputOutput(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
