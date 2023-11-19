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
	 * Function BPW_ResourceWell_NodeInfo.BPW_ResourceWell_NodeInfo_C.SetFrackerCore
	 */
	struct UBPW_ResourceWell_NodeInfo_C_SetFrackerCore_Params
	{
	public:
		class AFGResourceNodeFrackingCore*                         mFrackerCore;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_ResourceWell_NodeInfo.BPW_ResourceWell_NodeInfo_C.PreConstruct
	 */
	struct UBPW_ResourceWell_NodeInfo_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_ResourceWell_NodeInfo.BPW_ResourceWell_NodeInfo_C.ExecuteUbergraph_BPW_ResourceWell_NodeInfo
	 */
	struct UBPW_ResourceWell_NodeInfo_C_ExecuteUbergraph_BPW_ResourceWell_NodeInfo_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
