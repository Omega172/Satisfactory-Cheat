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
	 * Function Widget_CostSlotWrapper.Widget_CostSlotWrapper_C.LerpCostAmounts
	 */
	struct UWidget_CostSlotWrapper_C_LerpCostAmounts_Params
	{
	public:
		int32_t                                                    cost;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    LastValue;                                               // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    CurrentValue;                                            // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_NR3R[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		double                                                     Alpha;                                                   // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                                     ReturnValue;                                             // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_CostSlotWrapper.Widget_CostSlotWrapper_C.SetCurrentNumInSlots
	 */
	struct UWidget_CostSlotWrapper_C_SetCurrentNumInSlots_Params
	{
	public:
		int32_t                                                    mCurrentNumInSlot;                                       // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_CostSlotWrapper.Widget_CostSlotWrapper_C.UpdateLerpAlpha
	 */
	struct UWidget_CostSlotWrapper_C_UpdateLerpAlpha_Params
	{	};

	/**
	 * Function Widget_CostSlotWrapper.Widget_CostSlotWrapper_C.SetSlotColor
	 */
	struct UWidget_CostSlotWrapper_C_SetSlotColor_Params
	{	};

	/**
	 * Function Widget_CostSlotWrapper.Widget_CostSlotWrapper_C.SetProgressBarPercent
	 */
	struct UWidget_CostSlotWrapper_C_SetProgressBarPercent_Params
	{	};

	/**
	 * Function Widget_CostSlotWrapper.Widget_CostSlotWrapper_C.Update Progress
	 */
	struct UWidget_CostSlotWrapper_C_UpdateProgress_Params
	{	};

	/**
	 * Function Widget_CostSlotWrapper.Widget_CostSlotWrapper_C.FormatNumbers
	 */
	struct UWidget_CostSlotWrapper_C_FormatNumbers_Params
	{
	public:
		int32_t                                                    NumItems;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_ZISK[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FText                                                OutText;                                                 // 0x0008(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function Widget_CostSlotWrapper.Widget_CostSlotWrapper_C.SetIconBrush
	 */
	struct UWidget_CostSlotWrapper_C_SetIconBrush_Params
	{
	public:
		class UTexture*                                            IconTexture;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_CostSlotWrapper.Widget_CostSlotWrapper_C.GetProgressbarPercent
	 */
	struct UWidget_CostSlotWrapper_C_GetProgressbarPercent_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_RT14[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Widget_CostSlotWrapper.Widget_CostSlotWrapper_C.GetOrange
	 */
	struct UWidget_CostSlotWrapper_C_GetOrange_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_CostSlotWrapper.Widget_CostSlotWrapper_C.SetTextboxFormating
	 */
	struct UWidget_CostSlotWrapper_C_SetTextboxFormating_Params
	{
	public:
		bool                                                       HasItems;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_1XRH[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Widget_CostSlotWrapper.Widget_CostSlotWrapper_C.GetDarkGray
	 */
	struct UWidget_CostSlotWrapper_C_GetDarkGray_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_CostSlotWrapper.Widget_CostSlotWrapper_C.GetPartsNumbers
	 */
	struct UWidget_CostSlotWrapper_C_GetPartsNumbers_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function Widget_CostSlotWrapper.Widget_CostSlotWrapper_C.Tick
	 */
	struct UWidget_CostSlotWrapper_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_CostSlotWrapper.Widget_CostSlotWrapper_C.PreConstruct
	 */
	struct UWidget_CostSlotWrapper_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_CostSlotWrapper.Widget_CostSlotWrapper_C.OnMouseEnter
	 */
	struct UWidget_CostSlotWrapper_C_OnMouseEnter_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0078)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function Widget_CostSlotWrapper.Widget_CostSlotWrapper_C.Setup CostIcon
	 */
	struct UWidget_CostSlotWrapper_C_SetupCostIcon_Params
	{
	public:
		class UTexture*                                            IconTexture;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		struct FItemAmount                                         ItemAmount;                                              // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		class UFGInventoryComponent*                               CachedInventoryComponent;                                // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    slotIdx;                                                 // 0x0020(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    CurrentNumInSlot;                                        // 0x0024(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       SmallSlot;                                               // 0x0028(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       BigSlot;                                                 // 0x0029(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ForceOrangeTextbox;                                      // 0x002A(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       GrabFromStockpile;                                       // 0x002B(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       OverwriteComponentNumInSlot;                             // 0x002C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_CostSlotWrapper.Widget_CostSlotWrapper_C.ExecuteUbergraph_Widget_CostSlotWrapper
	 */
	struct UWidget_CostSlotWrapper_C_ExecuteUbergraph_Widget_CostSlotWrapper_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
