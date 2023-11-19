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
	 * Function Build_PriorityPowerSwitch.Build_PriorityPowerSwitch_C.GetStringSafe
	 */
	struct ABuild_PriorityPowerSwitch_C_GetStringSafe_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function Build_PriorityPowerSwitch.Build_PriorityPowerSwitch_C.CreateOrUpdate_TextRenderers
	 */
	struct ABuild_PriorityPowerSwitch_C_CreateOrUpdate_TextRenderers_Params
	{
	public:
		class FName                                                InSocketName;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Build_PriorityPowerSwitch.Build_PriorityPowerSwitch_C.GetLookAtDecription
	 */
	struct ABuild_PriorityPowerSwitch_C_GetLookAtDecription_Params
	{
	public:
		class AFGCharacterPlayer*                                  byCharacter;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		struct FUseState                                           State;                                                   // 0x0008(0x0030)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
		class FText                                                ReturnValue;                                             // 0x0038(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function Build_PriorityPowerSwitch.Build_PriorityPowerSwitch_C.IsUseable
	 */
	struct ABuild_PriorityPowerSwitch_C_IsUseable_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Build_PriorityPowerSwitch.Build_PriorityPowerSwitch_C.UpdateSignificanceTickRate
	 */
	struct ABuild_PriorityPowerSwitch_C_UpdateSignificanceTickRate_Params
	{
	public:
		float                                                      NewTickRate;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bTickEnabled;                                            // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Build_PriorityPowerSwitch.Build_PriorityPowerSwitch_C.UpdateHandleRotation
	 */
	struct ABuild_PriorityPowerSwitch_C_UpdateHandleRotation_Params
	{	};

	/**
	 * Function Build_PriorityPowerSwitch.Build_PriorityPowerSwitch_C.ReceiveBeginPlay
	 */
	struct ABuild_PriorityPowerSwitch_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Build_PriorityPowerSwitch.Build_PriorityPowerSwitch_C.ReceiveEndPlay
	 */
	struct ABuild_PriorityPowerSwitch_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Build_PriorityPowerSwitch.Build_PriorityPowerSwitch_C.OnBuildingTagChanged
	 */
	struct ABuild_PriorityPowerSwitch_C_OnBuildingTagChanged_Params
	{
	public:
		bool                                                       HasTag;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_40TZ[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              Tag;                                                     // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function Build_PriorityPowerSwitch.Build_PriorityPowerSwitch_C.OnIsSwitchConnectedChanged
	 */
	struct ABuild_PriorityPowerSwitch_C_OnIsSwitchConnectedChanged_Params
	{	};

	/**
	 * Function Build_PriorityPowerSwitch.Build_PriorityPowerSwitch_C.OnIsSwitchOnChanged
	 */
	struct ABuild_PriorityPowerSwitch_C_OnIsSwitchOnChanged_Params
	{	};

	/**
	 * Function Build_PriorityPowerSwitch.Build_PriorityPowerSwitch_C.GainedSignificance
	 */
	struct ABuild_PriorityPowerSwitch_C_GainedSignificance_Params
	{	};

	/**
	 * Function Build_PriorityPowerSwitch.Build_PriorityPowerSwitch_C.LostSignificance
	 */
	struct ABuild_PriorityPowerSwitch_C_LostSignificance_Params
	{	};

	/**
	 * Function Build_PriorityPowerSwitch.Build_PriorityPowerSwitch_C.ExecuteUbergraph_Build_PriorityPowerSwitch
	 */
	struct ABuild_PriorityPowerSwitch_C_ExecuteUbergraph_Build_PriorityPowerSwitch_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
