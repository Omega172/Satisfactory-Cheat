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
	 * Function BPW_SignSetting_Icon.BPW_SignSetting_Icon_C.SetIconName
	 */
	struct UBPW_SignSetting_Icon_C_SetIconName_Params
	{
	public:
		class FText                                                mIconName;                                               // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BPW_SignSetting_Icon.BPW_SignSetting_Icon_C.UpdateInfo
	 */
	struct UBPW_SignSetting_Icon_C_UpdateInfo_Params
	{
	public:
		int32_t                                                    mIconID;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_HRJ2[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UObject*                                             TextureObject;                                           // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		class FText                                                IconName;                                                // 0x0010(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BPW_SignSetting_Icon.BPW_SignSetting_Icon_C.SetIcon
	 */
	struct UBPW_SignSetting_Icon_C_SetIcon_Params
	{
	public:
		class UObject*                                             TextureObject;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_SignSetting_Icon.BPW_SignSetting_Icon_C.PreConstruct
	 */
	struct UBPW_SignSetting_Icon_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_SignSetting_Icon.BPW_SignSetting_Icon_C.BndEvt__BPW_SignSettingContainer_K2Node_ComponentBoundEvent_1_OnButtonClicked__DelegateSignature
	 */
	struct UBPW_SignSetting_Icon_C_BndEvt__BPW_SignSettingContainer_K2Node_ComponentBoundEvent_1_OnButtonClicked__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_SignSetting_Icon.BPW_SignSetting_Icon_C.ExecuteUbergraph_BPW_SignSetting_Icon
	 */
	struct UBPW_SignSetting_Icon_C_ExecuteUbergraph_BPW_SignSetting_Icon_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_SignSetting_Icon.BPW_SignSetting_Icon_C.OnBrowserOpened__DelegateSignature
	 */
	struct UBPW_SignSetting_Icon_C_OnBrowserOpened__DelegateSignature_Params
	{
	public:
		class FString                                              IconKey;                                                 // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		int32_t                                                    IconID;                                                  // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
