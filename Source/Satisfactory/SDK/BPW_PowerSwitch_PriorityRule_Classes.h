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
	 * WidgetBlueprintGeneratedClass BPW_PowerSwitch_PriorityRule.BPW_PowerSwitch_PriorityRule_C
	 * Size -> 0x0040 (FullSize[0x02C0] - InheritedSize[0x0280])
	 */
	class UBPW_PowerSwitch_PriorityRule_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0280(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UBPW_Monochrome_Switch_C*                            BPW_Monochrome_Switch;                                   // 0x0288(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBorder*                                             mBorder;                                                 // 0x0290(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          mRuleName;                                               // 0x0298(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class AFGPriorityPowerSwitchInfo*                          mPriorityPowerSwitchInfo;                                // 0x02A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		bool                                                       mIsPartOfCurrentCircuit;                                 // 0x02A8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		bool                                                       mIsDragAndDropRep;                                       // 0x02A9(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		unsigned char                                              UnknownData_20Y1[0x6];                                   // 0x02AA(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnPriorityChanged;                                       // 0x02B0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable

	public:
		void ClearBindnings();
		void OnPrioChanged(int32_t Priority);
		void OnRuleRemoved();
		void SetSwitchState(bool mIsOn);
		void SetName(const class FString& InString);
		void SetIsDragAndDropRep(bool mIsDragAndDropRep);
		void SetIsPartOfCurrentCircuit(bool mIsPartOfCurrentCircuit);
		void SetPrioritySwitchInfo(class AFGPriorityPowerSwitchInfo* mPriorityPowerSwitchInfo);
		void OnDragDetected(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation** Operation);
		struct FEventReply OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
		void OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
		void OnMouseLeave(const struct FPointerEvent& MouseEvent);
		void Construct();
		void BndEvt__BPW_PowerSwitch_PriorityRule_BPW_Monochrome_Switch_K2Node_ComponentBoundEvent_0_OnStateChanged__DelegateSignature(bool IsTrue);
		void PreConstruct(bool IsDesignTime);
		void Destruct();
		void ExecuteUbergraph_BPW_PowerSwitch_PriorityRule(int32_t EntryPoint);
		void OnPriorityChanged__DelegateSignature(class UBPW_PowerSwitch_PriorityRule_C* Instigator, int32_t Priority);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
