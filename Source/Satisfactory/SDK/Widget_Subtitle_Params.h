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
	 * Function Widget_Subtitle.Widget_Subtitle_C.PlaySubtitleSpawnAnimation
	 */
	struct UWidget_Subtitle_C_PlaySubtitleSpawnAnimation_Params
	{	};

	/**
	 * Function Widget_Subtitle.Widget_Subtitle_C.SetSubtitleMessageText
	 */
	struct UWidget_Subtitle_C_SetSubtitleMessageText_Params
	{
	public:
		class FText                                                MessageText;                                             // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function Widget_Subtitle.Widget_Subtitle_C.SetSubtitleSenderInfo
	 */
	struct UWidget_Subtitle_C_SetSubtitleSenderInfo_Params
	{
	public:
		class FText                                                SenderName;                                              // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class FText                                                SenderEmail;                                             // 0x0018(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class UTexture2D*                                          SenderImage;                                             // 0x0030(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                                       AllCaps;                                                 // 0x0038(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_DSNN[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Widget_Subtitle.Widget_Subtitle_C.GetLightGrayText
	 */
	struct UWidget_Subtitle_C_GetLightGrayText_Params
	{
	public:
		struct FSlateColor                                         ReturnValue;                                             // 0x0000(0x0014)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function Widget_Subtitle.Widget_Subtitle_C.GetOrangeText
	 */
	struct UWidget_Subtitle_C_GetOrangeText_Params
	{
	public:
		struct FSlateColor                                         ReturnValue;                                             // 0x0000(0x0014)  (Parm, OutParm, ReturnParm)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
