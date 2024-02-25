/**
 * Name: Satisfactory
 * Version: Early_Access_CL#273254
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_ShoppingList_IngredientObject_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_ShoppingList_IngredientObject_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_ShoppingList_IngredientObject.BP_ShoppingList_IngredientObject_C");
		return ptr;
	}

}


