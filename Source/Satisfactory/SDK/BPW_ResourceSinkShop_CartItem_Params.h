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
	 * Function BPW_ResourceSinkShop_CartItem.BPW_ResourceSinkShop_CartItem_C.UpdateCartDetails
	 */
	struct UBPW_ResourceSinkShop_CartItem_C_UpdateCartDetails_Params
	{	};

	/**
	 * Function BPW_ResourceSinkShop_CartItem.BPW_ResourceSinkShop_CartItem_C.isAddedToFavourites
	 */
	struct UBPW_ResourceSinkShop_CartItem_C_isAddedToFavourites_Params
	{
	public:
		bool                                                       isAddedToFavourites;                                     // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_CTMG[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPW_ResourceSinkShop_CartItem.BPW_ResourceSinkShop_CartItem_C.UpdateFavButton
	 */
	struct UBPW_ResourceSinkShop_CartItem_C_UpdateFavButton_Params
	{
	public:
		bool                                                       IsAdded;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_UXLL[0xF];                                   // 0x0001(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPW_ResourceSinkShop_CartItem.BPW_ResourceSinkShop_CartItem_C.RemoveItemFromFavourites
	 */
	struct UBPW_ResourceSinkShop_CartItem_C_RemoveItemFromFavourites_Params
	{	};

	/**
	 * Function BPW_ResourceSinkShop_CartItem.BPW_ResourceSinkShop_CartItem_C.AddItemToFavourites
	 */
	struct UBPW_ResourceSinkShop_CartItem_C_AddItemToFavourites_Params
	{	};

	/**
	 * Function BPW_ResourceSinkShop_CartItem.BPW_ResourceSinkShop_CartItem_C.ChangeItemAmount
	 */
	struct UBPW_ResourceSinkShop_CartItem_C_ChangeItemAmount_Params
	{
	public:
		int32_t                                                    mNewAmount;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_ResourceSinkShop_CartItem.BPW_ResourceSinkShop_CartItem_C.UpdateCartItem
	 */
	struct UBPW_ResourceSinkShop_CartItem_C_UpdateCartItem_Params
	{
	public:
		struct FResourceSinkShop_CartItem_Struct                   mCartItem;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_ResourceSinkShop_CartItem.BPW_ResourceSinkShop_CartItem_C.BndEvt__mFavButton_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature
	 */
	struct UBPW_ResourceSinkShop_CartItem_C_BndEvt__mFavButton_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_ResourceSinkShop_CartItem.BPW_ResourceSinkShop_CartItem_C.BndEvt__mAddToCart_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature
	 */
	struct UBPW_ResourceSinkShop_CartItem_C_BndEvt__mAddToCart_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_ResourceSinkShop_CartItem.BPW_ResourceSinkShop_CartItem_C.BndEvt__mAddToCart_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature
	 */
	struct UBPW_ResourceSinkShop_CartItem_C_BndEvt__mAddToCart_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_ResourceSinkShop_CartItem.BPW_ResourceSinkShop_CartItem_C.BndEvt__mRemoveFromCart_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature
	 */
	struct UBPW_ResourceSinkShop_CartItem_C_BndEvt__mRemoveFromCart_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_ResourceSinkShop_CartItem.BPW_ResourceSinkShop_CartItem_C.BndEvt__mRemoveFromCart_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature
	 */
	struct UBPW_ResourceSinkShop_CartItem_C_BndEvt__mRemoveFromCart_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_ResourceSinkShop_CartItem.BPW_ResourceSinkShop_CartItem_C.BndEvt__BPW_ResourceSinkShop_CartItem_mInputNumberToAdd_K2Node_ComponentBoundEvent_9_OnEditableTextBoxChangedEvent__DelegateSignature
	 */
	struct UBPW_ResourceSinkShop_CartItem_C_BndEvt__BPW_ResourceSinkShop_CartItem_mInputNumberToAdd_K2Node_ComponentBoundEvent_9_OnEditableTextBoxChangedEvent__DelegateSignature_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BPW_ResourceSinkShop_CartItem.BPW_ResourceSinkShop_CartItem_C.BndEvt__mInputNumberToAdd_K2Node_ComponentBoundEvent_3_OnEditableTextBoxCommittedEvent__DelegateSignature
	 */
	struct UBPW_ResourceSinkShop_CartItem_C_BndEvt__mInputNumberToAdd_K2Node_ComponentBoundEvent_3_OnEditableTextBoxCommittedEvent__DelegateSignature_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		ETextCommit                                                CommitMethod;                                            // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_ResourceSinkShop_CartItem.BPW_ResourceSinkShop_CartItem_C.BndEvt__mAddToCart_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
	 */
	struct UBPW_ResourceSinkShop_CartItem_C_BndEvt__mAddToCart_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_ResourceSinkShop_CartItem.BPW_ResourceSinkShop_CartItem_C.BndEvt__mRemoveFromCart_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UBPW_ResourceSinkShop_CartItem_C_BndEvt__mRemoveFromCart_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_ResourceSinkShop_CartItem.BPW_ResourceSinkShop_CartItem_C.BndEvt__mTrashButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
	 */
	struct UBPW_ResourceSinkShop_CartItem_C_BndEvt__mTrashButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_ResourceSinkShop_CartItem.BPW_ResourceSinkShop_CartItem_C.Construct
	 */
	struct UBPW_ResourceSinkShop_CartItem_C_Construct_Params
	{	};

	/**
	 * Function BPW_ResourceSinkShop_CartItem.BPW_ResourceSinkShop_CartItem_C.ExecuteUbergraph_BPW_ResourceSinkShop_CartItem
	 */
	struct UBPW_ResourceSinkShop_CartItem_C_ExecuteUbergraph_BPW_ResourceSinkShop_CartItem_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_I7UJ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPW_ResourceSinkShop_CartItem.BPW_ResourceSinkShop_CartItem_C.OnCartFavoriteClicked__DelegateSignature
	 */
	struct UBPW_ResourceSinkShop_CartItem_C_OnCartFavoriteClicked__DelegateSignature_Params
	{
	public:
		class UClass*                                              mSchematic;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_ResourceSinkShop_CartItem.BPW_ResourceSinkShop_CartItem_C.OnItemAmountChanged__DelegateSignature
	 */
	struct UBPW_ResourceSinkShop_CartItem_C_OnItemAmountChanged__DelegateSignature_Params
	{
	public:
		class UClass*                                              mSchematic;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    mNewAmount;                                              // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_ResourceSinkShop_CartItem.BPW_ResourceSinkShop_CartItem_C.OnRemoveButtonClicked__DelegateSignature
	 */
	struct UBPW_ResourceSinkShop_CartItem_C_OnRemoveButtonClicked__DelegateSignature_Params
	{
	public:
		class UClass*                                              mSchematic;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
