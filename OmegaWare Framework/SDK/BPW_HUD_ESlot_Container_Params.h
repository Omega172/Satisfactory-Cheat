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
	 * Function BPW_HUD_ESlot_Container.BPW_HUD_ESlot_Container_C.OnEquipmentInventoryUpdated
	 */
	struct UBPW_HUD_ESlot_Container_C_OnEquipmentInventoryUpdated_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_HUD_ESlot_Container.BPW_HUD_ESlot_Container_C.SetActiveSlotVisuals
	 */
	struct UBPW_HUD_ESlot_Container_C_SetActiveSlotVisuals_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_RAW1[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPW_HUD_ESlot_Container.BPW_HUD_ESlot_Container_C.SetIcon
	 */
	struct UBPW_HUD_ESlot_Container_C_SetIcon_Params
	{
	public:
		class UTexture2D*                                          Texture;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_HUD_ESlot_Container.BPW_HUD_ESlot_Container_C.GetUseSmallContentFromOptions
	 */
	struct UBPW_HUD_ESlot_Container_C_GetUseSmallContentFromOptions_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_BGO9[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPW_HUD_ESlot_Container.BPW_HUD_ESlot_Container_C.GetUseSmallIconFromOptions
	 */
	struct UBPW_HUD_ESlot_Container_C_GetUseSmallIconFromOptions_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_4GHP[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPW_HUD_ESlot_Container.BPW_HUD_ESlot_Container_C.SetForceContentVisibility
	 */
	struct UBPW_HUD_ESlot_Container_C_SetForceContentVisibility_Params
	{
	public:
		bool                                                       mForceContentVisible;                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_HUD_ESlot_Container.BPW_HUD_ESlot_Container_C.UpdateActiveIndex
	 */
	struct UBPW_HUD_ESlot_Container_C_UpdateActiveIndex_Params
	{	};

	/**
	 * Function BPW_HUD_ESlot_Container.BPW_HUD_ESlot_Container_C.SetWarningVisibility
	 */
	struct UBPW_HUD_ESlot_Container_C_SetWarningVisibility_Params
	{
	public:
		bool                                                       IsVisible;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_HUD_ESlot_Container.BPW_HUD_ESlot_Container_C.SetContentVisibility
	 */
	struct UBPW_HUD_ESlot_Container_C_SetContentVisibility_Params
	{
	public:
		bool                                                       IsVisible;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_HUD_ESlot_Container.BPW_HUD_ESlot_Container_C.PreConstruct
	 */
	struct UBPW_HUD_ESlot_Container_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_HUD_ESlot_Container.BPW_HUD_ESlot_Container_C.Construct
	 */
	struct UBPW_HUD_ESlot_Container_C_Construct_Params
	{	};

	/**
	 * Function BPW_HUD_ESlot_Container.BPW_HUD_ESlot_Container_C.UpdateESlotData
	 */
	struct UBPW_HUD_ESlot_Container_C_UpdateESlotData_Params
	{	};

	/**
	 * Function BPW_HUD_ESlot_Container.BPW_HUD_ESlot_Container_C.StartShowContentTimer
	 */
	struct UBPW_HUD_ESlot_Container_C_StartShowContentTimer_Params
	{	};

	/**
	 * Function BPW_HUD_ESlot_Container.BPW_HUD_ESlot_Container_C.OnEquipmentChanged
	 */
	struct UBPW_HUD_ESlot_Container_C_OnEquipmentChanged_Params
	{
	public:
		EEquipmentSlot                                             Slot;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_HUD_ESlot_Container.BPW_HUD_ESlot_Container_C.UpdateSlotSize
	 */
	struct UBPW_HUD_ESlot_Container_C_UpdateSlotSize_Params
	{
	public:
		class FString                                              updatedCvar;                                             // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_HUD_ESlot_Container.BPW_HUD_ESlot_Container_C.UpdateContentSize
	 */
	struct UBPW_HUD_ESlot_Container_C_UpdateContentSize_Params
	{
	public:
		class FString                                              updatedCvar;                                             // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_HUD_ESlot_Container.BPW_HUD_ESlot_Container_C.StartShowContentTimerCustomTime
	 */
	struct UBPW_HUD_ESlot_Container_C_StartShowContentTimerCustomTime_Params
	{
	public:
		double                                                     Duration;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_HUD_ESlot_Container.BPW_HUD_ESlot_Container_C.OnMoreArmslotsUnlocked
	 */
	struct UBPW_HUD_ESlot_Container_C_OnMoreArmslotsUnlocked_Params
	{
	public:
		int32_t                                                    newUnlockedSlots;                                        // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_HUD_ESlot_Container.BPW_HUD_ESlot_Container_C.ExecuteUbergraph_BPW_HUD_ESlot_Container
	 */
	struct UBPW_HUD_ESlot_Container_C_ExecuteUbergraph_BPW_HUD_ESlot_Container_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
