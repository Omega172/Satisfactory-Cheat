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
	 * Function Widget_PowerPole.Widget_PowerPole_C.UpdateHeaderText
	 */
	struct UWidget_PowerPole_C_UpdateHeaderText_Params
	{	};

	/**
	 * Function Widget_PowerPole.Widget_PowerPole_C.GetFuseVisibility
	 */
	struct UWidget_PowerPole_C_GetFuseVisibility_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_BRT3[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Widget_PowerPole.Widget_PowerPole_C.OnGetPowerCircuit
	 */
	struct UWidget_PowerPole_C_OnGetPowerCircuit_Params
	{
	public:
		class UFGPowerCircuit*                                     ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_PowerPole.Widget_PowerPole_C.IsConnected
	 */
	struct UWidget_PowerPole_C_IsConnected_Params
	{
	public:
		bool                                                       IsConnected;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_4LLQ[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Widget_PowerPole.Widget_PowerPole_C.Cleanup
	 */
	struct UWidget_PowerPole_C_Cleanup_Params
	{	};

	/**
	 * Function Widget_PowerPole.Widget_PowerPole_C.Init
	 */
	struct UWidget_PowerPole_C_Init_Params
	{	};

	/**
	 * Function Widget_PowerPole.Widget_PowerPole_C.Construct
	 */
	struct UWidget_PowerPole_C_Construct_Params
	{	};

	/**
	 * Function Widget_PowerPole.Widget_PowerPole_C.Destruct
	 */
	struct UWidget_PowerPole_C_Destruct_Params
	{	};

	/**
	 * Function Widget_PowerPole.Widget_PowerPole_C.ResetFuse
	 */
	struct UWidget_PowerPole_C_ResetFuse_Params
	{	};

	/**
	 * Function Widget_PowerPole.Widget_PowerPole_C.ExecuteUbergraph_Widget_PowerPole
	 */
	struct UWidget_PowerPole_C_ExecuteUbergraph_Widget_PowerPole_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
