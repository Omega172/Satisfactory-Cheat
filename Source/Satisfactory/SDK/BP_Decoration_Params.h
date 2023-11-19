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
	 * Function BP_Decoration.BP_Decoration_C.GatherDependencies
	 */
	struct ABP_Decoration_C_GatherDependencies_Params
	{
	public:
		TArray<class UObject*>                                     out_dependentObjects;                                    // 0x0000(0x0010)  (Parm, OutParm)
	};

	/**
	 * Function BP_Decoration.BP_Decoration_C.NeedTransform
	 */
	struct ABP_Decoration_C_NeedTransform_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Decoration.BP_Decoration_C.ShouldSave
	 */
	struct ABP_Decoration_C_ShouldSave_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Decoration.BP_Decoration_C.IsUseable
	 */
	struct ABP_Decoration_C_IsUseable_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Decoration.BP_Decoration_C.PickUp
	 */
	struct ABP_Decoration_C_PickUp_Params
	{
	public:
		class AFGCharacterPlayer*                                  inUser;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Decoration.BP_Decoration_C.ReceiveBeginPlay
	 */
	struct ABP_Decoration_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_Decoration.BP_Decoration_C.OnUse
	 */
	struct ABP_Decoration_C_OnUse_Params
	{
	public:
		class AFGCharacterPlayer*                                  byCharacter;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		struct FUseState                                           State;                                                   // 0x0008(0x0030)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function BP_Decoration.BP_Decoration_C.SetupActor
	 */
	struct ABP_Decoration_C_SetupActor_Params
	{	};

	/**
	 * Function BP_Decoration.BP_Decoration_C.ExecuteUbergraph_BP_Decoration
	 */
	struct ABP_Decoration_C_ExecuteUbergraph_BP_Decoration_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
