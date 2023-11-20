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
	 * Function BPW_Train_TimeTable_Station.BPW_Train_TimeTable_Station_C.SetIsSelfDrivingEnabled
	 */
	struct UBPW_Train_TimeTable_Station_C_SetIsSelfDrivingEnabled_Params
	{
	public:
		bool                                                       mIsSelfDrivingEnabled;                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_Train_TimeTable_Station.BPW_Train_TimeTable_Station_C.SetOnlyStationPadding
	 */
	struct UBPW_Train_TimeTable_Station_C_SetOnlyStationPadding_Params
	{
	public:
		bool                                                       IsOnlyStation;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_35HO[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPW_Train_TimeTable_Station.BPW_Train_TimeTable_Station_C.SetIsOnlyStation
	 */
	struct UBPW_Train_TimeTable_Station_C_SetIsOnlyStation_Params
	{	};

	/**
	 * Function BPW_Train_TimeTable_Station.BPW_Train_TimeTable_Station_C.PlayDestinationAnim
	 */
	struct UBPW_Train_TimeTable_Station_C_PlayDestinationAnim_Params
	{
	public:
		bool                                                       Animate;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_726X[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPW_Train_TimeTable_Station.BPW_Train_TimeTable_Station_C.PlayRemoveAnim
	 */
	struct UBPW_Train_TimeTable_Station_C_PlayRemoveAnim_Params
	{
	public:
		bool                                                       MinimizeAnim;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Animate;                                                 // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_F4YN[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPW_Train_TimeTable_Station.BPW_Train_TimeTable_Station_C.PlayReverseExpandAnim
	 */
	struct UBPW_Train_TimeTable_Station_C_PlayReverseExpandAnim_Params
	{
	public:
		bool                                                       Animate;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_6Z14[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPW_Train_TimeTable_Station.BPW_Train_TimeTable_Station_C.PlayExpandAnim
	 */
	struct UBPW_Train_TimeTable_Station_C_PlayExpandAnim_Params
	{
	public:
		bool                                                       Animate;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_U55V[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPW_Train_TimeTable_Station.BPW_Train_TimeTable_Station_C.PlayAddAnim
	 */
	struct UBPW_Train_TimeTable_Station_C_PlayAddAnim_Params
	{
	public:
		bool                                                       Animate;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_KA6Y[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPW_Train_TimeTable_Station.BPW_Train_TimeTable_Station_C.SetIsDestination
	 */
	struct UBPW_Train_TimeTable_Station_C_SetIsDestination_Params
	{
	public:
		bool                                                       Animate;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_Train_TimeTable_Station.BPW_Train_TimeTable_Station_C.RemoveAnimFinished
	 */
	struct UBPW_Train_TimeTable_Station_C_RemoveAnimFinished_Params
	{	};

	/**
	 * Function BPW_Train_TimeTable_Station.BPW_Train_TimeTable_Station_C.SetIsDeparture
	 */
	struct UBPW_Train_TimeTable_Station_C_SetIsDeparture_Params
	{
	public:
		bool                                                       mIsDeparture;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Animate;                                                 // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_Train_TimeTable_Station.BPW_Train_TimeTable_Station_C.UpdateName
	 */
	struct UBPW_Train_TimeTable_Station_C_UpdateName_Params
	{	};

	/**
	 * Function BPW_Train_TimeTable_Station.BPW_Train_TimeTable_Station_C.PreConstruct
	 */
	struct UBPW_Train_TimeTable_Station_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_Train_TimeTable_Station.BPW_Train_TimeTable_Station_C.OnBeginRemoveAnim
	 */
	struct UBPW_Train_TimeTable_Station_C_OnBeginRemoveAnim_Params
	{
	public:
		bool                                                       Animate;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsNextStaionAfterMove;                                   // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_Train_TimeTable_Station.BPW_Train_TimeTable_Station_C.Destruct
	 */
	struct UBPW_Train_TimeTable_Station_C_Destruct_Params
	{	};

	/**
	 * Function BPW_Train_TimeTable_Station.BPW_Train_TimeTable_Station_C.Construct
	 */
	struct UBPW_Train_TimeTable_Station_C_Construct_Params
	{	};

	/**
	 * Function BPW_Train_TimeTable_Station.BPW_Train_TimeTable_Station_C.BndEvt__mButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
	 */
	struct UBPW_Train_TimeTable_Station_C_BndEvt__mButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_Train_TimeTable_Station.BPW_Train_TimeTable_Station_C.BndEvt__mButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 */
	struct UBPW_Train_TimeTable_Station_C_BndEvt__mButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_Train_TimeTable_Station.BPW_Train_TimeTable_Station_C.ExecuteUbergraph_BPW_Train_TimeTable_Station
	 */
	struct UBPW_Train_TimeTable_Station_C_ExecuteUbergraph_BPW_Train_TimeTable_Station_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_Train_TimeTable_Station.BPW_Train_TimeTable_Station_C.OnUnhovered__DelegateSignature
	 */
	struct UBPW_Train_TimeTable_Station_C_OnUnhovered__DelegateSignature_Params
	{
	public:
		struct FTimeTableStop                                      Stop;                                                    // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BPW_Train_TimeTable_Station.BPW_Train_TimeTable_Station_C.OnHovered__DelegateSignature
	 */
	struct UBPW_Train_TimeTable_Station_C_OnHovered__DelegateSignature_Params
	{
	public:
		struct FTimeTableStop                                      Stop;                                                    // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BPW_Train_TimeTable_Station.BPW_Train_TimeTable_Station_C.OnRemoveAnimFinished__DelegateSignature
	 */
	struct UBPW_Train_TimeTable_Station_C_OnRemoveAnimFinished__DelegateSignature_Params
	{
	public:
		class UBPW_Train_TimeTable_Station_C*                      TimeTableStation;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
		bool                                                       Animate;                                                 // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
