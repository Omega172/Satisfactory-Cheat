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
	 * Function Build_HubTerminal.Build_HubTerminal_C.OnRep_mHighlightEffectState
	 */
	struct ABuild_HubTerminal_C_OnRep_mHighlightEffectState_Params
	{	};

	/**
	 * Function Build_HubTerminal.Build_HubTerminal_C.GetBuildEffectTemplate
	 */
	struct ABuild_HubTerminal_C_GetBuildEffectTemplate_Params
	{	};

	/**
	 * Function Build_HubTerminal.Build_HubTerminal_C.CanBeSampled
	 */
	struct ABuild_HubTerminal_C_CanBeSampled_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Build_HubTerminal.Build_HubTerminal_C.CanDismantle
	 */
	struct ABuild_HubTerminal_C_CanDismantle_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Build_HubTerminal.Build_HubTerminal_C.UpdateUseState
	 */
	struct ABuild_HubTerminal_C_UpdateUseState_Params
	{
	public:
		class AFGCharacterPlayer*                                  byCharacter;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             atLocation;                                              // 0x0008(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 componentHit;                                            // 0x0020(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
		struct FUseState                                           out_useState;                                            // 0x0028(0x0030)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function Build_HubTerminal.Build_HubTerminal_C.GetLookAtDecription
	 */
	struct ABuild_HubTerminal_C_GetLookAtDecription_Params
	{
	public:
		class AFGCharacterPlayer*                                  byCharacter;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		struct FUseState                                           State;                                                   // 0x0008(0x0030)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
		class FText                                                ReturnValue;                                             // 0x0038(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function Build_HubTerminal.Build_HubTerminal_C.ShowHighlightEffect
	 */
	struct ABuild_HubTerminal_C_ShowHighlightEffect_Params
	{
	public:
		int32_t                                                    ExpectedState;                                           // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Build_HubTerminal.Build_HubTerminal_C.DestroyHighlightEffect
	 */
	struct ABuild_HubTerminal_C_DestroyHighlightEffect_Params
	{	};

	/**
	 * Function Build_HubTerminal.Build_HubTerminal_C.OnUse
	 */
	struct ABuild_HubTerminal_C_OnUse_Params
	{
	public:
		class AFGCharacterPlayer*                                  byCharacter;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		struct FUseState                                           State;                                                   // 0x0008(0x0030)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function Build_HubTerminal.Build_HubTerminal_C.ReceiveBeginPlay
	 */
	struct ABuild_HubTerminal_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Build_HubTerminal.Build_HubTerminal_C.UpdateBuildableVisibility
	 */
	struct ABuild_HubTerminal_C_UpdateBuildableVisibility_Params
	{
	public:
		bool                                                       IsVisible;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       isTutorialComplete;                                      // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Build_HubTerminal.Build_HubTerminal_C.ReceiveEndPlay
	 */
	struct ABuild_HubTerminal_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Build_HubTerminal.Build_HubTerminal_C.SetHighlightState
	 */
	struct ABuild_HubTerminal_C_SetHighlightState_Params
	{
	public:
		int32_t                                                    NewHighlightState;                                       // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Build_HubTerminal.Build_HubTerminal_C.ExecuteUbergraph_Build_HubTerminal
	 */
	struct ABuild_HubTerminal_C_ExecuteUbergraph_Build_HubTerminal_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
