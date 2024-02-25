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
	 * Function BPW_CustomiserIcon.BPW_CustomiserIcon_C.SetColors
	 */
	struct UBPW_CustomiserIcon_C_SetColors_Params
	{
	public:
		struct FFactoryCustomizationColorSlot                      CustomiserColorData;                                     // 0x0000(0x0028)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function BPW_CustomiserIcon.BPW_CustomiserIcon_C.SetShowBackground
	 */
	struct UBPW_CustomiserIcon_C_SetShowBackground_Params
	{
	public:
		bool                                                       mShowBackground;                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_CustomiserIcon.BPW_CustomiserIcon_C.SetClearCustomiser
	 */
	struct UBPW_CustomiserIcon_C_SetClearCustomiser_Params
	{
	public:
		bool                                                       mClearCustomiser;                                        // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_9O7P[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPW_CustomiserIcon.BPW_CustomiserIcon_C.SetupData
	 */
	struct UBPW_CustomiserIcon_C_SetupData_Params
	{
	public:
		class UClass*                                              mCustomiserDescriptor;                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_CustomiserIcon.BPW_CustomiserIcon_C.PreConstruct
	 */
	struct UBPW_CustomiserIcon_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_CustomiserIcon.BPW_CustomiserIcon_C.ExecuteUbergraph_BPW_CustomiserIcon
	 */
	struct UBPW_CustomiserIcon_C_ExecuteUbergraph_BPW_CustomiserIcon_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
