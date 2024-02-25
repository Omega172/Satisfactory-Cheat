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
	 * Function Widget_HyperTubePathSelector.Widget_HyperTubePathSelector_C.CREATEDELEGATE_PROXYFUNCTION_1
	 */
	struct UWidget_HyperTubePathSelector_C_CREATEDELEGATE_PROXYFUNCTION_1_Params
	{
	public:
		struct FFGPendingHyperJunctionInfo                         newJunctionInfo;                                         // 0x0000(0x0028)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	};

	/**
	 * Function Widget_HyperTubePathSelector.Widget_HyperTubePathSelector_C.On Shortcut Pressed
	 */
	struct UWidget_HyperTubePathSelector_C_OnShortcutPressed_Params
	{
	public:
		int32_t                                                    shortcutIndex;                                           // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Result;                                                  // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_FZJO[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Widget_HyperTubePathSelector.Widget_HyperTubePathSelector_C.Populate Connection List
	 */
	struct UWidget_HyperTubePathSelector_C_PopulateConnectionList_Params
	{	};

	/**
	 * Function Widget_HyperTubePathSelector.Widget_HyperTubePathSelector_C.Update Junction Info Text
	 */
	struct UWidget_HyperTubePathSelector_C_UpdateJunctionInfoText_Params
	{	};

	/**
	 * Function Widget_HyperTubePathSelector.Widget_HyperTubePathSelector_C.Init Pending Junction Info
	 */
	struct UWidget_HyperTubePathSelector_C_InitPendingJunctionInfo_Params
	{
	public:
		struct FFGPendingHyperJunctionInfo                         NewInfo;                                                 // 0x0000(0x0028)  (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
	};

	/**
	 * Function Widget_HyperTubePathSelector.Widget_HyperTubePathSelector_C.Construct
	 */
	struct UWidget_HyperTubePathSelector_C_Construct_Params
	{	};

	/**
	 * Function Widget_HyperTubePathSelector.Widget_HyperTubePathSelector_C.Tick
	 */
	struct UWidget_HyperTubePathSelector_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_HyperTubePathSelector.Widget_HyperTubePathSelector_C.ExecuteUbergraph_Widget_HyperTubePathSelector
	 */
	struct UWidget_HyperTubePathSelector_C_ExecuteUbergraph_Widget_HyperTubePathSelector_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_8455[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
