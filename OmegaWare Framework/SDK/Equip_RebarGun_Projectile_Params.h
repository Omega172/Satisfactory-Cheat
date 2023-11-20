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
	 * Function Equip_RebarGun_Projectile.Equip_RebarGun_Projectile_C.Play3pEquipEffects
	 */
	struct AEquip_RebarGun_Projectile_C_Play3pEquipEffects_Params
	{	};

	/**
	 * Function Equip_RebarGun_Projectile.Equip_RebarGun_Projectile_C.Play1pEquipEffects
	 */
	struct AEquip_RebarGun_Projectile_C_Play1pEquipEffects_Params
	{	};

	/**
	 * Function Equip_RebarGun_Projectile.Equip_RebarGun_Projectile_C.PlayGlobalEquipEffects
	 */
	struct AEquip_RebarGun_Projectile_C_PlayGlobalEquipEffects_Params
	{	};

	/**
	 * Function Equip_RebarGun_Projectile.Equip_RebarGun_Projectile_C.Play3pReloadEffects
	 */
	struct AEquip_RebarGun_Projectile_C_Play3pReloadEffects_Params
	{
	public:
		bool                                                       HasAmmoLeft;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_EZAD[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Equip_RebarGun_Projectile.Equip_RebarGun_Projectile_C.Play1pReloadEffects
	 */
	struct AEquip_RebarGun_Projectile_C_Play1pReloadEffects_Params
	{
	public:
		bool                                                       HasAmmoLeft;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_4DZU[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Equip_RebarGun_Projectile.Equip_RebarGun_Projectile_C.PlayGlobalReloadEffects
	 */
	struct AEquip_RebarGun_Projectile_C_PlayGlobalReloadEffects_Params
	{
	public:
		bool                                                       HasAmmoLeft;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Equip_RebarGun_Projectile.Equip_RebarGun_Projectile_C.Play3pFireEffects
	 */
	struct AEquip_RebarGun_Projectile_C_Play3pFireEffects_Params
	{	};

	/**
	 * Function Equip_RebarGun_Projectile.Equip_RebarGun_Projectile_C.Play1pFireEffects
	 */
	struct AEquip_RebarGun_Projectile_C_Play1pFireEffects_Params
	{	};

	/**
	 * Function Equip_RebarGun_Projectile.Equip_RebarGun_Projectile_C.PlayGlobalFireEffects
	 */
	struct AEquip_RebarGun_Projectile_C_PlayGlobalFireEffects_Params
	{	};

	/**
	 * Function Equip_RebarGun_Projectile.Equip_RebarGun_Projectile_C.PlayGlobalUnequipEffects
	 */
	struct AEquip_RebarGun_Projectile_C_PlayGlobalUnequipEffects_Params
	{	};

	/**
	 * Function Equip_RebarGun_Projectile.Equip_RebarGun_Projectile_C.PlayGlobalFailedToFireEffects
	 */
	struct AEquip_RebarGun_Projectile_C_PlayGlobalFailedToFireEffects_Params
	{	};

	/**
	 * Function Equip_RebarGun_Projectile.Equip_RebarGun_Projectile_C.StopEquipSFX
	 */
	struct AEquip_RebarGun_Projectile_C_StopEquipSFX_Params
	{	};

	/**
	 * Function Equip_RebarGun_Projectile.Equip_RebarGun_Projectile_C.UserConstructionScript
	 */
	struct AEquip_RebarGun_Projectile_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Equip_RebarGun_Projectile.Equip_RebarGun_Projectile_C.WasEquipped
	 */
	struct AEquip_RebarGun_Projectile_C_WasEquipped_Params
	{	};

	/**
	 * Function Equip_RebarGun_Projectile.Equip_RebarGun_Projectile_C.WasUnEquipped
	 */
	struct AEquip_RebarGun_Projectile_C_WasUnEquipped_Params
	{	};

	/**
	 * Function Equip_RebarGun_Projectile.Equip_RebarGun_Projectile_C.PlayFailedToFireEffects
	 */
	struct AEquip_RebarGun_Projectile_C_PlayFailedToFireEffects_Params
	{	};

	/**
	 * Function Equip_RebarGun_Projectile.Equip_RebarGun_Projectile_C.PlayReloadEffects
	 */
	struct AEquip_RebarGun_Projectile_C_PlayReloadEffects_Params
	{
	public:
		bool                                                       hadAmmoLeft;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Equip_RebarGun_Projectile.Equip_RebarGun_Projectile_C.PlayFireEffect
	 */
	struct AEquip_RebarGun_Projectile_C_PlayFireEffect_Params
	{
	public:
		class UFGAmmoType*                                         AmmoTypeObject;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Equip_RebarGun_Projectile.Equip_RebarGun_Projectile_C.ExecuteUbergraph_Equip_RebarGun_Projectile
	 */
	struct AEquip_RebarGun_Projectile_C_ExecuteUbergraph_Equip_RebarGun_Projectile_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
