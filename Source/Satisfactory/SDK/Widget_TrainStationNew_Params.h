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
	 * Function Widget_TrainStationNew.Widget_TrainStationNew_C.UpdateZoomSlider
	 */
	struct UWidget_TrainStationNew_C_UpdateZoomSlider_Params
	{	};

	/**
	 * Function Widget_TrainStationNew.Widget_TrainStationNew_C.NormalizedValueToZoomValue
	 */
	struct UWidget_TrainStationNew_C_NormalizedValueToZoomValue_Params
	{
	public:
		double                                                     NormalizedValue;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector2D                                           ZoomValue;                                               // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_TrainStationNew.Widget_TrainStationNew_C.SetMapFilters
	 */
	struct UWidget_TrainStationNew_C_SetMapFilters_Params
	{	};

	/**
	 * Function Widget_TrainStationNew.Widget_TrainStationNew_C.OnTrainUnhovered
	 */
	struct UWidget_TrainStationNew_C_OnTrainUnhovered_Params
	{
	public:
		class AFGTrain*                                            train;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_TrainStationNew.Widget_TrainStationNew_C.OnTrainHovered
	 */
	struct UWidget_TrainStationNew_C_OnTrainHovered_Params
	{
	public:
		class AFGTrain*                                            train;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_TrainStationNew.Widget_TrainStationNew_C.ClearSeach
	 */
	struct UWidget_TrainStationNew_C_ClearSeach_Params
	{	};

	/**
	 * Function Widget_TrainStationNew.Widget_TrainStationNew_C.OnSearch
	 */
	struct UWidget_TrainStationNew_C_OnSearch_Params
	{
	public:
		class FText                                                SearchText;                                              // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function Widget_TrainStationNew.Widget_TrainStationNew_C.OnStationMenuClosed
	 */
	struct UWidget_TrainStationNew_C_OnStationMenuClosed_Params
	{	};

	/**
	 * Function Widget_TrainStationNew.Widget_TrainStationNew_C.OnStationUnHovered
	 */
	struct UWidget_TrainStationNew_C_OnStationUnHovered_Params
	{
	public:
		struct FTimeTableStop                                      TrainStation;                                            // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function Widget_TrainStationNew.Widget_TrainStationNew_C.OnStationHovered
	 */
	struct UWidget_TrainStationNew_C_OnStationHovered_Params
	{
	public:
		struct FTimeTableStop                                      TrainStation;                                            // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function Widget_TrainStationNew.Widget_TrainStationNew_C.GenerateStationList
	 */
	struct UWidget_TrainStationNew_C_GenerateStationList_Params
	{	};

	/**
	 * Function Widget_TrainStationNew.Widget_TrainStationNew_C.SetRandomInfoMessage
	 */
	struct UWidget_TrainStationNew_C_SetRandomInfoMessage_Params
	{	};

	/**
	 * Function Widget_TrainStationNew.Widget_TrainStationNew_C.UpdatePowerStatus
	 */
	struct UWidget_TrainStationNew_C_UpdatePowerStatus_Params
	{
	public:
		bool                                                       mHasPowerStatus;                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_TrainStationNew.Widget_TrainStationNew_C.ShowLocomotiveMenu
	 */
	struct UWidget_TrainStationNew_C_ShowLocomotiveMenu_Params
	{
	public:
		class AFGTrain*                                            mTrain;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_TrainStationNew.Widget_TrainStationNew_C.GenerateTrainList
	 */
	struct UWidget_TrainStationNew_C_GenerateTrainList_Params
	{	};

	/**
	 * Function Widget_TrainStationNew.Widget_TrainStationNew_C.GetStationName
	 */
	struct UWidget_TrainStationNew_C_GetStationName_Params
	{
	public:
		class FText                                                Name;                                                    // 0x0000(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function Widget_TrainStationNew.Widget_TrainStationNew_C.SetStationName
	 */
	struct UWidget_TrainStationNew_C_SetStationName_Params
	{
	public:
		class FText                                                Name;                                                    // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function Widget_TrainStationNew.Widget_TrainStationNew_C.OnGetPowerCircuit
	 */
	struct UWidget_TrainStationNew_C_OnGetPowerCircuit_Params
	{
	public:
		class UFGPowerCircuit*                                     ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_TrainStationNew.Widget_TrainStationNew_C.BndEvt__mStationNameInput_K2Node_ComponentBoundEvent_0_OnEditableTextCommittedEvent__DelegateSignature
	 */
	struct UWidget_TrainStationNew_C_BndEvt__mStationNameInput_K2Node_ComponentBoundEvent_0_OnEditableTextCommittedEvent__DelegateSignature_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		ETextCommit                                                CommitMethod;                                            // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_TrainStationNew.Widget_TrainStationNew_C.OnTrainButtonClicked
	 */
	struct UWidget_TrainStationNew_C_OnTrainButtonClicked_Params
	{
	public:
		class UWidget_TrainButton_C*                               Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_TrainStationNew.Widget_TrainStationNew_C.OnLocomotiveMenuClosed
	 */
	struct UWidget_TrainStationNew_C_OnLocomotiveMenuClosed_Params
	{	};

	/**
	 * Function Widget_TrainStationNew.Widget_TrainStationNew_C.OnTrainNameChanged
	 */
	struct UWidget_TrainStationNew_C_OnTrainNameChanged_Params
	{	};

	/**
	 * Function Widget_TrainStationNew.Widget_TrainStationNew_C.OnPowerChanged
	 */
	struct UWidget_TrainStationNew_C_OnPowerChanged_Params
	{
	public:
		bool                                                       State;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_TrainStationNew.Widget_TrainStationNew_C.BndEvt__mStationNameInput_K2Node_ComponentBoundEvent_1_OnEditableTextChangedEvent__DelegateSignature
	 */
	struct UWidget_TrainStationNew_C_BndEvt__mStationNameInput_K2Node_ComponentBoundEvent_1_OnEditableTextChangedEvent__DelegateSignature_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function Widget_TrainStationNew.Widget_TrainStationNew_C.AutoScrollInfoMessage
	 */
	struct UWidget_TrainStationNew_C_AutoScrollInfoMessage_Params
	{	};

	/**
	 * Function Widget_TrainStationNew.Widget_TrainStationNew_C.Construct
	 */
	struct UWidget_TrainStationNew_C_Construct_Params
	{	};

	/**
	 * Function Widget_TrainStationNew.Widget_TrainStationNew_C.BndEvt__Widget_InputBox_K2Node_ComponentBoundEvent_2_OnTextChanged__DelegateSignature
	 */
	struct UWidget_TrainStationNew_C_BndEvt__Widget_InputBox_K2Node_ComponentBoundEvent_2_OnTextChanged__DelegateSignature_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function Widget_TrainStationNew.Widget_TrainStationNew_C.BndEvt__Widget_InputBox_K2Node_ComponentBoundEvent_3_OnTextComitted__DelegateSignature
	 */
	struct UWidget_TrainStationNew_C_BndEvt__Widget_InputBox_K2Node_ComponentBoundEvent_3_OnTextComitted__DelegateSignature_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		ETextCommit                                                CommitMethod;                                            // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_TrainStationNew.Widget_TrainStationNew_C.BndEvt__mTrainStationWindow_K2Node_ComponentBoundEvent_4_OnTabButtonClicked__DelegateSignature
	 */
	struct UWidget_TrainStationNew_C_BndEvt__mTrainStationWindow_K2Node_ComponentBoundEvent_4_OnTabButtonClicked__DelegateSignature_Params
	{
	public:
		int32_t                                                    ButtonIndex;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_TrainStationNew.Widget_TrainStationNew_C.BndEvt__Widget_TrainStationNew_mZoomSlider_K2Node_ComponentBoundEvent_5_OnFloatValueChangedEvent__DelegateSignature
	 */
	struct UWidget_TrainStationNew_C_BndEvt__Widget_TrainStationNew_mZoomSlider_K2Node_ComponentBoundEvent_5_OnFloatValueChangedEvent__DelegateSignature_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_TrainStationNew.Widget_TrainStationNew_C.BndEvt__Widget_TrainStationNew_Widget_Map_K2Node_ComponentBoundEvent_6_ZoomChanged__DelegateSignature
	 */
	struct UWidget_TrainStationNew_C_BndEvt__Widget_TrainStationNew_Widget_Map_K2Node_ComponentBoundEvent_6_ZoomChanged__DelegateSignature_Params
	{	};

	/**
	 * Function Widget_TrainStationNew.Widget_TrainStationNew_C.ExecuteUbergraph_Widget_TrainStationNew
	 */
	struct UWidget_TrainStationNew_C_ExecuteUbergraph_Widget_TrainStationNew_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
