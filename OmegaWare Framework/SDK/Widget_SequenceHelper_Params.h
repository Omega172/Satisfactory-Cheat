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
	 * Function Widget_SequenceHelper.Widget_SequenceHelper_C.OnKeyDown
	 */
	struct UWidget_SequenceHelper_C_OnKeyDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0038(0x0040)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0078(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function Widget_SequenceHelper.Widget_SequenceHelper_C.Construct
	 */
	struct UWidget_SequenceHelper_C_Construct_Params
	{	};

	/**
	 * Function Widget_SequenceHelper.Widget_SequenceHelper_C.Destruct
	 */
	struct UWidget_SequenceHelper_C_Destruct_Params
	{	};

	/**
	 * Function Widget_SequenceHelper.Widget_SequenceHelper_C.OnClickedWithRef_Event_1
	 */
	struct UWidget_SequenceHelper_C_OnClickedWithRef_Event_1_Params
	{
	public:
		class UWidget_Button_C*                                    ClickedButton;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_SequenceHelper.Widget_SequenceHelper_C.CustomEvent_1
	 */
	struct UWidget_SequenceHelper_C_CustomEvent_1_Params
	{	};

	/**
	 * Function Widget_SequenceHelper.Widget_SequenceHelper_C.ExecuteUbergraph_Widget_SequenceHelper
	 */
	struct UWidget_SequenceHelper_C_ExecuteUbergraph_Widget_SequenceHelper_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
