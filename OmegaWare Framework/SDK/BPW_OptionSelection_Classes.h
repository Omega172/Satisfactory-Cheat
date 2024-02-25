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
	 * WidgetBlueprintGeneratedClass BPW_OptionSelection.BPW_OptionSelection_C
	 * Size -> 0x0058 (FullSize[0x03D8] - InheritedSize[0x0380])
	 */
	class UBPW_OptionSelection_C : public UBPW_OptionValueController_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0380(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    onPressedAnimation;                                      // 0x0388(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash
		class UButton*                                             mButtonOptionLeft;                                       // 0x0390(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             mButtonOptionRight;                                      // 0x0398(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          mOptionNameText;                                         // 0x03A0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBorder*                                             mTintBorder;                                             // 0x03A8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FText                                                mText;                                                   // 0x03B0(0x0018) Edit, BlueprintVisible
		class FString                                              currentKey;                                              // 0x03C8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash

	public:
		void UpdateSelectionEnabled();
		void HandleSelection(bool incrementSelection, bool* ValueChanged);
		void UpdateSelectionValue();
		void UpdateOptionText();
		void BndEvt__mButtonOptionRight_K2Node_ComponentBoundEvent_170_OnButtonClickedEvent__DelegateSignature();
		void OnRowHovered();
		void OnRowUnhovered();
		void BndEvt__mButtonOptionRight_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
		void OnInitValueController();
		void BndEvt__mButtonOptionLeft_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
		void OnOptionValueUpdated();
		void BndEvt__mButtonOptionLeft_K2Node_ComponentBoundEvent_188_OnButtonClickedEvent__DelegateSignature();
		void Construct();
		void ExecuteUbergraph_BPW_OptionSelection(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
