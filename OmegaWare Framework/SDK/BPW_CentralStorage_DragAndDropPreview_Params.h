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
	 * Function BPW_CentralStorage_DragAndDropPreview.BPW_CentralStorage_DragAndDropPreview_C.GetItemDescriptor
	 */
	struct UBPW_CentralStorage_DragAndDropPreview_C_GetItemDescriptor_Params
	{
	public:
		class UClass*                                              itemDescriptor;                                          // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_CentralStorage_DragAndDropPreview.BPW_CentralStorage_DragAndDropPreview_C.GetDragAndDropType
	 */
	struct UBPW_CentralStorage_DragAndDropPreview_C_GetDragAndDropType_Params
	{
	public:
		EInventorySlot_DragAndDropTypes                            Type;                                                    // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_CentralStorage_DragAndDropPreview.BPW_CentralStorage_DragAndDropPreview_C.WasDropped
	 */
	struct UBPW_CentralStorage_DragAndDropPreview_C_WasDropped_Params
	{
	public:
		int32_t                                                    AmountMoved;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_JTCL[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UFGInventoryComponent*                               TargetInventory;                                         // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    TargetIdx;                                               // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_CentralStorage_DragAndDropPreview.BPW_CentralStorage_DragAndDropPreview_C.Construct
	 */
	struct UBPW_CentralStorage_DragAndDropPreview_C_Construct_Params
	{	};

	/**
	 * Function BPW_CentralStorage_DragAndDropPreview.BPW_CentralStorage_DragAndDropPreview_C.CentralStorageSlotWasDropped
	 */
	struct UBPW_CentralStorage_DragAndDropPreview_C_CentralStorageSlotWasDropped_Params
	{
	public:
		class UFGInventoryComponent*                               TargetInventory;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    TargetIdx;                                               // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_CentralStorage_DragAndDropPreview.BPW_CentralStorage_DragAndDropPreview_C.ExecuteUbergraph_BPW_CentralStorage_DragAndDropPreview
	 */
	struct UBPW_CentralStorage_DragAndDropPreview_C_ExecuteUbergraph_BPW_CentralStorage_DragAndDropPreview_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_EDPN[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPW_CentralStorage_DragAndDropPreview.BPW_CentralStorage_DragAndDropPreview_C.OnWasDropped__DelegateSignature
	 */
	struct UBPW_CentralStorage_DragAndDropPreview_C_OnWasDropped__DelegateSignature_Params
	{
	public:
		int32_t                                                    AmountMoved;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_VOS4[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UFGInventoryComponent*                               TargetInventory;                                         // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    TargetIdx;                                               // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
