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
	 * WidgetBlueprintGeneratedClass BPW_EnhancedKeybindButton.BPW_EnhancedKeybindButton_C
	 * Size -> 0x0110 (FullSize[0x0390] - InheritedSize[0x0280])
	 */
	class UBPW_EnhancedKeybindButton_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0280(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UOverlay*                                            mFocusOverlay;                                           // 0x0288(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             mKeyButton;                                              // 0x0290(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          mKeyNameTextfield;                                       // 0x0298(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          mLabel;                                                  // 0x02A0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		bool                                                       mCaptureInput;                                           // 0x02A8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_GCZZ[0x7];                                   // 0x02A9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UBPW_EnhancedKeyBindContainer_C*                     mKeyBindParent;                                          // 0x02B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		struct FEnhancedActionKeyMapping                           KeyMapping;                                              // 0x02B8(0x0098) Edit, BlueprintVisible, ContainsInstancedReference, ExposeOnSpawn
		class UInputMappingContext*                                MappingContext;                                          // 0x0350(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		struct FInputEvent                                         mLastPressedInputEvent;                                  // 0x0358(0x0020) Edit, BlueprintVisible, DisableEditOnInstance
		struct FKey                                                mLastPressedKey;                                         // 0x0378(0x0018) Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash

	public:
		void ShowMappingConflictPopup(TArray<struct FEnhancedActionKeyMapping>* HardConflicts, TArray<struct FEnhancedActionKeyMapping>* SoftConflicts);
		void GetModifierKeysPressed(const struct FInputEvent& InputEvent, TArray<struct FKey>* ModifierKeys);
		class FText GetKeyMappingDisplayName();
		void UpdateKeyMapping();
		void RebindKey();
		void KeyBindingOverrideConfirmed(bool Confirmed);
		void HandleInput(const struct FInputEvent& InputEvent, const struct FKey& keyPressed);
		void Construct();
		void BndEvt__mButton_K2Node_ComponentBoundEvent_25_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__mButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
		void ExecuteUbergraph_BPW_EnhancedKeybindButton(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
