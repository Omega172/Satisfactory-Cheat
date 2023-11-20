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
	 * Function BPW_ResourceSink_TrackProgress.BPW_ResourceSink_TrackProgress_C.SetProgression
	 */
	struct UBPW_ResourceSink_TrackProgress_C_SetProgression_Params
	{
	public:
		double                                                     mProgression;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ForceProgressBarWrap;                                    // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_ResourceSink_TrackProgress.BPW_ResourceSink_TrackProgress_C.SetPointsToNext
	 */
	struct UBPW_ResourceSink_TrackProgress_C_SetPointsToNext_Params
	{
	public:
		int64_t                                                    mPointsToNext;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_ResourceSink_TrackProgress.BPW_ResourceSink_TrackProgress_C.SetColor
	 */
	struct UBPW_ResourceSink_TrackProgress_C_SetColor_Params
	{
	public:
		struct FLinearColor                                        mColor;                                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_ResourceSink_TrackProgress.BPW_ResourceSink_TrackProgress_C.SetIcon
	 */
	struct UBPW_ResourceSink_TrackProgress_C_SetIcon_Params
	{
	public:
		class UTexture2D*                                          mIcon;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_ResourceSink_TrackProgress.BPW_ResourceSink_TrackProgress_C.SetCurrentPointsName
	 */
	struct UBPW_ResourceSink_TrackProgress_C_SetCurrentPointsName_Params
	{
	public:
		class FText                                                mCurrentPointsName;                                      // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BPW_ResourceSink_TrackProgress.BPW_ResourceSink_TrackProgress_C.PreConstruct
	 */
	struct UBPW_ResourceSink_TrackProgress_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_ResourceSink_TrackProgress.BPW_ResourceSink_TrackProgress_C.BndEvt__BPW_ResourceSink_TrackProgress_BPW_LerpingProgressBar_K2Node_ComponentBoundEvent_0_OnWrappingOccured__DelegateSignature
	 */
	struct UBPW_ResourceSink_TrackProgress_C_BndEvt__BPW_ResourceSink_TrackProgress_BPW_LerpingProgressBar_K2Node_ComponentBoundEvent_0_OnWrappingOccured__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_ResourceSink_TrackProgress.BPW_ResourceSink_TrackProgress_C.ExecuteUbergraph_BPW_ResourceSink_TrackProgress
	 */
	struct UBPW_ResourceSink_TrackProgress_C_ExecuteUbergraph_BPW_ResourceSink_TrackProgress_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_8JWC[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
