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
	 * WidgetBlueprintGeneratedClass BPW_CentralStorage_DragAndDropPreview.BPW_CentralStorage_DragAndDropPreview_C
	 * Size -> 0x0030 (FullSize[0x02B0] - InheritedSize[0x0280])
	 */
	class UBPW_CentralStorage_DragAndDropPreview_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0280(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidget_CostSlotWrapper_C*                           Widget_CostSlotWrapper;                                  // 0x0288(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		struct FItemAmount                                         mItemAmount;                                             // 0x0290(0x0010) Edit, BlueprintVisible, NoDestructor, ExposeOnSpawn
		class FScriptMulticastDelegate                             OnWasDropped;                                            // 0x02A0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable

	public:
		void GetItemDescriptor(class UClass** itemDescriptor);
		void GetDragAndDropType(EInventorySlot_DragAndDropTypes* Type);
		void WasDropped(int32_t AmountMoved, class UFGInventoryComponent* TargetInventory, int32_t TargetIdx);
		void Construct();
		void CentralStorageSlotWasDropped(class UFGInventoryComponent* TargetInventory, int32_t TargetIdx);
		void ExecuteUbergraph_BPW_CentralStorage_DragAndDropPreview(int32_t EntryPoint);
		void OnWasDropped__DelegateSignature(int32_t AmountMoved, class UFGInventoryComponent* TargetInventory, int32_t TargetIdx);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
