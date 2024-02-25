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
	 * WidgetBlueprintGeneratedClass BPW_Drone_Port.BPW_Drone_Port_C
	 * Size -> 0x01E6 (FullSize[0x0539] - InheritedSize[0x0353])
	 */
	class UBPW_Drone_Port_C : public UWidget_UseableBase_C
	{
	public:
		unsigned char                                              UnknownData_ZLKS[0x5];                                   // 0x0353(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0358(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UImage*                                              BatteryIcon;                                             // 0x0360(0x0008) ExportObject, ZeroConstructor, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              BatteryIcon_2;                                           // 0x0368(0x0008) ExportObject, ZeroConstructor, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidget_Window_ContentBackground_DarkMode_C*         BG1;                                                     // 0x0370(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidget_Window_ContentBackground_DarkMode_C*         BG2;                                                     // 0x0378(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              DroneInputIcon;                                          // 0x0380(0x0008) ExportObject, ZeroConstructor, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              DroneInputIcon_2;                                        // 0x0388(0x0008) ExportObject, ZeroConstructor, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidget_Scrollbox_C*                                 InputInventoryScrollbox;                                 // 0x0390(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                        mAllStationsList;                                        // 0x0398(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class URichTextBlock*                                      mAmountofStationsText;                                   // 0x03A0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              MaxTransferIcon;                                         // 0x03A8(0x0008) ExportObject, ZeroConstructor, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          mBatteryPerMinText;                                      // 0x03B0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidget_InventorySlot_C*                             mBatterySlot;                                            // 0x03B8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          mBatteryText;                                            // 0x03C0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                        mConnectedStationsList;                                  // 0x03C8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                        mCurrentStationList;                                     // 0x03D0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              mDroneStatusIcon;                                        // 0x03D8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class URichTextBlock*                                      mIncomingTransferText;                                   // 0x03E0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidget_Inventory_C*                                 mInputInventory;                                         // 0x03E8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class URichTextBlock*                                      mMaximumTransferText;                                    // 0x03F0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidget_Manufacturing_Warning_C*                     mNoPowerWarning;                                         // 0x03F8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class URichTextBlock*                                      mOutgoingTransferText;                                   // 0x0400(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidget_Inventory_C*                                 mOutputInventory;                                        // 0x0408(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          mPairedStationText;                                      // 0x0410(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          mPowerConsumptionText;                                   // 0x0418(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          mRoundtripTimeText;                                      // 0x0420(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidget_InputBox_C*                                  mSearchbar;                                              // 0x0428(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                        mSearchResultsList;                                      // 0x0430(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidget_Scrollbox_C*                                 mSearchResultsScrollbox;                                 // 0x0438(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class URichTextBlock*                                      mSearchResultsText;                                      // 0x0440(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidget_StandardButton_C*                            mSortButtonInput;                                        // 0x0448(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidget_StandardButton_C*                            mSortButtonOutput;                                       // 0x0450(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UEditableText*                                       mStationNameTextObject;                                  // 0x0458(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          mUpdatedDroneStatusText;                                 // 0x0460(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidget_Scrollbox_C*                                 OutputInventoryScrollbox;                                // 0x0468(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              PowerIcon;                                               // 0x0470(0x0008) ExportObject, ZeroConstructor, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              RoundtripIcon;                                           // 0x0478(0x0008) ExportObject, ZeroConstructor, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidget_Scrollbox_C*                                 Widget_Scrollbox;                                        // 0x0480(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidget_SlidingTabs_C*                               Widget_SlidingTabs;                                      // 0x0488(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidget_StandbyButton_C*                             Widget_StandbyButton;                                    // 0x0490(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidget_Window_DarkMode_C*                           Widget_Window_DarkMode;                                  // 0x0498(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class ABuild_DroneStation_C*                               mDroneStation;                                           // 0x04A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class AFGDroneSubsystem*                                   mDroneSubsystem;                                         // 0x04A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class FText                                                mStationNameText;                                        // 0x04B0(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		int32_t                                                    mAllStationsLength;                                      // 0x04C8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    mSearchResultsLength;                                    // 0x04CC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    mStationDisplayLimit;                                    // 0x04D0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_3KR4[0x4];                                   // 0x04D4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                mNoStationText;                                          // 0x04D8(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<struct FDroneStationData>                           mLocalFoundStations;                                     // 0x04F0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                       mIsExactStationName;                                     // 0x0500(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_EP6S[0x7];                                   // 0x0501(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     mSaveIncomingRate;                                       // 0x0508(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     mSaveOutgoingRate;                                       // 0x0510(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FTimerHandle                                        WarningMessageTimerHandle;                               // 0x0518(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		TArray<class UClass*>                                      mRelevantItems;                                          // 0x0520(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		class UBP_RemoteCallObject_C*                              CharacterRCO;                                            // 0x0530(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		bool                                                       mWantProdPaused;                                         // 0x0538(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void InitInventoryWidgetCallbacks(class UWidget_Inventory_C* InventoryComponent);
		void TryDropOnSlot(class UWidget_InventorySlot_C* TargetSlot, class UWidget_InventorySlot_C* OtherSlot, bool SwapItemIfOccupied, bool* Result);
		class UWidget* GetInOutTransferTooltip();
		class UWidget* GetMaxTransferTooltip();
		void DropInventorySlotStack(class UWidget_InventorySlot_C* InventorySlot, bool* WasStackMoved);
		class UWidget* GetBatteriesPerMinTooltip();
		void SetAmountSearchResultsText(int32_t StationLength, bool IsStationName);
		void SetAmountOfStationsText(int32_t StationLength);
		void ClearAndHideSearchResults();
		void OnSearchCreateResults(const class FText& Text);
		void PopulateAllStationsList(bool connectionsOnly, const class FString& Filter, class UVerticalBox* VerticalBox);
		void UnbindAllEvents();
		class UWidget* GetPowerTooltip();
		class UWidget* GetRoundtripTooltip();
		class UWidget* GetBatteryTooltip();
		void PopulateConnectedStationsList(bool connectionsOnly, const class FString& Filter, class UVerticalBox* ConnectedStationsList, class UVerticalBox* CurrentStationList);
		void UpdateDroneTransferRate();
		void UpdateDronePortStats();
		void UpdateDroneStatus();
		void SetStationNameInputText(const class FText& mStationNameText);
		void InitStationNameInputText(class AFGDroneStationInfo* stationInfo);
		void GetManufacturingWarningVisibility(class ABuild_DroneStation_C* DroneStation);
		void UpdateWindowText();
		void Construct();
		void BndEvt__Widget_Window_DarkMode_K2Node_ComponentBoundEvent_0_OnClose__DelegateSignature();
		void Init();
		void BndEvt__mStationNameTextObject_K2Node_ComponentBoundEvent_1_OnEditableTextCommittedEvent__DelegateSignature(const class FText& Text, ETextCommit CommitMethod);
		void BndEvt__mSortButtonInput_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature();
		void BndEvt__mSortButtonOutput_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature();
		void OnDroneStatusChanged(EDroneStatus droneStatus);
		void OnEstimatedRoundTripTimeChanged(float estimatedRoundTripTime);
		void OnHasPowerChanged(bool State);
		void OnHasStandbyChanged(bool State);
		void BndEvt__Widget_Window_DarkMode_K2Node_ComponentBoundEvent_1_OnTabButtonClicked__DelegateSignature(int32_t ButtonIndex);
		void Destruct();
		void BndEvt__mSearchbar_K2Node_ComponentBoundEvent_2_OnTextChanged__DelegateSignature(const class FText& Text);
		void EventSetPairedStationText();
		void OnEstimatedTransportRateChanged(int32_t estimatedTransportRate);
		void EventUpdateConnectedStationList();
		void OnDroneStatisticsChanged(const struct FFGDroneTripStatistics& droneTripStatistics);
		void OnSetupInventories(class AActor* replicationDetailActorOwner);
		void DronePortWarningMessageCheck();
		void BndEvt__Widget_StandbyButton_K2Node_ComponentBoundEvent_1_OnStandbyClicked__DelegateSignature();
		void BndEvt__BPW_Drone_Port_mStationNameTextObject_K2Node_ComponentBoundEvent_7_OnEditableTextChangedEvent__DelegateSignature(const class FText& Text);
		void ExecuteUbergraph_BPW_Drone_Port(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
