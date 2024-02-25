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
	 * Function BPW_TooltipRecipe_Expanded.BPW_TooltipRecipe_Expanded_C.SetOverclock
	 */
	struct UBPW_TooltipRecipe_Expanded_C_SetOverclock_Params
	{
	public:
		double                                                     mOverclock;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_TooltipRecipe_Expanded.BPW_TooltipRecipe_Expanded_C.AddDivider
	 */
	struct UBPW_TooltipRecipe_Expanded_C_AddDivider_Params
	{
	public:
		class UVerticalBox*                                        Container;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_TooltipRecipe_Expanded.BPW_TooltipRecipe_Expanded_C.SetRecipe
	 */
	struct UBPW_TooltipRecipe_Expanded_C_SetRecipe_Params
	{
	public:
		class UClass*                                              newRecipe;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_TooltipRecipe_Expanded.BPW_TooltipRecipe_Expanded_C.PreConstruct
	 */
	struct UBPW_TooltipRecipe_Expanded_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_TooltipRecipe_Expanded.BPW_TooltipRecipe_Expanded_C.ExecuteUbergraph_BPW_TooltipRecipe_Expanded
	 */
	struct UBPW_TooltipRecipe_Expanded_C_ExecuteUbergraph_BPW_TooltipRecipe_Expanded_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
