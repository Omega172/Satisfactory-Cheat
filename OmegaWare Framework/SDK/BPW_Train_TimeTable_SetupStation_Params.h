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
	 * Function BPW_Train_TimeTable_SetupStation.BPW_Train_TimeTable_SetupStation_C.OnMouseButtonDown
	 */
	struct UBPW_Train_TimeTable_SetupStation_C_OnMouseButtonDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0078)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FEventReply                                         ReturnValue;                                             // 0x00B0(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BPW_Train_TimeTable_SetupStation.BPW_Train_TimeTable_SetupStation_C.OnDragDetected
	 */
	struct UBPW_Train_TimeTable_SetupStation_C_OnDragDetected_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       PointerEvent;                                            // 0x0038(0x0078)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		class UDragDropOperation*                                  Operation;                                               // 0x00B0(0x0008)  (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_Train_TimeTable_SetupStation.BPW_Train_TimeTable_SetupStation_C.UpdateInfo
	 */
	struct UBPW_Train_TimeTable_SetupStation_C_UpdateInfo_Params
	{	};

	/**
	 * Function BPW_Train_TimeTable_SetupStation.BPW_Train_TimeTable_SetupStation_C.Construct
	 */
	struct UBPW_Train_TimeTable_SetupStation_C_Construct_Params
	{	};

	/**
	 * Function BPW_Train_TimeTable_SetupStation.BPW_Train_TimeTable_SetupStation_C.OnMouseEnter
	 */
	struct UBPW_Train_TimeTable_SetupStation_C_OnMouseEnter_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0078)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BPW_Train_TimeTable_SetupStation.BPW_Train_TimeTable_SetupStation_C.OnMouseLeave
	 */
	struct UBPW_Train_TimeTable_SetupStation_C_OnMouseLeave_Params
	{
	public:
		struct FPointerEvent                                       MouseEvent;                                              // 0x0000(0x0078)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BPW_Train_TimeTable_SetupStation.BPW_Train_TimeTable_SetupStation_C.BndEvt__Button_88_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UBPW_Train_TimeTable_SetupStation_C_BndEvt__Button_88_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_Train_TimeTable_SetupStation.BPW_Train_TimeTable_SetupStation_C.BndEvt__mEditButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
	 */
	struct UBPW_Train_TimeTable_SetupStation_C_BndEvt__mEditButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_Train_TimeTable_SetupStation.BPW_Train_TimeTable_SetupStation_C.BndEvt__mAddButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 */
	struct UBPW_Train_TimeTable_SetupStation_C_BndEvt__mAddButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_Train_TimeTable_SetupStation.BPW_Train_TimeTable_SetupStation_C.BndEvt__mAddButton_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature
	 */
	struct UBPW_Train_TimeTable_SetupStation_C_BndEvt__mAddButton_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_Train_TimeTable_SetupStation.BPW_Train_TimeTable_SetupStation_C.ExecuteUbergraph_BPW_Train_TimeTable_SetupStation
	 */
	struct UBPW_Train_TimeTable_SetupStation_C_ExecuteUbergraph_BPW_Train_TimeTable_SetupStation_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_Train_TimeTable_SetupStation.BPW_Train_TimeTable_SetupStation_C.OnAddClicked__DelegateSignature
	 */
	struct UBPW_Train_TimeTable_SetupStation_C_OnAddClicked__DelegateSignature_Params
	{
	public:
		struct FTimeTableStop                                      Station;                                                 // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BPW_Train_TimeTable_SetupStation.BPW_Train_TimeTable_SetupStation_C.OnEditClicked__DelegateSignature
	 */
	struct UBPW_Train_TimeTable_SetupStation_C_OnEditClicked__DelegateSignature_Params
	{
	public:
		struct FTimeTableStop                                      Station;                                                 // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class UBPW_Train_TimeTable_SetupStation_C*                 StationWidget;                                           // 0x0038(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_Train_TimeTable_SetupStation.BPW_Train_TimeTable_SetupStation_C.OnUnhovered__DelegateSignature
	 */
	struct UBPW_Train_TimeTable_SetupStation_C_OnUnhovered__DelegateSignature_Params
	{
	public:
		struct FTimeTableStop                                      TrainStation;                                            // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BPW_Train_TimeTable_SetupStation.BPW_Train_TimeTable_SetupStation_C.OnHovered__DelegateSignature
	 */
	struct UBPW_Train_TimeTable_SetupStation_C_OnHovered__DelegateSignature_Params
	{
	public:
		struct FTimeTableStop                                      TrainStation;                                            // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BPW_Train_TimeTable_SetupStation.BPW_Train_TimeTable_SetupStation_C.OnRemoveClicked__DelegateSignature
	 */
	struct UBPW_Train_TimeTable_SetupStation_C_OnRemoveClicked__DelegateSignature_Params
	{
	public:
		class UBPW_Train_TimeTable_SetupStation_C*                 StationWidget;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_Train_TimeTable_SetupStation.BPW_Train_TimeTable_SetupStation_C.OnDragBegin__DelegateSignature
	 */
	struct UBPW_Train_TimeTable_SetupStation_C_OnDragBegin__DelegateSignature_Params
	{
	public:
		class UBPW_Train_TimeTable_SetupStation_C*                 SetupStationWidget;                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
