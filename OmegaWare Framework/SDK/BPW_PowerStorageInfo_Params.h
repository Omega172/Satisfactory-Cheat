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
	 * Function BPW_PowerStorageInfo.BPW_PowerStorageInfo_C.SetTimeLeftIcon
	 */
	struct UBPW_PowerStorageInfo_C_SetTimeLeftIcon_Params
	{
	public:
		bool                                                       IsCharging;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_PowerStorageInfo.BPW_PowerStorageInfo_C.ShowHideInfoButton
	 */
	struct UBPW_PowerStorageInfo_C_ShowHideInfoButton_Params
	{
	public:
		bool                                                       Show;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_PowerStorageInfo.BPW_PowerStorageInfo_C.ShowHideInfoNoAnim
	 */
	struct UBPW_PowerStorageInfo_C_ShowHideInfoNoAnim_Params
	{
	public:
		bool                                                       ShowInfo;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_PowerStorageInfo.BPW_PowerStorageInfo_C.SetupMaterials
	 */
	struct UBPW_PowerStorageInfo_C_SetupMaterials_Params
	{	};

	/**
	 * Function BPW_PowerStorageInfo.BPW_PowerStorageInfo_C.ShowHideInfo
	 */
	struct UBPW_PowerStorageInfo_C_ShowHideInfo_Params
	{
	public:
		bool                                                       ShowInfo;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_TKYL[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPW_PowerStorageInfo.BPW_PowerStorageInfo_C.Init
	 */
	struct UBPW_PowerStorageInfo_C_Init_Params
	{	};

	/**
	 * Function BPW_PowerStorageInfo.BPW_PowerStorageInfo_C.UpdateStats
	 */
	struct UBPW_PowerStorageInfo_C_UpdateStats_Params
	{
	public:
		double                                                     StoredCharge;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                                     ChargeRate;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                                     TimeLeft;                                                // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                                     MaxStorage;                                              // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EBatteryStatus                                             Status;                                                  // 0x0020(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_PowerStorageInfo.BPW_PowerStorageInfo_C.Construct
	 */
	struct UBPW_PowerStorageInfo_C_Construct_Params
	{	};

	/**
	 * Function BPW_PowerStorageInfo.BPW_PowerStorageInfo_C.BndEvt__mShowInfoButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UBPW_PowerStorageInfo_C_BndEvt__mShowInfoButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_PowerStorageInfo.BPW_PowerStorageInfo_C.PreConstruct
	 */
	struct UBPW_PowerStorageInfo_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_PowerStorageInfo.BPW_PowerStorageInfo_C.ExecuteUbergraph_BPW_PowerStorageInfo
	 */
	struct UBPW_PowerStorageInfo_C_ExecuteUbergraph_BPW_PowerStorageInfo_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_PowerStorageInfo.BPW_PowerStorageInfo_C.OnShowInfoClicked__DelegateSignature
	 */
	struct UBPW_PowerStorageInfo_C_OnShowInfoClicked__DelegateSignature_Params
	{
	public:
		bool                                                       ShowInfo;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
