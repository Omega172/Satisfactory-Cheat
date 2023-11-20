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
	 * WidgetBlueprintGeneratedClass Widget_RecordMenu.Widget_RecordMenu_C
	 * Size -> 0x0085 (FullSize[0x03D8] - InheritedSize[0x0353])
	 */
	class UWidget_RecordMenu_C : public UWidget_UseableBase_C
	{
	public:
		unsigned char                                              UnknownData_BU5Y[0x5];                                   // 0x0353(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0358(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    SceneEnter;                                              // 0x0360(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash
		class UBPW_TileableButton_C*                               mDeletePathButton;                                       // 0x0368(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBPW_TileableButton_C*                               mLoadPathButton;                                         // 0x0370(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBPW_TileableButton_C*                               mSavePathButton;                                         // 0x0378(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBPW_TileableButton_C*                               mToggleAutopilotButton;                                  // 0x0380(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBPW_TileableButton_C*                               mTogglePathVisibilityButton;                             // 0x0388(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBPW_TileableButton_C*                               mToggleRecordingButton;                                  // 0x0390(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UGridPanel*                                          mVehicleMenuGridPanel;                                   // 0x0398(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class ABP_WheeledVehicle_C*                                mVehicle;                                                // 0x03A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnLoadPathClicked;                                       // 0x03A8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnSavePathClicked;                                       // 0x03B8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnClosed;                                                // 0x03C8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable

	public:
		void OnStopRecording(bool Success);
		void OnStartRecording();
		void UpdateButtons();
		void UpdateAutopilotButton(bool IsAutopilotEnabled);
		void UpdatePathVisibilityButton(bool IsPathVisible);
		void UpdateRecordingButton(bool mIsRecording);
		void EventClearPathRecording();
		void EventToggleAutopilot();
		void EventTogglePathVisibility();
		void Destruct();
		void EventToggleRecording();
		void BndEvt__mToggleRecording_K2Node_ComponentBoundEvent_16_OnClicked__DelegateSignature();
		void BndEvt__mTogglePathVisibility_K2Node_ComponentBoundEvent_18_OnClicked__DelegateSignature();
		void BndEvt__mToggleAutopilot_K2Node_ComponentBoundEvent_20_OnClicked__DelegateSignature();
		void BndEvt__mLoadPath_K2Node_ComponentBoundEvent_22_OnClicked__DelegateSignature();
		void BndEvt__mSavePath_K2Node_ComponentBoundEvent_24_OnClicked__DelegateSignature();
		void EventDeletePath();
		void BndEvt__mDeletePath_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
		void Construct();
		void UpdateLoadPathButton(bool CanLoadPath);
		void UpdateSavePathButton(bool CanSavePath);
		void ExecuteUbergraph_Widget_RecordMenu(int32_t EntryPoint);
		void OnClosed__DelegateSignature();
		void OnSavePathClicked__DelegateSignature();
		void OnLoadPathClicked__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
