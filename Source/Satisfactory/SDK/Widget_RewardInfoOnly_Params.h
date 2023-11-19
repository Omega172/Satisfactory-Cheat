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
	 * Function Widget_RewardInfoOnly.Widget_RewardInfoOnly_C.GetIcon
	 */
	struct UWidget_RewardInfoOnly_C_GetIcon_Params
	{
	public:
		struct FSlateBrush                                         ReturnValue;                                             // 0x0000(0x00D0)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function Widget_RewardInfoOnly.Widget_RewardInfoOnly_C.IsValidRewardItem
	 */
	struct UWidget_RewardInfoOnly_C_IsValidRewardItem_Params
	{
	public:
		bool                                                       IsValid;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_RewardInfoOnly.Widget_RewardInfoOnly_C.Construct
	 */
	struct UWidget_RewardInfoOnly_C_Construct_Params
	{	};

	/**
	 * Function Widget_RewardInfoOnly.Widget_RewardInfoOnly_C.ExecuteUbergraph_Widget_RewardInfoOnly
	 */
	struct UWidget_RewardInfoOnly_C_ExecuteUbergraph_Widget_RewardInfoOnly_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_JS36[0xC];                                   // 0x0004(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
