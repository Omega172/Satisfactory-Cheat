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
	 * Function Equip_SnowballWeaponMittens.Equip_SnowballWeaponMittens_C.PlayReloadEffects
	 */
	struct AEquip_SnowballWeaponMittens_C_PlayReloadEffects_Params
	{
	public:
		bool                                                       hadAmmoLeft;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Equip_SnowballWeaponMittens.Equip_SnowballWeaponMittens_C.OnSecondaryFirePressed
	 */
	struct AEquip_SnowballWeaponMittens_C_OnSecondaryFirePressed_Params
	{	};

	/**
	 * Function Equip_SnowballWeaponMittens.Equip_SnowballWeaponMittens_C.PlayFireReleasedEffects
	 */
	struct AEquip_SnowballWeaponMittens_C_PlayFireReleasedEffects_Params
	{	};

	/**
	 * Function Equip_SnowballWeaponMittens.Equip_SnowballWeaponMittens_C.PlayFireEffect
	 */
	struct AEquip_SnowballWeaponMittens_C_PlayFireEffect_Params
	{
	public:
		class UFGAmmoType*                                         AmmoTypeObject;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Equip_SnowballWeaponMittens.Equip_SnowballWeaponMittens_C.WasUnEquipped
	 */
	struct AEquip_SnowballWeaponMittens_C_WasUnEquipped_Params
	{	};

	/**
	 * Function Equip_SnowballWeaponMittens.Equip_SnowballWeaponMittens_C.WasEquipped
	 */
	struct AEquip_SnowballWeaponMittens_C_WasEquipped_Params
	{	};

	/**
	 * Function Equip_SnowballWeaponMittens.Equip_SnowballWeaponMittens_C.OnPrimaryFireEnded
	 */
	struct AEquip_SnowballWeaponMittens_C_OnPrimaryFireEnded_Params
	{	};

	/**
	 * Function Equip_SnowballWeaponMittens.Equip_SnowballWeaponMittens_C.Multicast_Throw Release
	 */
	struct AEquip_SnowballWeaponMittens_C_Multicast_ThrowRelease_Params
	{
	public:
		double                                                     ChargePercent;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Equip_SnowballWeaponMittens.Equip_SnowballWeaponMittens_C.ExecuteUbergraph_Equip_SnowballWeaponMittens
	 */
	struct AEquip_SnowballWeaponMittens_C_ExecuteUbergraph_Equip_SnowballWeaponMittens_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_LC0P[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
