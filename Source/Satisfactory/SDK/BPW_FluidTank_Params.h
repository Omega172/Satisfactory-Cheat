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
	 * Function BPW_FluidTank.BPW_FluidTank_C.SetItemDescriptor
	 */
	struct UBPW_FluidTank_C_SetItemDescriptor_Params
	{
	public:
		class UClass*                                              mItemDescriptor;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_FluidTank.BPW_FluidTank_C.SetForm
	 */
	struct UBPW_FluidTank_C_SetForm_Params
	{
	public:
		EResourceForm                                              mForm;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_MJZO[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPW_FluidTank.BPW_FluidTank_C.SetAliasingDensity
	 */
	struct UBPW_FluidTank_C_SetAliasingDensity_Params
	{
	public:
		double                                                     Value;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_FluidTank.BPW_FluidTank_C.UpdateTankValue
	 */
	struct UBPW_FluidTank_C_UpdateTankValue_Params
	{
	public:
		double                                                     Value;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_FluidTank.BPW_FluidTank_C.SetTint
	 */
	struct UBPW_FluidTank_C_SetTint_Params
	{
	public:
		struct FLinearColor                                        Tint;                                                    // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_FluidTank.BPW_FluidTank_C.PreConstruct
	 */
	struct UBPW_FluidTank_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_FluidTank.BPW_FluidTank_C.ExecuteUbergraph_BPW_FluidTank
	 */
	struct UBPW_FluidTank_C_ExecuteUbergraph_BPW_FluidTank_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
