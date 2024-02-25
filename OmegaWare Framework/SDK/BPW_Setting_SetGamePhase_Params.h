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
	 * Function BPW_Setting_SetGamePhase.BPW_Setting_SetGamePhase_C.DisplayValueToDropDownIndex
	 */
	struct UBPW_Setting_SetGamePhase_C_DisplayValueToDropDownIndex_Params
	{
	public:
		int32_t                                                    DisplayValue;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    DropDownIndex;                                           // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_Setting_SetGamePhase.BPW_Setting_SetGamePhase_C.SyncGiveAllTiersSetting
	 */
	struct UBPW_Setting_SetGamePhase_C_SyncGiveAllTiersSetting_Params
	{
	public:
		EGamePhase                                                 SelectedPhase;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_Setting_SetGamePhase.BPW_Setting_SetGamePhase_C.SyncStartingTierSetting
	 */
	struct UBPW_Setting_SetGamePhase_C_SyncStartingTierSetting_Params
	{
	public:
		EGamePhase                                                 SelectedPhase;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_T08O[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPW_Setting_SetGamePhase.BPW_Setting_SetGamePhase_C.GetAvailableGamePhaseManager
	 */
	struct UBPW_Setting_SetGamePhase_C_GetAvailableGamePhaseManager_Params
	{
	public:
		class AFGGamePhaseManager*                                 GamePhaseManager;                                        // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_Setting_SetGamePhase.BPW_Setting_SetGamePhase_C.SetupDropdownOptions
	 */
	struct UBPW_Setting_SetGamePhase_C_SetupDropdownOptions_Params
	{	};

	/**
	 * Function BPW_Setting_SetGamePhase.BPW_Setting_SetGamePhase_C.OnOptionReverted
	 */
	struct UBPW_Setting_SetGamePhase_C_OnOptionReverted_Params
	{	};

	/**
	 * Function BPW_Setting_SetGamePhase.BPW_Setting_SetGamePhase_C.BndEvt__BPW_Setting_SetGamePhase_mDropdownBox_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature
	 */
	struct UBPW_Setting_SetGamePhase_C_BndEvt__BPW_Setting_SetGamePhase_mDropdownBox_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature_Params
	{
	public:
		class FString                                              SelectedItem;                                            // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		ESelectInfo                                                SelectionType;                                           // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_Setting_SetGamePhase.BPW_Setting_SetGamePhase_C.OnOptionValueUpdated
	 */
	struct UBPW_Setting_SetGamePhase_C_OnOptionValueUpdated_Params
	{	};

	/**
	 * Function BPW_Setting_SetGamePhase.BPW_Setting_SetGamePhase_C.OnOptionApplied
	 */
	struct UBPW_Setting_SetGamePhase_C_OnOptionApplied_Params
	{	};

	/**
	 * Function BPW_Setting_SetGamePhase.BPW_Setting_SetGamePhase_C.ExecuteUbergraph_BPW_Setting_SetGamePhase
	 */
	struct UBPW_Setting_SetGamePhase_C_ExecuteUbergraph_BPW_Setting_SetGamePhase_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
