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
	 * Function BPW_HUDBox_Hoverpack.BPW_HUDBox_Hoverpack_C.GetNormalizedRangeWarningDistanceThreshold
	 */
	struct UBPW_HUDBox_Hoverpack_C_GetNormalizedRangeWarningDistanceThreshold_Params
	{
	public:
		double                                                     RangeWarningNormalizedDistanceThreshold;                 // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_HUDBox_Hoverpack.BPW_HUDBox_Hoverpack_C.IsHoverpackHovering
	 */
	struct UBPW_HUDBox_Hoverpack_C_IsHoverpackHovering_Params
	{
	public:
		bool                                                       IsHovering;                                              // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_L75L[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPW_HUDBox_Hoverpack.BPW_HUDBox_Hoverpack_C.SetBrushForHoverpackState
	 */
	struct UBPW_HUDBox_Hoverpack_C_SetBrushForHoverpackState_Params
	{	};

	/**
	 * Function BPW_HUDBox_Hoverpack.BPW_HUDBox_Hoverpack_C.PlayIsHoveringAnimation
	 */
	struct UBPW_HUDBox_Hoverpack_C_PlayIsHoveringAnimation_Params
	{
	public:
		bool                                                       IsHovering;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_HUDBox_Hoverpack.BPW_HUDBox_Hoverpack_C.OnConnectionStatusUpdated
	 */
	struct UBPW_HUDBox_Hoverpack_C_OnConnectionStatusUpdated_Params
	{
	public:
		bool                                                       HasConnection;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_HUDBox_Hoverpack.BPW_HUDBox_Hoverpack_C.UnbindHoverpackEvents
	 */
	struct UBPW_HUDBox_Hoverpack_C_UnbindHoverpackEvents_Params
	{	};

	/**
	 * Function BPW_HUDBox_Hoverpack.BPW_HUDBox_Hoverpack_C.BindHoverpackEvents
	 */
	struct UBPW_HUDBox_Hoverpack_C_BindHoverpackEvents_Params
	{	};

	/**
	 * Function BPW_HUDBox_Hoverpack.BPW_HUDBox_Hoverpack_C.UpdateProgressBar
	 */
	struct UBPW_HUDBox_Hoverpack_C_UpdateProgressBar_Params
	{	};

	/**
	 * Function BPW_HUDBox_Hoverpack.BPW_HUDBox_Hoverpack_C.GetCurrentConnectionNormalisedDistance
	 */
	struct UBPW_HUDBox_Hoverpack_C_GetCurrentConnectionNormalisedDistance_Params
	{
	public:
		double                                                     NormalisedConnectionDistance;                            // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_HUDBox_Hoverpack.BPW_HUDBox_Hoverpack_C.IsHoverpackConnected
	 */
	struct UBPW_HUDBox_Hoverpack_C_IsHoverpackConnected_Params
	{
	public:
		bool                                                       IsConnected;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_283L[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPW_HUDBox_Hoverpack.BPW_HUDBox_Hoverpack_C.PreConstruct
	 */
	struct UBPW_HUDBox_Hoverpack_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_HUDBox_Hoverpack.BPW_HUDBox_Hoverpack_C.Destruct
	 */
	struct UBPW_HUDBox_Hoverpack_C_Destruct_Params
	{	};

	/**
	 * Function BPW_HUDBox_Hoverpack.BPW_HUDBox_Hoverpack_C.Tick
	 */
	struct UBPW_HUDBox_Hoverpack_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_HUDBox_Hoverpack.BPW_HUDBox_Hoverpack_C.Event IsHovering
	 */
	struct UBPW_HUDBox_Hoverpack_C_EventIsHovering_Params
	{
	public:
		EHoverPackMode                                             NewMode;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_HUDBox_Hoverpack.BPW_HUDBox_Hoverpack_C.PlayWarningAnimation
	 */
	struct UBPW_HUDBox_Hoverpack_C_PlayWarningAnimation_Params
	{	};

	/**
	 * Function BPW_HUDBox_Hoverpack.BPW_HUDBox_Hoverpack_C.Event PlayRangeWarningAnimation
	 */
	struct UBPW_HUDBox_Hoverpack_C_EventPlayRangeWarningAnimation_Params
	{
	public:
		bool                                                       ShouldPlayWarning;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_HUDBox_Hoverpack.BPW_HUDBox_Hoverpack_C.Construct
	 */
	struct UBPW_HUDBox_Hoverpack_C_Construct_Params
	{	};

	/**
	 * Function BPW_HUDBox_Hoverpack.BPW_HUDBox_Hoverpack_C.ExecuteUbergraph_BPW_HUDBox_Hoverpack
	 */
	struct UBPW_HUDBox_Hoverpack_C_ExecuteUbergraph_BPW_HUDBox_Hoverpack_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
