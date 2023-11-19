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
	 * Function BPW_PlayerNameTag.BPW_PlayerNameTag_C.Construct
	 */
	struct UBPW_PlayerNameTag_C_Construct_Params
	{	};

	/**
	 * Function BPW_PlayerNameTag.BPW_PlayerNameTag_C.OnPlayerDataUpdated
	 */
	struct UBPW_PlayerNameTag_C_OnPlayerDataUpdated_Params
	{	};

	/**
	 * Function BPW_PlayerNameTag.BPW_PlayerNameTag_C.OnPumpiModeChanged
	 */
	struct UBPW_PlayerNameTag_C_OnPumpiModeChanged_Params
	{
	public:
		bool                                                       HideHUD;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_PlayerNameTag.BPW_PlayerNameTag_C.ExecuteUbergraph_BPW_PlayerNameTag
	 */
	struct UBPW_PlayerNameTag_C_ExecuteUbergraph_BPW_PlayerNameTag_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
