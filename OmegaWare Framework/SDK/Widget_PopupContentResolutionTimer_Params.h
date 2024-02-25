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
	 * Function Widget_PopupContentResolutionTimer.Widget_PopupContentResolutionTimer_C.GetShouldOkayBeEnabled
	 */
	struct UWidget_PopupContentResolutionTimer_C_GetShouldOkayBeEnabled_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_PopupContentResolutionTimer.Widget_PopupContentResolutionTimer_C.Get_TimerText
	 */
	struct UWidget_PopupContentResolutionTimer_C_Get_TimerText_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function Widget_PopupContentResolutionTimer.Widget_PopupContentResolutionTimer_C.Construct
	 */
	struct UWidget_PopupContentResolutionTimer_C_Construct_Params
	{	};

	/**
	 * Function Widget_PopupContentResolutionTimer.Widget_PopupContentResolutionTimer_C.TriggerCancel
	 */
	struct UWidget_PopupContentResolutionTimer_C_TriggerCancel_Params
	{	};

	/**
	 * Function Widget_PopupContentResolutionTimer.Widget_PopupContentResolutionTimer_C.SetOptionalTextElements
	 */
	struct UWidget_PopupContentResolutionTimer_C_SetOptionalTextElements_Params
	{
	public:
		class FText                                                Title;                                                   // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		class FText                                                Desc;                                                    // 0x0018(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function Widget_PopupContentResolutionTimer.Widget_PopupContentResolutionTimer_C.Destruct
	 */
	struct UWidget_PopupContentResolutionTimer_C_Destruct_Params
	{	};

	/**
	 * Function Widget_PopupContentResolutionTimer.Widget_PopupContentResolutionTimer_C.ExecuteUbergraph_Widget_PopupContentResolutionTimer
	 */
	struct UWidget_PopupContentResolutionTimer_C_ExecuteUbergraph_Widget_PopupContentResolutionTimer_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_QZTC[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
