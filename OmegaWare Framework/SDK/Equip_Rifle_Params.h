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
	 * Function Equip_Rifle.Equip_Rifle_C.Play3pReloadEffects
	 */
	struct AEquip_Rifle_C_Play3pReloadEffects_Params
	{	};

	/**
	 * Function Equip_Rifle.Equip_Rifle_C.Play1pReloadEffects
	 */
	struct AEquip_Rifle_C_Play1pReloadEffects_Params
	{	};

	/**
	 * Function Equip_Rifle.Equip_Rifle_C.Play3pEquipEffects
	 */
	struct AEquip_Rifle_C_Play3pEquipEffects_Params
	{	};

	/**
	 * Function Equip_Rifle.Equip_Rifle_C.Play1pEquipEffects
	 */
	struct AEquip_Rifle_C_Play1pEquipEffects_Params
	{	};

	/**
	 * Function Equip_Rifle.Equip_Rifle_C.Play3pFireEffects
	 */
	struct AEquip_Rifle_C_Play3pFireEffects_Params
	{	};

	/**
	 * Function Equip_Rifle.Equip_Rifle_C.Play1pFireEffects
	 */
	struct AEquip_Rifle_C_Play1pFireEffects_Params
	{	};

	/**
	 * Function Equip_Rifle.Equip_Rifle_C.GetWeaponMeshSocketLocation
	 */
	struct AEquip_Rifle_C_GetWeaponMeshSocketLocation_Params
	{
	public:
		class FName                                                SocketName;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             ReturnValue;                                             // 0x0008(0x0018)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Equip_Rifle.Equip_Rifle_C.SetReloadOnce
	 */
	struct AEquip_Rifle_C_SetReloadOnce_Params
	{	};

	/**
	 * Function Equip_Rifle.Equip_Rifle_C.OnRep_mHasReloadedOnce
	 */
	struct AEquip_Rifle_C_OnRep_mHasReloadedOnce_Params
	{	};

	/**
	 * Function Equip_Rifle.Equip_Rifle_C.UserConstructionScript
	 */
	struct AEquip_Rifle_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Equip_Rifle.Equip_Rifle_C.PlayFireEffect
	 */
	struct AEquip_Rifle_C_PlayFireEffect_Params
	{
	public:
		class UFGAmmoType*                                         AmmoTypeObject;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Equip_Rifle.Equip_Rifle_C.WasEquipped
	 */
	struct AEquip_Rifle_C_WasEquipped_Params
	{	};

	/**
	 * Function Equip_Rifle.Equip_Rifle_C.PlayReloadEffects
	 */
	struct AEquip_Rifle_C_PlayReloadEffects_Params
	{
	public:
		bool                                                       hadAmmoLeft;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Equip_Rifle.Equip_Rifle_C.PostLoadGame
	 */
	struct AEquip_Rifle_C_PostLoadGame_Params
	{
	public:
		int32_t                                                    saveVersion;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    GameVersion;                                             // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Equip_Rifle.Equip_Rifle_C.ExecuteUbergraph_Equip_Rifle
	 */
	struct AEquip_Rifle_C_ExecuteUbergraph_Equip_Rifle_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Equip_Rifle.Equip_Rifle_C.Fire__DelegateSignature
	 */
	struct AEquip_Rifle_C_Fire__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
