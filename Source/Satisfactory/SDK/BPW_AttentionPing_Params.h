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
	 * Function BPW_AttentionPing.BPW_AttentionPing_C.SetOffScreen
	 */
	struct UBPW_AttentionPing_C_SetOffScreen_Params
	{
	public:
		bool                                                       IsOffScreen;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_AttentionPing.BPW_AttentionPing_C.Construct
	 */
	struct UBPW_AttentionPing_C_Construct_Params
	{	};

	/**
	 * Function BPW_AttentionPing.BPW_AttentionPing_C.OnRemoveFromParent
	 */
	struct UBPW_AttentionPing_C_OnRemoveFromParent_Params
	{	};

	/**
	 * Function BPW_AttentionPing.BPW_AttentionPing_C.Tick
	 */
	struct UBPW_AttentionPing_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_AttentionPing.BPW_AttentionPing_C.OnObjectOnScreenDetected
	 */
	struct UBPW_AttentionPing_C_OnObjectOnScreenDetected_Params
	{	};

	/**
	 * Function BPW_AttentionPing.BPW_AttentionPing_C.OnObjectOffScreenDetected
	 */
	struct UBPW_AttentionPing_C_OnObjectOffScreenDetected_Params
	{	};

	/**
	 * Function BPW_AttentionPing.BPW_AttentionPing_C.OnObjectInCenterAreaDetected
	 */
	struct UBPW_AttentionPing_C_OnObjectInCenterAreaDetected_Params
	{	};

	/**
	 * Function BPW_AttentionPing.BPW_AttentionPing_C.OnObjectInCenterAreaNotDetected
	 */
	struct UBPW_AttentionPing_C_OnObjectInCenterAreaNotDetected_Params
	{	};

	/**
	 * Function BPW_AttentionPing.BPW_AttentionPing_C.ExecuteUbergraph_BPW_AttentionPing
	 */
	struct UBPW_AttentionPing_C_ExecuteUbergraph_BPW_AttentionPing_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_SBTA[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
