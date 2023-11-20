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
	 * Function Widget_HUDBOX_Jetpack.Widget_HUDBox_Jetpack_C.StopPulse
	 */
	struct UWidget_HUDBox_Jetpack_C_StopPulse_Params
	{	};

	/**
	 * Function Widget_HUDBOX_Jetpack.Widget_HUDBox_Jetpack_C.StartPulse
	 */
	struct UWidget_HUDBox_Jetpack_C_StartPulse_Params
	{	};

	/**
	 * Function Widget_HUDBOX_Jetpack.Widget_HUDBox_Jetpack_C.Construct
	 */
	struct UWidget_HUDBox_Jetpack_C_Construct_Params
	{	};

	/**
	 * Function Widget_HUDBOX_Jetpack.Widget_HUDBox_Jetpack_C.Tick
	 */
	struct UWidget_HUDBox_Jetpack_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_HUDBOX_Jetpack.Widget_HUDBox_Jetpack_C.BarPulse
	 */
	struct UWidget_HUDBox_Jetpack_C_BarPulse_Params
	{	};

	/**
	 * Function Widget_HUDBOX_Jetpack.Widget_HUDBox_Jetpack_C.ExecuteUbergraph_Widget_HUDBox_Jetpack
	 */
	struct UWidget_HUDBox_Jetpack_C_ExecuteUbergraph_Widget_HUDBox_Jetpack_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
