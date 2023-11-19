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
	 * WidgetBlueprintGeneratedClass BPW_Train_TimeTable_Setup.BPW_Train_TimeTable_Setup_C
	 * Size -> 0x00A8 (FullSize[0x0328] - InheritedSize[0x0280])
	 */
	class UBPW_Train_TimeTable_Setup_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0280(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UVerticalBox*                                        mAvailableStationsContainer;                             // 0x0288(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBPW_TrainMenuLabel_C*                               mAvailableStationsLabel;                                 // 0x0290(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBPW_DragAndDropList_C*                              mCurrentTimeTable;                                       // 0x0298(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidget_StandardButton_C*                            mDiscardButton;                                          // 0x02A0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidget_StandardButton_C*                            mSaveButton;                                             // 0x02A8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidget_InputBox_C*                                  mSearch;                                                 // 0x02B0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidget_Scrollbox_C*                                 Widget_Scrollbox;                                        // 0x02B8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class AFGRailroadTimeTable*                                mTimeTable;                                              // 0x02C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		class UBPW_Train_TimeTable_SetupStation_C*                 mCurrentDraggedStation;                                  // 0x02C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnDiscard;                                               // 0x02D0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnSave;                                                  // 0x02E0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnStationEditClicked;                                    // 0x02F0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class AFGTrain*                                            mTrain;                                                  // 0x0300(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnStationHovered;                                        // 0x0308(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnStationUnHovered;                                      // 0x0318(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable

	public:
		void StationUnhovered(const struct FTimeTableStop& TrainStation);
		void StationHovered(const struct FTimeTableStop& TrainStation);
		void StationAddClicked(const struct FTimeTableStop& Station);
		void StationEditClicked(const struct FTimeTableStop& Station, class UBPW_Train_TimeTable_SetupStation_C* StationWidget);
		void ClearSearch();
		void OnSearch(const class FText& SearchFor);
		void AddNewCurrentStation(int32_t ChildPosition, const struct FTimeTableStop& mStation);
		void OnSetupStationRemoved(class UBPW_Train_TimeTable_SetupStation_C* StationWidget);
		void GetCurrentStations(TArray<struct FTimeTableStop>* Stations);
		void OnSetupStationDragBegin(class UBPW_Train_TimeTable_SetupStation_C* SetupStationWidget);
		void SetTimeTable(class AFGRailroadTimeTable* mTimeTable, class AFGTrain* train);
		void PopulateCurrentStations();
		void PopulateAvailableStations();
		void Construct();
		void BndEvt__mSaveButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature();
		void BndEvt__mDiscardButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature();
		void BndEvt__Widget_InputBox_K2Node_ComponentBoundEvent_3_OnTextChanged__DelegateSignature(const class FText& Text);
		void BndEvt__Widget_InputBox_K2Node_ComponentBoundEvent_4_OnTextComitted__DelegateSignature(const class FText& Text, ETextCommit CommitMethod);
		void BndEvt__mCurrentTimeTable_K2Node_ComponentBoundEvent_5_OnOutsideObjectDropped__DelegateSignature(int32_t Position);
		void ExecuteUbergraph_BPW_Train_TimeTable_Setup(int32_t EntryPoint);
		void OnStationUnhovered__DelegateSignature(const struct FTimeTableStop& Station);
		void OnStationHovered__DelegateSignature(const struct FTimeTableStop& Station);
		void OnStationEditClicked__DelegateSignature(const struct FTimeTableStop& mStation, class UBPW_Train_TimeTable_SetupStation_C* StationWidget);
		void OnSave__DelegateSignature();
		void OnDiscard__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
