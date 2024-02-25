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
	 * Function Widget_ChatMessageRow.Widget_ChatMessageRow_C.SetTextMessage
	 */
	struct UWidget_ChatMessageRow_C_SetTextMessage_Params
	{	};

	/**
	 * Function Widget_ChatMessageRow.Widget_ChatMessageRow_C.SetPlayerNameColor
	 */
	struct UWidget_ChatMessageRow_C_SetPlayerNameColor_Params
	{	};

	/**
	 * Function Widget_ChatMessageRow.Widget_ChatMessageRow_C.SetPlayerIconColor
	 */
	struct UWidget_ChatMessageRow_C_SetPlayerIconColor_Params
	{	};

	/**
	 * Function Widget_ChatMessageRow.Widget_ChatMessageRow_C.SetPlayerName
	 */
	struct UWidget_ChatMessageRow_C_SetPlayerName_Params
	{	};

	/**
	 * Function Widget_ChatMessageRow.Widget_ChatMessageRow_C.GetPlayerNameColor
	 */
	struct UWidget_ChatMessageRow_C_GetPlayerNameColor_Params
	{
	public:
		struct FSlateColor                                         ReturnValue;                                             // 0x0000(0x0014)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function Widget_ChatMessageRow.Widget_ChatMessageRow_C.GetPlayerName
	 */
	struct UWidget_ChatMessageRow_C_GetPlayerName_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function Widget_ChatMessageRow.Widget_ChatMessageRow_C.GetChatText
	 */
	struct UWidget_ChatMessageRow_C_GetChatText_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function Widget_ChatMessageRow.Widget_ChatMessageRow_C.Construct
	 */
	struct UWidget_ChatMessageRow_C_Construct_Params
	{	};

	/**
	 * Function Widget_ChatMessageRow.Widget_ChatMessageRow_C.RemoveWidgetAfterDelay
	 */
	struct UWidget_ChatMessageRow_C_RemoveWidgetAfterDelay_Params
	{
	public:
		double                                                     Delay;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_ChatMessageRow.Widget_ChatMessageRow_C.ExecuteUbergraph_Widget_ChatMessageRow
	 */
	struct UWidget_ChatMessageRow_C_ExecuteUbergraph_Widget_ChatMessageRow_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_0U6D[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
