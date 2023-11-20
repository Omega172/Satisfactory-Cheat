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
	 * Function BPW_IndicatorPanel.BPW_IndicatorPanel_C.SequenceEvent__ENTRYPOINTBPW_IndicatorPanel
	 */
	struct UBPW_IndicatorPanel_C_SequenceEvent__ENTRYPOINTBPW_IndicatorPanel_Params
	{	};

	/**
	 * Function BPW_IndicatorPanel.BPW_IndicatorPanel_C.PlayErrorBeep
	 */
	struct UBPW_IndicatorPanel_C_PlayErrorBeep_Params
	{	};

	/**
	 * Function BPW_IndicatorPanel.BPW_IndicatorPanel_C.SetCustomState
	 */
	struct UBPW_IndicatorPanel_C_SetCustomState_Params
	{
	public:
		E_IndicatorPanel_States                                    LightState;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_YZFB[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FText                                                Text;                                                    // 0x0008(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class UTexture2D*                                          Icon;                                                    // 0x0020(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_IndicatorPanel.BPW_IndicatorPanel_C.SetIndicatorIcon
	 */
	struct UBPW_IndicatorPanel_C_SetIndicatorIcon_Params
	{
	public:
		class UTexture2D*                                          Texture;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_IndicatorPanel.BPW_IndicatorPanel_C.SetIndicatorText
	 */
	struct UBPW_IndicatorPanel_C_SetIndicatorText_Params
	{
	public:
		class FText                                                mIndicatorText;                                          // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BPW_IndicatorPanel.BPW_IndicatorPanel_C.SetStandardState
	 */
	struct UBPW_IndicatorPanel_C_SetStandardState_Params
	{
	public:
		E_IndicatorPanel_States                                    State;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_IndicatorPanel.BPW_IndicatorPanel_C.SetIndicatorLightState
	 */
	struct UBPW_IndicatorPanel_C_SetIndicatorLightState_Params
	{
	public:
		E_IndicatorPanel_States                                    mIndicatorState;                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_M9PM[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPW_IndicatorPanel.BPW_IndicatorPanel_C.PreConstruct
	 */
	struct UBPW_IndicatorPanel_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_IndicatorPanel.BPW_IndicatorPanel_C.ExecuteUbergraph_BPW_IndicatorPanel
	 */
	struct UBPW_IndicatorPanel_C_ExecuteUbergraph_BPW_IndicatorPanel_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
