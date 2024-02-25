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
	 * Function Widget_AudioMessage.Widget_AudioMessage_C.GetMessageText
	 */
	struct UWidget_AudioMessage_C_GetMessageText_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function Widget_AudioMessage.Widget_AudioMessage_C.SetSenderInfo
	 */
	struct UWidget_AudioMessage_C_SetSenderInfo_Params
	{
	public:
		class UClass*                                              inSender;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_AudioMessage.Widget_AudioMessage_C.GetDarkGray
	 */
	struct UWidget_AudioMessage_C_GetDarkGray_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_AudioMessage.Widget_AudioMessage_C.PlayNextDialogue
	 */
	struct UWidget_AudioMessage_C_PlayNextDialogue_Params
	{	};

	/**
	 * Function Widget_AudioMessage.Widget_AudioMessage_C.Construct
	 */
	struct UWidget_AudioMessage_C_Construct_Params
	{	};

	/**
	 * Function Widget_AudioMessage.Widget_AudioMessage_C.ShowContent
	 */
	struct UWidget_AudioMessage_C_ShowContent_Params
	{	};

	/**
	 * Function Widget_AudioMessage.Widget_AudioMessage_C.Destruct
	 */
	struct UWidget_AudioMessage_C_Destruct_Params
	{	};

	/**
	 * Function Widget_AudioMessage.Widget_AudioMessage_C.ExecuteUbergraph_Widget_AudioMessage
	 */
	struct UWidget_AudioMessage_C_ExecuteUbergraph_Widget_AudioMessage_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
