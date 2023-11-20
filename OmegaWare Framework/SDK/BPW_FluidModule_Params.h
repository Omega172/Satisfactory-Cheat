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
	 * Function BPW_FluidModule.BPW_FluidModule_C.SetFluidType
	 */
	struct UBPW_FluidModule_C_SetFluidType_Params
	{
	public:
		class UClass*                                              fluidDescriptor;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_FluidModule.BPW_FluidModule_C.UpdateValues
	 */
	struct UBPW_FluidModule_C_UpdateValues_Params
	{
	public:
		double                                                     MaxAmount;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                                     CurrentAmount;                                           // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                                     ConsumptionValue;                                        // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_FluidModule.BPW_FluidModule_C.Construct
	 */
	struct UBPW_FluidModule_C_Construct_Params
	{	};

	/**
	 * Function BPW_FluidModule.BPW_FluidModule_C.PreConstruct
	 */
	struct UBPW_FluidModule_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_FluidModule.BPW_FluidModule_C.ExecuteUbergraph_BPW_FluidModule
	 */
	struct UBPW_FluidModule_C_ExecuteUbergraph_BPW_FluidModule_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
