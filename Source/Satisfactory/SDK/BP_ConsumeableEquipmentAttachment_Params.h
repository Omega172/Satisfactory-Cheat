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
	 * Function BP_ConsumeableEquipmentAttachment.BP_ConsumeableEquipmentAttachment_C.GetHandsItem
	 */
	struct ABP_ConsumeableEquipmentAttachment_C_GetHandsItem_Params
	{
	public:
		class UClass*                                              Item;                                                    // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ConsumeableEquipmentAttachment.BP_ConsumeableEquipmentAttachment_C.ReceiveTick
	 */
	struct ABP_ConsumeableEquipmentAttachment_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ConsumeableEquipmentAttachment.BP_ConsumeableEquipmentAttachment_C.PlayUseEffect
	 */
	struct ABP_ConsumeableEquipmentAttachment_C_PlayUseEffect_Params
	{
	public:
		struct FVector                                             UseLocation;                                             // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ConsumeableEquipmentAttachment.BP_ConsumeableEquipmentAttachment_C.OnAttach
	 */
	struct ABP_ConsumeableEquipmentAttachment_C_OnAttach_Params
	{	};

	/**
	 * Function BP_ConsumeableEquipmentAttachment.BP_ConsumeableEquipmentAttachment_C.ExecuteUbergraph_BP_ConsumeableEquipmentAttachment
	 */
	struct ABP_ConsumeableEquipmentAttachment_C_ExecuteUbergraph_BP_ConsumeableEquipmentAttachment_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
