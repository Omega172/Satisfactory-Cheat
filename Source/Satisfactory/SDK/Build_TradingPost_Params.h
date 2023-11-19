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
	 * Function Build_TradingPost.Build_TradingPost_C.GetBuildEffectTemplate
	 */
	struct ABuild_TradingPost_C_GetBuildEffectTemplate_Params
	{	};

	/**
	 * Function Build_TradingPost.Build_TradingPost_C.GetDefaultRepresentationColor
	 */
	struct ABuild_TradingPost_C_GetDefaultRepresentationColor_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Build_TradingPost.Build_TradingPost_C.GetLookAtDecription
	 */
	struct ABuild_TradingPost_C_GetLookAtDecription_Params
	{
	public:
		class AFGCharacterPlayer*                                  byCharacter;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		struct FUseState                                           State;                                                   // 0x0008(0x0030)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
		class FText                                                ReturnValue;                                             // 0x0038(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function Build_TradingPost.Build_TradingPost_C.UpdateUseState
	 */
	struct ABuild_TradingPost_C_UpdateUseState_Params
	{
	public:
		class AFGCharacterPlayer*                                  byCharacter;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             atLocation;                                              // 0x0008(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 componentHit;                                            // 0x0020(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
		struct FUseState                                           out_useState;                                            // 0x0028(0x0030)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function Build_TradingPost.Build_TradingPost_C.IsUseable
	 */
	struct ABuild_TradingPost_C_IsUseable_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Build_TradingPost.Build_TradingPost_C.Update Trading Post Visibility
	 */
	struct ABuild_TradingPost_C_UpdateTradingPostVisibility_Params
	{	};

	/**
	 * Function Build_TradingPost.Build_TradingPost_C.OnLoaded_F02CFE974B6123F49BF5CFAD0A36D612
	 */
	struct ABuild_TradingPost_C_OnLoaded_F02CFE974B6123F49BF5CFAD0A36D612_Params
	{
	public:
		class UObject*                                             Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Build_TradingPost.Build_TradingPost_C.OnLoaded_94271F0F483AA543FCDD66A7474D3BE4
	 */
	struct ABuild_TradingPost_C_OnLoaded_94271F0F483AA543FCDD66A7474D3BE4_Params
	{
	public:
		class UClass*                                              Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	};

	/**
	 * Function Build_TradingPost.Build_TradingPost_C.OnLoaded_A570242C4EC82CB27F3BF0AD8DABA48E
	 */
	struct ABuild_TradingPost_C_OnLoaded_A570242C4EC82CB27F3BF0AD8DABA48E_Params
	{
	public:
		class UObject*                                             Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Build_TradingPost.Build_TradingPost_C.ReceiveBeginPlay
	 */
	struct ABuild_TradingPost_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Build_TradingPost.Build_TradingPost_C.ReceiveDestroyed
	 */
	struct ABuild_TradingPost_C_ReceiveDestroyed_Params
	{	};

	/**
	 * Function Build_TradingPost.Build_TradingPost_C.OnTradingPostUpgraded
	 */
	struct ABuild_TradingPost_C_OnTradingPostUpgraded_Params
	{
	public:
		int32_t                                                    Level;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       suppressBuildEffects;                                    // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Build_TradingPost.Build_TradingPost_C.UpdateMesh
	 */
	struct ABuild_TradingPost_C_UpdateMesh_Params
	{	};

	/**
	 * Function Build_TradingPost.Build_TradingPost_C.ExecuteUbergraph_Build_TradingPost
	 */
	struct ABuild_TradingPost_C_ExecuteUbergraph_Build_TradingPost_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
