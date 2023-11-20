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
	 * Function Widget_Stinger.Widget_Stinger_C.SetStingerWidgetContent
	 */
	struct UWidget_Stinger_C_SetStingerWidgetContent_Params
	{
	public:
		class FText                                                TitleText;                                               // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class FText                                                UnlockedText;                                            // 0x0018(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		bool                                                       AllCaps;                                                 // 0x0030(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_4NEQ[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Widget_Stinger.Widget_Stinger_C.ShowSmallIcons
	 */
	struct UWidget_Stinger_C_ShowSmallIcons_Params
	{	};

	/**
	 * Function Widget_Stinger.Widget_Stinger_C.Collapse On Animation Finished
	 */
	struct UWidget_Stinger_C_CollapseOnAnimationFinished_Params
	{	};

	/**
	 * Function Widget_Stinger.Widget_Stinger_C.Construct
	 */
	struct UWidget_Stinger_C_Construct_Params
	{	};

	/**
	 * Function Widget_Stinger.Widget_Stinger_C.ExecuteUbergraph_Widget_Stinger
	 */
	struct UWidget_Stinger_C_ExecuteUbergraph_Widget_Stinger_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_6TTO[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
