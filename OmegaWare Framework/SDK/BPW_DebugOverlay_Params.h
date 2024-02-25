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
	 * Function BPW_DebugOverlay.BPW_DebugOverlay_C.UpdateTextRows
	 */
	struct UBPW_DebugOverlay_C_UpdateTextRows_Params
	{
	public:
		TArray<class FString>                                      debugOverlayData;                                        // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BPW_DebugOverlay.BPW_DebugOverlay_C.UpdateDebugOverlayData
	 */
	struct UBPW_DebugOverlay_C_UpdateDebugOverlayData_Params
	{
	public:
		TArray<class FString>                                      debugOverlayData;                                        // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BPW_DebugOverlay.BPW_DebugOverlay_C.ExecuteUbergraph_BPW_DebugOverlay
	 */
	struct UBPW_DebugOverlay_C_ExecuteUbergraph_BPW_DebugOverlay_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_CTEZ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
