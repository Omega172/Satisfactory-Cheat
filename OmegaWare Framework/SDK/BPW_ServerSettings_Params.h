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
	// # Structs
	// --------------------------------------------------
	/**
	 * Function BPW_ServerSettings.BPW_ServerSettings_C.Update Settings
	 */
	struct UBPW_ServerSettings_C_UpdateSettings_Params
	{	};

	/**
	 * Function BPW_ServerSettings.BPW_ServerSettings_C.BP_OnServerComplexStateChanged
	 */
	struct UBPW_ServerSettings_C_BP_OnServerComplexStateChanged_Params
	{
	public:
		class UFGServerObject*                                     Server;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		EServerComplexState                                        State;                                                   // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_ServerSettings.BPW_ServerSettings_C.BP_OnServerChanged
	 */
	struct UBPW_ServerSettings_C_BP_OnServerChanged_Params
	{
	public:
		class UFGServerObject*                                     Server;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_ServerSettings.BPW_ServerSettings_C.BndEvt__BPW_Server_ConnectionIsPossible_K2Node_ComponentBoundEvent_0_OnConnect__DelegateSignature
	 */
	struct UBPW_ServerSettings_C_BndEvt__BPW_Server_ConnectionIsPossible_K2Node_ComponentBoundEvent_0_OnConnect__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_ServerSettings.BPW_ServerSettings_C.BndEvt__BPW_ServerAuthenticationRequired_K2Node_ComponentBoundEvent_1_OnAuthenticate__DelegateSignature
	 */
	struct UBPW_ServerSettings_C_BndEvt__BPW_ServerAuthenticationRequired_K2Node_ComponentBoundEvent_1_OnAuthenticate__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_ServerSettings.BPW_ServerSettings_C.BndEvt__BPW_Server_ConnectionFailed_K2Node_ComponentBoundEvent_2_OnRetry__DelegateSignature
	 */
	struct UBPW_ServerSettings_C_BndEvt__BPW_Server_ConnectionFailed_K2Node_ComponentBoundEvent_2_OnRetry__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_ServerSettings.BPW_ServerSettings_C.BP_OnServerBasicSettingsUpdate
	 */
	struct UBPW_ServerSettings_C_BP_OnServerBasicSettingsUpdate_Params
	{
	public:
		class UFGServerObject*                                     Server;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		struct FServerBasicSettings                                BasicSettings;                                           // 0x0008(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BPW_ServerSettings.BPW_ServerSettings_C.BP_OnServerRenamed
	 */
	struct UBPW_ServerSettings_C_BP_OnServerRenamed_Params
	{
	public:
		class UFGServerObject*                                     Server;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		class FString                                              Name;                                                    // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_ServerSettings.BPW_ServerSettings_C.BndEvt__Checkbox_AutoPause_K2Node_ComponentBoundEvent_3_OnCheckChanged__DelegateSignature
	 */
	struct UBPW_ServerSettings_C_BndEvt__Checkbox_AutoPause_K2Node_ComponentBoundEvent_3_OnCheckChanged__DelegateSignature_Params
	{
	public:
		bool                                                       IsChecked;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_ServerSettings.BPW_ServerSettings_C.BndEvt__CheckBox_AutoSaveOnDisconnect_K2Node_ComponentBoundEvent_4_OnCheckChanged__DelegateSignature
	 */
	struct UBPW_ServerSettings_C_BndEvt__CheckBox_AutoSaveOnDisconnect_K2Node_ComponentBoundEvent_4_OnCheckChanged__DelegateSignature_Params
	{
	public:
		bool                                                       IsChecked;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_ServerSettings.BPW_ServerSettings_C.BndEvt__Text_SessionName_K2Node_ComponentBoundEvent_5_OnEditableTextCommittedEvent__DelegateSignature
	 */
	struct UBPW_ServerSettings_C_BndEvt__Text_SessionName_K2Node_ComponentBoundEvent_5_OnEditableTextCommittedEvent__DelegateSignature_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		ETextCommit                                                CommitMethod;                                            // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_ServerSettings.BPW_ServerSettings_C.BndEvt__Button_ChangeAdminPass_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature
	 */
	struct UBPW_ServerSettings_C_BndEvt__Button_ChangeAdminPass_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_ServerSettings.BPW_ServerSettings_C.BndEvt__Button_ChangePlayerPass_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature
	 */
	struct UBPW_ServerSettings_C_BndEvt__Button_ChangePlayerPass_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_ServerSettings.BPW_ServerSettings_C.BndEvt__Text_ServerName_K2Node_ComponentBoundEvent_9_OnEditableTextCommittedEvent__DelegateSignature
	 */
	struct UBPW_ServerSettings_C_BndEvt__Text_ServerName_K2Node_ComponentBoundEvent_9_OnEditableTextCommittedEvent__DelegateSignature_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		ETextCommit                                                CommitMethod;                                            // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_ServerSettings.BPW_ServerSettings_C.ExecuteUbergraph_BPW_ServerSettings
	 */
	struct UBPW_ServerSettings_C_ExecuteUbergraph_BPW_ServerSettings_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_6WVH[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
