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
	 * WidgetBlueprintGeneratedClass BPW_ColorPickerPopup.BPW_ColorPickerPopup_C
	 * Size -> 0x0031 (FullSize[0x02C1] - InheritedSize[0x0290])
	 */
	class UBPW_ColorPickerPopup_C : public UFGPopupWidgetContent
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0290(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UImage*                                              mSavePresetOverlay;                                      // 0x0298(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UScaleBox*                                           mSavePresetSlot;                                         // 0x02A0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidget_ColorPicker_Module_C*                        Widget_ColorPicker_Module;                               // 0x02A8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		struct FLinearColor                                        mStartColor;                                             // 0x02B0(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		bool                                                       mHideBrightnessSlider;                                   // 0x02C0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash

	public:
		bool GetShouldOkayBeEnabled();
		void GetColor(struct FLinearColor* Color);
		void Construct();
		void BndEvt__Widget_ColorPicker_Module_K2Node_ComponentBoundEvent_0_OnOpenSavePreset__DelegateSignature(class UBPW_ColorPickerPreset_Save_C* SaveWidget);
		void BndEvt__Widget_ColorPicker_Module_K2Node_ComponentBoundEvent_1_OnCloseSavePreset__DelegateSignature();
		void ExecuteUbergraph_BPW_ColorPickerPopup(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
