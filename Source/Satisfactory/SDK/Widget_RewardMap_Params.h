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
	 * Function Widget_RewardMap.Widget_RewardMap_C.GetName
	 */
	struct UWidget_RewardMap_C_GetName_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function Widget_RewardMap.Widget_RewardMap_C.GetIcon
	 */
	struct UWidget_RewardMap_C_GetIcon_Params
	{
	public:
		struct FSlateBrush                                         ReturnValue;                                             // 0x0000(0x00D0)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function Widget_RewardMap.Widget_RewardMap_C.IsValidRewardItem
	 */
	struct UWidget_RewardMap_C_IsValidRewardItem_Params
	{
	public:
		bool                                                       IsValid;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_RewardMap.Widget_RewardMap_C.Construct
	 */
	struct UWidget_RewardMap_C_Construct_Params
	{	};

	/**
	 * Function Widget_RewardMap.Widget_RewardMap_C.ExecuteUbergraph_Widget_RewardMap
	 */
	struct UWidget_RewardMap_C_ExecuteUbergraph_Widget_RewardMap_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
