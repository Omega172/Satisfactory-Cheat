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
	 * BlueprintGeneratedClass BP_ShoppingList_IngredientObject.BP_ShoppingList_IngredientObject_C
	 * Size -> 0x0011 (FullSize[0x0039] - InheritedSize[0x0028])
	 */
	class UBP_ShoppingList_IngredientObject_C : public UObject
	{
	public:
		struct FItemAmount                                         mAmount;                                                 // 0x0028(0x0010) Edit, BlueprintVisible, NoDestructor, ExposeOnSpawn
		bool                                                       mIsTodoListOpen;                                         // 0x0038(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
