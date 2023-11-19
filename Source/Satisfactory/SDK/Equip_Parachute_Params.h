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
	 * Function Equip_Parachute.Equip_Parachute_C.Detach Parachute
	 */
	struct AEquip_Parachute_C_DetachParachute_Params
	{
	public:
		bool                                                       IsThirdPerson;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Equip_Parachute.Equip_Parachute_C.OnParachuteHideDelayPassed
	 */
	struct AEquip_Parachute_C_OnParachuteHideDelayPassed_Params
	{	};

	/**
	 * Function Equip_Parachute.Equip_Parachute_C.OnDeployStop
	 */
	struct AEquip_Parachute_C_OnDeployStop_Params
	{	};

	/**
	 * Function Equip_Parachute.Equip_Parachute_C.Attach Parachute
	 */
	struct AEquip_Parachute_C_AttachParachute_Params
	{
	public:
		bool                                                       IsThirdPerson;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Equip_Parachute.Equip_Parachute_C.Spawn Third Person VFX
	 */
	struct AEquip_Parachute_C_SpawnThirdPersonVFX_Params
	{
	public:
		class USceneComponent*                                     ParachuteMesh;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Equip_Parachute.Equip_Parachute_C.Spawn First Person VFX
	 */
	struct AEquip_Parachute_C_SpawnFirstPersonVFX_Params
	{
	public:
		class USceneComponent*                                     ParachuteMesh;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Equip_Parachute.Equip_Parachute_C.OnDeployed
	 */
	struct AEquip_Parachute_C_OnDeployed_Params
	{	};

	/**
	 * Function Equip_Parachute.Equip_Parachute_C.On Parachute Camera Mode Changed
	 */
	struct AEquip_Parachute_C_OnParachuteCameraModeChanged_Params
	{
	public:
		bool                                                       IsThirdPersonNow;                                        // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Equip_Parachute.Equip_Parachute_C.OnCameraModeChanged
	 */
	struct AEquip_Parachute_C_OnCameraModeChanged_Params
	{
	public:
		ECameraMode                                                newCameraMode;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Equip_Parachute.Equip_Parachute_C.ExecuteUbergraph_Equip_Parachute
	 */
	struct AEquip_Parachute_C_ExecuteUbergraph_Equip_Parachute_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
