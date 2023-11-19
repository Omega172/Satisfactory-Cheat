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
	 * Function Widget_Locomotive_Menu.Widget_Locomotive_Menu_C.UpdateZoomSlider
	 */
	struct UWidget_Locomotive_Menu_C_UpdateZoomSlider_Params
	{	};

	/**
	 * Function Widget_Locomotive_Menu.Widget_Locomotive_Menu_C.NormalizedValueToZoomValue
	 */
	struct UWidget_Locomotive_Menu_C_NormalizedValueToZoomValue_Params
	{
	public:
		double                                                     NormalizedValue;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector2D                                           ZoomValue;                                               // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_Locomotive_Menu.Widget_Locomotive_Menu_C.UpdateSelfdrivingFeedback
	 */
	struct UWidget_Locomotive_Menu_C_UpdateSelfdrivingFeedback_Params
	{
	public:
		bool                                                       IsSelfDriving;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_Locomotive_Menu.Widget_Locomotive_Menu_C.UpdateCancelDockingButtonState
	 */
	struct UWidget_Locomotive_Menu_C_UpdateCancelDockingButtonState_Params
	{	};

	/**
	 * Function Widget_Locomotive_Menu.Widget_Locomotive_Menu_C.SetShowCancelDockingButton
	 */
	struct UWidget_Locomotive_Menu_C_SetShowCancelDockingButton_Params
	{
	public:
		bool                                                       ShowButton;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Animate;                                                 // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_OGDQ[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Widget_Locomotive_Menu.Widget_Locomotive_Menu_C.UpdateTimeTableNoticeVisibility
	 */
	struct UWidget_Locomotive_Menu_C_UpdateTimeTableNoticeVisibility_Params
	{	};

	/**
	 * Function Widget_Locomotive_Menu.Widget_Locomotive_Menu_C.SetMapFilters
	 */
	struct UWidget_Locomotive_Menu_C_SetMapFilters_Params
	{	};

	/**
	 * Function Widget_Locomotive_Menu.Widget_Locomotive_Menu_C.OnEditSettingClosed
	 */
	struct UWidget_Locomotive_Menu_C_OnEditSettingClosed_Params
	{
	public:
		bool                                                       SettingChanged;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_3KGE[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Widget_Locomotive_Menu.Widget_Locomotive_Menu_C.SetSelfDriving
	 */
	struct UWidget_Locomotive_Menu_C_SetSelfDriving_Params
	{
	public:
		bool                                                       IsEnabled;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_U4E5[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Widget_Locomotive_Menu.Widget_Locomotive_Menu_C.SetIsOpenedThroughStation
	 */
	struct UWidget_Locomotive_Menu_C_SetIsOpenedThroughStation_Params
	{
	public:
		bool                                                       IsOpenedThroughStation;                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_Locomotive_Menu.Widget_Locomotive_Menu_C.SetStatVisibility
	 */
	struct UWidget_Locomotive_Menu_C_SetStatVisibility_Params
	{
	public:
		bool                                                       IsVisible;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_Locomotive_Menu.Widget_Locomotive_Menu_C.RevertName
	 */
	struct UWidget_Locomotive_Menu_C_RevertName_Params
	{	};

	/**
	 * Function Widget_Locomotive_Menu.Widget_Locomotive_Menu_C.SetName
	 */
	struct UWidget_Locomotive_Menu_C_SetName_Params
	{
	public:
		class FText                                                NewName;                                                 // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function Widget_Locomotive_Menu.Widget_Locomotive_Menu_C.UpdateSpeed
	 */
	struct UWidget_Locomotive_Menu_C_UpdateSpeed_Params
	{	};

	/**
	 * Function Widget_Locomotive_Menu.Widget_Locomotive_Menu_C.UpdatePowerUsage
	 */
	struct UWidget_Locomotive_Menu_C_UpdatePowerUsage_Params
	{	};

	/**
	 * Function Widget_Locomotive_Menu.Widget_Locomotive_Menu_C.UpdateStations
	 */
	struct UWidget_Locomotive_Menu_C_UpdateStations_Params
	{	};

	/**
	 * Function Widget_Locomotive_Menu.Widget_Locomotive_Menu_C.Construct
	 */
	struct UWidget_Locomotive_Menu_C_Construct_Params
	{	};

	/**
	 * Function Widget_Locomotive_Menu.Widget_Locomotive_Menu_C.BndEvt__mWindow_K2Node_ComponentBoundEvent_2_OnClose__DelegateSignature
	 */
	struct UWidget_Locomotive_Menu_C_BndEvt__mWindow_K2Node_ComponentBoundEvent_2_OnClose__DelegateSignature_Params
	{	};

	/**
	 * Function Widget_Locomotive_Menu.Widget_Locomotive_Menu_C.BndEvt__Widget_StandardButton_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature
	 */
	struct UWidget_Locomotive_Menu_C_BndEvt__Widget_StandardButton_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function Widget_Locomotive_Menu.Widget_Locomotive_Menu_C.BndEvt__BPW_Train_TimeTable_Setup_K2Node_ComponentBoundEvent_4_OnDiscard__DelegateSignature
	 */
	struct UWidget_Locomotive_Menu_C_BndEvt__BPW_Train_TimeTable_Setup_K2Node_ComponentBoundEvent_4_OnDiscard__DelegateSignature_Params
	{	};

	/**
	 * Function Widget_Locomotive_Menu.Widget_Locomotive_Menu_C.BndEvt__BPW_Train_TimeTable_Setup_K2Node_ComponentBoundEvent_5_OnSave__DelegateSignature
	 */
	struct UWidget_Locomotive_Menu_C_BndEvt__BPW_Train_TimeTable_Setup_K2Node_ComponentBoundEvent_5_OnSave__DelegateSignature_Params
	{	};

	/**
	 * Function Widget_Locomotive_Menu.Widget_Locomotive_Menu_C.OnCustomTick
	 */
	struct UWidget_Locomotive_Menu_C_OnCustomTick_Params
	{
	public:
		float                                                      UpdateTime;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_Locomotive_Menu.Widget_Locomotive_Menu_C.BndEvt__mName_K2Node_ComponentBoundEvent_0_OnEditableTextCommittedEvent__DelegateSignature
	 */
	struct UWidget_Locomotive_Menu_C_BndEvt__mName_K2Node_ComponentBoundEvent_0_OnEditableTextCommittedEvent__DelegateSignature_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		ETextCommit                                                CommitMethod;                                            // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_Locomotive_Menu.Widget_Locomotive_Menu_C.BndEvt__mEditTimeTableButton_1_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
	 */
	struct UWidget_Locomotive_Menu_C_BndEvt__mEditTimeTableButton_1_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function Widget_Locomotive_Menu.Widget_Locomotive_Menu_C.Destruct
	 */
	struct UWidget_Locomotive_Menu_C_Destruct_Params
	{	};

	/**
	 * Function Widget_Locomotive_Menu.Widget_Locomotive_Menu_C.BndEvt__BPW_Train_TimeTable_Setup_K2Node_ComponentBoundEvent_6_OnStationEditClicked__DelegateSignature
	 */
	struct UWidget_Locomotive_Menu_C_BndEvt__BPW_Train_TimeTable_Setup_K2Node_ComponentBoundEvent_6_OnStationEditClicked__DelegateSignature_Params
	{
	public:
		struct FTimeTableStop                                      mStation;                                                // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class UBPW_Train_TimeTable_SetupStation_C*                 StationWidget;                                           // 0x0038(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_Locomotive_Menu.Widget_Locomotive_Menu_C.BndEvt__BPW_Train_TimeTable_Setup_K2Node_ComponentBoundEvent_7_OnStationUnhovered__DelegateSignature
	 */
	struct UWidget_Locomotive_Menu_C_BndEvt__BPW_Train_TimeTable_Setup_K2Node_ComponentBoundEvent_7_OnStationUnhovered__DelegateSignature_Params
	{
	public:
		struct FTimeTableStop                                      Station;                                                 // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function Widget_Locomotive_Menu.Widget_Locomotive_Menu_C.BndEvt__BPW_Train_TimeTable_Setup_K2Node_ComponentBoundEvent_9_OnStationHovered__DelegateSignature
	 */
	struct UWidget_Locomotive_Menu_C_BndEvt__BPW_Train_TimeTable_Setup_K2Node_ComponentBoundEvent_9_OnStationHovered__DelegateSignature_Params
	{
	public:
		struct FTimeTableStop                                      Station;                                                 // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function Widget_Locomotive_Menu.Widget_Locomotive_Menu_C.BndEvt__BPW_Train_TimeTable_ActiveList_K2Node_ComponentBoundEvent_8_OnStationHovered__DelegateSignature
	 */
	struct UWidget_Locomotive_Menu_C_BndEvt__BPW_Train_TimeTable_ActiveList_K2Node_ComponentBoundEvent_8_OnStationHovered__DelegateSignature_Params
	{
	public:
		struct FTimeTableStop                                      Station;                                                 // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function Widget_Locomotive_Menu.Widget_Locomotive_Menu_C.BndEvt__BPW_Train_TimeTable_ActiveList_K2Node_ComponentBoundEvent_10_OnStationUnhovered__DelegateSignature
	 */
	struct UWidget_Locomotive_Menu_C_BndEvt__BPW_Train_TimeTable_ActiveList_K2Node_ComponentBoundEvent_10_OnStationUnhovered__DelegateSignature_Params
	{
	public:
		struct FTimeTableStop                                      Station;                                                 // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function Widget_Locomotive_Menu.Widget_Locomotive_Menu_C.BndEvt__mCancelDockingButton_K2Node_ComponentBoundEvent_11_OnClicked__DelegateSignature
	 */
	struct UWidget_Locomotive_Menu_C_BndEvt__mCancelDockingButton_K2Node_ComponentBoundEvent_11_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function Widget_Locomotive_Menu.Widget_Locomotive_Menu_C.OnDockingStateChanged
	 */
	struct UWidget_Locomotive_Menu_C_OnDockingStateChanged_Params
	{
	public:
		ETrainDockingState                                         State;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_Locomotive_Menu.Widget_Locomotive_Menu_C.BndEvt__Widget_Locomotive_Menu_Widget_Map_K2Node_ComponentBoundEvent_12_ZoomChanged__DelegateSignature
	 */
	struct UWidget_Locomotive_Menu_C_BndEvt__Widget_Locomotive_Menu_Widget_Map_K2Node_ComponentBoundEvent_12_ZoomChanged__DelegateSignature_Params
	{	};

	/**
	 * Function Widget_Locomotive_Menu.Widget_Locomotive_Menu_C.BndEvt__Widget_Locomotive_Menu_mZoomSlider_K2Node_ComponentBoundEvent_13_OnFloatValueChangedEvent__DelegateSignature
	 */
	struct UWidget_Locomotive_Menu_C_BndEvt__Widget_Locomotive_Menu_mZoomSlider_K2Node_ComponentBoundEvent_13_OnFloatValueChangedEvent__DelegateSignature_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_Locomotive_Menu.Widget_Locomotive_Menu_C.ExecuteUbergraph_Widget_Locomotive_Menu
	 */
	struct UWidget_Locomotive_Menu_C_ExecuteUbergraph_Widget_Locomotive_Menu_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_Locomotive_Menu.Widget_Locomotive_Menu_C.OnMenuClosed__DelegateSignature
	 */
	struct UWidget_Locomotive_Menu_C_OnMenuClosed__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
