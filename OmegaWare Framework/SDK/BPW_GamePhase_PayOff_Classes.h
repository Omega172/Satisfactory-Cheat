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
	 * WidgetBlueprintGeneratedClass BPW_GamePhase_PayOff.BPW_GamePhase_PayOff_C
	 * Size -> 0x0028 (FullSize[0x02A8] - InheritedSize[0x0280])
	 */
	class UBPW_GamePhase_PayOff_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0280(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UOverlay*                                            mPhasePayOff;                                            // 0x0288(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidget_CostSlotWrapper_C*                           Widget_CostSlotWrapper;                                  // 0x0290(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		struct FItemAmount                                         mItemAmount;                                             // 0x0298(0x0010) Edit, BlueprintVisible, NoDestructor, ExposeOnSpawn

	public:
		void ShowPaidOffFeedbackVisibility();
		void SetupCostIcon();
		void GetRemainingCost(int32_t* Amount);
		void GetTotalCost(int32_t* Amount);
		void Construct();
		void Destruct();
		void UpdateCostSlot();
		void OnUpdateSlotSize(const class FString& updatedCvar);
		void ExecuteUbergraph_BPW_GamePhase_PayOff(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
