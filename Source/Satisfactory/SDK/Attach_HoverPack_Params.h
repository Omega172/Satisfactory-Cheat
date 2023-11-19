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
	 * Function Attach_HoverPack.Attach_HoverPack_C.RemoveHoverPackVFX
	 */
	struct AAttach_HoverPack_C_RemoveHoverPackVFX_Params
	{	};

	/**
	 * Function Attach_HoverPack.Attach_HoverPack_C.SpawnHoverPackVFX
	 */
	struct AAttach_HoverPack_C_SpawnHoverPackVFX_Params
	{	};

	/**
	 * Function Attach_HoverPack.Attach_HoverPack_C.AnimationHoverDeActive
	 */
	struct AAttach_HoverPack_C_AnimationHoverDeActive_Params
	{	};

	/**
	 * Function Attach_HoverPack.Attach_HoverPack_C.AnimationHoverActive
	 */
	struct AAttach_HoverPack_C_AnimationHoverActive_Params
	{	};

	/**
	 * Function Attach_HoverPack.Attach_HoverPack_C.PlayHoverSound
	 */
	struct AAttach_HoverPack_C_PlayHoverSound_Params
	{	};

	/**
	 * Function Attach_HoverPack.Attach_HoverPack_C.StopEngineSound
	 */
	struct AAttach_HoverPack_C_StopEngineSound_Params
	{	};

	/**
	 * Function Attach_HoverPack.Attach_HoverPack_C.PlayFallingSound
	 */
	struct AAttach_HoverPack_C_PlayFallingSound_Params
	{	};

	/**
	 * Function Attach_HoverPack.Attach_HoverPack_C.StopSlowFallingSound
	 */
	struct AAttach_HoverPack_C_StopSlowFallingSound_Params
	{	};

	/**
	 * Function Attach_HoverPack.Attach_HoverPack_C.PlaySlowFallingSound
	 */
	struct AAttach_HoverPack_C_PlaySlowFallingSound_Params
	{	};

	/**
	 * Function Attach_HoverPack.Attach_HoverPack_C.UpdateHover
	 */
	struct AAttach_HoverPack_C_UpdateHover_Params
	{	};

	/**
	 * Function Attach_HoverPack.Attach_HoverPack_C.UpdatePlayerSpeedRTPC
	 */
	struct AAttach_HoverPack_C_UpdatePlayerSpeedRTPC_Params
	{	};

	/**
	 * Function Attach_HoverPack.Attach_HoverPack_C.OnAttach
	 */
	struct AAttach_HoverPack_C_OnAttach_Params
	{	};

	/**
	 * Function Attach_HoverPack.Attach_HoverPack_C.OnDetach
	 */
	struct AAttach_HoverPack_C_OnDetach_Params
	{	};

	/**
	 * Function Attach_HoverPack.Attach_HoverPack_C.OnConnectionStatusUpdated
	 */
	struct AAttach_HoverPack_C_OnConnectionStatusUpdated_Params
	{
	public:
		bool                                                       HasConnection;                                           // 0x0000(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Attach_HoverPack.Attach_HoverPack_C.OnHoverModeChanged
	 */
	struct AAttach_HoverPack_C_OnHoverModeChanged_Params
	{
	public:
		EHoverPackMode                                             NewMode;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Attach_HoverPack.Attach_HoverPack_C.HoverPackSFXInactive
	 */
	struct AAttach_HoverPack_C_HoverPackSFXInactive_Params
	{	};

	/**
	 * Function Attach_HoverPack.Attach_HoverPack_C.HoverPackSFXHover
	 */
	struct AAttach_HoverPack_C_HoverPackSFXHover_Params
	{	};

	/**
	 * Function Attach_HoverPack.Attach_HoverPack_C.HoverPackSFXSlowFalling
	 */
	struct AAttach_HoverPack_C_HoverPackSFXSlowFalling_Params
	{	};

	/**
	 * Function Attach_HoverPack.Attach_HoverPack_C.HoverPackSFXRailSurfing
	 */
	struct AAttach_HoverPack_C_HoverPackSFXRailSurfing_Params
	{	};

	/**
	 * Function Attach_HoverPack.Attach_HoverPack_C.ExecuteUbergraph_Attach_HoverPack
	 */
	struct AAttach_HoverPack_C_ExecuteUbergraph_Attach_HoverPack_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_SHLY[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
