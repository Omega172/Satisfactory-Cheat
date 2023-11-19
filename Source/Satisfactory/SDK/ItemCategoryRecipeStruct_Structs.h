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
	 * UserDefinedStruct ItemCategoryRecipeStruct.ItemCategoryRecipeStruct
	 * Size -> 0x0018
	 */
	struct FItemCategoryRecipeStruct
	{
	public:
		class UClass*                                              Category_5_48CE2A3C41089DC1E5DE39909CF17792;             // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash
		TArray<class UClass*>                                      Recipes_6_5C2C7BF54D78A483A81B2785C2CF7736;              // 0x0008(0x0010) Edit, BlueprintVisible
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
