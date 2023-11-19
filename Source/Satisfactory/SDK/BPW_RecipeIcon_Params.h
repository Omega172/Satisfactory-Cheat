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
	 * Function BPW_RecipeIcon.BPW_RecipeIcon_C.UpdateRecipeIcon
	 */
	struct UBPW_RecipeIcon_C_UpdateRecipeIcon_Params
	{
	public:
		TArray<struct FItemAmount>                                 mProducts;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BPW_RecipeIcon.BPW_RecipeIcon_C.PositionIcons
	 */
	struct UBPW_RecipeIcon_C_PositionIcons_Params
	{	};

	/**
	 * Function BPW_RecipeIcon.BPW_RecipeIcon_C.PreConstruct
	 */
	struct UBPW_RecipeIcon_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_RecipeIcon.BPW_RecipeIcon_C.ExecuteUbergraph_BPW_RecipeIcon
	 */
	struct UBPW_RecipeIcon_C_ExecuteUbergraph_BPW_RecipeIcon_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
