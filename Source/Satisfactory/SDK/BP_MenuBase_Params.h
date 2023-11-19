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
	 * Function BP_MenuBase.BP_MenuBase_C.OnMenuClose
	 */
	struct UBP_MenuBase_C_OnMenuClose_Params
	{
	public:
		bool                                                       CancelParentFunction;                                    // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MenuBase.BP_MenuBase_C.GatherBackgrounds
	 */
	struct UBP_MenuBase_C_GatherBackgrounds_Params
	{	};

	/**
	 * Function BP_MenuBase.BP_MenuBase_C.PlayBackgroundEnterAnimation
	 */
	struct UBP_MenuBase_C_PlayBackgroundEnterAnimation_Params
	{	};

	/**
	 * Function BP_MenuBase.BP_MenuBase_C.PlayEnterAnimation
	 */
	struct UBP_MenuBase_C_PlayEnterAnimation_Params
	{
	public:
		class UWidget*                                             prevMenu;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MenuBase.BP_MenuBase_C.ShouldAnimateBackground
	 */
	struct UBP_MenuBase_C_ShouldAnimateBackground_Params
	{
	public:
		class UWidget*                                             prevMenu;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
		bool                                                       Animate;                                                 // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_8K8G[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_MenuBase.BP_MenuBase_C.RestoreFocusOnPopupClosed
	 */
	struct UBP_MenuBase_C_RestoreFocusOnPopupClosed_Params
	{
	public:
		bool                                                       confirm;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_CY46[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_MenuBase.BP_MenuBase_C.OnKeyDown
	 */
	struct UBP_MenuBase_C_OnKeyDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0038(0x0040)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0078(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_MenuBase.BP_MenuBase_C.OnEscape
	 */
	struct UBP_MenuBase_C_OnEscape_Params
	{	};

	/**
	 * Function BP_MenuBase.BP_MenuBase_C.Destruct
	 */
	struct UBP_MenuBase_C_Destruct_Params
	{	};

	/**
	 * Function BP_MenuBase.BP_MenuBase_C.Construct
	 */
	struct UBP_MenuBase_C_Construct_Params
	{	};

	/**
	 * Function BP_MenuBase.BP_MenuBase_C.SpawnAnim
	 */
	struct UBP_MenuBase_C_SpawnAnim_Params
	{
	public:
		bool                                                       PlayBackgroundAnim;                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MenuBase.BP_MenuBase_C.OnMenuEnter
	 */
	struct UBP_MenuBase_C_OnMenuEnter_Params
	{
	public:
		class UWidget*                                             prevMenu;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MenuBase.BP_MenuBase_C.OnAnimationFinished
	 */
	struct UBP_MenuBase_C_OnAnimationFinished_Params
	{
	public:
		class UWidgetAnimation*                                    Animation;                                               // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MenuBase.BP_MenuBase_C.OnMenuExit
	 */
	struct UBP_MenuBase_C_OnMenuExit_Params
	{
	public:
		class UWidget*                                             prevMenu;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
		bool                                                       noAnimation;                                             // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MenuBase.BP_MenuBase_C.ExecuteUbergraph_BP_MenuBase
	 */
	struct UBP_MenuBase_C_ExecuteUbergraph_BP_MenuBase_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
