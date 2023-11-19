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
	 * Function BPW_TetrominoBonusTile.BPW_TetrominoBonusTile_C.OnClaimed
	 */
	struct UBPW_TetrominoBonusTile_C_OnClaimed_Params
	{	};

	/**
	 * Function BPW_TetrominoBonusTile.BPW_TetrominoBonusTile_C.Construct
	 */
	struct UBPW_TetrominoBonusTile_C_Construct_Params
	{	};

	/**
	 * Function BPW_TetrominoBonusTile.BPW_TetrominoBonusTile_C.Tick
	 */
	struct UBPW_TetrominoBonusTile_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_TetrominoBonusTile.BPW_TetrominoBonusTile_C.Destruct
	 */
	struct UBPW_TetrominoBonusTile_C_Destruct_Params
	{	};

	/**
	 * Function BPW_TetrominoBonusTile.BPW_TetrominoBonusTile_C.ExecuteUbergraph_BPW_TetrominoBonusTile
	 */
	struct UBPW_TetrominoBonusTile_C_ExecuteUbergraph_BPW_TetrominoBonusTile_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_4PIK[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPW_TetrominoBonusTile.BPW_TetrominoBonusTile_C.OnDestroyed__DelegateSignature
	 */
	struct UBPW_TetrominoBonusTile_C_OnDestroyed__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
