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
	 * WidgetBlueprintGeneratedClass BPW_ColorPickerPreset_Save.BPW_ColorPickerPreset_Save_C
	 * Size -> 0x0060 (FullSize[0x02F0] - InheritedSize[0x0290])
	 */
	class UBPW_ColorPickerPreset_Save_C : public UFGPopupWidgetContent
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0290(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UBPW_InputTextWarning_C*                             BPW_InputTextWarning;                                    // 0x0298(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidget_StandardButton_C*                            mCancelButton;                                           // 0x02A0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UEditableTextBox*                                    mPresetName;                                             // 0x02A8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidget_StandardButton_C*                            mSaveButton;                                             // 0x02B0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidget_Window_DarkMode_C*                           Widget_Window_DarkMode;                                  // 0x02B8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FScriptMulticastDelegate                             mOnPresetSaved;                                          // 0x02C0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		TArray<class FText>                                        mTakenNames;                                             // 0x02D0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class FText>                                        mUnavailableNames;                                       // 0x02E0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		void GenerateUnavailableNames();
		void OnSaveDialogeClosed(bool ConfirmClicked);
		void AttemptSave();
		void SavePreset();
		void GenerateTakenNames();
		void GetText(class FText* Text);
		bool GetShouldOkayBeEnabled();
		void Construct();
		void PreConstruct(bool IsDesignTime);
		void BndEvt__Widget_Window_DarkMode_K2Node_ComponentBoundEvent_0_OnClose__DelegateSignature();
		void BndEvt__mCancelButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature();
		void BndEvt__mSaveButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature();
		void BndEvt__mPresetName_K2Node_ComponentBoundEvent_3_OnEditableTextBoxChangedEvent__DelegateSignature(const class FText& Text);
		void Destruct();
		void ExecuteUbergraph_BPW_ColorPickerPreset_Save(int32_t EntryPoint);
		void mOnPresetSaved__DelegateSignature(const class FText& mPresetName, bool mDidSave);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
