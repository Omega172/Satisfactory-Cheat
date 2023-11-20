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
	 * Function Equip_StunSpear.Equip_StunSpear_C.Play Stinger Anim
	 */
	struct AEquip_StunSpear_C_PlayStingerAnim_Params
	{
	public:
		class USkeletalMeshComponent*                              PlayerMesh;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
		class AFGCharacterPlayer*                                  Character;                                               // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Equip_StunSpear.Equip_StunSpear_C.Play Equip Anim
	 */
	struct AEquip_StunSpear_C_PlayEquipAnim_Params
	{
	public:
		class USkeletalMeshComponent*                              PlayerMesh;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
		class AFGCharacterPlayer*                                  Character;                                               // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		ECameraMode                                                CameraMode;                                              // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Equip_StunSpear.Equip_StunSpear_C.Play Uneqip Anim
	 */
	struct AEquip_StunSpear_C_PlayUneqipAnim_Params
	{
	public:
		class USkeletalMeshComponent*                              PlayerMesh;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Equip_StunSpear.Equip_StunSpear_C.WasUnEquipped
	 */
	struct AEquip_StunSpear_C_WasUnEquipped_Params
	{	};

	/**
	 * Function Equip_StunSpear.Equip_StunSpear_C.WasEquipped
	 */
	struct AEquip_StunSpear_C_WasEquipped_Params
	{	};

	/**
	 * Function Equip_StunSpear.Equip_StunSpear_C.Play Swing Animation
	 */
	struct AEquip_StunSpear_C_PlaySwingAnimation_Params
	{
	public:
		class USkeletalMeshComponent*                              PlayerMesh;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
		bool                                                       PlaySecondSwing;                                         // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ECameraMode                                                CameraMode;                                              // 0x0009(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_SQZH[0x6];                                   // 0x000A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AFGCharacterPlayer*                                  Character;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Equip_StunSpear.Equip_StunSpear_C.PlayHitEffects
	 */
	struct AEquip_StunSpear_C_PlayHitEffects_Params
	{
	public:
		TArray<struct FHitResult>                                  hitResults;                                              // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	};

	/**
	 * Function Equip_StunSpear.Equip_StunSpear_C.PlayStunEffects
	 */
	struct AEquip_StunSpear_C_PlayStunEffects_Params
	{
	public:
		bool                                                       secondSwing;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Equip_StunSpear.Equip_StunSpear_C.ExecuteUbergraph_Equip_StunSpear
	 */
	struct AEquip_StunSpear_C_ExecuteUbergraph_Equip_StunSpear_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
