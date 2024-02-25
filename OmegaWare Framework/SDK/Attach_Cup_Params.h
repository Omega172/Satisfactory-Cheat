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
	 * Function Attach_Cup.Attach_Cup_C.PlayAttachEffects3P
	 */
	struct AAttach_Cup_C_PlayAttachEffects3P_Params
	{	};

	/**
	 * Function Attach_Cup.Attach_Cup_C.PlayUseEffect
	 */
	struct AAttach_Cup_C_PlayUseEffect_Params
	{
	public:
		struct FVector                                             UseLocation;                                             // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Attach_Cup.Attach_Cup_C.ExecuteUbergraph_Attach_Cup
	 */
	struct AAttach_Cup_C_ExecuteUbergraph_Attach_Cup_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_ABAR[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
