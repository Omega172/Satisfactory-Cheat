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
	 * Function Widget_TakeDamage.Widget_TakeDamage_C.GetIsHealthCritical
	 */
	struct UWidget_TakeDamage_C_GetIsHealthCritical_Params
	{
	public:
		bool                                                       IsHealthCritical;                                        // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_N5KS[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Widget_TakeDamage.Widget_TakeDamage_C.OnRadiationDamage
	 */
	struct UWidget_TakeDamage_C_OnRadiationDamage_Params
	{	};

	/**
	 * Function Widget_TakeDamage.Widget_TakeDamage_C.SetPlayerPawn
	 */
	struct UWidget_TakeDamage_C_SetPlayerPawn_Params
	{	};

	/**
	 * Function Widget_TakeDamage.Widget_TakeDamage_C.ShowWarningMessage
	 */
	struct UWidget_TakeDamage_C_ShowWarningMessage_Params
	{	};

	/**
	 * Function Widget_TakeDamage.Widget_TakeDamage_C.UpdateRadiation
	 */
	struct UWidget_TakeDamage_C_UpdateRadiation_Params
	{
	public:
		bool                                                       RadiationActive;                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_38UM[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		double                                                     Amount;                                                  // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_TakeDamage.Widget_TakeDamage_C.SpawnPointer
	 */
	struct UWidget_TakeDamage_C_SpawnPointer_Params
	{
	public:
		class AActor*                                              DamagedActor;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		float                                                      Damage;                                                  // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_NQ35[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UDamageType*                                         DamageType;                                              // 0x0010(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		class AController*                                         InstigatedBy;                                            // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              DamageCauser;                                            // 0x0020(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_TakeDamage.Widget_TakeDamage_C.Construct
	 */
	struct UWidget_TakeDamage_C_Construct_Params
	{	};

	/**
	 * Function Widget_TakeDamage.Widget_TakeDamage_C.Tick
	 */
	struct UWidget_TakeDamage_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_TakeDamage.Widget_TakeDamage_C.AddAggroedCreature
	 */
	struct UWidget_TakeDamage_C_AddAggroedCreature_Params
	{
	public:
		struct FFGActorPlayerPerceptionInfo                        perceptionInfo;                                          // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function Widget_TakeDamage.Widget_TakeDamage_C.ExecuteUbergraph_Widget_TakeDamage
	 */
	struct UWidget_TakeDamage_C_ExecuteUbergraph_Widget_TakeDamage_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_1DDW[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
