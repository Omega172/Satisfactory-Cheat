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
	 * Function Build_DoorMiddle.Build_DoorMiddle_C.OnRep_mDoorMode
	 */
	struct ABuild_DoorMiddle_C_OnRep_mDoorMode_Params
	{	};

	/**
	 * Function Build_DoorMiddle.Build_DoorMiddle_C.GetLookAtDecription
	 */
	struct ABuild_DoorMiddle_C_GetLookAtDecription_Params
	{
	public:
		class AFGCharacterPlayer*                                  byCharacter;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		struct FUseState                                           State;                                                   // 0x0008(0x0030)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
		class FText                                                ReturnValue;                                             // 0x0038(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function Build_DoorMiddle.Build_DoorMiddle_C.PlayVFX
	 */
	struct ABuild_DoorMiddle_C_PlayVFX_Params
	{	};

	/**
	 * Function Build_DoorMiddle.Build_DoorMiddle_C.IsUseable
	 */
	struct ABuild_DoorMiddle_C_IsUseable_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Build_DoorMiddle.Build_DoorMiddle_C.OnRep_mDoorState
	 */
	struct ABuild_DoorMiddle_C_OnRep_mDoorState_Params
	{	};

	/**
	 * Function Build_DoorMiddle.Build_DoorMiddle_C.UpdateSignificanceTickRate
	 */
	struct ABuild_DoorMiddle_C_UpdateSignificanceTickRate_Params
	{
	public:
		float                                                      NewTickRate;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bTickEnabled;                                            // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Build_DoorMiddle.Build_DoorMiddle_C.ReceiveBeginPlay
	 */
	struct ABuild_DoorMiddle_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Build_DoorMiddle.Build_DoorMiddle_C.GainedSignificance
	 */
	struct ABuild_DoorMiddle_C_GainedSignificance_Params
	{	};

	/**
	 * Function Build_DoorMiddle.Build_DoorMiddle_C.LostSignificance
	 */
	struct ABuild_DoorMiddle_C_LostSignificance_Params
	{	};

	/**
	 * Function Build_DoorMiddle.Build_DoorMiddle_C.OnOverlapBegin
	 */
	struct ABuild_DoorMiddle_C_OnOverlapBegin_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bFromSweep;                                              // 0x001C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_2L9U[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          SweepResult;                                             // 0x0020(0x00E8)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function Build_DoorMiddle.Build_DoorMiddle_C.OnOverlapEnd
	 */
	struct ABuild_DoorMiddle_C_OnOverlapEnd_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Build_DoorMiddle.Build_DoorMiddle_C.OnClosed
	 */
	struct ABuild_DoorMiddle_C_OnClosed_Params
	{	};

	/**
	 * Function Build_DoorMiddle.Build_DoorMiddle_C.OnOpened
	 */
	struct ABuild_DoorMiddle_C_OnOpened_Params
	{	};

	/**
	 * Function Build_DoorMiddle.Build_DoorMiddle_C.ReceiveEndPlay
	 */
	struct ABuild_DoorMiddle_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Build_DoorMiddle.Build_DoorMiddle_C.AddCollisionBox
	 */
	struct ABuild_DoorMiddle_C_AddCollisionBox_Params
	{
	public:
		class APlayerController*                                   Forplayer;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Build_DoorMiddle.Build_DoorMiddle_C.RemoveCollisionBox
	 */
	struct ABuild_DoorMiddle_C_RemoveCollisionBox_Params
	{
	public:
		class APlayerController*                                   PlayerId;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Build_DoorMiddle.Build_DoorMiddle_C.OnBeginMovement
	 */
	struct ABuild_DoorMiddle_C_OnBeginMovement_Params
	{	};

	/**
	 * Function Build_DoorMiddle.Build_DoorMiddle_C.OnMovementUpdate
	 */
	struct ABuild_DoorMiddle_C_OnMovementUpdate_Params
	{	};

	/**
	 * Function Build_DoorMiddle.Build_DoorMiddle_C.OnUse
	 */
	struct ABuild_DoorMiddle_C_OnUse_Params
	{
	public:
		class AFGCharacterPlayer*                                  byCharacter;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		struct FUseState                                           State;                                                   // 0x0008(0x0030)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function Build_DoorMiddle.Build_DoorMiddle_C.ExecuteUbergraph_Build_DoorMiddle
	 */
	struct ABuild_DoorMiddle_C_ExecuteUbergraph_Build_DoorMiddle_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_81TI[0xC];                                   // 0x0004(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
