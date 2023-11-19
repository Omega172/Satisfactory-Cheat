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
	 * Function BPW_PowerStorage.BPW_PowerStorage_C.On_mPowerCircuitGraph_mGetPowerCircuit_1
	 */
	struct UBPW_PowerStorage_C_On_mPowerCircuitGraph_mGetPowerCircuit_1_Params
	{
	public:
		class UFGPowerCircuit*                                     ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_PowerStorage.BPW_PowerStorage_C.UpdateStats
	 */
	struct UBPW_PowerStorage_C_UpdateStats_Params
	{	};

	/**
	 * Function BPW_PowerStorage.BPW_PowerStorage_C.On Get Power Circuit
	 */
	struct UBPW_PowerStorage_C_OnGetPowerCircuit_Params
	{
	public:
		class UFGPowerCircuit*                                     ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_PowerStorage.BPW_PowerStorage_C.Construct
	 */
	struct UBPW_PowerStorage_C_Construct_Params
	{	};

	/**
	 * Function BPW_PowerStorage.BPW_PowerStorage_C.OnCustomTick
	 */
	struct UBPW_PowerStorage_C_OnCustomTick_Params
	{
	public:
		float                                                      UpdateTime;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_PowerStorage.BPW_PowerStorage_C.BndEvt__Widget_Window_DarkMode_K2Node_ComponentBoundEvent_0_OnClose__DelegateSignature
	 */
	struct UBPW_PowerStorage_C_BndEvt__Widget_Window_DarkMode_K2Node_ComponentBoundEvent_0_OnClose__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_PowerStorage.BPW_PowerStorage_C.ExecuteUbergraph_BPW_PowerStorage
	 */
	struct UBPW_PowerStorage_C_ExecuteUbergraph_BPW_PowerStorage_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_GFDW[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
