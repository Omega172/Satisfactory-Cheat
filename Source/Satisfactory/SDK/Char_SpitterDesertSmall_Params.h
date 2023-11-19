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
	 * Function Char_SpitterDesertSmall.Char_SpitterDesertSmall_C.UserConstructionScript
	 */
	struct AChar_SpitterDesertSmall_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Char_SpitterDesertSmall.Char_SpitterDesertSmall_C.ReceiveDied
	 */
	struct AChar_SpitterDesertSmall_C_ReceiveDied_Params
	{	};

	/**
	 * Function Char_SpitterDesertSmall.Char_SpitterDesertSmall_C.NotifyOnTakeDamage
	 */
	struct AChar_SpitterDesertSmall_C_NotifyOnTakeDamage_Params
	{
	public:
		class AActor*                                              DamagedActor;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		float                                                      DamageAmount;                                            // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_XPJW[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UDamageType*                                         DamageType;                                              // 0x0010(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		class AController*                                         InstigatedBy;                                            // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              DamageCauser;                                            // 0x0020(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Char_SpitterDesertSmall.Char_SpitterDesertSmall_C.ReceiveBeginPlay
	 */
	struct AChar_SpitterDesertSmall_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Char_SpitterDesertSmall.Char_SpitterDesertSmall_C.ExecuteUbergraph_Char_SpitterDesertSmall
	 */
	struct AChar_SpitterDesertSmall_C_ExecuteUbergraph_Char_SpitterDesertSmall_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_TTCZ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
