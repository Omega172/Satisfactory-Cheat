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
	 * Function BPW_ChristmasCalendar_RewardPopup.BPW_ChristmasCalendar_RewardPopup_C.SetUnlock
	 */
	struct UBPW_ChristmasCalendar_RewardPopup_C_SetUnlock_Params
	{
	public:
		class UFGUnlock*                                           mUnlock;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_ChristmasCalendar_RewardPopup.BPW_ChristmasCalendar_RewardPopup_C.GetShouldOkayBeEnabled
	 */
	struct UBPW_ChristmasCalendar_RewardPopup_C_GetShouldOkayBeEnabled_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_ChristmasCalendar_RewardPopup.BPW_ChristmasCalendar_RewardPopup_C.Construct
	 */
	struct UBPW_ChristmasCalendar_RewardPopup_C_Construct_Params
	{	};

	/**
	 * Function BPW_ChristmasCalendar_RewardPopup.BPW_ChristmasCalendar_RewardPopup_C.ExecuteUbergraph_BPW_ChristmasCalendar_RewardPopup
	 */
	struct UBPW_ChristmasCalendar_RewardPopup_C_ExecuteUbergraph_BPW_ChristmasCalendar_RewardPopup_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
