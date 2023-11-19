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
	 * WidgetBlueprintGeneratedClass BPW_PowerSwitch_PriorityList.BPW_PowerSwitch_PriorityList_C
	 * Size -> 0x0040 (FullSize[0x02C0] - InheritedSize[0x0280])
	 */
	class UBPW_PowerSwitch_PriorityList_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0280(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UGridPanel*                                          mGroupGrid;                                              // 0x0288(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UFGEditableText*                                     mSearchText;                                             // 0x0290(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class AFGBuildablePriorityPowerSwitch*                     mPriorityPowerSwitch;                                    // 0x0298(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		int32_t                                                    mAmountOfGroups;                                         // 0x02A0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		unsigned char                                              UnknownData_R1HQ[0x4];                                   // 0x02A4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UBPW_PowerSwitch_PriorityGroup_C*>            mPriotiyGroups;                                          // 0x02A8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		class UBPW_PowerSwitch_PriorityGroup_C*                    mUndefinedGroup;                                         // 0x02B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash

	public:
		void UpdateGroupIDs();
		bool IsSameGroupID(int32_t A, int32_t B);
		void AddRule(class AFGPriorityPowerSwitchInfo* PowerSwtichInfo);
		void MoveRule(class UBPW_PowerSwitch_PriorityRule_C* Rule, int32_t Priority);
		bool IsSwitchInfoPartOfCircuit(class AFGPriorityPowerSwitchInfo* PowerSwitchInfo);
		void OnSearch(const class FText& SearchText);
		void SetPriorityPowerSwitch(class AFGBuildablePriorityPowerSwitch* mPriorityPowerSwitch);
		void PreConstruct(bool IsDesignTime);
		void Construct();
		void BndEvt__BPW_PowerSwitch_PriorityList_mSearchText_K2Node_ComponentBoundEvent_0_OnEditableTextChangedEvent__DelegateSignature(const class FText& Text);
		void DelegateUpdateGroupIDs();
		void TimerUpdateGroupIDs();
		void ExecuteUbergraph_BPW_PowerSwitch_PriorityList(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
