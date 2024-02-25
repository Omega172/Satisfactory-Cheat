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
	 * BlueprintGeneratedClass BP_UnlockScannableObject.BP_UnlockScannableObject_C
	 * Size -> 0x0000 (FullSize[0x0038] - InheritedSize[0x0038])
	 */
	class UBP_UnlockScannableObject_C : public UFGUnlockScannableObject
	{
	public:
		void GetStingerWidgetRewardData();
		void GetUnlockRewardWidgets(class APlayerController* OwningPlayer, class UClass* SchematicClass, class UUserWidget* TradingPostWidget, TArray<class UUserWidget*>* Widgets);
		void GetUnlockDataStruct(TArray<struct FFUnlockDataStruct>* UnlockDataStruct);
		void GetCost(int32_t UnlockStructIndex, TArray<struct FItemAmount>* cost);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
