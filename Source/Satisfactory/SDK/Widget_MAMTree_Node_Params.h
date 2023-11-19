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
	 * Function Widget_MAMTree_Node.Widget_MAMTree_Node_C.ShouldBeBigSlot
	 */
	struct UWidget_MAMTree_Node_C_ShouldBeBigSlot_Params
	{
	public:
		class UClass*                                              schematic;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_CO8K[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Widget_MAMTree_Node.Widget_MAMTree_Node_C.SetIsBigSlot
	 */
	struct UWidget_MAMTree_Node_C_SetIsBigSlot_Params
	{
	public:
		bool                                                       mIsBigSlot;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_730Q[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Widget_MAMTree_Node.Widget_MAMTree_Node_C.Shine
	 */
	struct UWidget_MAMTree_Node_C_Shine_Params
	{	};

	/**
	 * Function Widget_MAMTree_Node.Widget_MAMTree_Node_C.ShowHideKeyIcon
	 */
	struct UWidget_MAMTree_Node_C_ShowHideKeyIcon_Params
	{
	public:
		bool                                                       Show;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_MAMTree_Node.Widget_MAMTree_Node_C.ShowHideUnlockIcon
	 */
	struct UWidget_MAMTree_Node_C_ShowHideUnlockIcon_Params
	{
	public:
		bool                                                       Show;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_MAMTree_Node.Widget_MAMTree_Node_C.SetButtonNormalColor
	 */
	struct UWidget_MAMTree_Node_C_SetButtonNormalColor_Params
	{
	public:
		struct FLinearColor                                        Color;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_MAMTree_Node.Widget_MAMTree_Node_C.SetNodeState
	 */
	struct UWidget_MAMTree_Node_C_SetNodeState_Params
	{
	public:
		EMamTree_NodeStates                                        State;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_BEB3[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Widget_MAMTree_Node.Widget_MAMTree_Node_C.OnMenuOpen
	 */
	struct UWidget_MAMTree_Node_C_OnMenuOpen_Params
	{
	public:
		class UWidget*                                             ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_MAMTree_Node.Widget_MAMTree_Node_C.SetIsSelected
	 */
	struct UWidget_MAMTree_Node_C_SetIsSelected_Params
	{
	public:
		bool                                                       mIsSelected;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_MAMTree_Node.Widget_MAMTree_Node_C.UpdateNodeIcon
	 */
	struct UWidget_MAMTree_Node_C_UpdateNodeIcon_Params
	{
	public:
		struct FMAMTree_NodeData_Struct                            mNodeData;                                               // 0x0000(0x0090)  (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_MAMTree_Node.Widget_MAMTree_Node_C.PreConstruct
	 */
	struct UWidget_MAMTree_Node_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_MAMTree_Node.Widget_MAMTree_Node_C.BndEvt__mButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UWidget_MAMTree_Node_C_BndEvt__mButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function Widget_MAMTree_Node.Widget_MAMTree_Node_C.BndEvt__mButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 */
	struct UWidget_MAMTree_Node_C_BndEvt__mButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function Widget_MAMTree_Node.Widget_MAMTree_Node_C.BndEvt__mButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
	 */
	struct UWidget_MAMTree_Node_C_BndEvt__mButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function Widget_MAMTree_Node.Widget_MAMTree_Node_C.BndEvt__mHoverMenuAnchor_K2Node_ComponentBoundEvent_3_OnMenuOpenChangedEvent__DelegateSignature
	 */
	struct UWidget_MAMTree_Node_C_BndEvt__mHoverMenuAnchor_K2Node_ComponentBoundEvent_3_OnMenuOpenChangedEvent__DelegateSignature_Params
	{
	public:
		bool                                                       bIsOpen;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_MAMTree_Node.Widget_MAMTree_Node_C.CloseMenu
	 */
	struct UWidget_MAMTree_Node_C_CloseMenu_Params
	{	};

	/**
	 * Function Widget_MAMTree_Node.Widget_MAMTree_Node_C.OnResearchButtonPressed
	 */
	struct UWidget_MAMTree_Node_C_OnResearchButtonPressed_Params
	{	};

	/**
	 * Function Widget_MAMTree_Node.Widget_MAMTree_Node_C.BndEvt__mResearchedButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
	 */
	struct UWidget_MAMTree_Node_C_BndEvt__mResearchedButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function Widget_MAMTree_Node.Widget_MAMTree_Node_C.BndEvt__mResearchedButton_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature
	 */
	struct UWidget_MAMTree_Node_C_BndEvt__mResearchedButton_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function Widget_MAMTree_Node.Widget_MAMTree_Node_C.BndEvt__mResearchedButton_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature
	 */
	struct UWidget_MAMTree_Node_C_BndEvt__mResearchedButton_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function Widget_MAMTree_Node.Widget_MAMTree_Node_C.Construct
	 */
	struct UWidget_MAMTree_Node_C_Construct_Params
	{	};

	/**
	 * Function Widget_MAMTree_Node.Widget_MAMTree_Node_C.ExecuteUbergraph_Widget_MAMTree_Node
	 */
	struct UWidget_MAMTree_Node_C_ExecuteUbergraph_Widget_MAMTree_Node_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_MAMTree_Node.Widget_MAMTree_Node_C.OnResearchStarted__DelegateSignature
	 */
	struct UWidget_MAMTree_Node_C_OnResearchStarted__DelegateSignature_Params
	{	};

	/**
	 * Function Widget_MAMTree_Node.Widget_MAMTree_Node_C.OnUnhovered__DelegateSignature
	 */
	struct UWidget_MAMTree_Node_C_OnUnhovered__DelegateSignature_Params
	{
	public:
		struct FIntVector2D                                        Coordinates;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_MAMTree_Node.Widget_MAMTree_Node_C.OnHovered__DelegateSignature
	 */
	struct UWidget_MAMTree_Node_C_OnHovered__DelegateSignature_Params
	{
	public:
		struct FIntVector2D                                        Coordinates;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_MAMTree_Node.Widget_MAMTree_Node_C.OnClicked__DelegateSignature
	 */
	struct UWidget_MAMTree_Node_C_OnClicked__DelegateSignature_Params
	{
	public:
		struct FIntVector2D                                        Coordinates;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
