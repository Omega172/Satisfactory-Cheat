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
	 * WidgetBlueprintGeneratedClass Widget_RewardInventorySlot.Widget_RewardInventorySlot_C
	 * Size -> 0x00E0 (FullSize[0x04F0] - InheritedSize[0x0410])
	 */
	class UWidget_RewardInventorySlot_C : public UWidget_SchematicRewardItem_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0410(0x0008) ZeroConstructor, Transient, DuplicateTransient
		unsigned char                                              UnknownData_0ZEY[0x8];                                   // 0x0418(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSlateBrush                                         mInventorySlotBrush;                                     // 0x0420(0x00D0) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		void IsValidRewardItem(bool* IsValid);
		void Construct();
		void ExecuteUbergraph_Widget_RewardInventorySlot(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
