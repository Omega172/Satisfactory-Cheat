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
	 * Function BP_WheeledVehicle.BP_WheeledVehicle_C.CheckMeshRotationOnImpact
	 */
	struct ABP_WheeledVehicle_C_CheckMeshRotationOnImpact_Params
	{
	public:
		class UPrimitiveComponent*                                 HitComponent;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsUpsideDown;                                            // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_JR7C[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_WheeledVehicle.BP_WheeledVehicle_C.ImpactForceForSFX
	 */
	struct ABP_WheeledVehicle_C_ImpactForceForSFX_Params
	{
	public:
		class UPrimitiveComponent*                                 HitComponent;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComponent;                                          // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
		double                                                     HitForce;                                                // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_WheeledVehicle.BP_WheeledVehicle_C.OnVehicleGearingBegin
	 */
	struct ABP_WheeledVehicle_C_OnVehicleGearingBegin_Params
	{
	public:
		int32_t                                                    NewGear;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_WheeledVehicle.BP_WheeledVehicle_C.OnRep_mTrunkUser
	 */
	struct ABP_WheeledVehicle_C_OnRep_mTrunkUser_Params
	{	};

	/**
	 * Function BP_WheeledVehicle.BP_WheeledVehicle_C.GetDefaultRepresentationColor
	 */
	struct ABP_WheeledVehicle_C_GetDefaultRepresentationColor_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_WheeledVehicle.BP_WheeledVehicle_C.GetLookAtDecription
	 */
	struct ABP_WheeledVehicle_C_GetLookAtDecription_Params
	{
	public:
		class AFGCharacterPlayer*                                  byCharacter;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		struct FUseState                                           State;                                                   // 0x0008(0x0030)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
		class FText                                                ReturnValue;                                             // 0x0038(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_WheeledVehicle.BP_WheeledVehicle_C.OpenVehicleUI
	 */
	struct ABP_WheeledVehicle_C_OpenVehicleUI_Params
	{
	public:
		class AFGCharacterPlayer*                                  inCharacter;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_WheeledVehicle.BP_WheeledVehicle_C.PonderOpeningTrunk
	 */
	struct ABP_WheeledVehicle_C_PonderOpeningTrunk_Params
	{
	public:
		class AFGCharacterPlayer*                                  inCharacter;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_WheeledVehicle.BP_WheeledVehicle_C.UpdateUseState
	 */
	struct ABP_WheeledVehicle_C_UpdateUseState_Params
	{
	public:
		class AFGCharacterPlayer*                                  byCharacter;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             atLocation;                                              // 0x0008(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 componentHit;                                            // 0x0020(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
		struct FUseState                                           out_useState;                                            // 0x0028(0x0030)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function BP_WheeledVehicle.BP_WheeledVehicle_C.ReceiveUnpossessed
	 */
	struct ABP_WheeledVehicle_C_ReceiveUnpossessed_Params
	{
	public:
		class AController*                                         OldController;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_WheeledVehicle.BP_WheeledVehicle_C.OnUse
	 */
	struct ABP_WheeledVehicle_C_OnUse_Params
	{
	public:
		class AFGCharacterPlayer*                                  byCharacter;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		struct FUseState                                           State;                                                   // 0x0008(0x0030)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function BP_WheeledVehicle.BP_WheeledVehicle_C.ReceivePossessed
	 */
	struct ABP_WheeledVehicle_C_ReceivePossessed_Params
	{
	public:
		class AController*                                         NewController;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_WheeledVehicle.BP_WheeledVehicle_C.Client_PlayFoliageDestroyedEffect
	 */
	struct ABP_WheeledVehicle_C_Client_PlayFoliageDestroyedEffect_Params
	{
	public:
		class UParticleSystem*                                     destroyEffect;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		class UAkAudioEvent*                                       destroyAudioEvent;                                       // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             Location;                                                // 0x0010(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_WheeledVehicle.BP_WheeledVehicle_C.OpenVehicleTrunk
	 */
	struct ABP_WheeledVehicle_C_OpenVehicleTrunk_Params
	{
	public:
		class AFGCharacterPlayer*                                  Player;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_WheeledVehicle.BP_WheeledVehicle_C.CloseVehicleTrunk
	 */
	struct ABP_WheeledVehicle_C_CloseVehicleTrunk_Params
	{
	public:
		class AFGCharacterPlayer*                                  Player;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_WheeledVehicle.BP_WheeledVehicle_C.OnOpenRecorderMenu
	 */
	struct ABP_WheeledVehicle_C_OnOpenRecorderMenu_Params
	{	};

	/**
	 * Function BP_WheeledVehicle.BP_WheeledVehicle_C.BndEvt__BP_WheeledVehicle_mMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature
	 */
	struct ABP_WheeledVehicle_C_BndEvt__BP_WheeledVehicle_mMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 HitComponent;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             NormalImpulse;                                           // 0x0018(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FHitResult                                          Hit;                                                     // 0x0030(0x00E8)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function BP_WheeledVehicle.BP_WheeledVehicle_C.ResetCrashSound
	 */
	struct ABP_WheeledVehicle_C_ResetCrashSound_Params
	{	};

	/**
	 * Function BP_WheeledVehicle.BP_WheeledVehicle_C.OpenRecordMenu
	 */
	struct ABP_WheeledVehicle_C_OpenRecordMenu_Params
	{	};

	/**
	 * Function BP_WheeledVehicle.BP_WheeledVehicle_C.CloseRecordMenu
	 */
	struct ABP_WheeledVehicle_C_CloseRecordMenu_Params
	{	};

	/**
	 * Function BP_WheeledVehicle.BP_WheeledVehicle_C.ReceiveBeginPlay
	 */
	struct ABP_WheeledVehicle_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_WheeledVehicle.BP_WheeledVehicle_C.ReceiveEndPlay
	 */
	struct ABP_WheeledVehicle_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_WheeledVehicle.BP_WheeledVehicle_C.ExecuteUbergraph_BP_WheeledVehicle
	 */
	struct ABP_WheeledVehicle_C_ExecuteUbergraph_BP_WheeledVehicle_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
