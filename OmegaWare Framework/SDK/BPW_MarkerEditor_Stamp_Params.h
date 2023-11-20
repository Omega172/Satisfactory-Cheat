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
	 * Function BPW_MarkerEditor_Stamp.BPW_MarkerEditor_Stamp_C.GetSmartIcon
	 */
	struct UBPW_MarkerEditor_Stamp_C_GetSmartIcon_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    IconID;                                                  // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_BQQP[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPW_MarkerEditor_Stamp.BPW_MarkerEditor_Stamp_C.SetMarkerAmount
	 */
	struct UBPW_MarkerEditor_Stamp_C_SetMarkerAmount_Params
	{	};

	/**
	 * Function BPW_MarkerEditor_Stamp.BPW_MarkerEditor_Stamp_C.OnIconUnhovered
	 */
	struct UBPW_MarkerEditor_Stamp_C_OnIconUnhovered_Params
	{
	public:
		int32_t                                                    IconID;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_T61T[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPW_MarkerEditor_Stamp.BPW_MarkerEditor_Stamp_C.OnIconHovered
	 */
	struct UBPW_MarkerEditor_Stamp_C_OnIconHovered_Params
	{
	public:
		int32_t                                                    IconID;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_2MUY[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPW_MarkerEditor_Stamp.BPW_MarkerEditor_Stamp_C.GenerateIcons
	 */
	struct UBPW_MarkerEditor_Stamp_C_GenerateIcons_Params
	{	};

	/**
	 * Function BPW_MarkerEditor_Stamp.BPW_MarkerEditor_Stamp_C.OnIconClicked
	 */
	struct UBPW_MarkerEditor_Stamp_C_OnIconClicked_Params
	{
	public:
		int32_t                                                    IconID;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_1MI9[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPW_MarkerEditor_Stamp.BPW_MarkerEditor_Stamp_C.Construct
	 */
	struct UBPW_MarkerEditor_Stamp_C_Construct_Params
	{	};

	/**
	 * Function BPW_MarkerEditor_Stamp.BPW_MarkerEditor_Stamp_C.BndEvt__BPW_MarkerEditor_Environment_Widget_StandardButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
	 */
	struct UBPW_MarkerEditor_Stamp_C_BndEvt__BPW_MarkerEditor_Environment_Widget_StandardButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_MarkerEditor_Stamp.BPW_MarkerEditor_Stamp_C.BndEvt__BPW_MarkerEditor_Environment_mCloseArea_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 */
	struct UBPW_MarkerEditor_Stamp_C_BndEvt__BPW_MarkerEditor_Environment_mCloseArea_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_MarkerEditor_Stamp.BPW_MarkerEditor_Stamp_C.BndEvt__BPW_MarkerEditor_Environment_mHighlightMarker_K2Node_ComponentBoundEvent_2_OnStateChanged__DelegateSignature
	 */
	struct UBPW_MarkerEditor_Stamp_C_BndEvt__BPW_MarkerEditor_Environment_mHighlightMarker_K2Node_ComponentBoundEvent_2_OnStateChanged__DelegateSignature_Params
	{
	public:
		bool                                                       IsTrue;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_MarkerEditor_Stamp.BPW_MarkerEditor_Stamp_C.OnEscapePressed
	 */
	struct UBPW_MarkerEditor_Stamp_C_OnEscapePressed_Params
	{	};

	/**
	 * Function BPW_MarkerEditor_Stamp.BPW_MarkerEditor_Stamp_C.ExecuteUbergraph_BPW_MarkerEditor_Stamp
	 */
	struct UBPW_MarkerEditor_Stamp_C_ExecuteUbergraph_BPW_MarkerEditor_Stamp_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
