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
	 * WidgetBlueprintGeneratedClass Widget_SplitterProgrammableRule.Widget_SplitterProgrammableRule_C
	 * Size -> 0x0089 (FullSize[0x0309] - InheritedSize[0x0280])
	 */
	class UWidget_SplitterProgrammableRule_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0280(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UImage*                                              delete_icon;                                             // 0x0288(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             mDeleteButton;                                           // 0x0290(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBPW_ComboboxSearch_C*                               mItemClassCombobox;                                      // 0x0298(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		TArray<class UClass*>                                      mAllDescriptorsSorted;                                   // 0x02A0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		class AFGBuildableSplitterSmart*                           mSplitterSmart;                                          // 0x02B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		int32_t                                                    mRuleIndex;                                              // 0x02B8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		unsigned char                                              UnknownData_USPU[0x4];                                   // 0x02BC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnRemoved;                                               // 0x02C0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnUpdated;                                               // 0x02D0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		struct FSplitterSortRule                                   mCachedRule;                                             // 0x02E0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
		bool                                                       mIsStaticRule;                                           // 0x02F0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_CU8P[0x7];                                   // 0x02F1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnClicked;                                               // 0x02F8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       mShowDeleteButton;                                       // 0x0308(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash

	public:
		void AddDescriptorsToArray();
		void PopulateDescriptors();
		void ShowHideDeleteButton(bool ShowDeleteButton);
		void RemoveRule();
		void SetRuleOutputIndex(int32_t OutputIndex);
		void SetRuleItemClass(class UClass* ItemClass);
		void GetSortRuleSafe(struct FSplitterSortRule* Rule);
		void SetSelectedItemDescriptor(class UClass* inDescriptor);
		void RefreshItemClassButton();
		void Construct();
		void BndEvt__mDeleteButton_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature();
		void ForceRefreshButton(const struct FSplitterSortRule& SplitterRule);
		void PreConstruct(bool IsDesignTime);
		void BndEvt__mItemClassCombobox_K2Node_ComponentBoundEvent_3_OnSelectionChanged__DelegateSignature(const class FString& SelectedOption, int32_t selectedIndex);
		void ExecuteUbergraph_Widget_SplitterProgrammableRule(int32_t EntryPoint);
		void OnClicked__DelegateSignature(class UWidget_SplitterProgrammableRule_C* SplitterRule);
		void OnUpdated__DelegateSignature(int32_t RuleIndex, const struct FSplitterSortRule& RuleData);
		void OnRemoved__DelegateSignature(class UWidget_SplitterProgrammableRule_C* SplitterRule);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
