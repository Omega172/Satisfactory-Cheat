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
	 * BlueprintGeneratedClass BP_UnlockGiveItem.BP_UnlockGiveItem_C
	 * Size -> 0x0000 (FullSize[0x0038] - InheritedSize[0x0038])
	 */
	class UBP_UnlockGiveItem_C : public UFGUnlockGiveItem
	{
	public:
		void GetCost(int32_t UnlockStructIndex, TArray<struct FItemAmount>* cost);
		void GetStingerWidgetRewardData();
		void GetUnlockRewardWidgets(class APlayerController* OwningPlayer, class UClass* SchematicClass, class UUserWidget* TradingPostWidget, TArray<class UUserWidget*>* Widgets);
		void GetUnlockDataStruct(TArray<struct FFUnlockDataStruct>* UnlockDataStruct);
		bool IsRepeatPurchasesAllowed();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
