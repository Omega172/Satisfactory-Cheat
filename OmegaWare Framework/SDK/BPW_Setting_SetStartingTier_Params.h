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
	 * Function BPW_Setting_SetStartingTier.BPW_Setting_SetStartingTier_C.SetupDropdownOptions
	 */
	struct UBPW_Setting_SetStartingTier_C_SetupDropdownOptions_Params
	{	};

	/**
	 * Function BPW_Setting_SetStartingTier.BPW_Setting_SetStartingTier_C.BndEvt__BPW_Setting_SetGamePhase_mDropdownBox_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature
	 */
	struct UBPW_Setting_SetStartingTier_C_BndEvt__BPW_Setting_SetGamePhase_mDropdownBox_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature_Params
	{
	public:
		class FString                                              SelectedItem;                                            // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		ESelectInfo                                                SelectionType;                                           // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_Setting_SetStartingTier.BPW_Setting_SetStartingTier_C.OnOptionValueUpdated
	 */
	struct UBPW_Setting_SetStartingTier_C_OnOptionValueUpdated_Params
	{	};

	/**
	 * Function BPW_Setting_SetStartingTier.BPW_Setting_SetStartingTier_C.ExecuteUbergraph_BPW_Setting_SetStartingTier
	 */
	struct UBPW_Setting_SetStartingTier_C_ExecuteUbergraph_BPW_Setting_SetStartingTier_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_0966[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
