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
	 * Function BP_UtilityFunctionHelper.BP_UtilityFunctionHelper_C.SortCategoryRecipeStruct
	 */
	struct UBP_UtilityFunctionHelper_C_SortCategoryRecipeStruct_Params
	{
	public:
		TArray<struct FItemCategoryRecipeStruct>                   ArrayToSort;                                             // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		class UObject*                                             __WorldContext;                                          // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		TArray<struct FItemCategoryRecipeStruct>                   SortedArray;                                             // 0x0018(0x0010)  (Parm, OutParm)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
