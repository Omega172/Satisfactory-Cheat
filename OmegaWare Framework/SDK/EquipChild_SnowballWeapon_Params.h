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
	 * Function EquipChild_SnowballWeapon.EquipChild_SnowballWeapon_C.OnEquip
	 */
	struct AEquipChild_SnowballWeapon_C_OnEquip_Params
	{
	public:
		class AFGCharacterPlayer*                                  Character;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function EquipChild_SnowballWeapon.EquipChild_SnowballWeapon_C.NotifyReloading
	 */
	struct AEquipChild_SnowballWeapon_C_NotifyReloading_Params
	{
	public:
		bool                                                       hadAmmoLeft;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function EquipChild_SnowballWeapon.EquipChild_SnowballWeapon_C.NotifyBeginPrimaryFire
	 */
	struct AEquipChild_SnowballWeapon_C_NotifyBeginPrimaryFire_Params
	{	};

	/**
	 * Function EquipChild_SnowballWeapon.EquipChild_SnowballWeapon_C.NotifyPrimaryFireExecuted
	 */
	struct AEquipChild_SnowballWeapon_C_NotifyPrimaryFireExecuted_Params
	{	};

	/**
	 * Function EquipChild_SnowballWeapon.EquipChild_SnowballWeapon_C.NotifySetIsLoaded
	 */
	struct AEquipChild_SnowballWeapon_C_NotifySetIsLoaded_Params
	{
	public:
		bool                                                       IsLoaded;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function EquipChild_SnowballWeapon.EquipChild_SnowballWeapon_C.ExecuteUbergraph_EquipChild_SnowballWeapon
	 */
	struct AEquipChild_SnowballWeapon_C_ExecuteUbergraph_EquipChild_SnowballWeapon_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_9P9L[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
