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
	 * Function BPW_ResourceSinkShop_CartList.BPW_ResourceSinkShop_CartList_C.OnFavouriteChanged
	 */
	struct UBPW_ResourceSinkShop_CartList_C_OnFavouriteChanged_Params
	{
	public:
		class UClass*                                              mSchematic;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_ResourceSinkShop_CartList.BPW_ResourceSinkShop_CartList_C.ChangeItemAmount
	 */
	struct UBPW_ResourceSinkShop_CartList_C_ChangeItemAmount_Params
	{
	public:
		class UClass*                                              schematic;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    NewAmount;                                               // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_ResourceSinkShop_CartList.BPW_ResourceSinkShop_CartList_C.RemoveItemFromCart
	 */
	struct UBPW_ResourceSinkShop_CartList_C_RemoveItemFromCart_Params
	{
	public:
		class UClass*                                              mSchematic;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_ResourceSinkShop_CartList.BPW_ResourceSinkShop_CartList_C.GenerateCartList
	 */
	struct UBPW_ResourceSinkShop_CartList_C_GenerateCartList_Params
	{
	public:
		TArray<struct FResourceSinkShop_CartItem_Struct>           mCartItemStruct;                                         // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BPW_ResourceSinkShop_CartList.BPW_ResourceSinkShop_CartList_C.Construct
	 */
	struct UBPW_ResourceSinkShop_CartList_C_Construct_Params
	{	};

	/**
	 * Function BPW_ResourceSinkShop_CartList.BPW_ResourceSinkShop_CartList_C.Destruct
	 */
	struct UBPW_ResourceSinkShop_CartList_C_Destruct_Params
	{	};

	/**
	 * Function BPW_ResourceSinkShop_CartList.BPW_ResourceSinkShop_CartList_C.ExecuteUbergraph_BPW_ResourceSinkShop_CartList
	 */
	struct UBPW_ResourceSinkShop_CartList_C_ExecuteUbergraph_BPW_ResourceSinkShop_CartList_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_ResourceSinkShop_CartList.BPW_ResourceSinkShop_CartList_C.OnFavouriteChangedInCart__DelegateSignature
	 */
	struct UBPW_ResourceSinkShop_CartList_C_OnFavouriteChangedInCart__DelegateSignature_Params
	{
	public:
		class UClass*                                              mSchematic;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_ResourceSinkShop_CartList.BPW_ResourceSinkShop_CartList_C.OnItemAmountChanged__DelegateSignature
	 */
	struct UBPW_ResourceSinkShop_CartList_C_OnItemAmountChanged__DelegateSignature_Params
	{
	public:
		class UClass*                                              schematic;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    NewAmount;                                               // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_ResourceSinkShop_CartList.BPW_ResourceSinkShop_CartList_C.OnItemRemovedFromCart__DelegateSignature
	 */
	struct UBPW_ResourceSinkShop_CartList_C_OnItemRemovedFromCart__DelegateSignature_Params
	{
	public:
		class UClass*                                              mSchematic;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
