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
	 * Function BPW_PipeModule_Screen.BPW_PipeModule_Screen_C.SetNetText
	 */
	struct UBPW_PipeModule_Screen_C_SetNetText_Params
	{
	public:
		class FText                                                mNetText;                                                // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BPW_PipeModule_Screen.BPW_PipeModule_Screen_C.SetDrainRateText
	 */
	struct UBPW_PipeModule_Screen_C_SetDrainRateText_Params
	{
	public:
		class FText                                                mDrainRateText;                                          // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BPW_PipeModule_Screen.BPW_PipeModule_Screen_C.SetFillRateText
	 */
	struct UBPW_PipeModule_Screen_C_SetFillRateText_Params
	{
	public:
		class FText                                                mFillRateText;                                           // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BPW_PipeModule_Screen.BPW_PipeModule_Screen_C.PreConstruct
	 */
	struct UBPW_PipeModule_Screen_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_PipeModule_Screen.BPW_PipeModule_Screen_C.ExecuteUbergraph_BPW_PipeModule_Screen
	 */
	struct UBPW_PipeModule_Screen_C_ExecuteUbergraph_BPW_PipeModule_Screen_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
