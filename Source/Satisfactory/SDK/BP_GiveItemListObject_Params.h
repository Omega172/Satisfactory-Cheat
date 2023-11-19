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
	 * Function BP_GiveItemListObject.BP_GiveItemListObject_C.SetVisibility
	 */
	struct UBP_GiveItemListObject_C_SetVisibility_Params
	{
	public:
		bool                                                       IsVisible;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_GiveItemListObject.BP_GiveItemListObject_C.GiveItems
	 */
	struct UBP_GiveItemListObject_C_GiveItems_Params
	{
	public:
		int32_t                                                    ItemAmount;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_WOR7[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_GiveItemListObject.BP_GiveItemListObject_C.OnVisibilityChanged__DelegateSignature
	 */
	struct UBP_GiveItemListObject_C_OnVisibilityChanged__DelegateSignature_Params
	{
	public:
		bool                                                       IsVisible;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_GiveItemListObject.BP_GiveItemListObject_C.OnGiveItemsClicked__DelegateSignature
	 */
	struct UBP_GiveItemListObject_C_OnGiveItemsClicked__DelegateSignature_Params
	{
	public:
		struct FItemAmount                                         Item;                                                    // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
