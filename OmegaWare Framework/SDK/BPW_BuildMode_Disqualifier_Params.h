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
	 * Function BPW_BuildMode_Disqualifier.BPW_BuildMode_Disqualifier_C.SetIsInverted
	 */
	struct UBPW_BuildMode_Disqualifier_C_SetIsInverted_Params
	{
	public:
		bool                                                       mIsInverted;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_F98L[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPW_BuildMode_Disqualifier.BPW_BuildMode_Disqualifier_C.SetAnimate
	 */
	struct UBPW_BuildMode_Disqualifier_C_SetAnimate_Params
	{
	public:
		bool                                                       mAnimate;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_MD3L[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPW_BuildMode_Disqualifier.BPW_BuildMode_Disqualifier_C.SetText
	 */
	struct UBPW_BuildMode_Disqualifier_C_SetText_Params
	{
	public:
		class FText                                                InText;                                                  // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BPW_BuildMode_Disqualifier.BPW_BuildMode_Disqualifier_C.PreConstruct
	 */
	struct UBPW_BuildMode_Disqualifier_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_BuildMode_Disqualifier.BPW_BuildMode_Disqualifier_C.Construct
	 */
	struct UBPW_BuildMode_Disqualifier_C_Construct_Params
	{	};

	/**
	 * Function BPW_BuildMode_Disqualifier.BPW_BuildMode_Disqualifier_C.Destruct
	 */
	struct UBPW_BuildMode_Disqualifier_C_Destruct_Params
	{	};

	/**
	 * Function BPW_BuildMode_Disqualifier.BPW_BuildMode_Disqualifier_C.ExecuteUbergraph_BPW_BuildMode_Disqualifier
	 */
	struct UBPW_BuildMode_Disqualifier_C_ExecuteUbergraph_BPW_BuildMode_Disqualifier_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_BuildMode_Disqualifier.BPW_BuildMode_Disqualifier_C.OnDestroyed__DelegateSignature
	 */
	struct UBPW_BuildMode_Disqualifier_C_OnDestroyed__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
