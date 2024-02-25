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
	 * Function Widget_ButtonSpotLight.Widget_ButtonSpotLight_C.UpdateMousePosition
	 */
	struct UWidget_ButtonSpotLight_C_UpdateMousePosition_Params
	{	};

	/**
	 * Function Widget_ButtonSpotLight.Widget_ButtonSpotLight_C.OnMouseMove
	 */
	struct UWidget_ButtonSpotLight_C_OnMouseMove_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0078)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FEventReply                                         ReturnValue;                                             // 0x00B0(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function Widget_ButtonSpotLight.Widget_ButtonSpotLight_C.PreConstruct
	 */
	struct UWidget_ButtonSpotLight_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_ButtonSpotLight.Widget_ButtonSpotLight_C.Construct
	 */
	struct UWidget_ButtonSpotLight_C_Construct_Params
	{	};

	/**
	 * Function Widget_ButtonSpotLight.Widget_ButtonSpotLight_C.OnMouseLeave
	 */
	struct UWidget_ButtonSpotLight_C_OnMouseLeave_Params
	{
	public:
		struct FPointerEvent                                       MouseEvent;                                              // 0x0000(0x0078)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function Widget_ButtonSpotLight.Widget_ButtonSpotLight_C.OnMouseEnter
	 */
	struct UWidget_ButtonSpotLight_C_OnMouseEnter_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0078)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function Widget_ButtonSpotLight.Widget_ButtonSpotLight_C.ExecuteUbergraph_Widget_ButtonSpotLight
	 */
	struct UWidget_ButtonSpotLight_C_ExecuteUbergraph_Widget_ButtonSpotLight_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
