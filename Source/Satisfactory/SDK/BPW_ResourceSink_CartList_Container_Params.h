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
	 * Function BPW_ResourceSink_CartList_Container.BPW_ResourceSink_CartList_Container_C.PlayCantAffordAnim
	 */
	struct UBPW_ResourceSink_CartList_Container_C_PlayCantAffordAnim_Params
	{	};

	/**
	 * Function BPW_ResourceSink_CartList_Container.BPW_ResourceSink_CartList_Container_C.ChangeItemAmount
	 */
	struct UBPW_ResourceSink_CartList_Container_C_ChangeItemAmount_Params
	{
	public:
		class UClass*                                              schematic;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    NewAmount;                                               // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_ResourceSink_CartList_Container.BPW_ResourceSink_CartList_Container_C.SetTotalCostText
	 */
	struct UBPW_ResourceSink_CartList_Container_C_SetTotalCostText_Params
	{
	public:
		class FText                                                mTotalCostText;                                          // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BPW_ResourceSink_CartList_Container.BPW_ResourceSink_CartList_Container_C.SetBuyButtonVisibility
	 */
	struct UBPW_ResourceSink_CartList_Container_C_SetBuyButtonVisibility_Params
	{
	public:
		TArray<struct FResourceSinkShop_CartItem_Struct>           mCartItemStruct;                                         // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BPW_ResourceSink_CartList_Container.BPW_ResourceSink_CartList_Container_C.UpdateCartList
	 */
	struct UBPW_ResourceSink_CartList_Container_C_UpdateCartList_Params
	{
	public:
		TArray<struct FResourceSinkShop_CartItem_Struct>           mCartItemStruct;                                         // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BPW_ResourceSink_CartList_Container.BPW_ResourceSink_CartList_Container_C.Construct
	 */
	struct UBPW_ResourceSink_CartList_Container_C_Construct_Params
	{	};

	/**
	 * Function BPW_ResourceSink_CartList_Container.BPW_ResourceSink_CartList_Container_C.BndEvt__mCartList_K2Node_ComponentBoundEvent_0_OnItemRemovedFromCart__DelegateSignature
	 */
	struct UBPW_ResourceSink_CartList_Container_C_BndEvt__mCartList_K2Node_ComponentBoundEvent_0_OnItemRemovedFromCart__DelegateSignature_Params
	{
	public:
		class UClass*                                              mSchematic;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_ResourceSink_CartList_Container.BPW_ResourceSink_CartList_Container_C.BndEvt__mBuyAllButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
	 */
	struct UBPW_ResourceSink_CartList_Container_C_BndEvt__mBuyAllButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_ResourceSink_CartList_Container.BPW_ResourceSink_CartList_Container_C.BndEvt__mCartList_K2Node_ComponentBoundEvent_2_OnItemAmountChanged__DelegateSignature
	 */
	struct UBPW_ResourceSink_CartList_Container_C_BndEvt__mCartList_K2Node_ComponentBoundEvent_2_OnItemAmountChanged__DelegateSignature_Params
	{
	public:
		class UClass*                                              schematic;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    NewAmount;                                               // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_ResourceSink_CartList_Container.BPW_ResourceSink_CartList_Container_C.BndEvt__BPW_ResourceSink_CartList_Container_mCartList_K2Node_ComponentBoundEvent_3_OnFavouriteChangedInCart__DelegateSignature
	 */
	struct UBPW_ResourceSink_CartList_Container_C_BndEvt__BPW_ResourceSink_CartList_Container_mCartList_K2Node_ComponentBoundEvent_3_OnFavouriteChangedInCart__DelegateSignature_Params
	{
	public:
		class UClass*                                              mSchematic;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_ResourceSink_CartList_Container.BPW_ResourceSink_CartList_Container_C.ExecuteUbergraph_BPW_ResourceSink_CartList_Container
	 */
	struct UBPW_ResourceSink_CartList_Container_C_ExecuteUbergraph_BPW_ResourceSink_CartList_Container_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_6P17[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPW_ResourceSink_CartList_Container.BPW_ResourceSink_CartList_Container_C.OnFavouriteChanged__DelegateSignature
	 */
	struct UBPW_ResourceSink_CartList_Container_C_OnFavouriteChanged__DelegateSignature_Params
	{
	public:
		class UClass*                                              mSchematic;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_ResourceSink_CartList_Container.BPW_ResourceSink_CartList_Container_C.OnItemAmountChangedInCart__DelegateSignature
	 */
	struct UBPW_ResourceSink_CartList_Container_C_OnItemAmountChangedInCart__DelegateSignature_Params
	{
	public:
		class UClass*                                              schematic;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Amount;                                                  // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_ResourceSink_CartList_Container.BPW_ResourceSink_CartList_Container_C.OnBuyAllButtonClicked__DelegateSignature
	 */
	struct UBPW_ResourceSink_CartList_Container_C_OnBuyAllButtonClicked__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_ResourceSink_CartList_Container.BPW_ResourceSink_CartList_Container_C.OnItemRemovedFromCart__DelegateSignature
	 */
	struct UBPW_ResourceSink_CartList_Container_C_OnItemRemovedFromCart__DelegateSignature_Params
	{
	public:
		class UClass*                                              mSchematic;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
