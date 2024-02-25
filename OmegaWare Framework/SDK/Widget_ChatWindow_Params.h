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
	 * Function Widget_ChatWindow.Widget_ChatWindow_C.OnKeyDown
	 */
	struct UWidget_ChatWindow_C_OnKeyDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0038(0x0040)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0078(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function Widget_ChatWindow.Widget_ChatWindow_C.ExitChat
	 */
	struct UWidget_ChatWindow_C_ExitChat_Params
	{	};

	/**
	 * Function Widget_ChatWindow.Widget_ChatWindow_C.OnPlayerBeginTypeMessage
	 */
	struct UWidget_ChatWindow_C_OnPlayerBeginTypeMessage_Params
	{	};

	/**
	 * Function Widget_ChatWindow.Widget_ChatWindow_C.UpdateVisibility
	 */
	struct UWidget_ChatWindow_C_UpdateVisibility_Params
	{	};

	/**
	 * Function Widget_ChatWindow.Widget_ChatWindow_C.OnChatMessageReceived
	 */
	struct UWidget_ChatWindow_C_OnChatMessageReceived_Params
	{	};

	/**
	 * Function Widget_ChatWindow.Widget_ChatWindow_C.SetInputWindowVisibility
	 */
	struct UWidget_ChatWindow_C_SetInputWindowVisibility_Params
	{
	public:
		bool                                                       Visible;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_ChatWindow.Widget_ChatWindow_C.GetInputWindowVisibility
	 */
	struct UWidget_ChatWindow_C_GetInputWindowVisibility_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_ChatWindow.Widget_ChatWindow_C.CacheChatMessages
	 */
	struct UWidget_ChatWindow_C_CacheChatMessages_Params
	{	};

	/**
	 * Function Widget_ChatWindow.Widget_ChatWindow_C.IsLastMessageFresh
	 */
	struct UWidget_ChatWindow_C_IsLastMessageFresh_Params
	{
	public:
		bool                                                       IsFresh;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_MHRW[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Widget_ChatWindow.Widget_ChatWindow_C.RemoveMessageWidget
	 */
	struct UWidget_ChatWindow_C_RemoveMessageWidget_Params
	{	};

	/**
	 * Function Widget_ChatWindow.Widget_ChatWindow_C.AddMessageWidget
	 */
	struct UWidget_ChatWindow_C_AddMessageWidget_Params
	{	};

	/**
	 * Function Widget_ChatWindow.Widget_ChatWindow_C.MatchWidgetsAndMessages
	 */
	struct UWidget_ChatWindow_C_MatchWidgetsAndMessages_Params
	{	};

	/**
	 * Function Widget_ChatWindow.Widget_ChatWindow_C.OnRemovedFromFocusPath
	 */
	struct UWidget_ChatWindow_C_OnRemovedFromFocusPath_Params
	{
	public:
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function Widget_ChatWindow.Widget_ChatWindow_C.OnMouseEnter
	 */
	struct UWidget_ChatWindow_C_OnMouseEnter_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0078)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function Widget_ChatWindow.Widget_ChatWindow_C.OnMouseLeave
	 */
	struct UWidget_ChatWindow_C_OnMouseLeave_Params
	{
	public:
		struct FPointerEvent                                       MouseEvent;                                              // 0x0000(0x0078)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function Widget_ChatWindow.Widget_ChatWindow_C.Construct
	 */
	struct UWidget_ChatWindow_C_Construct_Params
	{	};

	/**
	 * Function Widget_ChatWindow.Widget_ChatWindow_C.ExecuteUbergraph_Widget_ChatWindow
	 */
	struct UWidget_ChatWindow_C_ExecuteUbergraph_Widget_ChatWindow_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
