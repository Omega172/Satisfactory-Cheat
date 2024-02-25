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
	 * Function Widget_RestartNotification.Widget_RestartNotification_C.GetTimeText
	 */
	struct UWidget_RestartNotification_C_GetTimeText_Params
	{
	public:
		double                                                     timeToRestart;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FText                                                Text;                                                    // 0x0008(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function Widget_RestartNotification.Widget_RestartNotification_C.Destruct
	 */
	struct UWidget_RestartNotification_C_Destruct_Params
	{	};

	/**
	 * Function Widget_RestartNotification.Widget_RestartNotification_C.OnTimeLeftUpdated
	 */
	struct UWidget_RestartNotification_C_OnTimeLeftUpdated_Params
	{
	public:
		float                                                      TimeLeft;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_RestartNotification.Widget_RestartNotification_C.PreConstruct
	 */
	struct UWidget_RestartNotification_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_RestartNotification.Widget_RestartNotification_C.Construct
	 */
	struct UWidget_RestartNotification_C_Construct_Params
	{	};

	/**
	 * Function Widget_RestartNotification.Widget_RestartNotification_C.ExecuteUbergraph_Widget_RestartNotification
	 */
	struct UWidget_RestartNotification_C_ExecuteUbergraph_Widget_RestartNotification_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
