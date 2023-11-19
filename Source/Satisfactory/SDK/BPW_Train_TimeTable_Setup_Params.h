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
	 * Function BPW_Train_TimeTable_Setup.BPW_Train_TimeTable_Setup_C.StationUnhovered
	 */
	struct UBPW_Train_TimeTable_Setup_C_StationUnhovered_Params
	{
	public:
		struct FTimeTableStop                                      TrainStation;                                            // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BPW_Train_TimeTable_Setup.BPW_Train_TimeTable_Setup_C.StationHovered
	 */
	struct UBPW_Train_TimeTable_Setup_C_StationHovered_Params
	{
	public:
		struct FTimeTableStop                                      TrainStation;                                            // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BPW_Train_TimeTable_Setup.BPW_Train_TimeTable_Setup_C.StationAddClicked
	 */
	struct UBPW_Train_TimeTable_Setup_C_StationAddClicked_Params
	{
	public:
		struct FTimeTableStop                                      Station;                                                 // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BPW_Train_TimeTable_Setup.BPW_Train_TimeTable_Setup_C.StationEditClicked
	 */
	struct UBPW_Train_TimeTable_Setup_C_StationEditClicked_Params
	{
	public:
		struct FTimeTableStop                                      Station;                                                 // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class UBPW_Train_TimeTable_SetupStation_C*                 StationWidget;                                           // 0x0038(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_Train_TimeTable_Setup.BPW_Train_TimeTable_Setup_C.ClearSearch
	 */
	struct UBPW_Train_TimeTable_Setup_C_ClearSearch_Params
	{	};

	/**
	 * Function BPW_Train_TimeTable_Setup.BPW_Train_TimeTable_Setup_C.OnSearch
	 */
	struct UBPW_Train_TimeTable_Setup_C_OnSearch_Params
	{
	public:
		class FText                                                SearchFor;                                               // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BPW_Train_TimeTable_Setup.BPW_Train_TimeTable_Setup_C.AddNewCurrentStation
	 */
	struct UBPW_Train_TimeTable_Setup_C_AddNewCurrentStation_Params
	{
	public:
		int32_t                                                    ChildPosition;                                           // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_TQ6X[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FTimeTableStop                                      mStation;                                                // 0x0008(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BPW_Train_TimeTable_Setup.BPW_Train_TimeTable_Setup_C.OnSetupStationRemoved
	 */
	struct UBPW_Train_TimeTable_Setup_C_OnSetupStationRemoved_Params
	{
	public:
		class UBPW_Train_TimeTable_SetupStation_C*                 StationWidget;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_Train_TimeTable_Setup.BPW_Train_TimeTable_Setup_C.GetCurrentStations
	 */
	struct UBPW_Train_TimeTable_Setup_C_GetCurrentStations_Params
	{
	public:
		TArray<struct FTimeTableStop>                              Stations;                                                // 0x0000(0x0010)  (Parm, OutParm)
	};

	/**
	 * Function BPW_Train_TimeTable_Setup.BPW_Train_TimeTable_Setup_C.OnSetupStationDragBegin
	 */
	struct UBPW_Train_TimeTable_Setup_C_OnSetupStationDragBegin_Params
	{
	public:
		class UBPW_Train_TimeTable_SetupStation_C*                 SetupStationWidget;                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_Train_TimeTable_Setup.BPW_Train_TimeTable_Setup_C.SetTimeTable
	 */
	struct UBPW_Train_TimeTable_Setup_C_SetTimeTable_Params
	{
	public:
		class AFGRailroadTimeTable*                                mTimeTable;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		class AFGTrain*                                            train;                                                   // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_Train_TimeTable_Setup.BPW_Train_TimeTable_Setup_C.PopulateCurrentStations
	 */
	struct UBPW_Train_TimeTable_Setup_C_PopulateCurrentStations_Params
	{	};

	/**
	 * Function BPW_Train_TimeTable_Setup.BPW_Train_TimeTable_Setup_C.PopulateAvailableStations
	 */
	struct UBPW_Train_TimeTable_Setup_C_PopulateAvailableStations_Params
	{	};

	/**
	 * Function BPW_Train_TimeTable_Setup.BPW_Train_TimeTable_Setup_C.Construct
	 */
	struct UBPW_Train_TimeTable_Setup_C_Construct_Params
	{	};

	/**
	 * Function BPW_Train_TimeTable_Setup.BPW_Train_TimeTable_Setup_C.BndEvt__mSaveButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
	 */
	struct UBPW_Train_TimeTable_Setup_C_BndEvt__mSaveButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_Train_TimeTable_Setup.BPW_Train_TimeTable_Setup_C.BndEvt__mDiscardButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
	 */
	struct UBPW_Train_TimeTable_Setup_C_BndEvt__mDiscardButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_Train_TimeTable_Setup.BPW_Train_TimeTable_Setup_C.BndEvt__Widget_InputBox_K2Node_ComponentBoundEvent_3_OnTextChanged__DelegateSignature
	 */
	struct UBPW_Train_TimeTable_Setup_C_BndEvt__Widget_InputBox_K2Node_ComponentBoundEvent_3_OnTextChanged__DelegateSignature_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BPW_Train_TimeTable_Setup.BPW_Train_TimeTable_Setup_C.BndEvt__Widget_InputBox_K2Node_ComponentBoundEvent_4_OnTextComitted__DelegateSignature
	 */
	struct UBPW_Train_TimeTable_Setup_C_BndEvt__Widget_InputBox_K2Node_ComponentBoundEvent_4_OnTextComitted__DelegateSignature_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		ETextCommit                                                CommitMethod;                                            // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_Train_TimeTable_Setup.BPW_Train_TimeTable_Setup_C.BndEvt__mCurrentTimeTable_K2Node_ComponentBoundEvent_5_OnOutsideObjectDropped__DelegateSignature
	 */
	struct UBPW_Train_TimeTable_Setup_C_BndEvt__mCurrentTimeTable_K2Node_ComponentBoundEvent_5_OnOutsideObjectDropped__DelegateSignature_Params
	{
	public:
		int32_t                                                    Position;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_Train_TimeTable_Setup.BPW_Train_TimeTable_Setup_C.ExecuteUbergraph_BPW_Train_TimeTable_Setup
	 */
	struct UBPW_Train_TimeTable_Setup_C_ExecuteUbergraph_BPW_Train_TimeTable_Setup_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_ZNG9[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPW_Train_TimeTable_Setup.BPW_Train_TimeTable_Setup_C.OnStationUnhovered__DelegateSignature
	 */
	struct UBPW_Train_TimeTable_Setup_C_OnStationUnhovered__DelegateSignature_Params
	{
	public:
		struct FTimeTableStop                                      Station;                                                 // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BPW_Train_TimeTable_Setup.BPW_Train_TimeTable_Setup_C.OnStationHovered__DelegateSignature
	 */
	struct UBPW_Train_TimeTable_Setup_C_OnStationHovered__DelegateSignature_Params
	{
	public:
		struct FTimeTableStop                                      Station;                                                 // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BPW_Train_TimeTable_Setup.BPW_Train_TimeTable_Setup_C.OnStationEditClicked__DelegateSignature
	 */
	struct UBPW_Train_TimeTable_Setup_C_OnStationEditClicked__DelegateSignature_Params
	{
	public:
		struct FTimeTableStop                                      mStation;                                                // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class UBPW_Train_TimeTable_SetupStation_C*                 StationWidget;                                           // 0x0038(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_Train_TimeTable_Setup.BPW_Train_TimeTable_Setup_C.OnSave__DelegateSignature
	 */
	struct UBPW_Train_TimeTable_Setup_C_OnSave__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_Train_TimeTable_Setup.BPW_Train_TimeTable_Setup_C.OnDiscard__DelegateSignature
	 */
	struct UBPW_Train_TimeTable_Setup_C_OnDiscard__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
