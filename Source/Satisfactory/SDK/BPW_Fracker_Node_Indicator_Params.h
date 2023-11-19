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
	 * Function BPW_Fracker_Node_Indicator.BPW_Fracker_Node_Indicator_C.SetIsBig
	 */
	struct UBPW_Fracker_Node_Indicator_C_SetIsBig_Params
	{
	public:
		bool                                                       mIsBig;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_Fracker_Node_Indicator.BPW_Fracker_Node_Indicator_C.SetNodeVisibility
	 */
	struct UBPW_Fracker_Node_Indicator_C_SetNodeVisibility_Params
	{
	public:
		bool                                                       IsOccupied;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_Fracker_Node_Indicator.BPW_Fracker_Node_Indicator_C.PreConstruct
	 */
	struct UBPW_Fracker_Node_Indicator_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_Fracker_Node_Indicator.BPW_Fracker_Node_Indicator_C.ExecuteUbergraph_BPW_Fracker_Node_Indicator
	 */
	struct UBPW_Fracker_Node_Indicator_C_ExecuteUbergraph_BPW_Fracker_Node_Indicator_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
