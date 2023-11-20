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
	 * Function Build_Mam.Build_Mam_C.DestroyActiveMAMFX
	 */
	struct ABuild_Mam_C_DestroyActiveMAMFX_Params
	{	};

	/**
	 * Function Build_Mam.Build_Mam_C.StartActiveMAMFX
	 */
	struct ABuild_Mam_C_StartActiveMAMFX_Params
	{	};

	/**
	 * Function Build_Mam.Build_Mam_C.KillActiveMAMSFX
	 */
	struct ABuild_Mam_C_KillActiveMAMSFX_Params
	{	};

	/**
	 * Function Build_Mam.Build_Mam_C.KillActiveSFXNotifies
	 */
	struct ABuild_Mam_C_KillActiveSFXNotifies_Params
	{	};

	/**
	 * Function Build_Mam.Build_Mam_C.StopActiveMAMSFX
	 */
	struct ABuild_Mam_C_StopActiveMAMSFX_Params
	{	};

	/**
	 * Function Build_Mam.Build_Mam_C.PlayActiveMAMSFX
	 */
	struct ABuild_Mam_C_PlayActiveMAMSFX_Params
	{	};

	/**
	 * Function Build_Mam.Build_Mam_C.CanBeSampled
	 */
	struct ABuild_Mam_C_CanBeSampled_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Build_Mam.Build_Mam_C.GetLookAtDecription
	 */
	struct ABuild_Mam_C_GetLookAtDecription_Params
	{
	public:
		class AFGCharacterPlayer*                                  byCharacter;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		struct FUseState                                           State;                                                   // 0x0008(0x0030)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
		class FText                                                ReturnValue;                                             // 0x0038(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function Build_Mam.Build_Mam_C.IsUseable
	 */
	struct ABuild_Mam_C_IsUseable_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Build_Mam.Build_Mam_C.UpdateUseState
	 */
	struct ABuild_Mam_C_UpdateUseState_Params
	{
	public:
		class AFGCharacterPlayer*                                  byCharacter;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             atLocation;                                              // 0x0008(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 componentHit;                                            // 0x0020(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
		struct FUseState                                           out_useState;                                            // 0x0028(0x0030)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function Build_Mam.Build_Mam_C.UserConstructionScript
	 */
	struct ABuild_Mam_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Build_Mam.Build_Mam_C.ResearchStateChanged
	 */
	struct ABuild_Mam_C_ResearchStateChanged_Params
	{
	public:
		EResearchState                                             researchState;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Build_Mam.Build_Mam_C.LostSignificance
	 */
	struct ABuild_Mam_C_LostSignificance_Params
	{	};

	/**
	 * Function Build_Mam.Build_Mam_C.GainedSignificance
	 */
	struct ABuild_Mam_C_GainedSignificance_Params
	{	};

	/**
	 * Function Build_Mam.Build_Mam_C.ExecuteUbergraph_Build_Mam
	 */
	struct ABuild_Mam_C_ExecuteUbergraph_Build_Mam_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
