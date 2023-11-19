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
	 * Function BP_UnlockScannableObject.BP_UnlockScannableObject_C.GetStingerWidgetRewardData
	 */
	struct UBP_UnlockScannableObject_C_GetStingerWidgetRewardData_Params
	{	};

	/**
	 * Function BP_UnlockScannableObject.BP_UnlockScannableObject_C.GetUnlockRewardWidgets
	 */
	struct UBP_UnlockScannableObject_C_GetUnlockRewardWidgets_Params
	{
	public:
		class APlayerController*                                   OwningPlayer;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		class UClass*                                              SchematicClass;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		class UUserWidget*                                         TradingPostWidget;                                       // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
		TArray<class UUserWidget*>                                 Widgets;                                                 // 0x0018(0x0010)  (Parm, OutParm, ContainsInstancedReference)
	};

	/**
	 * Function BP_UnlockScannableObject.BP_UnlockScannableObject_C.GetUnlockDataStruct
	 */
	struct UBP_UnlockScannableObject_C_GetUnlockDataStruct_Params
	{
	public:
		TArray<struct FFUnlockDataStruct>                          UnlockDataStruct;                                        // 0x0000(0x0010)  (Parm, OutParm, ContainsInstancedReference)
	};

	/**
	 * Function BP_UnlockScannableObject.BP_UnlockScannableObject_C.GetCost
	 */
	struct UBP_UnlockScannableObject_C_GetCost_Params
	{
	public:
		int32_t                                                    UnlockStructIndex;                                       // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_YGA9[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FItemAmount>                                 cost;                                                    // 0x0008(0x0010)  (Parm, OutParm)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
