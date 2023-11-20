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
	 * WidgetBlueprintGeneratedClass Widget_Locomotive_Menu.Widget_Locomotive_Menu_C
	 * Size -> 0x0105 (FullSize[0x0458] - InheritedSize[0x0353])
	 */
	class UWidget_Locomotive_Menu_C : public UWidget_UseableBase_C
	{
	public:
		unsigned char                                              UnknownData_S7MX[0x5];                                   // 0x0353(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0358(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    AnimShowCancelDocking;                                   // 0x0360(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash
		class UBPW_LocomotiveStatus_C*                             BPW_LocomotiveStatus;                                    // 0x0368(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBPW_Train_TimeTable_ActiveList_C*                   BPW_Train_TimeTable_ActiveList;                          // 0x0370(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBPW_Train_TimeTable_Setup_C*                        BPW_Train_TimeTable_Setup;                               // 0x0378(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USizeBox*                                            mCancelButtonContainer;                                  // 0x0380(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidget_StandardButton_C*                            mCancelDockingButton;                                    // 0x0388(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UOverlay*                                            mEditStationSlot;                                        // 0x0390(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidget_StandardButton_C*                            mEditTimeTableButton;                                    // 0x0398(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UFGEditableText*                                     mName;                                                   // 0x03A0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidget_ManufacturingStat_C*                         mPowerStat;                                              // 0x03A8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidget_StandardButton_C*                            mSelfDrivingButton;                                      // 0x03B0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidget_ManufacturingStat_C*                         mSpeedStat;                                              // 0x03B8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHorizontalBox*                                      mStats;                                                  // 0x03C0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          mStatsLabel;                                             // 0x03C8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          mTimeTableNotice;                                        // 0x03D0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UOverlay*                                            mTimeTableNoticeContainer;                               // 0x03D8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidget_Window_DarkMode_C*                           mWindow;                                                 // 0x03E0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USlider*                                             mZoomSlider;                                             // 0x03E8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          mZoomText;                                               // 0x03F0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidget_Map_C*                                       Widget_Map;                                              // 0x03F8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidget_Scrollbox_C*                                 Widget_Scrollbox;                                        // 0x0400(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidget_Window_ContentBackground_DarkMode_C*         Widget_Window_ContentBackground_DarkMode_2;              // 0x0408(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class AFGLocomotive*                                       FGLocomotive;                                            // 0x0410(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class AFGTrain*                                            mTrain;                                                  // 0x0418(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		bool                                                       mIsOpenedThroughStation;                                 // 0x0420(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_XW44[0x7];                                   // 0x0421(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnMenuClosed;                                            // 0x0428(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class UBPW_Train_TimeTable_StationSettings_C*              mStationSettingWidget;                                   // 0x0438(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash
		bool                                                       mShowCancelDockingButton;                                // 0x0440(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_R8JC[0x7];                                   // 0x0441(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FTimeTableStop>                              mCachedStations;                                         // 0x0448(0x0010) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		void UpdateZoomSlider();
		void NormalizedValueToZoomValue(double NormalizedValue, struct FVector2D* ZoomValue);
		void UpdateSelfdrivingFeedback(bool IsSelfDriving);
		void UpdateCancelDockingButtonState();
		void SetShowCancelDockingButton(bool ShowButton, bool Animate);
		void UpdateTimeTableNoticeVisibility();
		void SetMapFilters();
		void OnEditSettingClosed(bool SettingChanged);
		void SetSelfDriving(bool IsEnabled);
		void SetIsOpenedThroughStation(bool IsOpenedThroughStation);
		void SetStatVisibility(bool IsVisible);
		void RevertName();
		void SetName(const class FText& NewName);
		void UpdateSpeed();
		void UpdatePowerUsage();
		void UpdateStations();
		void Construct();
		void BndEvt__mWindow_K2Node_ComponentBoundEvent_2_OnClose__DelegateSignature();
		void BndEvt__Widget_StandardButton_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature();
		void BndEvt__BPW_Train_TimeTable_Setup_K2Node_ComponentBoundEvent_4_OnDiscard__DelegateSignature();
		void BndEvt__BPW_Train_TimeTable_Setup_K2Node_ComponentBoundEvent_5_OnSave__DelegateSignature();
		void OnCustomTick(float UpdateTime);
		void BndEvt__mName_K2Node_ComponentBoundEvent_0_OnEditableTextCommittedEvent__DelegateSignature(const class FText& Text, ETextCommit CommitMethod);
		void BndEvt__mEditTimeTableButton_1_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature();
		void Destruct();
		void BndEvt__BPW_Train_TimeTable_Setup_K2Node_ComponentBoundEvent_6_OnStationEditClicked__DelegateSignature(const struct FTimeTableStop& mStation, class UBPW_Train_TimeTable_SetupStation_C* StationWidget);
		void BndEvt__BPW_Train_TimeTable_Setup_K2Node_ComponentBoundEvent_7_OnStationUnhovered__DelegateSignature(const struct FTimeTableStop& Station);
		void BndEvt__BPW_Train_TimeTable_Setup_K2Node_ComponentBoundEvent_9_OnStationHovered__DelegateSignature(const struct FTimeTableStop& Station);
		void BndEvt__BPW_Train_TimeTable_ActiveList_K2Node_ComponentBoundEvent_8_OnStationHovered__DelegateSignature(const struct FTimeTableStop& Station);
		void BndEvt__BPW_Train_TimeTable_ActiveList_K2Node_ComponentBoundEvent_10_OnStationUnhovered__DelegateSignature(const struct FTimeTableStop& Station);
		void BndEvt__mCancelDockingButton_K2Node_ComponentBoundEvent_11_OnClicked__DelegateSignature();
		void OnDockingStateChanged(ETrainDockingState State);
		void BndEvt__Widget_Locomotive_Menu_Widget_Map_K2Node_ComponentBoundEvent_12_ZoomChanged__DelegateSignature();
		void BndEvt__Widget_Locomotive_Menu_mZoomSlider_K2Node_ComponentBoundEvent_13_OnFloatValueChangedEvent__DelegateSignature(float Value);
		void ExecuteUbergraph_Widget_Locomotive_Menu(int32_t EntryPoint);
		void OnMenuClosed__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
