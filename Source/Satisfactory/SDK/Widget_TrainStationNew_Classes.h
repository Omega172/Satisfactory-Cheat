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
	 * WidgetBlueprintGeneratedClass Widget_TrainStationNew.Widget_TrainStationNew_C
	 * Size -> 0x00EE (FullSize[0x0441] - InheritedSize[0x0353])
	 */
	class UWidget_TrainStationNew_C : public UWidget_UseableBase_C
	{
	public:
		unsigned char                                              UnknownData_O9JE[0x5];                                   // 0x0353(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0358(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UTextBlock*                                          mInfoMessage;                                            // 0x0360(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UOverlay*                                            mLocomotiveMenuContainer;                                // 0x0368(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              mLocomotiveOverlay;                                      // 0x0370(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidget_Manufacturing_Warning_C*                     mNoPowerWarning;                                         // 0x0378(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidget_InputBox_C*                                  mSearch;                                                 // 0x0380(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBPW_TrainMenuLabel_C*                               mStationLabel;                                           // 0x0388(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                        mStationList;                                            // 0x0390(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UEditableText*                                       mStationNameInput;                                       // 0x0398(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBPW_TrainMenuLabel_C*                               mTrainLabel;                                             // 0x03A0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                        mTrainList;                                              // 0x03A8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidget_Window_DarkMode_C*                           mTrainStationWindow;                                     // 0x03B0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USlider*                                             mZoomSlider;                                             // 0x03B8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          mZoomText;                                               // 0x03C0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidget_AutoScrollingContainer_C*                    Widget_AutoScrollingContainer;                           // 0x03C8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidget_Map_C*                                       Widget_Map;                                              // 0x03D0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidget_PowerCircuitGraph_C*                         Widget_PowerCircuitGraph;                                // 0x03D8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidget_SlidingTabs_C*                               Widget_SlidingTabs;                                      // 0x03E0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidget_Window_ContentBackground_DarkMode_C*         Widget_Window_ContentBackground_DarkMode;                // 0x03E8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidget_Window_ContentBackground_DarkMode_C*         Widget_Window_ContentBackground_DarkMode_2;              // 0x03F0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class AFGBuildableRailroadStation*                         RailroadStation;                                         // 0x03F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		TArray<class FText>                                        mInfoTextMessages;                                       // 0x0400(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		class UWidget_TrainButton_C*                               mActiveTrainButton;                                      // 0x0410(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash
		TArray<class FString>                                      mInvalidTrainStationNames;                               // 0x0418(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                mStationNameText;                                        // 0x0428(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		ETextCommit                                                mInputMethod;                                            // 0x0440(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void UpdateZoomSlider();
		void NormalizedValueToZoomValue(double NormalizedValue, struct FVector2D* ZoomValue);
		void SetMapFilters();
		void OnTrainUnhovered(class AFGTrain* train);
		void OnTrainHovered(class AFGTrain* train);
		void ClearSeach();
		void OnSearch(const class FText& SearchText);
		void OnStationMenuClosed();
		void OnStationUnHovered(const struct FTimeTableStop& TrainStation);
		void OnStationHovered(const struct FTimeTableStop& TrainStation);
		void GenerateStationList();
		void SetRandomInfoMessage();
		void UpdatePowerStatus(bool mHasPowerStatus);
		void ShowLocomotiveMenu(class AFGTrain* mTrain);
		void GenerateTrainList();
		void GetStationName(class FText* Name);
		void SetStationName(const class FText& Name);
		class UFGPowerCircuit* OnGetPowerCircuit();
		void BndEvt__mStationNameInput_K2Node_ComponentBoundEvent_0_OnEditableTextCommittedEvent__DelegateSignature(const class FText& Text, ETextCommit CommitMethod);
		void OnTrainButtonClicked(class UWidget_TrainButton_C* Button);
		void OnLocomotiveMenuClosed();
		void OnTrainNameChanged();
		void OnPowerChanged(bool State);
		void BndEvt__mStationNameInput_K2Node_ComponentBoundEvent_1_OnEditableTextChangedEvent__DelegateSignature(const class FText& Text);
		void AutoScrollInfoMessage();
		void Construct();
		void BndEvt__Widget_InputBox_K2Node_ComponentBoundEvent_2_OnTextChanged__DelegateSignature(const class FText& Text);
		void BndEvt__Widget_InputBox_K2Node_ComponentBoundEvent_3_OnTextComitted__DelegateSignature(const class FText& Text, ETextCommit CommitMethod);
		void BndEvt__mTrainStationWindow_K2Node_ComponentBoundEvent_4_OnTabButtonClicked__DelegateSignature(int32_t ButtonIndex);
		void BndEvt__Widget_TrainStationNew_mZoomSlider_K2Node_ComponentBoundEvent_5_OnFloatValueChangedEvent__DelegateSignature(float Value);
		void BndEvt__Widget_TrainStationNew_Widget_Map_K2Node_ComponentBoundEvent_6_ZoomChanged__DelegateSignature();
		void ExecuteUbergraph_Widget_TrainStationNew(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
