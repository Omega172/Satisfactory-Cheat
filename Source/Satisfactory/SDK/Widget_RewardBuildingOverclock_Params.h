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
	 * Function Widget_RewardBuildingOverclock.Widget_RewardBuildingOverclock_C.IsValidRewardItem
	 */
	struct UWidget_RewardBuildingOverclock_C_IsValidRewardItem_Params
	{
	public:
		bool                                                       IsValid;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_RewardBuildingOverclock.Widget_RewardBuildingOverclock_C.GetName
	 */
	struct UWidget_RewardBuildingOverclock_C_GetName_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function Widget_RewardBuildingOverclock.Widget_RewardBuildingOverclock_C.GetIcon
	 */
	struct UWidget_RewardBuildingOverclock_C_GetIcon_Params
	{
	public:
		struct FSlateBrush                                         ReturnValue;                                             // 0x0000(0x00D0)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function Widget_RewardBuildingOverclock.Widget_RewardBuildingOverclock_C.Construct
	 */
	struct UWidget_RewardBuildingOverclock_C_Construct_Params
	{	};

	/**
	 * Function Widget_RewardBuildingOverclock.Widget_RewardBuildingOverclock_C.ExecuteUbergraph_Widget_RewardBuildingOverclock
	 */
	struct UWidget_RewardBuildingOverclock_C_ExecuteUbergraph_Widget_RewardBuildingOverclock_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
