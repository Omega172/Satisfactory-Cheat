#pragma once

/**
 * Name: Satisfactory
 * Version: Early_Access_CL#273254
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
	 * Function BPW_InworldMarker.BPW_InworldMarker_C.SetIconID
	 */
	struct UBPW_InworldMarker_C_SetIconID_Params
	{
	public:
		int32_t                                                    IconID;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_5HBX[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPW_InworldMarker.BPW_InworldMarker_C.Construct
	 */
	struct UBPW_InworldMarker_C_Construct_Params
	{	};

	/**
	 * Function BPW_InworldMarker.BPW_InworldMarker_C.Tick
	 */
	struct UBPW_InworldMarker_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_InworldMarker.BPW_InworldMarker_C.OnObjectInteractable
	 */
	struct UBPW_InworldMarker_C_OnObjectInteractable_Params
	{	};

	/**
	 * Function BPW_InworldMarker.BPW_InworldMarker_C.OnObjectNotInteractable
	 */
	struct UBPW_InworldMarker_C_OnObjectNotInteractable_Params
	{	};

	/**
	 * Function BPW_InworldMarker.BPW_InworldMarker_C.ExecuteUbergraph_BPW_InworldMarker
	 */
	struct UBPW_InworldMarker_C_ExecuteUbergraph_BPW_InworldMarker_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_LDXI[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
