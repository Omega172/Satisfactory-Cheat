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
	 * Function Desc_AmmoProjectileMultiShot.Desc_AmmoProjectileMultiShot_C.UpdateProjectileLobeSpeed
	 */
	struct UDesc_AmmoProjectileMultiShot_C_UpdateProjectileLobeSpeed_Params
	{
	public:
		class AFGProjectile*                                       Projectile;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Desc_AmmoProjectileMultiShot.Desc_AmmoProjectileMultiShot_C.UpdateFiringTransform
	 */
	struct UDesc_AmmoProjectileMultiShot_C_UpdateFiringTransform_Params
	{	};

	/**
	 * Function Desc_AmmoProjectileMultiShot.Desc_AmmoProjectileMultiShot_C.GetSubProjectileSpawnRotation
	 */
	struct UDesc_AmmoProjectileMultiShot_C_GetSubProjectileSpawnRotation_Params
	{
	public:
		struct FVector                                             SuggestedLobeTossVelocity;                               // 0x0000(0x0018)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FRotator                                            ReturnValue;                                             // 0x0018(0x0018)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Desc_AmmoProjectileMultiShot.Desc_AmmoProjectileMultiShot_C.FireAmmunition
	 */
	struct UDesc_AmmoProjectileMultiShot_C_FireAmmunition_Params
	{	};

	/**
	 * Function Desc_AmmoProjectileMultiShot.Desc_AmmoProjectileMultiShot_C.OnAmmoFired
	 */
	struct UDesc_AmmoProjectileMultiShot_C_OnAmmoFired_Params
	{
	public:
		class AActor*                                              SpawnedActor;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Desc_AmmoProjectileMultiShot.Desc_AmmoProjectileMultiShot_C.ActivateProjectiles
	 */
	struct UDesc_AmmoProjectileMultiShot_C_ActivateProjectiles_Params
	{	};

	/**
	 * Function Desc_AmmoProjectileMultiShot.Desc_AmmoProjectileMultiShot_C.InitializeAmmoType
	 */
	struct UDesc_AmmoProjectileMultiShot_C_InitializeAmmoType_Params
	{
	public:
		class AFGWeapon*                                           Weapon;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                                       Force;                                                   // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Desc_AmmoProjectileMultiShot.Desc_AmmoProjectileMultiShot_C.ExecuteUbergraph_Desc_AmmoProjectileMultiShot
	 */
	struct UDesc_AmmoProjectileMultiShot_C_ExecuteUbergraph_Desc_AmmoProjectileMultiShot_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
