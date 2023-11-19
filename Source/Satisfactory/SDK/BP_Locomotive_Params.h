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
	 * Function BP_Locomotive.BP_Locomotive_C.DefaultLightColor
	 */
	struct ABP_Locomotive_C_DefaultLightColor_Params
	{
	public:
		struct FVector                                             Value;                                                   // 0x0000(0x0018)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Locomotive.BP_Locomotive_C.GetDerailHologramMesh
	 */
	struct ABP_Locomotive_C_GetDerailHologramMesh_Params
	{
	public:
		class UStaticMesh*                                         ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Locomotive.BP_Locomotive_C.SpawnCollisionVFX
	 */
	struct ABP_Locomotive_C_SpawnCollisionVFX_Params
	{
	public:
		double                                                     ImpactForceScale;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Locomotive.BP_Locomotive_C.EasterEgg
	 */
	struct ABP_Locomotive_C_EasterEgg_Params
	{
	public:
		double                                                     NewParam;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Locomotive.BP_Locomotive_C.PlayLocomotiveImpactSFX
	 */
	struct ABP_Locomotive_C_PlayLocomotiveImpactSFX_Params
	{
	public:
		double                                                     ImpactForce;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Locomotive.BP_Locomotive_C.SpawnDeRailVFX
	 */
	struct ABP_Locomotive_C_SpawnDeRailVFX_Params
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                                     Velocity;                                                // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             ForwardVector;                                           // 0x0020(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EPhysicalSurface                                           Surface;                                                 // 0x0038(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_JV19[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_Locomotive.BP_Locomotive_C.CheckValidationForStop
	 */
	struct ABP_Locomotive_C_CheckValidationForStop_Params
	{	};

	/**
	 * Function BP_Locomotive.BP_Locomotive_C.PlayLocomotiveImpact&DerailSFX
	 */
	struct ABP_Locomotive_C_PlayLocomotiveImpactDerailSFX_Params
	{
	public:
		double                                                     ImpactForce;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Locomotive.BP_Locomotive_C.CheckActorVelocity
	 */
	struct ABP_Locomotive_C_CheckActorVelocity_Params
	{	};

	/**
	 * Function BP_Locomotive.BP_Locomotive_C.IsPossessed
	 */
	struct ABP_Locomotive_C_IsPossessed_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Locomotive.BP_Locomotive_C.ReceiveBeginPlay
	 */
	struct ABP_Locomotive_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_Locomotive.BP_Locomotive_C.ReceiveUnpossessed
	 */
	struct ABP_Locomotive_C_ReceiveUnpossessed_Params
	{
	public:
		class AController*                                         OldController;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Locomotive.BP_Locomotive_C.ReceivePossessed
	 */
	struct ABP_Locomotive_C_ReceivePossessed_Params
	{
	public:
		class AController*                                         NewController;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Locomotive.BP_Locomotive_C.OnNameChanged
	 */
	struct ABP_Locomotive_C_OnNameChanged_Params
	{	};

	/**
	 * Function BP_Locomotive.BP_Locomotive_C.UpdateTrainName
	 */
	struct ABP_Locomotive_C_UpdateTrainName_Params
	{	};

	/**
	 * Function BP_Locomotive.BP_Locomotive_C.GainedSignificance
	 */
	struct ABP_Locomotive_C_GainedSignificance_Params
	{	};

	/**
	 * Function BP_Locomotive.BP_Locomotive_C.LostSignificance
	 */
	struct ABP_Locomotive_C_LostSignificance_Params
	{	};

	/**
	 * Function BP_Locomotive.BP_Locomotive_C.UpdateCamera
	 */
	struct ABP_Locomotive_C_UpdateCamera_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Locomotive.BP_Locomotive_C.UpdateVFX
	 */
	struct ABP_Locomotive_C_UpdateVFX_Params
	{	};

	/**
	 * Function BP_Locomotive.BP_Locomotive_C.OnHonkBegin
	 */
	struct ABP_Locomotive_C_OnHonkBegin_Params
	{	};

	/**
	 * Function BP_Locomotive.BP_Locomotive_C.OnHonkEnd
	 */
	struct ABP_Locomotive_C_OnHonkEnd_Params
	{	};

	/**
	 * Function BP_Locomotive.BP_Locomotive_C.BeginHonk
	 */
	struct ABP_Locomotive_C_BeginHonk_Params
	{
	public:
		bool                                                       AllowAlternativeHonk;                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Locomotive.BP_Locomotive_C.EndHonk
	 */
	struct ABP_Locomotive_C_EndHonk_Params
	{	};

	/**
	 * Function BP_Locomotive.BP_Locomotive_C.MulticastOnHonkShort
	 */
	struct ABP_Locomotive_C_MulticastOnHonkShort_Params
	{	};

	/**
	 * Function BP_Locomotive.BP_Locomotive_C.MulticastOnHonkDanger
	 */
	struct ABP_Locomotive_C_MulticastOnHonkDanger_Params
	{	};

	/**
	 * Function BP_Locomotive.BP_Locomotive_C.HonkShort
	 */
	struct ABP_Locomotive_C_HonkShort_Params
	{	};

	/**
	 * Function BP_Locomotive.BP_Locomotive_C.HonkDanger
	 */
	struct ABP_Locomotive_C_HonkDanger_Params
	{	};

	/**
	 * Function BP_Locomotive.BP_Locomotive_C.ReceiveOnRerail
	 */
	struct ABP_Locomotive_C_ReceiveOnRerail_Params
	{	};

	/**
	 * Function BP_Locomotive.BP_Locomotive_C.ReceiveOnCollided
	 */
	struct ABP_Locomotive_C_ReceiveOnCollided_Params
	{
	public:
		class AFGRailroadVehicle*                                  withVehicle;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		float                                                      ImpactVelocity;                                          // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       isPrimaryEvent;                                          // 0x000C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsDerailed;                                              // 0x000D(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Locomotive.BP_Locomotive_C.SetCustomizationData
	 */
	struct ABP_Locomotive_C_SetCustomizationData_Params
	{
	public:
		struct FFactoryCustomizationData                           customizationData;                                       // 0x0000(0x0078)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BP_Locomotive.BP_Locomotive_C.StartIsLookedAt
	 */
	struct ABP_Locomotive_C_StartIsLookedAt_Params
	{
	public:
		class AFGCharacterPlayer*                                  byCharacter;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		struct FUseState                                           State;                                                   // 0x0008(0x0030)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function BP_Locomotive.BP_Locomotive_C.StopIsLookedAt
	 */
	struct ABP_Locomotive_C_StopIsLookedAt_Params
	{
	public:
		class AFGCharacterPlayer*                                  byCharacter;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		struct FUseState                                           State;                                                   // 0x0008(0x0030)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function BP_Locomotive.BP_Locomotive_C.ExecuteUbergraph_BP_Locomotive
	 */
	struct ABP_Locomotive_C_ExecuteUbergraph_BP_Locomotive_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_H28O[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
