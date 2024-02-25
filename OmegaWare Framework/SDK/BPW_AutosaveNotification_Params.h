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
	 * Function BPW_AutosaveNotification.BPW_AutosaveNotification_C.UnMinimizeNotification
	 */
	struct UBPW_AutosaveNotification_C_UnMinimizeNotification_Params
	{	};

	/**
	 * Function BPW_AutosaveNotification.BPW_AutosaveNotification_C.SetupTimeUntilAutosave
	 */
	struct UBPW_AutosaveNotification_C_SetupTimeUntilAutosave_Params
	{
	public:
		float                                                      Time;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_AutosaveNotification.BPW_AutosaveNotification_C.OnAutosaveFinished
	 */
	struct UBPW_AutosaveNotification_C_OnAutosaveFinished_Params
	{	};

	/**
	 * Function BPW_AutosaveNotification.BPW_AutosaveNotification_C.OnAutosaveInProgress
	 */
	struct UBPW_AutosaveNotification_C_OnAutosaveInProgress_Params
	{	};

	/**
	 * Function BPW_AutosaveNotification.BPW_AutosaveNotification_C.OnAutosaveStarting
	 */
	struct UBPW_AutosaveNotification_C_OnAutosaveStarting_Params
	{
	public:
		double                                                     TimeUntilAutosave;                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_AutosaveNotification.BPW_AutosaveNotification_C.Construct
	 */
	struct UBPW_AutosaveNotification_C_Construct_Params
	{	};

	/**
	 * Function BPW_AutosaveNotification.BPW_AutosaveNotification_C.UpdateAutosaveTimerText
	 */
	struct UBPW_AutosaveNotification_C_UpdateAutosaveTimerText_Params
	{	};

	/**
	 * Function BPW_AutosaveNotification.BPW_AutosaveNotification_C.CloseNotificationDelayed
	 */
	struct UBPW_AutosaveNotification_C_CloseNotificationDelayed_Params
	{
	public:
		double                                                     Delay;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_AutosaveNotification.BPW_AutosaveNotification_C.ExecuteUbergraph_BPW_AutosaveNotification
	 */
	struct UBPW_AutosaveNotification_C_ExecuteUbergraph_BPW_AutosaveNotification_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
