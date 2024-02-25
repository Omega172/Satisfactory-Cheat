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
	 * Function BPW_Tooltip_Expanded_IO.BPW_Tooltip_Expanded_IO_C.SetCycleRate
	 */
	struct UBPW_Tooltip_Expanded_IO_C_SetCycleRate_Params
	{
	public:
		double                                                     mCycleRate;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_Tooltip_Expanded_IO.BPW_Tooltip_Expanded_IO_C.SetItemAmount
	 */
	struct UBPW_Tooltip_Expanded_IO_C_SetItemAmount_Params
	{
	public:
		struct FItemAmount                                         mItemAmount;                                             // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		double                                                     mCycleRate;                                              // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_Tooltip_Expanded_IO.BPW_Tooltip_Expanded_IO_C.PreConstruct
	 */
	struct UBPW_Tooltip_Expanded_IO_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_Tooltip_Expanded_IO.BPW_Tooltip_Expanded_IO_C.ExecuteUbergraph_BPW_Tooltip_Expanded_IO
	 */
	struct UBPW_Tooltip_Expanded_IO_C_ExecuteUbergraph_BPW_Tooltip_Expanded_IO_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
