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
	 * WidgetBlueprintGeneratedClass BPW_Options_DropdownBox_Dynamic.BPW_Options_DropdownBox_Dynamic_C
	 * Size -> 0x0060 (FullSize[0x03E0] - InheritedSize[0x0380])
	 */
	class UBPW_Options_DropdownBox_Dynamic_C : public UBPW_OptionValueController_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0380(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UImage*                                              mCaret;                                                  // 0x0388(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UComboBoxString*                                     mDropdownBox;                                            // 0x0390(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             mFakeButton;                                             // 0x0398(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnSelectionChanged;                                      // 0x03A0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		TArray<class FString>                                      mOptions;                                                // 0x03B0(0x0010) Edit, BlueprintVisible, ExposeOnSpawn
		int32_t                                                    mDefaultSelectedIndex;                                   // 0x03C0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_ON16[0x4];                                   // 0x03C4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UDataTable*                                          DataTable;                                               // 0x03C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		TArray<struct FIntegerSelection>                           IntegerSelections;                                       // 0x03D0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		void OnDropdownSelectionChanged(ESelectInfo SelectionType);
		void UpdateCurrentValue();
		void SetupDropdownOptions();
		void SetDropdownColor(const struct FLinearColor& Color);
		void IsValidIndex(int32_t Index, bool* Valid);
		void BndEvt__mDropdownBox_K2Node_ComponentBoundEvent_2_OnOpeningEvent__DelegateSignature();
		void BndEvt__mFakeButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature();
		void BndEvt__mDropdownBox_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, ESelectInfo SelectionType);
		void OnRowHovered();
		void OnRowUnhovered();
		void Construct();
		void OnOptionValueUpdated();
		void ExecuteUbergraph_BPW_Options_DropdownBox_Dynamic(int32_t EntryPoint);
		void OnSelectionChanged__DelegateSignature(const class FString& SelectedOption);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
