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
	 * Function Char_NonFlyingBird.Char_NonFlyingBird_C.MakePanic
	 */
	struct AChar_NonFlyingBird_C_MakePanic_Params
	{	};

	/**
	 * Function Char_NonFlyingBird.Char_NonFlyingBird_C.GainedSignificance
	 */
	struct AChar_NonFlyingBird_C_GainedSignificance_Params
	{	};

	/**
	 * Function Char_NonFlyingBird.Char_NonFlyingBird_C.LostSignificance
	 */
	struct AChar_NonFlyingBird_C_LostSignificance_Params
	{	};

	/**
	 * Function Char_NonFlyingBird.Char_NonFlyingBird_C.UpdateSignificanceTickRate
	 */
	struct AChar_NonFlyingBird_C_UpdateSignificanceTickRate_Params
	{
	public:
		float                                                      NewTickRate;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bTickEnabled;                                            // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Char_NonFlyingBird.Char_NonFlyingBird_C.ReceiveTick
	 */
	struct AChar_NonFlyingBird_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Char_NonFlyingBird.Char_NonFlyingBird_C.ReceiveDied
	 */
	struct AChar_NonFlyingBird_C_ReceiveDied_Params
	{	};

	/**
	 * Function Char_NonFlyingBird.Char_NonFlyingBird_C.SetLuring
	 */
	struct AChar_NonFlyingBird_C_SetLuring_Params
	{
	public:
		bool                                                       inLuring;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Char_NonFlyingBird.Char_NonFlyingBird_C.MultiCast_SetLuring
	 */
	struct AChar_NonFlyingBird_C_MultiCast_SetLuring_Params
	{
	public:
		bool                                                       isLuring;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Char_NonFlyingBird.Char_NonFlyingBird_C.ExecuteUbergraph_Char_NonFlyingBird
	 */
	struct AChar_NonFlyingBird_C_ExecuteUbergraph_Char_NonFlyingBird_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_H0QJ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Char_NonFlyingBird.Char_NonFlyingBird_C.OnLandedDelegate__DelegateSignature
	 */
	struct AChar_NonFlyingBird_C_OnLandedDelegate__DelegateSignature_Params
	{
	public:
		class AChar_NonFlyingBird_C*                               selfPawn;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
