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
	 * WidgetBlueprintGeneratedClass Widget_SplitterProgrammable.Widget_SplitterProgrammable_C
	 * Size -> 0x0075 (FullSize[0x03C8] - InheritedSize[0x0353])
	 */
	class UWidget_SplitterProgrammable_C : public UWidget_UseableBase_C
	{
	public:
		unsigned char                                              UnknownData_M94L[0x5];                                   // 0x0353(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0358(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UBPW_CopyPasteButtons_C*                             mCopyPasteButtons;                                       // 0x0360(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              mProgrammableSplitterPlate;                              // 0x0368(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              mProgrammableSplitterScreen;                             // 0x0370(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBPW_SmartSplitterRule_C*                            mSmartCenter;                                            // 0x0378(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBPW_SmartSplitterRule_C*                            mSmartLeft;                                              // 0x0380(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBPW_SmartSplitterRule_C*                            mSmartRight;                                             // 0x0388(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              mSmartSplitterPlate;                                     // 0x0390(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidget_Label_C*                                     Widget_Label;                                            // 0x0398(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidget_Window_DarkMode_C*                           Widget_Window_DarkMode;                                  // 0x03A0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class AFGBuildableSplitterSmart*                           mSplitterSmart;                                          // 0x03A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		struct FSplitterSortRule                                   mDefaultRule;                                            // 0x03B0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
		bool                                                       mIsSmartSplitter;                                        // 0x03C0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_8WGT[0x3];                                   // 0x03C1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    mMaxItemAmount;                                          // 0x03C4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void UpdateAddButtonsVisiblity();
		void GetRuleWidgets(TArray<class UBPW_SmartSplitterRule_C*>* Array);
		void SaveRules();
		void GenerateRulesArray(TArray<struct FSplitterSortRule>* Rules);
		void SetupDescriptors();
		void CheckIfSmartSplitter();
		void PopulateRules(TArray<struct FSplitterSortRule>* Rules);
		void InitWindow();
		void Construct();
		void PreConstruct(bool IsDesignTime);
		void Destruct();
		void OnSortRulesChanged();
		void OnFactoryClipboardPasted(class UObject* interactObject, class UFGFactoryClipboardSettings* factoryClipboardSettings);
		void OnFactoryClipboardCopied(class UObject* interactObject, class UFGFactoryClipboardSettings* factoryClipboardSettings);
		void BndEvt__Widget_SplitterProgrammable_mSmartRight_K2Node_ComponentBoundEvent_0_OnListChanged__DelegateSignature();
		void BndEvt__Widget_SplitterProgrammable_mSmartCenter_K2Node_ComponentBoundEvent_1_OnListChanged__DelegateSignature();
		void BndEvt__Widget_SplitterProgrammable_mSmartLeft_K2Node_ComponentBoundEvent_2_OnListChanged__DelegateSignature();
		void ExecuteUbergraph_Widget_SplitterProgrammable(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
