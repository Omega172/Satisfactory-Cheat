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
	 * Function BPW_Tooltip_StatBarInfo.BPW_Tooltip_StatBarInfo_C.SetStatBarData
	 */
	struct UBPW_Tooltip_StatBarInfo_C_SetStatBarData_Params
	{
	public:
		struct FDescriptorStatBar                                  mStatBarData;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPW_Tooltip_StatBarInfo.BPW_Tooltip_StatBarInfo_C.PreConstruct
	 */
	struct UBPW_Tooltip_StatBarInfo_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_Tooltip_StatBarInfo.BPW_Tooltip_StatBarInfo_C.ExecuteUbergraph_BPW_Tooltip_StatBarInfo
	 */
	struct UBPW_Tooltip_StatBarInfo_C_ExecuteUbergraph_BPW_Tooltip_StatBarInfo_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
