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
	 * Function BPW_ResourceSink_InfoBox.BPW_ResourceSink_InfoBox_C.SetIsDarkMode
	 */
	struct UBPW_ResourceSink_InfoBox_C_SetIsDarkMode_Params
	{
	public:
		bool                                                       mIsDarkMode;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_KFGA[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPW_ResourceSink_InfoBox.BPW_ResourceSink_InfoBox_C.UpdateTooltipInfo
	 */
	struct UBPW_ResourceSink_InfoBox_C_UpdateTooltipInfo_Params
	{
	public:
		class UClass*                                              schematic;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_ResourceSink_InfoBox.BPW_ResourceSink_InfoBox_C.PreConstruct
	 */
	struct UBPW_ResourceSink_InfoBox_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_ResourceSink_InfoBox.BPW_ResourceSink_InfoBox_C.ExecuteUbergraph_BPW_ResourceSink_InfoBox
	 */
	struct UBPW_ResourceSink_InfoBox_C_ExecuteUbergraph_BPW_ResourceSink_InfoBox_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
