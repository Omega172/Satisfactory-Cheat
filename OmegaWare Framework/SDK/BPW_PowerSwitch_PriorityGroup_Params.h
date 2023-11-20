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
	 * Function BPW_PowerSwitch_PriorityGroup.BPW_PowerSwitch_PriorityGroup_C.MoveRuleToGroup
	 */
	struct UBPW_PowerSwitch_PriorityGroup_C_MoveRuleToGroup_Params
	{
	public:
		class UBPW_PowerSwitch_PriorityRule_C*                     PriorityRule;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_PowerSwitch_PriorityGroup.BPW_PowerSwitch_PriorityGroup_C.OnSearch
	 */
	struct UBPW_PowerSwitch_PriorityGroup_C_OnSearch_Params
	{
	public:
		class FText                                                SearchText;                                              // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BPW_PowerSwitch_PriorityGroup.BPW_PowerSwitch_PriorityGroup_C.ApplyGroupIndexOnRules
	 */
	struct UBPW_PowerSwitch_PriorityGroup_C_ApplyGroupIndexOnRules_Params
	{	};

	/**
	 * Function BPW_PowerSwitch_PriorityGroup.BPW_PowerSwitch_PriorityGroup_C.AddRule
	 */
	struct UBPW_PowerSwitch_PriorityGroup_C_AddRule_Params
	{
	public:
		class AFGPriorityPowerSwitchInfo*                          mPriorityPowerSwitchInfo;                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                                       mIsPartOfCurrentCircuit;                                 // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_FC4A[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UBPW_PowerSwitch_PriorityRule_C*                     PowerSwitchPriorityRule;                                 // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_PowerSwitch_PriorityGroup.BPW_PowerSwitch_PriorityGroup_C.SetGroupIndex
	 */
	struct UBPW_PowerSwitch_PriorityGroup_C_SetGroupIndex_Params
	{
	public:
		int32_t                                                    mGroupdIndex;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_PowerSwitch_PriorityGroup.BPW_PowerSwitch_PriorityGroup_C.SetDragOverVisuals
	 */
	struct UBPW_PowerSwitch_PriorityGroup_C_SetDragOverVisuals_Params
	{
	public:
		bool                                                       IsDragOver;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_PowerSwitch_PriorityGroup.BPW_PowerSwitch_PriorityGroup_C.OnDrop
	 */
	struct UBPW_PowerSwitch_PriorityGroup_C_OnDrop_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       PointerEvent;                                            // 0x0038(0x0078)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class UDragDropOperation*                                  Operation;                                               // 0x00B0(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x00B8(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_79SJ[0x7];                                   // 0x00B9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPW_PowerSwitch_PriorityGroup.BPW_PowerSwitch_PriorityGroup_C.SetName
	 */
	struct UBPW_PowerSwitch_PriorityGroup_C_SetName_Params
	{
	public:
		class FText                                                mName;                                                   // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BPW_PowerSwitch_PriorityGroup.BPW_PowerSwitch_PriorityGroup_C.PreConstruct
	 */
	struct UBPW_PowerSwitch_PriorityGroup_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_PowerSwitch_PriorityGroup.BPW_PowerSwitch_PriorityGroup_C.OnDragEnter
	 */
	struct UBPW_PowerSwitch_PriorityGroup_C_OnDragEnter_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       PointerEvent;                                            // 0x0038(0x0078)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class UDragDropOperation*                                  Operation;                                               // 0x00B0(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_PowerSwitch_PriorityGroup.BPW_PowerSwitch_PriorityGroup_C.OnDragLeave
	 */
	struct UBPW_PowerSwitch_PriorityGroup_C_OnDragLeave_Params
	{
	public:
		struct FPointerEvent                                       PointerEvent;                                            // 0x0000(0x0078)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class UDragDropOperation*                                  Operation;                                               // 0x0078(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_PowerSwitch_PriorityGroup.BPW_PowerSwitch_PriorityGroup_C.OnDragCancelled
	 */
	struct UBPW_PowerSwitch_PriorityGroup_C_OnDragCancelled_Params
	{
	public:
		struct FPointerEvent                                       PointerEvent;                                            // 0x0000(0x0078)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		class UDragDropOperation*                                  Operation;                                               // 0x0078(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_PowerSwitch_PriorityGroup.BPW_PowerSwitch_PriorityGroup_C.Destruct
	 */
	struct UBPW_PowerSwitch_PriorityGroup_C_Destruct_Params
	{	};

	/**
	 * Function BPW_PowerSwitch_PriorityGroup.BPW_PowerSwitch_PriorityGroup_C.OnMouseEnter
	 */
	struct UBPW_PowerSwitch_PriorityGroup_C_OnMouseEnter_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0078)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BPW_PowerSwitch_PriorityGroup.BPW_PowerSwitch_PriorityGroup_C.OnMouseLeave
	 */
	struct UBPW_PowerSwitch_PriorityGroup_C_OnMouseLeave_Params
	{
	public:
		struct FPointerEvent                                       MouseEvent;                                              // 0x0000(0x0078)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BPW_PowerSwitch_PriorityGroup.BPW_PowerSwitch_PriorityGroup_C.BndEvt__BPW_PowerSwitch_PriorityGroup_mAllOnButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UBPW_PowerSwitch_PriorityGroup_C_BndEvt__BPW_PowerSwitch_PriorityGroup_mAllOnButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_PowerSwitch_PriorityGroup.BPW_PowerSwitch_PriorityGroup_C.BndEvt__BPW_PowerSwitch_PriorityGroup_mAllOffButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 */
	struct UBPW_PowerSwitch_PriorityGroup_C_BndEvt__BPW_PowerSwitch_PriorityGroup_mAllOffButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_PowerSwitch_PriorityGroup.BPW_PowerSwitch_PriorityGroup_C.ExecuteUbergraph_BPW_PowerSwitch_PriorityGroup
	 */
	struct UBPW_PowerSwitch_PriorityGroup_C_ExecuteUbergraph_BPW_PowerSwitch_PriorityGroup_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_ENPG[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPW_PowerSwitch_PriorityGroup.BPW_PowerSwitch_PriorityGroup_C.OnRuleDropped__DelegateSignature
	 */
	struct UBPW_PowerSwitch_PriorityGroup_C_OnRuleDropped__DelegateSignature_Params
	{
	public:
		class UBPW_PowerSwitch_PriorityRule_C*                     Rule;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Priority;                                                // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
