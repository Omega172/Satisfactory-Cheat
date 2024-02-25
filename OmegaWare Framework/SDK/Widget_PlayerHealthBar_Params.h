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
	 * Function Widget_PlayerHealthBar.Widget_PlayerHealthBar_C.GetHealthFillColor
	 */
	struct UWidget_PlayerHealthBar_C_GetHealthFillColor_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_PlayerHealthBar.Widget_PlayerHealthBar_C.IsValidHealthComponent
	 */
	struct UWidget_PlayerHealthBar_C_IsValidHealthComponent_Params
	{
	public:
		bool                                                       Valid;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_PlayerHealthBar.Widget_PlayerHealthBar_C.GetHealthbar
	 */
	struct UWidget_PlayerHealthBar_C_GetHealthbar_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_PlayerHealthBar.Widget_PlayerHealthBar_C.GetProgressbarPercent
	 */
	struct UWidget_PlayerHealthBar_C_GetProgressbarPercent_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_PlayerHealthBar.Widget_PlayerHealthBar_C.Construct
	 */
	struct UWidget_PlayerHealthBar_C_Construct_Params
	{	};

	/**
	 * Function Widget_PlayerHealthBar.Widget_PlayerHealthBar_C.Tick
	 */
	struct UWidget_PlayerHealthBar_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_PlayerHealthBar.Widget_PlayerHealthBar_C.ResetAnimGate
	 */
	struct UWidget_PlayerHealthBar_C_ResetAnimGate_Params
	{	};

	/**
	 * Function Widget_PlayerHealthBar.Widget_PlayerHealthBar_C.SetupHealthComponent
	 */
	struct UWidget_PlayerHealthBar_C_SetupHealthComponent_Params
	{	};

	/**
	 * Function Widget_PlayerHealthBar.Widget_PlayerHealthBar_C.ExecuteUbergraph_Widget_PlayerHealthBar
	 */
	struct UWidget_PlayerHealthBar_C_ExecuteUbergraph_Widget_PlayerHealthBar_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
