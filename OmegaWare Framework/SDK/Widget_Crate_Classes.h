﻿#pragma once

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
	 * WidgetBlueprintGeneratedClass Widget_Crate.Widget_Crate_C
	 * Size -> 0x003D (FullSize[0x0390] - InheritedSize[0x0353])
	 */
	class UWidget_Crate_C : public UWidget_UseableBase_C
	{
	public:
		unsigned char                                              UnknownData_GIQ2[0x5];                                   // 0x0353(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0358(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidget_Scrollbox_C*                                 InventoryScrollbox;                                      // 0x0360(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidget_GlowingFactoryButton_C*                      mGrabAllButton;                                          // 0x0368(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidget_Inventory_C*                                 mInventory_2;                                            // 0x0370(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidget_Label_C*                                     mLabelTakeAll;                                           // 0x0378(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidget_Window_DarkMode_C*                           WidgetWindowDarkMode;                                    // 0x0380(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class AFGCrate*                                            mCrate;                                                  // 0x0388(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash

	public:
		void DropInventorySlotStack(class UWidget_InventorySlot_C* InventorySlot, bool* WasStackMoved);
		void Cleanup();
		void Init();
		void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
		void Construct();
		void Destruct();
		void OnGrabAll();
		void ExecuteUbergraph_Widget_Crate(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
