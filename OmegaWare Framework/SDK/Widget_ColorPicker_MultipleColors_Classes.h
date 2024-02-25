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
	 * WidgetBlueprintGeneratedClass Widget_ColorPicker_MultipleColors.Widget_ColorPicker_MultipleColors_C
	 * Size -> 0x0082 (FullSize[0x0302] - InheritedSize[0x0280])
	 */
	class UWidget_ColorPicker_MultipleColors_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0280(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidget_StandardButton_C*                            mCancel;                                                 // 0x0288(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBPW_StandardButton_Switch_C*                        mDefaultGloss;                                           // 0x0290(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHorizontalBox*                                      mGLossinessContainer;                                    // 0x0298(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBPW_StandardButton_Switch_C*                        mGlossyGloss;                                            // 0x02A0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBPW_StandardButton_Switch_C*                        mMattGloss;                                              // 0x02A8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                        mModuleContainer_2;                                      // 0x02B0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              mSavePresetOverlay;                                      // 0x02B8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UScaleBox*                                           mSavePresetSlot;                                         // 0x02C0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidget_StandardButton_C*                            mSelectColor;                                            // 0x02C8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnClose;                                                 // 0x02D0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		TArray<struct FLinearColor>                                mColors;                                                 // 0x02E0(0x0010) Edit, BlueprintVisible, ExposeOnSpawn
		class FScriptMulticastDelegate                             OnCancel;                                                // 0x02F0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       mHideBrightnessSlider;                                   // 0x0300(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		bool                                                       mUseGlossiness;                                          // 0x0301(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash

	public:
		void SetUseGlossiness(bool UseGlossiness);
		void SetGlossiness(int32_t Glossiness);
		void OnGlossinessChanged(int32_t mGlossinessIndex);
		void ClosePresetSaver();
		void OpenPresetSaver(class UBPW_ColorPickerPreset_Save_C* SaveWidget);
		void GetCurrentColorsFromModules(TArray<struct FLinearColor>* ModuleColors);
		void SetColors(TArray<struct FLinearColor>* Color);
		void PreConstruct(bool IsDesignTime);
		void BndEvt__mEditPresetAccept_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
		void BndEvt__mEditPresetCanel_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature();
		void ForceClose();
		void BndEvt__Widget_ColorPicker_MultipleColors_BPW_StandardButton_Switch_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature();
		void BndEvt__Widget_ColorPicker_MultipleColors_BPW_StandardButton_Switch_1_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature();
		void BndEvt__Widget_ColorPicker_MultipleColors_BPW_StandardButton_Switch_2_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature();
		void ExecuteUbergraph_Widget_ColorPicker_MultipleColors(int32_t EntryPoint);
		void OnCancel__DelegateSignature();
		void OnClose__DelegateSignature(TArray<struct FLinearColor>* Color);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
