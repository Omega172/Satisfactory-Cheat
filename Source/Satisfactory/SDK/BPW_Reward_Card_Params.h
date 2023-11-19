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
	 * Function BPW_Reward_Card.BPW_Reward_Card_C.SetIsDarkMode
	 */
	struct UBPW_Reward_Card_C_SetIsDarkMode_Params
	{
	public:
		bool                                                       mIsDarkMode;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_VLI6[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPW_Reward_Card.BPW_Reward_Card_C.SetAmountText
	 */
	struct UBPW_Reward_Card_C_SetAmountText_Params
	{
	public:
		struct FFUnlockDataStruct                                  UnlockDataStruct;                                        // 0x0000(0x0050)  (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_Reward_Card.BPW_Reward_Card_C.SetName
	 */
	struct UBPW_Reward_Card_C_SetName_Params
	{
	public:
		struct FFUnlockDataStruct                                  UnlockDataStruct;                                        // 0x0000(0x0050)  (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_Reward_Card.BPW_Reward_Card_C.SetIcon
	 */
	struct UBPW_Reward_Card_C_SetIcon_Params
	{
	public:
		struct FFUnlockDataStruct                                  UnlockDataStruct;                                        // 0x0000(0x0050)  (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_Reward_Card.BPW_Reward_Card_C.PreConstruct
	 */
	struct UBPW_Reward_Card_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_Reward_Card.BPW_Reward_Card_C.ExecuteUbergraph_BPW_Reward_Card
	 */
	struct UBPW_Reward_Card_C_ExecuteUbergraph_BPW_Reward_Card_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
