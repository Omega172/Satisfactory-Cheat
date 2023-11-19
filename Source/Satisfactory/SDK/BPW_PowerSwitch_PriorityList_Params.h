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
	 * Function BPW_PowerSwitch_PriorityList.BPW_PowerSwitch_PriorityList_C.Update Group IDs
	 */
	struct UBPW_PowerSwitch_PriorityList_C_UpdateGroupIDs_Params
	{	};

	/**
	 * Function BPW_PowerSwitch_PriorityList.BPW_PowerSwitch_PriorityList_C.Is Same Group ID
	 */
	struct UBPW_PowerSwitch_PriorityList_C_IsSameGroupID_Params
	{
	public:
		int32_t                                                    A;                                                       // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    B;                                                       // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_PowerSwitch_PriorityList.BPW_PowerSwitch_PriorityList_C.AddRule
	 */
	struct UBPW_PowerSwitch_PriorityList_C_AddRule_Params
	{
	public:
		class AFGPriorityPowerSwitchInfo*                          PowerSwtichInfo;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_PowerSwitch_PriorityList.BPW_PowerSwitch_PriorityList_C.MoveRule
	 */
	struct UBPW_PowerSwitch_PriorityList_C_MoveRule_Params
	{
	public:
		class UBPW_PowerSwitch_PriorityRule_C*                     Rule;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Priority;                                                // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_XVTI[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPW_PowerSwitch_PriorityList.BPW_PowerSwitch_PriorityList_C.IsSwitchInfoPartOfCircuit
	 */
	struct UBPW_PowerSwitch_PriorityList_C_IsSwitchInfoPartOfCircuit_Params
	{
	public:
		class AFGPriorityPowerSwitchInfo*                          PowerSwitchInfo;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_UNI9[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPW_PowerSwitch_PriorityList.BPW_PowerSwitch_PriorityList_C.OnSearch
	 */
	struct UBPW_PowerSwitch_PriorityList_C_OnSearch_Params
	{
	public:
		class FText                                                SearchText;                                              // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BPW_PowerSwitch_PriorityList.BPW_PowerSwitch_PriorityList_C.SetPriorityPowerSwitch
	 */
	struct UBPW_PowerSwitch_PriorityList_C_SetPriorityPowerSwitch_Params
	{
	public:
		class AFGBuildablePriorityPowerSwitch*                     mPriorityPowerSwitch;                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_PowerSwitch_PriorityList.BPW_PowerSwitch_PriorityList_C.PreConstruct
	 */
	struct UBPW_PowerSwitch_PriorityList_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_PowerSwitch_PriorityList.BPW_PowerSwitch_PriorityList_C.Construct
	 */
	struct UBPW_PowerSwitch_PriorityList_C_Construct_Params
	{	};

	/**
	 * Function BPW_PowerSwitch_PriorityList.BPW_PowerSwitch_PriorityList_C.BndEvt__BPW_PowerSwitch_PriorityList_mSearchText_K2Node_ComponentBoundEvent_0_OnEditableTextChangedEvent__DelegateSignature
	 */
	struct UBPW_PowerSwitch_PriorityList_C_BndEvt__BPW_PowerSwitch_PriorityList_mSearchText_K2Node_ComponentBoundEvent_0_OnEditableTextChangedEvent__DelegateSignature_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BPW_PowerSwitch_PriorityList.BPW_PowerSwitch_PriorityList_C.Delegate Update Group IDs
	 */
	struct UBPW_PowerSwitch_PriorityList_C_DelegateUpdateGroupIDs_Params
	{	};

	/**
	 * Function BPW_PowerSwitch_PriorityList.BPW_PowerSwitch_PriorityList_C.Timer Update Group IDs
	 */
	struct UBPW_PowerSwitch_PriorityList_C_TimerUpdateGroupIDs_Params
	{	};

	/**
	 * Function BPW_PowerSwitch_PriorityList.BPW_PowerSwitch_PriorityList_C.ExecuteUbergraph_BPW_PowerSwitch_PriorityList
	 */
	struct UBPW_PowerSwitch_PriorityList_C_ExecuteUbergraph_BPW_PowerSwitch_PriorityList_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
