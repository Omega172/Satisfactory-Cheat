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
	 * WidgetBlueprintGeneratedClass Widget_PortableMiner.Widget_PortableMiner_C
	 * Size -> 0x0075 (FullSize[0x03C8] - InheritedSize[0x0353])
	 */
	class UWidget_PortableMiner_C : public UWidget_UseableBase_C
	{
	public:
		unsigned char                                              UnknownData_FPS1[0x5];                                   // 0x0353(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0358(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidget_GlowingFactoryButton_C*                      mButtonPickUp;                                           // 0x0360(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidget_GlowingFactoryButton_C*                      mButtonTakeAllItems;                                     // 0x0368(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidget_Output_Slot_C*                               mOutputContainer;                                        // 0x0370(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidget_Label_C*                                     Widget_Label_C;                                          // 0x0378(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidget_Label_C*                                     Widget_Label_C_1;                                        // 0x0380(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidget_Window_ContentBackground_DarkMode_C*         Widget_Window_ContentBackground_DarkMode_C_1;            // 0x0388(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidget_Window_DarkMode_C*                           Widget_Window_DarkMode;                                  // 0x0390(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class ABP_PortableMiner_C*                                 mPortableMiner;                                          // 0x0398(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		struct FInventoryItem                                      mMinerItem;                                              // 0x03A0(0x0020) Edit, BlueprintVisible, DisableEditOnInstance
		class UWidget_InventorySlot_C*                             mOutputSlot;                                             // 0x03C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash

	public:
		void DropInventorySlotStack(class UWidget_InventorySlot_C* InventorySlot, bool* WasStackMoved);
		void InitCallbacks();
		void UpdateMinerInfo();
		void UpdateMinerProgress();
		void Init();
		void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
		void Construct();
		void BndEvt__mButtonTakeAllItems_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
		void BndEvt__Widget_PortableMiner_mButtonPickUp_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature();
		void ExecuteUbergraph_Widget_PortableMiner(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
