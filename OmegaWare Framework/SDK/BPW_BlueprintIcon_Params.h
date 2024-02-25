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
	 * Function BPW_BlueprintIcon.BPW_BlueprintIcon_C.SetBlueprintDescriptor
	 */
	struct UBPW_BlueprintIcon_C_SetBlueprintDescriptor_Params
	{
	public:
		class UFGBlueprintDescriptor*                              mBlueprintDescriptor;                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_BlueprintIcon.BPW_BlueprintIcon_C.PreConstruct
	 */
	struct UBPW_BlueprintIcon_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_BlueprintIcon.BPW_BlueprintIcon_C.ExecuteUbergraph_BPW_BlueprintIcon
	 */
	struct UBPW_BlueprintIcon_C_ExecuteUbergraph_BPW_BlueprintIcon_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
