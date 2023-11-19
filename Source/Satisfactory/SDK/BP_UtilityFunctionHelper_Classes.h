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
	// # Classes
	// --------------------------------------------------
	/**
	 * BlueprintGeneratedClass BP_UtilityFunctionHelper.BP_UtilityFunctionHelper_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UBP_UtilityFunctionHelper_C : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_SortCategoryRecipeStruct(TArray<struct FItemCategoryRecipeStruct>* ArrayToSort, class UObject* __WorldContext, TArray<struct FItemCategoryRecipeStruct>* SortedArray);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
