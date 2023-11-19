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
	 * Function Widget_RewardProduct.Widget_RewardProduct_C.GetFirstProductItemClass
	 */
	struct UWidget_RewardProduct_C_GetFirstProductItemClass_Params
	{
	public:
		class UClass*                                              ItemClass;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_RewardProduct.Widget_RewardProduct_C.IsValidRewardItem
	 */
	struct UWidget_RewardProduct_C_IsValidRewardItem_Params
	{
	public:
		bool                                                       IsValid;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_RewardProduct.Widget_RewardProduct_C.GetName
	 */
	struct UWidget_RewardProduct_C_GetName_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function Widget_RewardProduct.Widget_RewardProduct_C.GetIcon
	 */
	struct UWidget_RewardProduct_C_GetIcon_Params
	{
	public:
		struct FSlateBrush                                         ReturnValue;                                             // 0x0000(0x00D0)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function Widget_RewardProduct.Widget_RewardProduct_C.Construct
	 */
	struct UWidget_RewardProduct_C_Construct_Params
	{	};

	/**
	 * Function Widget_RewardProduct.Widget_RewardProduct_C.ExecuteUbergraph_Widget_RewardProduct
	 */
	struct UWidget_RewardProduct_C_ExecuteUbergraph_Widget_RewardProduct_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_KLAK[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
