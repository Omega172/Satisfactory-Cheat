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
	 * BlueprintGeneratedClass BPI_UnlockableInterface.BPI_UnlockableInterface_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UBPI_UnlockableInterface_C : public UInterface
	{
	public:
		void GetCost(int32_t UnlockStructIndex, TArray<struct FItemAmount>* cost);
		void GetUnlockDataStruct(TArray<struct FFUnlockDataStruct>* UnlockDataStruct);
		void GetUnlockRewardWidgets(class APlayerController* OwningPlayer, class UClass* SchematicClass, class UUserWidget* TradingPostWidget, TArray<class UUserWidget*>* Widgets);
		void GetStingerWidgetRewardData();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
