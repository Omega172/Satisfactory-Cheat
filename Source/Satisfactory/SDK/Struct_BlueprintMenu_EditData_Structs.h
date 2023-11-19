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
	 * UserDefinedStruct Struct_BlueprintMenu_EditData.Struct_BlueprintMenu_EditData
	 * Size -> 0x0050
	 */
	struct FStruct_BlueprintMenu_EditData
	{
	public:
		TMap<class UFGBlueprintSubCategory*, struct FStruct_BlueprintMenu_Descriptors> SubCategories_8_C9B8D92C4CB8AC89097FFBBCEC2E6CAE;        // 0x0000(0x0050) Edit, BlueprintVisible, ContainsInstancedReference
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
