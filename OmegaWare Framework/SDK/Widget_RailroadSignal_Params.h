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
	 * Function Widget_RailroadSignal.Widget_RailroadSignal_C.UpdateSign
	 */
	struct UWidget_RailroadSignal_C_UpdateSign_Params
	{	};

	/**
	 * Function Widget_RailroadSignal.Widget_RailroadSignal_C.SetIcons
	 */
	struct UWidget_RailroadSignal_C_SetIcons_Params
	{	};

	/**
	 * Function Widget_RailroadSignal.Widget_RailroadSignal_C.GetSignalState
	 */
	struct UWidget_RailroadSignal_C_GetSignalState_Params
	{
	public:
		ERailroadSignal_State                                      State;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_RailroadSignal.Widget_RailroadSignal_C.GetDebugText
	 */
	struct UWidget_RailroadSignal_C_GetDebugText_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function Widget_RailroadSignal.Widget_RailroadSignal_C.SetDescriptionText
	 */
	struct UWidget_RailroadSignal_C_SetDescriptionText_Params
	{	};

	/**
	 * Function Widget_RailroadSignal.Widget_RailroadSignal_C.BndEvt__Widget_Window_DarkMode_K2Node_ComponentBoundEvent_0_OnClose__DelegateSignature
	 */
	struct UWidget_RailroadSignal_C_BndEvt__Widget_Window_DarkMode_K2Node_ComponentBoundEvent_0_OnClose__DelegateSignature_Params
	{	};

	/**
	 * Function Widget_RailroadSignal.Widget_RailroadSignal_C.Construct
	 */
	struct UWidget_RailroadSignal_C_Construct_Params
	{	};

	/**
	 * Function Widget_RailroadSignal.Widget_RailroadSignal_C.OnAspectChanged
	 */
	struct UWidget_RailroadSignal_C_OnAspectChanged_Params
	{
	public:
		ERailroadSignalAspect                                      aspect;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_RailroadSignal.Widget_RailroadSignal_C.OnBlockValidationChanged
	 */
	struct UWidget_RailroadSignal_C_OnBlockValidationChanged_Params
	{
	public:
		ERailroadBlockValidation                                   blockValidation;                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_RailroadSignal.Widget_RailroadSignal_C.ExecuteUbergraph_Widget_RailroadSignal
	 */
	struct UWidget_RailroadSignal_C_ExecuteUbergraph_Widget_RailroadSignal_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
