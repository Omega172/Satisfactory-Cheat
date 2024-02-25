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
	 * Function BPW_InventorySlotSetting.BPW_InventorySlotSetting_C.SetupSettingsForSlot
	 */
	struct UBPW_InventorySlotSetting_C_SetupSettingsForSlot_Params
	{
	public:
		class UFGInventoryComponent*                               mInventoryComponent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    mSlotIndex;                                              // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_IZP8[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UClass*                                              mItemDescriptor;                                         // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_InventorySlotSetting.BPW_InventorySlotSetting_C.CloseMenuAnchor
	 */
	struct UBPW_InventorySlotSetting_C_CloseMenuAnchor_Params
	{	};

	/**
	 * Function BPW_InventorySlotSetting.BPW_InventorySlotSetting_C.OnGetUserMenuContent
	 */
	struct UBPW_InventorySlotSetting_C_OnGetUserMenuContent_Params
	{
	public:
		class UUserWidget*                                         ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_InventorySlotSetting.BPW_InventorySlotSetting_C.BndEvt__BPW_InventorySlotSetting_mButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UBPW_InventorySlotSetting_C_BndEvt__BPW_InventorySlotSetting_mButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_InventorySlotSetting.BPW_InventorySlotSetting_C.Construct
	 */
	struct UBPW_InventorySlotSetting_C_Construct_Params
	{	};

	/**
	 * Function BPW_InventorySlotSetting.BPW_InventorySlotSetting_C.ExecuteUbergraph_BPW_InventorySlotSetting
	 */
	struct UBPW_InventorySlotSetting_C_ExecuteUbergraph_BPW_InventorySlotSetting_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_YXTL[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
