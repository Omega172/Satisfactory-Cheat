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
	 * Function Widget_HUDBox_Fuel.Widget_HUDBox_Fuel_C.Construct
	 */
	struct UWidget_HUDBox_Fuel_C_Construct_Params
	{	};

	/**
	 * Function Widget_HUDBox_Fuel.Widget_HUDBox_Fuel_C.Tick
	 */
	struct UWidget_HUDBox_Fuel_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_HUDBox_Fuel.Widget_HUDBox_Fuel_C.ExecuteUbergraph_Widget_HUDBox_Fuel
	 */
	struct UWidget_HUDBox_Fuel_C_ExecuteUbergraph_Widget_HUDBox_Fuel_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
