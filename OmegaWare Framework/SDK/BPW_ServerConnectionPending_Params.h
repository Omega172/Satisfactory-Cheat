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
	 * Function BPW_ServerConnectionPending.BPW_ServerConnectionPending_C.SetUsesBackground
	 */
	struct UBPW_ServerConnectionPending_C_SetUsesBackground_Params
	{
	public:
		bool                                                       mUsesBackground;                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_ServerConnectionPending.BPW_ServerConnectionPending_C.PreConstruct
	 */
	struct UBPW_ServerConnectionPending_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_ServerConnectionPending.BPW_ServerConnectionPending_C.ExecuteUbergraph_BPW_ServerConnectionPending
	 */
	struct UBPW_ServerConnectionPending_C_ExecuteUbergraph_BPW_ServerConnectionPending_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
