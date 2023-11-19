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
	 * Function Widget_WaterNotifier.Widget_WaterNotifier_C.SetTitleText
	 */
	struct UWidget_WaterNotifier_C_SetTitleText_Params
	{
	public:
		class FText                                                messageText;                                             // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function Widget_WaterNotifier.Widget_WaterNotifier_C.SetMessageText
	 */
	struct UWidget_WaterNotifier_C_SetMessageText_Params
	{
	public:
		class FText                                                messageText;                                             // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function Widget_WaterNotifier.Widget_WaterNotifier_C.Construct
	 */
	struct UWidget_WaterNotifier_C_Construct_Params
	{	};

	/**
	 * Function Widget_WaterNotifier.Widget_WaterNotifier_C.RemoveNotifier
	 */
	struct UWidget_WaterNotifier_C_RemoveNotifier_Params
	{	};

	/**
	 * Function Widget_WaterNotifier.Widget_WaterNotifier_C.ExecuteUbergraph_Widget_WaterNotifier
	 */
	struct UWidget_WaterNotifier_C_ExecuteUbergraph_Widget_WaterNotifier_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_O8N7[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
