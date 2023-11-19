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
	 * Function Widget_CompassObjectResource.Widget_CompassObjectResource_C.GetText_1
	 */
	struct UWidget_CompassObjectResource_C_GetText_1_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function Widget_CompassObjectResource.Widget_CompassObjectResource_C.OnCompassObjectAddedToPanel
	 */
	struct UWidget_CompassObjectResource_C_OnCompassObjectAddedToPanel_Params
	{
	public:
		class UCanvasPanelSlot*                                    parentSlot;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_CompassObjectResource.Widget_CompassObjectResource_C.Construct
	 */
	struct UWidget_CompassObjectResource_C_Construct_Params
	{	};

	/**
	 * Function Widget_CompassObjectResource.Widget_CompassObjectResource_C.OnCompassObjectUpdated
	 */
	struct UWidget_CompassObjectResource_C_OnCompassObjectUpdated_Params
	{	};

	/**
	 * Function Widget_CompassObjectResource.Widget_CompassObjectResource_C.Tick
	 */
	struct UWidget_CompassObjectResource_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_CompassObjectResource.Widget_CompassObjectResource_C.OnObjectCentered
	 */
	struct UWidget_CompassObjectResource_C_OnObjectCentered_Params
	{
	public:
		bool                                                       centered;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_CompassObjectResource.Widget_CompassObjectResource_C.ExecuteUbergraph_Widget_CompassObjectResource
	 */
	struct UWidget_CompassObjectResource_C_ExecuteUbergraph_Widget_CompassObjectResource_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_QOJ7[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
