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
	 * Function Build_WorkBenchIntegrated.Build_WorkBenchIntegrated_C.IsEquipmentWorkshop
	 */
	struct ABuild_WorkBenchIntegrated_C_IsEquipmentWorkshop_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Build_WorkBenchIntegrated.Build_WorkBenchIntegrated_C.OnRep_mHighlightEffectState
	 */
	struct ABuild_WorkBenchIntegrated_C_OnRep_mHighlightEffectState_Params
	{	};

	/**
	 * Function Build_WorkBenchIntegrated.Build_WorkBenchIntegrated_C.GetBuildEffectTemplate
	 */
	struct ABuild_WorkBenchIntegrated_C_GetBuildEffectTemplate_Params
	{	};

	/**
	 * Function Build_WorkBenchIntegrated.Build_WorkBenchIntegrated_C.CanBeSampled
	 */
	struct ABuild_WorkBenchIntegrated_C_CanBeSampled_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Build_WorkBenchIntegrated.Build_WorkBenchIntegrated_C.CanDismantle
	 */
	struct ABuild_WorkBenchIntegrated_C_CanDismantle_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Build_WorkBenchIntegrated.Build_WorkBenchIntegrated_C.GetLookAtDecription
	 */
	struct ABuild_WorkBenchIntegrated_C_GetLookAtDecription_Params
	{
	public:
		class AFGCharacterPlayer*                                  byCharacter;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		struct FUseState                                           State;                                                   // 0x0008(0x0030)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
		class FText                                                ReturnValue;                                             // 0x0038(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function Build_WorkBenchIntegrated.Build_WorkBenchIntegrated_C.IsUseable
	 */
	struct ABuild_WorkBenchIntegrated_C_IsUseable_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Build_WorkBenchIntegrated.Build_WorkBenchIntegrated_C.UpdateUseState
	 */
	struct ABuild_WorkBenchIntegrated_C_UpdateUseState_Params
	{
	public:
		class AFGCharacterPlayer*                                  byCharacter;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             atLocation;                                              // 0x0008(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 componentHit;                                            // 0x0020(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
		struct FUseState                                           out_useState;                                            // 0x0028(0x0030)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function Build_WorkBenchIntegrated.Build_WorkBenchIntegrated_C.UpdateBuildableVisibility
	 */
	struct ABuild_WorkBenchIntegrated_C_UpdateBuildableVisibility_Params
	{
	public:
		bool                                                       IsVisible;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       isTutorialComplete;                                      // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Build_WorkBenchIntegrated.Build_WorkBenchIntegrated_C.ShowHighlightEffect
	 */
	struct ABuild_WorkBenchIntegrated_C_ShowHighlightEffect_Params
	{
	public:
		int32_t                                                    ExpectedState;                                           // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Build_WorkBenchIntegrated.Build_WorkBenchIntegrated_C.DestroyHighlightEffect
	 */
	struct ABuild_WorkBenchIntegrated_C_DestroyHighlightEffect_Params
	{	};

	/**
	 * Function Build_WorkBenchIntegrated.Build_WorkBenchIntegrated_C.OnUse
	 */
	struct ABuild_WorkBenchIntegrated_C_OnUse_Params
	{
	public:
		class AFGCharacterPlayer*                                  byCharacter;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		struct FUseState                                           State;                                                   // 0x0008(0x0030)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function Build_WorkBenchIntegrated.Build_WorkBenchIntegrated_C.ReceiveBeginPlay
	 */
	struct ABuild_WorkBenchIntegrated_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Build_WorkBenchIntegrated.Build_WorkBenchIntegrated_C.ReceiveEndPlay
	 */
	struct ABuild_WorkBenchIntegrated_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Build_WorkBenchIntegrated.Build_WorkBenchIntegrated_C.SetHighlightState
	 */
	struct ABuild_WorkBenchIntegrated_C_SetHighlightState_Params
	{
	public:
		int32_t                                                    NewHighlightState;                                       // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Build_WorkBenchIntegrated.Build_WorkBenchIntegrated_C.ExecuteUbergraph_Build_WorkBenchIntegrated
	 */
	struct ABuild_WorkBenchIntegrated_C_ExecuteUbergraph_Build_WorkBenchIntegrated_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
