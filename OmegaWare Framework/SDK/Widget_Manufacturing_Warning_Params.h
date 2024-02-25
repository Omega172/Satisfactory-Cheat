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
	 * Function Widget_Manufacturing_Warning.Widget_Manufacturing_Warning_C.UpdateState
	 */
	struct UWidget_Manufacturing_Warning_C_UpdateState_Params
	{
	public:
		class AFGBuildableFactory*                                 FGBuildableFactory;                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_Manufacturing_Warning.Widget_Manufacturing_Warning_C.OverrideText
	 */
	struct UWidget_Manufacturing_Warning_C_OverrideText_Params
	{
	public:
		class FText                                                InText;                                                  // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function Widget_Manufacturing_Warning.Widget_Manufacturing_Warning_C.Construct
	 */
	struct UWidget_Manufacturing_Warning_C_Construct_Params
	{	};

	/**
	 * Function Widget_Manufacturing_Warning.Widget_Manufacturing_Warning_C.PreConstruct
	 */
	struct UWidget_Manufacturing_Warning_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_Manufacturing_Warning.Widget_Manufacturing_Warning_C.StartAndShowAnim
	 */
	struct UWidget_Manufacturing_Warning_C_StartAndShowAnim_Params
	{	};

	/**
	 * Function Widget_Manufacturing_Warning.Widget_Manufacturing_Warning_C.StopAndCollapseAnim
	 */
	struct UWidget_Manufacturing_Warning_C_StopAndCollapseAnim_Params
	{	};

	/**
	 * Function Widget_Manufacturing_Warning.Widget_Manufacturing_Warning_C.ExecuteUbergraph_Widget_Manufacturing_Warning
	 */
	struct UWidget_Manufacturing_Warning_C_ExecuteUbergraph_Widget_Manufacturing_Warning_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_P205[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
