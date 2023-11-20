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
	// # Structs
	// --------------------------------------------------
	/**
	 * Function BPW_Train_TimeTable_StationSettings.BPW_Train_TimeTable_StationSettings_C.GetNewStation
	 */
	struct UBPW_Train_TimeTable_StationSettings_C_GetNewStation_Params
	{
	public:
		struct FTimeTableStop                                      Station;                                                 // 0x0000(0x0038)  (Parm, OutParm)
	};

	/**
	 * Function BPW_Train_TimeTable_StationSettings.BPW_Train_TimeTable_StationSettings_C.SetupRulesDropdown
	 */
	struct UBPW_Train_TimeTable_StationSettings_C_SetupRulesDropdown_Params
	{	};

	/**
	 * Function BPW_Train_TimeTable_StationSettings.BPW_Train_TimeTable_StationSettings_C.SetStation
	 */
	struct UBPW_Train_TimeTable_StationSettings_C_SetStation_Params
	{
	public:
		struct FTimeTableStop                                      mStation;                                                // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BPW_Train_TimeTable_StationSettings.BPW_Train_TimeTable_StationSettings_C.SetIsAndRule
	 */
	struct UBPW_Train_TimeTable_StationSettings_C_SetIsAndRule_Params
	{
	public:
		bool                                                       mIsAndRule;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_Train_TimeTable_StationSettings.BPW_Train_TimeTable_StationSettings_C.Close
	 */
	struct UBPW_Train_TimeTable_StationSettings_C_Close_Params
	{
	public:
		bool                                                       SettingChanged;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_IRVZ[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPW_Train_TimeTable_StationSettings.BPW_Train_TimeTable_StationSettings_C.UpdateTimeText
	 */
	struct UBPW_Train_TimeTable_StationSettings_C_UpdateTimeText_Params
	{	};

	/**
	 * Function BPW_Train_TimeTable_StationSettings.BPW_Train_TimeTable_StationSettings_C.Construct
	 */
	struct UBPW_Train_TimeTable_StationSettings_C_Construct_Params
	{	};

	/**
	 * Function BPW_Train_TimeTable_StationSettings.BPW_Train_TimeTable_StationSettings_C.BndEvt__Widget_Window_DarkMode_K2Node_ComponentBoundEvent_0_OnClose__DelegateSignature
	 */
	struct UBPW_Train_TimeTable_StationSettings_C_BndEvt__Widget_Window_DarkMode_K2Node_ComponentBoundEvent_0_OnClose__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_Train_TimeTable_StationSettings.BPW_Train_TimeTable_StationSettings_C.BndEvt__mSave_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
	 */
	struct UBPW_Train_TimeTable_StationSettings_C_BndEvt__mSave_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_Train_TimeTable_StationSettings.BPW_Train_TimeTable_StationSettings_C.BndEvt__ComboBoxString_577_K2Node_ComponentBoundEvent_2_OnSelectionChangedEvent__DelegateSignature
	 */
	struct UBPW_Train_TimeTable_StationSettings_C_BndEvt__ComboBoxString_577_K2Node_ComponentBoundEvent_2_OnSelectionChangedEvent__DelegateSignature_Params
	{
	public:
		class FString                                              SelectedItem;                                            // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		ESelectInfo                                                SelectionType;                                           // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_Train_TimeTable_StationSettings.BPW_Train_TimeTable_StationSettings_C.BndEvt__mTime_K2Node_ComponentBoundEvent_4_OnEditableTextCommittedEvent__DelegateSignature
	 */
	struct UBPW_Train_TimeTable_StationSettings_C_BndEvt__mTime_K2Node_ComponentBoundEvent_4_OnEditableTextCommittedEvent__DelegateSignature_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		ETextCommit                                                CommitMethod;                                            // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_Train_TimeTable_StationSettings.BPW_Train_TimeTable_StationSettings_C.BndEvt__mDiscard_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature
	 */
	struct UBPW_Train_TimeTable_StationSettings_C_BndEvt__mDiscard_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_Train_TimeTable_StationSettings.BPW_Train_TimeTable_StationSettings_C.Destruct
	 */
	struct UBPW_Train_TimeTable_StationSettings_C_Destruct_Params
	{	};

	/**
	 * Function BPW_Train_TimeTable_StationSettings.BPW_Train_TimeTable_StationSettings_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature
	 */
	struct UBPW_Train_TimeTable_StationSettings_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_Train_TimeTable_StationSettings.BPW_Train_TimeTable_StationSettings_C.ExecuteUbergraph_BPW_Train_TimeTable_StationSettings
	 */
	struct UBPW_Train_TimeTable_StationSettings_C_ExecuteUbergraph_BPW_Train_TimeTable_StationSettings_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_9ZFZ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPW_Train_TimeTable_StationSettings.BPW_Train_TimeTable_StationSettings_C.OnSettingsClosed__DelegateSignature
	 */
	struct UBPW_Train_TimeTable_StationSettings_C_OnSettingsClosed__DelegateSignature_Params
	{
	public:
		bool                                                       SettingChanged;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
