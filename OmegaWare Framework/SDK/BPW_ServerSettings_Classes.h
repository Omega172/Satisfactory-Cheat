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
	 * WidgetBlueprintGeneratedClass BPW_ServerSettings.BPW_ServerSettings_C
	 * Size -> 0x00B0 (FullSize[0x0340] - InheritedSize[0x0290])
	 */
	class UBPW_ServerSettings_C : public UFGAbstractServerWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0290(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UBPW_OptionsRow_C*                                   BPW_OptionsRow;                                          // 0x0298(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBPW_Server_ConnectionFailed_C*                      BPW_Server_ConnectionFailed;                             // 0x02A0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBPW_Server_ConnectionIsPossible_C*                  BPW_Server_ConnectionIsPossible;                         // 0x02A8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBPW_Server_GameIsLoading_C*                         BPW_Server_GameIsLoading;                                // 0x02B0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBPW_Server_IncompatibleVersion_C*                   BPW_Server_IncompatibleVersion;                          // 0x02B8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBPW_ServerAuthenticationRequired_C*                 BPW_ServerAuthenticationRequired;                        // 0x02C0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBPW_ServerConnectionPending_C*                      BPW_ServerConnectionPending;                             // 0x02C8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBPW_ServerIsOffline_C*                              BPW_ServerIsOffline_351;                                 // 0x02D0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             Button_ChangeAdminPass;                                  // 0x02D8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             Button_ChangePlayerPass;                                 // 0x02E0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBPW_OptionsCheckbox_C*                              Checkbox_AutoPause;                                      // 0x02E8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBPW_OptionsCheckbox_C*                              CheckBox_AutoSaveOnDisconnect;                           // 0x02F0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                        ConnectedAsAdmin;                                        // 0x02F8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBPW_OptionsRow_C*                                   Row_AdminPass;                                           // 0x0300(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBPW_OptionsRow_C*                                   Row_PauseWithoutPlayers;                                 // 0x0308(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBPW_OptionsRow_C*                                   Row_PlayerPass;                                          // 0x0310(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBPW_OptionsRow_C*                                   Row_SaveOnDisconnect;                                    // 0x0318(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBPW_OptionsRow_C*                                   Row_ServerName;                                          // 0x0320(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidgetSwitcher*                                     Switcher_ServerState;                                    // 0x0328(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UEditableText*                                       Text_ServerName;                                         // 0x0330(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UEditableText*                                       Text_SessionName;                                        // 0x0338(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash

	public:
		void UpdateSettings();
		void BP_OnServerComplexStateChanged(class UFGServerObject* Server, EServerComplexState State);
		void BP_OnServerChanged(class UFGServerObject* Server);
		void BndEvt__BPW_Server_ConnectionIsPossible_K2Node_ComponentBoundEvent_0_OnConnect__DelegateSignature();
		void BndEvt__BPW_ServerAuthenticationRequired_K2Node_ComponentBoundEvent_1_OnAuthenticate__DelegateSignature();
		void BndEvt__BPW_Server_ConnectionFailed_K2Node_ComponentBoundEvent_2_OnRetry__DelegateSignature();
		void BP_OnServerBasicSettingsUpdate(class UFGServerObject* Server, const struct FServerBasicSettings& BasicSettings);
		void BP_OnServerRenamed(class UFGServerObject* Server, const class FString& Name);
		void BndEvt__Checkbox_AutoPause_K2Node_ComponentBoundEvent_3_OnCheckChanged__DelegateSignature(bool IsChecked);
		void BndEvt__CheckBox_AutoSaveOnDisconnect_K2Node_ComponentBoundEvent_4_OnCheckChanged__DelegateSignature(bool IsChecked);
		void BndEvt__Text_SessionName_K2Node_ComponentBoundEvent_5_OnEditableTextCommittedEvent__DelegateSignature(const class FText& Text, ETextCommit CommitMethod);
		void BndEvt__Button_ChangeAdminPass_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__Button_ChangePlayerPass_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__Text_ServerName_K2Node_ComponentBoundEvent_9_OnEditableTextCommittedEvent__DelegateSignature(const class FText& Text, ETextCommit CommitMethod);
		void ExecuteUbergraph_BPW_ServerSettings(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
