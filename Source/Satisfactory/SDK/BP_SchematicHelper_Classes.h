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
	 * BlueprintGeneratedClass BP_SchematicHelper.BP_SchematicHelper_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UBP_SchematicHelper_C : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_DoSchematicHasUnlocks(class UClass* schematic, class UObject* __WorldContext, bool* HasUnlocks);
		void STATIC_GetNumArmEquipmentSlotsUnlocked(class UClass* schematic, class UObject* __WorldContext, int32_t* numSlots);
		void STATIC_GetNumInventorySlotsUnlocked(class UClass* schematic, class UObject* __WorldContext, int32_t* numSlots);
		void STATIC_GetUnlocksHandSlots(class UClass* schematic, class UObject* __WorldContext, bool* Result);
		void STATIC_GetUnlocksInventorySlot(class UClass* schematic, class UObject* __WorldContext, bool* Result);
		void STATIC_GetRecipesFromSchematic(class UClass* schematic, class UObject* __WorldContext, TArray<class UClass*>* Recipes);
		void STATIC_GetUnlockDataStructFromSchematic(class UClass* schematic, class UObject* __WorldContext, TArray<struct FFUnlockDataStruct>* UnlockDataStruct);
		void STATIC_IsSchematicLockedInAnyWay(class UObject* WolrdContext, class UClass* schematic, class UObject* __WorldContext, bool* IsLocked);
		void STATIC_IsSchematicLockedByTutorial(class UObject* WorldContext, class UClass* SchematicClass, class UObject* __WorldContext, bool* IsSchematicLockedByTutorial);
		void STATIC_IsSchematicDependentLocked(class UObject* WorldContext, class UClass* SchematicClass, class UObject* __WorldContext, bool* IsSchematicDependentLocked);
		void STATIC_IsSchematicPartOfTutorial(class UClass* SchematicClass, class UObject* __WorldContext, bool* IsSchematicPartOfTutortial);
		void STATIC_IsSchematicPhaseLocked(class UObject* WorldContext, class UClass* SchematicClass, class UObject* __WorldContext, bool* IsSchematicPhaseLocked);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
