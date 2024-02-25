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
	// # Structs
	// --------------------------------------------------
	/**
	 * Function BPW_ShoppingList_ProductItem_Entry.BPW_ShoppingList_ProductItem_Entry_C.SetAmount
	 */
	struct UBPW_ShoppingList_ProductItem_Entry_C_SetAmount_Params
	{
	public:
		int32_t                                                    mAmount;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_CKDM[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPW_ShoppingList_ProductItem_Entry.BPW_ShoppingList_ProductItem_Entry_C.SetName
	 */
	struct UBPW_ShoppingList_ProductItem_Entry_C_SetName_Params
	{
	public:
		class FText                                                mName;                                                   // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BPW_ShoppingList_ProductItem_Entry.BPW_ShoppingList_ProductItem_Entry_C.BndEvt__BPW_ShoppingList_ProductItem_Entry_mAmountText_K2Node_ComponentBoundEvent_0_OnEditableTextCommittedEvent__DelegateSignature
	 */
	struct UBPW_ShoppingList_ProductItem_Entry_C_BndEvt__BPW_ShoppingList_ProductItem_Entry_mAmountText_K2Node_ComponentBoundEvent_0_OnEditableTextCommittedEvent__DelegateSignature_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		ETextCommit                                                CommitMethod;                                            // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_ShoppingList_ProductItem_Entry.BPW_ShoppingList_ProductItem_Entry_C.Destruct
	 */
	struct UBPW_ShoppingList_ProductItem_Entry_C_Destruct_Params
	{	};

	/**
	 * Function BPW_ShoppingList_ProductItem_Entry.BPW_ShoppingList_ProductItem_Entry_C.ExecuteUbergraph_BPW_ShoppingList_ProductItem_Entry
	 */
	struct UBPW_ShoppingList_ProductItem_Entry_C_ExecuteUbergraph_BPW_ShoppingList_ProductItem_Entry_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_45LB[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPW_ShoppingList_ProductItem_Entry.BPW_ShoppingList_ProductItem_Entry_C.OnAmountChanged__DelegateSignature
	 */
	struct UBPW_ShoppingList_ProductItem_Entry_C_OnAmountChanged__DelegateSignature_Params
	{
	public:
		class UBPW_ShoppingList_ProductItem_Entry_C*               Instigator;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    NewAmount;                                               // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
