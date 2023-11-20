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
	 * Function Widget_PoleConnections.Widget_PoleConnections_C.SetStyle
	 */
	struct UWidget_PoleConnections_C_SetStyle_Params
	{
	public:
		bool                                                       UseBackground;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_PoleConnections.Widget_PoleConnections_C.GetColorAndOpacity_1
	 */
	struct UWidget_PoleConnections_C_GetColorAndOpacity_1_Params
	{
	public:
		struct FSlateColor                                         ReturnValue;                                             // 0x0000(0x0014)  (Parm, OutParm, ReturnParm)
		unsigned char                                              UnknownData_5Y4F[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Widget_PoleConnections.Widget_PoleConnections_C.GetText_1
	 */
	struct UWidget_PoleConnections_C_GetText_1_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function Widget_PoleConnections.Widget_PoleConnections_C.Construct
	 */
	struct UWidget_PoleConnections_C_Construct_Params
	{	};

	/**
	 * Function Widget_PoleConnections.Widget_PoleConnections_C.UpdateConnections
	 */
	struct UWidget_PoleConnections_C_UpdateConnections_Params
	{	};

	/**
	 * Function Widget_PoleConnections.Widget_PoleConnections_C.Destruct
	 */
	struct UWidget_PoleConnections_C_Destruct_Params
	{	};

	/**
	 * Function Widget_PoleConnections.Widget_PoleConnections_C.PreConstruct
	 */
	struct UWidget_PoleConnections_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_PoleConnections.Widget_PoleConnections_C.ExecuteUbergraph_Widget_PoleConnections
	 */
	struct UWidget_PoleConnections_C_ExecuteUbergraph_Widget_PoleConnections_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
