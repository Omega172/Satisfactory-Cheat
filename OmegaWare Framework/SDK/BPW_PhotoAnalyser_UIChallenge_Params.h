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
	 * Function BPW_PhotoAnalyser_UIChallenge.BPW_PhotoAnalyser_UIChallenge_C.SetIsCompleted
	 */
	struct UBPW_PhotoAnalyser_UIChallenge_C_SetIsCompleted_Params
	{
	public:
		bool                                                       mIsCompleted;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_PhotoAnalyser_UIChallenge.BPW_PhotoAnalyser_UIChallenge_C.SetStyle
	 */
	struct UBPW_PhotoAnalyser_UIChallenge_C_SetStyle_Params
	{
	public:
		bool                                                       IsHovered;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_POTG[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPW_PhotoAnalyser_UIChallenge.BPW_PhotoAnalyser_UIChallenge_C.SetIsUnlocked
	 */
	struct UBPW_PhotoAnalyser_UIChallenge_C_SetIsUnlocked_Params
	{
	public:
		bool                                                       mIsUnlocked;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_WJ56[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPW_PhotoAnalyser_UIChallenge.BPW_PhotoAnalyser_UIChallenge_C.SetChallengeData
	 */
	struct UBPW_PhotoAnalyser_UIChallenge_C_SetChallengeData_Params
	{
	public:
		class UClass*                                              mChallengeData;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_PhotoAnalyser_UIChallenge.BPW_PhotoAnalyser_UIChallenge_C.PreConstruct
	 */
	struct UBPW_PhotoAnalyser_UIChallenge_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_PhotoAnalyser_UIChallenge.BPW_PhotoAnalyser_UIChallenge_C.BndEvt__BPW_PhotoAnalyser_UIChallenge_mButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
	 */
	struct UBPW_PhotoAnalyser_UIChallenge_C_BndEvt__BPW_PhotoAnalyser_UIChallenge_mButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_PhotoAnalyser_UIChallenge.BPW_PhotoAnalyser_UIChallenge_C.BndEvt__BPW_PhotoAnalyser_UIChallenge_mButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 */
	struct UBPW_PhotoAnalyser_UIChallenge_C_BndEvt__BPW_PhotoAnalyser_UIChallenge_mButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_PhotoAnalyser_UIChallenge.BPW_PhotoAnalyser_UIChallenge_C.ExecuteUbergraph_BPW_PhotoAnalyser_UIChallenge
	 */
	struct UBPW_PhotoAnalyser_UIChallenge_C_ExecuteUbergraph_BPW_PhotoAnalyser_UIChallenge_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_UYLT[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
