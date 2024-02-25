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
	 * WidgetBlueprintGeneratedClass BPW_Server_NewGame.BPW_Server_NewGame_C
	 * Size -> 0x0128 (FullSize[0x03B8] - InheritedSize[0x0290])
	 */
	class UBPW_Server_NewGame_C : public UFGAbstractServerWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0290(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UBPW_Server_ConnectionFailed_C*                      BPW_Server_ConnectionFailed;                             // 0x0298(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBPW_Server_ConnectionIsPossible_C*                  BPW_Server_ConnectionIsPossible;                         // 0x02A0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBPW_Server_GameIsLoading_C*                         BPW_Server_GameIsLoading;                                // 0x02A8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBPW_Server_IncompatibleVersion_C*                   BPW_Server_IncompatibleVersion;                          // 0x02B0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBPW_ServerAuthenticationRequired_C*                 BPW_ServerAuthenticationRequired;                        // 0x02B8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBPW_ServerConnectionPending_C*                      BPW_ServerConnectionPending;                             // 0x02C0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBPW_ServerIsOffline_C*                              BPW_ServerIsOffline;                                     // 0x02C8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidget_StandardButton_C*                            Button_CreateGame;                                       // 0x02D0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                        ConnectedAsAdmin;                                        // 0x02D8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidgetSwitcher*                                     ConnectionStateSwitcher;                                 // 0x02E0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Image_90;                                                // 0x02E8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                        mAreaSelectContainer;                                    // 0x02F0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBPW_OptionsCheckbox_C*                              mJoinOnceLoadedCheckbox;                                 // 0x02F8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                        mSessionNameBox;                                         // 0x0300(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UEditableTextBox*                                    mSessionNameTextBox;                                     // 0x0308(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        mStartingLocationsPanel;                                 // 0x0310(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanelSlot*                                    localCanvasPanelSlot;                                    // 0x0318(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash
		int32_t                                                    mDefaultStartingLocation;                                // 0x0320(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_9RFH[0x4];                                   // 0x0324(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FStartingLocationsDataStruct                        mSelectedLocation;                                       // 0x0328(0x0088) Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash
		class UBP_StartingLocationsDataAsset_C*                    mStartingLocationsAsset;                                 // 0x03B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash

	public:
		bool GetCreateButtonIsEnabled();
		void InitStartingLocs();
		void PreConstruct(bool IsDesignTime);
		void OnStartLocClicked(const struct FStartingLocationsDataStruct& mStartingLocs);
		void BP_OnServerComplexStateChanged(class UFGServerObject* Server, EServerComplexState State);
		void BndEvt__BPW_Server_ConnectionIsPossible_K2Node_ComponentBoundEvent_3_OnConnect__DelegateSignature();
		void BndEvt__BPW_Server_ConnectionFailed_K2Node_ComponentBoundEvent_4_OnRetry__DelegateSignature();
		void BndEvt__BPW_ServerAuthenticationRequired_K2Node_ComponentBoundEvent_5_OnAuthenticate__DelegateSignature();
		void BndEvt__Button_CreateGame_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
		void BP_OnServerChanged(class UFGServerObject* Server);
		void ExecuteUbergraph_BPW_Server_NewGame(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
