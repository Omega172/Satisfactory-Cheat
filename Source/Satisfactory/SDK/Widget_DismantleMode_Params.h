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
	 * Function Widget_DismantleMode.Widget_DismantleMode_C.Widget_DismantleMode_AutoGenFunc
	 */
	struct UWidget_DismantleMode_C_Widget_DismantleMode_AutoGenFunc_Params
	{
	public:
		class UClass*                                              newClassFilter;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
		class UClass*                                              itemDescriptor;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
		class UFGBlueprintDescriptor*                              newBlueprintFilter;                                      // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_DismantleMode.Widget_DismantleMode_C.UpdateMassDismantleFeedback
	 */
	struct UWidget_DismantleMode_C_UpdateMassDismantleFeedback_Params
	{	};

	/**
	 * Function Widget_DismantleMode.Widget_DismantleMode_C.SetDismantleFeedbackVisibility
	 */
	struct UWidget_DismantleMode_C_SetDismantleFeedbackVisibility_Params
	{
	public:
		bool                                                       Condition;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_2788[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Widget_DismantleMode.Widget_DismantleMode_C.GetReticleVisibility
	 */
	struct UWidget_DismantleMode_C_GetReticleVisibility_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_DismantleMode.Widget_DismantleMode_C.SetDismantleRefunds
	 */
	struct UWidget_DismantleMode_C_SetDismantleRefunds_Params
	{	};

	/**
	 * Function Widget_DismantleMode.Widget_DismantleMode_C.OnEscapePressed
	 */
	struct UWidget_DismantleMode_C_OnEscapePressed_Params
	{	};

	/**
	 * Function Widget_DismantleMode.Widget_DismantleMode_C.Init
	 */
	struct UWidget_DismantleMode_C_Init_Params
	{	};

	/**
	 * Function Widget_DismantleMode.Widget_DismantleMode_C.Construct
	 */
	struct UWidget_DismantleMode_C_Construct_Params
	{	};

	/**
	 * Function Widget_DismantleMode.Widget_DismantleMode_C.OnDismantleRefundChanged
	 */
	struct UWidget_DismantleMode_C_OnDismantleRefundChanged_Params
	{
	public:
		class UFGBuildGunStateDismantle*                           dismantleGun;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_DismantleMode.Widget_DismantleMode_C.Event OnMultiDismantleStateChanged
	 */
	struct UWidget_DismantleMode_C_EventOnMultiDismantleStateChanged_Params
	{
	public:
		bool                                                       NewState;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_DismantleMode.Widget_DismantleMode_C.Event OnPendingDismantleActorsChanged
	 */
	struct UWidget_DismantleMode_C_EventOnPendingDismantleActorsChanged_Params
	{	};

	/**
	 * Function Widget_DismantleMode.Widget_DismantleMode_C.Destruct
	 */
	struct UWidget_DismantleMode_C_Destruct_Params
	{	};

	/**
	 * Function Widget_DismantleMode.Widget_DismantleMode_C.SetSmallSlots
	 */
	struct UWidget_DismantleMode_C_SetSmallSlots_Params
	{	};

	/**
	 * Function Widget_DismantleMode.Widget_DismantleMode_C.ExecuteUbergraph_Widget_DismantleMode
	 */
	struct UWidget_DismantleMode_C_ExecuteUbergraph_Widget_DismantleMode_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
