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
	 * WidgetBlueprintGeneratedClass Widget_TradingPost_PayOffGrid.Widget_TradingPost_PayOffGrid_C
	 * Size -> 0x0030 (FullSize[0x02B0] - InheritedSize[0x0280])
	 */
	class UWidget_TradingPost_PayOffGrid_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0280(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UUniformGridPanel*                                   mPayOffGrid;                                             // 0x0288(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UClass*                                              mSchematic;                                              // 0x0290(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class UWidget_TradingPost_C*                               mTradingPostWidget;                                      // 0x0298(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash
		TArray<class UWidget_TradingPostPayOffSlot_C*>             mPayOffSlots;                                            // 0x02A0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference

	public:
		void OnDropInventorySlot(class UWidget_InventorySlot_C* InventorySlot, bool* WasStackMoved);
		void DropInventorySlotStack(class UWidget_InventorySlot_C* InventorySlot, bool* Result);
		void SetUpPayOffSlots(class UClass* mSchematic);
		void Construct();
		void ExecuteUbergraph_Widget_TradingPost_PayOffGrid(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
