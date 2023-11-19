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
	 * Function BPW_CurrentFluidInfo.BPW_CurrentFluidInfo_C.SetCurrentContainerTypeText
	 */
	struct UBPW_CurrentFluidInfo_C_SetCurrentContainerTypeText_Params
	{
	public:
		class FText                                                mCurrentTypeOfContainerText;                             // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BPW_CurrentFluidInfo.BPW_CurrentFluidInfo_C.SetCurrentAmountText
	 */
	struct UBPW_CurrentFluidInfo_C_SetCurrentAmountText_Params
	{
	public:
		class FText                                                mCurrentAmountText;                                      // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class FText                                                mMaxAmountText;                                          // 0x0018(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BPW_CurrentFluidInfo.BPW_CurrentFluidInfo_C.Set Fluid Name Text
	 */
	struct UBPW_CurrentFluidInfo_C_SetFluidNameText_Params
	{
	public:
		class FText                                                mFluidNameText;                                          // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BPW_CurrentFluidInfo.BPW_CurrentFluidInfo_C.SetFluidIconObject
	 */
	struct UBPW_CurrentFluidInfo_C_SetFluidIconObject_Params
	{
	public:
		class UObject*                                             mFluidIconObject;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_7IU3[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPW_CurrentFluidInfo.BPW_CurrentFluidInfo_C.PreConstruct
	 */
	struct UBPW_CurrentFluidInfo_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_CurrentFluidInfo.BPW_CurrentFluidInfo_C.ExecuteUbergraph_BPW_CurrentFluidInfo
	 */
	struct UBPW_CurrentFluidInfo_C_ExecuteUbergraph_BPW_CurrentFluidInfo_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
