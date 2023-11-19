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
	 * Function Widget_GeoThermal_Generator.Widget_GeoThermal_Generator_C.SequenceEvent__ENTRYPOINTWidget_GeoThermal_Generator
	 */
	struct UWidget_GeoThermal_Generator_C_SequenceEvent__ENTRYPOINTWidget_GeoThermal_Generator_Params
	{	};

	/**
	 * Function Widget_GeoThermal_Generator.Widget_GeoThermal_Generator_C.UpdateStandbyWarning
	 */
	struct UWidget_GeoThermal_Generator_C_UpdateStandbyWarning_Params
	{	};

	/**
	 * Function Widget_GeoThermal_Generator.Widget_GeoThermal_Generator_C.PlayBlinkAnim
	 */
	struct UWidget_GeoThermal_Generator_C_PlayBlinkAnim_Params
	{	};

	/**
	 * Function Widget_GeoThermal_Generator.Widget_GeoThermal_Generator_C.SetBlinkTrigger
	 */
	struct UWidget_GeoThermal_Generator_C_SetBlinkTrigger_Params
	{	};

	/**
	 * Function Widget_GeoThermal_Generator.Widget_GeoThermal_Generator_C.StartSmokeTimer
	 */
	struct UWidget_GeoThermal_Generator_C_StartSmokeTimer_Params
	{	};

	/**
	 * Function Widget_GeoThermal_Generator.Widget_GeoThermal_Generator_C.UpdateCurrentPower
	 */
	struct UWidget_GeoThermal_Generator_C_UpdateCurrentPower_Params
	{	};

	/**
	 * Function Widget_GeoThermal_Generator.Widget_GeoThermal_Generator_C.SetupStaticValues
	 */
	struct UWidget_GeoThermal_Generator_C_SetupStaticValues_Params
	{	};

	/**
	 * Function Widget_GeoThermal_Generator.Widget_GeoThermal_Generator_C.OnGetPowerCircuit
	 */
	struct UWidget_GeoThermal_Generator_C_OnGetPowerCircuit_Params
	{
	public:
		class UFGPowerCircuit*                                     ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_GeoThermal_Generator.Widget_GeoThermal_Generator_C.Construct
	 */
	struct UWidget_GeoThermal_Generator_C_Construct_Params
	{	};

	/**
	 * Function Widget_GeoThermal_Generator.Widget_GeoThermal_Generator_C.OnCustomTick
	 */
	struct UWidget_GeoThermal_Generator_C_OnCustomTick_Params
	{
	public:
		float                                                      UpdateTime;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_GeoThermal_Generator.Widget_GeoThermal_Generator_C.BndEvt__Widget_Window_DarkMode_K2Node_ComponentBoundEvent_0_OnClose__DelegateSignature
	 */
	struct UWidget_GeoThermal_Generator_C_BndEvt__Widget_Window_DarkMode_K2Node_ComponentBoundEvent_0_OnClose__DelegateSignature_Params
	{	};

	/**
	 * Function Widget_GeoThermal_Generator.Widget_GeoThermal_Generator_C.SmokeTimer
	 */
	struct UWidget_GeoThermal_Generator_C_SmokeTimer_Params
	{	};

	/**
	 * Function Widget_GeoThermal_Generator.Widget_GeoThermal_Generator_C.BndEvt__Widget_Fusebox_K2Node_ComponentBoundEvent_1_ResetFuse__DelegateSignature
	 */
	struct UWidget_GeoThermal_Generator_C_BndEvt__Widget_Fusebox_K2Node_ComponentBoundEvent_1_ResetFuse__DelegateSignature_Params
	{	};

	/**
	 * Function Widget_GeoThermal_Generator.Widget_GeoThermal_Generator_C.OnStandbyHasChanged
	 */
	struct UWidget_GeoThermal_Generator_C_OnStandbyHasChanged_Params
	{
	public:
		bool                                                       State;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_GeoThermal_Generator.Widget_GeoThermal_Generator_C.BndEvt__Widget_StandbyButton_K2Node_ComponentBoundEvent_1_OnStandbyClicked__DelegateSignature
	 */
	struct UWidget_GeoThermal_Generator_C_BndEvt__Widget_StandbyButton_K2Node_ComponentBoundEvent_1_OnStandbyClicked__DelegateSignature_Params
	{	};

	/**
	 * Function Widget_GeoThermal_Generator.Widget_GeoThermal_Generator_C.ExecuteUbergraph_Widget_GeoThermal_Generator
	 */
	struct UWidget_GeoThermal_Generator_C_ExecuteUbergraph_Widget_GeoThermal_Generator_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
