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
	 * WidgetBlueprintGeneratedClass BPW_Train_TimeTable_ActiveList.BPW_Train_TimeTable_ActiveList_C
	 * Size -> 0x0071 (FullSize[0x02F1] - InheritedSize[0x0280])
	 */
	class UBPW_Train_TimeTable_ActiveList_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0280(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UVerticalBox*                                        mContainer;                                              // 0x0288(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		int32_t                                                    Value;                                                   // 0x0290(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_OU9N[0x4];                                   // 0x0294(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AFGRailroadTimeTable*                                mTimeTable;                                              // 0x0298(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		int32_t                                                    mLatestStop;                                             // 0x02A0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_XL95[0x4];                                   // 0x02A4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UBPW_Train_TimeTable_Station_C*>              mStopWidgets;                                            // 0x02A8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		TArray<class UBPW_Train_TimeTable_Station_C*>              mStationsToMoveToBottom;                                 // 0x02B8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		struct FTimerHandle                                        mUpdateTimer;                                            // 0x02C8(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnStationHovered;                                        // 0x02D0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnStationUnHovered;                                      // 0x02E0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       mIsSelfDrivingEnabled;                                   // 0x02F0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void SetIsSelfDrivingEnabled(bool mIsSelfDrivingEnabled);
		void StationUnhovered(const struct FTimeTableStop& Station);
		void StationHovered(const struct FTimeTableStop& Station);
		void SetupStationBindings(class UBPW_Train_TimeTable_Station_C* StationWidget);
		void RemoveInvalidDuplicateStops(TArray<struct FTimeTableStop> InStops, TArray<struct FTimeTableStop>* OutStops);
		void MoveSingleStationToBottom(class UBPW_Train_TimeTable_Station_C* Station, bool Animate);
		void PendingMoveStationToBottom(class UBPW_Train_TimeTable_Station_C* TimeTableStation, bool Animate, bool IsNextStationAfterMoveMove);
		void AdjustStopsInitalOrder(TArray<class UBPW_Train_TimeTable_Station_C*>* StationsIn, TArray<class UBPW_Train_TimeTable_Station_C*>* StationsOut);
		void SetTimeTable(class AFGRailroadTimeTable* mTimeTable);
		void UpdateTimeTableOrder(bool Animate);
		void CreateTimeTable();
		void PreConstruct(bool IsDesignTime);
		void Construct();
		void OnMoveStationsToBottom(class UBPW_Train_TimeTable_Station_C* Station, bool Animate);
		void OnTimeTableUpdate();
		void Destruct();
		void ExecuteUbergraph_BPW_Train_TimeTable_ActiveList(int32_t EntryPoint);
		void OnStationUnhovered__DelegateSignature(const struct FTimeTableStop& Station);
		void OnStationHovered__DelegateSignature(const struct FTimeTableStop& Station);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
