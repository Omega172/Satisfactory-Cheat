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
	 * Function BPW_ShopItem_Feedback.BPW_ShopItem_Feedback_C.SetIcon
	 */
	struct UBPW_ShopItem_Feedback_C_SetIcon_Params
	{
	public:
		class UObject*                                             Texture;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_RE67[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPW_ShopItem_Feedback.BPW_ShopItem_Feedback_C.SetText
	 */
	struct UBPW_ShopItem_Feedback_C_SetText_Params
	{
	public:
		class FText                                                InText;                                                  // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BPW_ShopItem_Feedback.BPW_ShopItem_Feedback_C.PreConstruct
	 */
	struct UBPW_ShopItem_Feedback_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_ShopItem_Feedback.BPW_ShopItem_Feedback_C.Play Feedback Animation
	 */
	struct UBPW_ShopItem_Feedback_C_PlayFeedbackAnimation_Params
	{	};

	/**
	 * Function BPW_ShopItem_Feedback.BPW_ShopItem_Feedback_C.Collapse Feedback Widget
	 */
	struct UBPW_ShopItem_Feedback_C_CollapseFeedbackWidget_Params
	{	};

	/**
	 * Function BPW_ShopItem_Feedback.BPW_ShopItem_Feedback_C.ExecuteUbergraph_BPW_ShopItem_Feedback
	 */
	struct UBPW_ShopItem_Feedback_C_ExecuteUbergraph_BPW_ShopItem_Feedback_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
