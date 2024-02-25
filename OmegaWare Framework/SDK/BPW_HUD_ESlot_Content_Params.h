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
	 * Function BPW_HUD_ESlot_Content.BPW_HUD_ESlot_Content_C.SetEquipmentObject
	 */
	struct UBPW_HUD_ESlot_Content_C_SetEquipmentObject_Params
	{
	public:
		class AFGEquipment*                                        mEquipmentObject;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_HUD_ESlot_Content.BPW_HUD_ESlot_Content_C.GetUseSmallSlotFromOptions
	 */
	struct UBPW_HUD_ESlot_Content_C_GetUseSmallSlotFromOptions_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_6GE3[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPW_HUD_ESlot_Content.BPW_HUD_ESlot_Content_C.UpdateESlotData
	 */
	struct UBPW_HUD_ESlot_Content_C_UpdateESlotData_Params
	{	};

	/**
	 * Function BPW_HUD_ESlot_Content.BPW_HUD_ESlot_Content_C.Construct
	 */
	struct UBPW_HUD_ESlot_Content_C_Construct_Params
	{	};

	/**
	 * Function BPW_HUD_ESlot_Content.BPW_HUD_ESlot_Content_C.Destruct
	 */
	struct UBPW_HUD_ESlot_Content_C_Destruct_Params
	{	};

	/**
	 * Function BPW_HUD_ESlot_Content.BPW_HUD_ESlot_Content_C.UpdateSlotSize
	 */
	struct UBPW_HUD_ESlot_Content_C_UpdateSlotSize_Params
	{
	public:
		class FString                                              updatedCvar;                                             // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_HUD_ESlot_Content.BPW_HUD_ESlot_Content_C.OnSlotSizeChanged
	 */
	struct UBPW_HUD_ESlot_Content_C_OnSlotSizeChanged_Params
	{
	public:
		bool                                                       IsSmall;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_HUD_ESlot_Content.BPW_HUD_ESlot_Content_C.SetOnShowContentBuffer
	 */
	struct UBPW_HUD_ESlot_Content_C_SetOnShowContentBuffer_Params
	{	};

	/**
	 * Function BPW_HUD_ESlot_Content.BPW_HUD_ESlot_Content_C.SetOnSetWarningVisibilityBuffer
	 */
	struct UBPW_HUD_ESlot_Content_C_SetOnSetWarningVisibilityBuffer_Params
	{
	public:
		bool                                                       mIsVisible;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_HUD_ESlot_Content.BPW_HUD_ESlot_Content_C.ExecuteUbergraph_BPW_HUD_ESlot_Content
	 */
	struct UBPW_HUD_ESlot_Content_C_ExecuteUbergraph_BPW_HUD_ESlot_Content_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_HUD_ESlot_Content.BPW_HUD_ESlot_Content_C.OnSetWarningVisibility__DelegateSignature
	 */
	struct UBPW_HUD_ESlot_Content_C_OnSetWarningVisibility__DelegateSignature_Params
	{
	public:
		bool                                                       mIsVisible;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_HUD_ESlot_Content.BPW_HUD_ESlot_Content_C.OnShowContent__DelegateSignature
	 */
	struct UBPW_HUD_ESlot_Content_C_OnShowContent__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
