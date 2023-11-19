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
	 * Function BPW_ResourceSinkCoupon.BPW_ResourceSinkCoupon_C.InitInventorySlot
	 */
	struct UBPW_ResourceSinkCoupon_C_InitInventorySlot_Params
	{
	public:
		class UFGInventoryComponent*                               InventoryComponent;                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_ResourceSinkCoupon.BPW_ResourceSinkCoupon_C.PrintCoupon
	 */
	struct UBPW_ResourceSinkCoupon_C_PrintCoupon_Params
	{	};

	/**
	 * Function BPW_ResourceSinkCoupon.BPW_ResourceSinkCoupon_C.CurveLerp
	 */
	struct UBPW_ResourceSinkCoupon_C_CurveLerp_Params
	{
	public:
		class UCurveFloat*                                         Curve;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		double                                                     Start;                                                   // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                                     End;                                                     // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                                     Alpha;                                                   // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                                     ReturnValue;                                             // 0x0020(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_ResourceSinkCoupon.BPW_ResourceSinkCoupon_C.Lerp
	 */
	struct UBPW_ResourceSinkCoupon_C_Lerp_Params
	{	};

	/**
	 * Function BPW_ResourceSinkCoupon.BPW_ResourceSinkCoupon_C.Destruct
	 */
	struct UBPW_ResourceSinkCoupon_C_Destruct_Params
	{	};

	/**
	 * Function BPW_ResourceSinkCoupon.BPW_ResourceSinkCoupon_C.ExecuteUbergraph_BPW_ResourceSinkCoupon
	 */
	struct UBPW_ResourceSinkCoupon_C_ExecuteUbergraph_BPW_ResourceSinkCoupon_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_ResourceSinkCoupon.BPW_ResourceSinkCoupon_C.OnPrintContinued__DelegateSignature
	 */
	struct UBPW_ResourceSinkCoupon_C_OnPrintContinued__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_ResourceSinkCoupon.BPW_ResourceSinkCoupon_C.OnPrintPaused__DelegateSignature
	 */
	struct UBPW_ResourceSinkCoupon_C_OnPrintPaused__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_ResourceSinkCoupon.BPW_ResourceSinkCoupon_C.OnPrintCompleted__DelegateSignature
	 */
	struct UBPW_ResourceSinkCoupon_C_OnPrintCompleted__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
