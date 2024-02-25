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
	// # Classes
	// --------------------------------------------------
	/**
	 * BlueprintGeneratedClass BPI_ShoppingList.BPI_ShoppingList_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UBPI_ShoppingList_C : public UInterface
	{
	public:
		void ClearShoppingData(bool* Succes);
		void SetNumInShoppingList(class UClass* recipe, int32_t Amount, bool* Success);
		void RemoveFromShoppingList(class UClass* recipe, int32_t Amount, bool* Success);
		void AddToShoppingList(class UClass* recipe, int32_t Amount, bool* Success);
		void GetShippingListData(TArray<struct FRecipeAmountStruct>* ShippingList);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
