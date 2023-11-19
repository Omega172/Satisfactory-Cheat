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
	 * Function BPW_ResourceSinkShop_Banner.BPW_ResourceSinkShop_Banner_C.UpdateBannerData
	 */
	struct UBPW_ResourceSinkShop_Banner_C_UpdateBannerData_Params
	{	};

	/**
	 * Function BPW_ResourceSinkShop_Banner.BPW_ResourceSinkShop_Banner_C.SetBanner
	 */
	struct UBPW_ResourceSinkShop_Banner_C_SetBanner_Params
	{
	public:
		struct FResourceSinkShop_Banner_Struct                     mBannerStruct;                                           // 0x0000(0x0110)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_ResourceSinkShop_Banner.BPW_ResourceSinkShop_Banner_C.PreConstruct
	 */
	struct UBPW_ResourceSinkShop_Banner_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_ResourceSinkShop_Banner.BPW_ResourceSinkShop_Banner_C.Construct
	 */
	struct UBPW_ResourceSinkShop_Banner_C_Construct_Params
	{	};

	/**
	 * Function BPW_ResourceSinkShop_Banner.BPW_ResourceSinkShop_Banner_C.ExecuteUbergraph_BPW_ResourceSinkShop_Banner
	 */
	struct UBPW_ResourceSinkShop_Banner_C_ExecuteUbergraph_BPW_ResourceSinkShop_Banner_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
