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
	 * Function BPW_LerpingProgressBar.BPW_LerpingProgressBar_C.StopBlinkAnimation
	 */
	struct UBPW_LerpingProgressBar_C_StopBlinkAnimation_Params
	{	};

	/**
	 * Function BPW_LerpingProgressBar.BPW_LerpingProgressBar_C.PlayBlinkAnimation
	 */
	struct UBPW_LerpingProgressBar_C_PlayBlinkAnimation_Params
	{	};

	/**
	 * Function BPW_LerpingProgressBar.BPW_LerpingProgressBar_C.mSetPercent
	 */
	struct UBPW_LerpingProgressBar_C_mSetPercent_Params
	{
	public:
		double                                                     Percent;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ForceProgressBarWrap;                                    // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_2OPS[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPW_LerpingProgressBar.BPW_LerpingProgressBar_C.PreConstruct
	 */
	struct UBPW_LerpingProgressBar_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_LerpingProgressBar.BPW_LerpingProgressBar_C.LerpBar
	 */
	struct UBPW_LerpingProgressBar_C_LerpBar_Params
	{	};

	/**
	 * Function BPW_LerpingProgressBar.BPW_LerpingProgressBar_C.Destruct
	 */
	struct UBPW_LerpingProgressBar_C_Destruct_Params
	{	};

	/**
	 * Function BPW_LerpingProgressBar.BPW_LerpingProgressBar_C.ExecuteUbergraph_BPW_LerpingProgressBar
	 */
	struct UBPW_LerpingProgressBar_C_ExecuteUbergraph_BPW_LerpingProgressBar_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_LerpingProgressBar.BPW_LerpingProgressBar_C.OnWrappingOccured__DelegateSignature
	 */
	struct UBPW_LerpingProgressBar_C_OnWrappingOccured__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
