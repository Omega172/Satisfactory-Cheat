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
	 * Function Attach_SnowballWeapon_R.Attach_SnowballWeapon_R_C.OnIsLoadedSet
	 */
	struct AAttach_SnowballWeapon_R_C_OnIsLoadedSet_Params
	{	};

	/**
	 * Function Attach_SnowballWeapon_R.Attach_SnowballWeapon_R_C.PlayFireEffect
	 */
	struct AAttach_SnowballWeapon_R_C_PlayFireEffect_Params
	{
	public:
		class UFGAmmoType*                                         ammoType;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Attach_SnowballWeapon_R.Attach_SnowballWeapon_R_C.OnBeginFireEffect
	 */
	struct AAttach_SnowballWeapon_R_C_OnBeginFireEffect_Params
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Attach_SnowballWeapon_R.Attach_SnowballWeapon_R_C.OnAttach
	 */
	struct AAttach_SnowballWeapon_R_C_OnAttach_Params
	{	};

	/**
	 * Function Attach_SnowballWeapon_R.Attach_SnowballWeapon_R_C.ClientPlayReloadEffect
	 */
	struct AAttach_SnowballWeapon_R_C_ClientPlayReloadEffect_Params
	{	};

	/**
	 * Function Attach_SnowballWeapon_R.Attach_SnowballWeapon_R_C.ExecuteUbergraph_Attach_SnowballWeapon_R
	 */
	struct AAttach_SnowballWeapon_R_C_ExecuteUbergraph_Attach_SnowballWeapon_R_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
