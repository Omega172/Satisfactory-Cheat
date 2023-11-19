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
	 * Function Equip_Machinegun.Equip_Machinegun_C.PlayReloadEffects
	 */
	struct AEquip_Machinegun_C_PlayReloadEffects_Params
	{
	public:
		bool                                                       hadAmmoLeft;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Equip_Machinegun.Equip_Machinegun_C.ReceiveTick
	 */
	struct AEquip_Machinegun_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Equip_Machinegun.Equip_Machinegun_C.SwitchHUD
	 */
	struct AEquip_Machinegun_C_SwitchHUD_Params
	{
	public:
		bool                                                       ShowHUD;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Equip_Machinegun.Equip_Machinegun_C.WasUnEquipped
	 */
	struct AEquip_Machinegun_C_WasUnEquipped_Params
	{	};

	/**
	 * Function Equip_Machinegun.Equip_Machinegun_C.WasEquipped
	 */
	struct AEquip_Machinegun_C_WasEquipped_Params
	{	};

	/**
	 * Function Equip_Machinegun.Equip_Machinegun_C.PlayFireEffect
	 */
	struct AEquip_Machinegun_C_PlayFireEffect_Params
	{
	public:
		class UFGAmmoType*                                         AmmoTypeObject;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Equip_Machinegun.Equip_Machinegun_C.ExecuteUbergraph_Equip_Machinegun
	 */
	struct AEquip_Machinegun_C_ExecuteUbergraph_Equip_Machinegun_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_AH0D[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Equip_Machinegun.Equip_Machinegun_C.Fire__DelegateSignature
	 */
	struct AEquip_Machinegun_C_Fire__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
