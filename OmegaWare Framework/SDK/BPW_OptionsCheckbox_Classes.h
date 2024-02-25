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
	 * WidgetBlueprintGeneratedClass BPW_OptionsCheckbox.BPW_OptionsCheckbox_C
	 * Size -> 0x0528 (FullSize[0x08A8] - InheritedSize[0x0380])
	 */
	class UBPW_OptionsCheckbox_C : public UBPW_OptionValueController_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0380(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UImage*                                              mBG;                                                     // 0x0388(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             mButton;                                                 // 0x0390(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              mCheck;                                                  // 0x0398(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBorder*                                             mTintBorder;                                             // 0x03A0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		unsigned char                                              UnknownData_6TD9[0x8];                                   // 0x03A8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSlateBrush                                         mUnchecked;                                              // 0x03B0(0x00D0) Edit, BlueprintVisible, ExposeOnSpawn
		struct FSlateBrush                                         mUncheckedPressed;                                       // 0x0480(0x00D0) Edit, BlueprintVisible, ExposeOnSpawn
		struct FSlateBrush                                         mUncheckedHover;                                         // 0x0550(0x00D0) Edit, BlueprintVisible, ExposeOnSpawn
		struct FSlateBrush                                         mChecked;                                                // 0x0620(0x00D0) Edit, BlueprintVisible, ExposeOnSpawn
		struct FSlateBrush                                         mCheckedHover;                                           // 0x06F0(0x00D0) Edit, BlueprintVisible, ExposeOnSpawn
		struct FSlateBrush                                         mCheckedPressed;                                         // 0x07C0(0x00D0) Edit, BlueprintVisible, ExposeOnSpawn
		bool                                                       mIsChecked;                                              // 0x0890(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_088P[0x7];                                   // 0x0891(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnCheckChanged;                                          // 0x0898(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable

	public:
		void SetEnabled(bool Enabled);
		void HandleChecked(bool IsChecked);
		void UpdateCheckboxValue();
		void SetChecked(bool mIsChecked, bool TriggerCheckedEvent, bool* IsChecked);
		void BndEvt__mButton_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature();
		void OnRowHovered();
		void OnRowUnhovered();
		void OnInitValueController();
		void OnOptionValueUpdated();
		void BndEvt__mButton_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature();
		void PreConstruct(bool IsDesignTime);
		void BndEvt__mButton_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature();
		void BndEvt__mButton_K2Node_ComponentBoundEvent_5_OnButtonPressedEvent__DelegateSignature();
		void ExecuteUbergraph_BPW_OptionsCheckbox(int32_t EntryPoint);
		void OnCheckChanged__DelegateSignature(bool IsChecked);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
