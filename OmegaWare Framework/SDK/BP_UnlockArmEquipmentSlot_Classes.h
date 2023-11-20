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
	 * BlueprintGeneratedClass BP_UnlockArmEquipmentSlot.BP_UnlockArmEquipmentSlot_C
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UBP_UnlockArmEquipmentSlot_C : public UFGUnlockArmEquipmentSlot
	{
	public:
		void GetCost(int32_t UnlockStructIndex, TArray<struct FItemAmount>* cost);
		void GetUnlockDataStruct(TArray<struct FFUnlockDataStruct>* UnlockDataStruct);
		void GetStingerWidgetRewardData();
		void GetUnlockRewardWidgets(class APlayerController* OwningPlayer, class UClass* SchematicClass, class UUserWidget* TradingPostWidget, TArray<class UUserWidget*>* Widgets);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
