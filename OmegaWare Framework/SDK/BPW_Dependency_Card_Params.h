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
	 * Function BPW_Dependency_Card.BPW_Dependency_Card_C.SetTooltipInfo
	 */
	struct UBPW_Dependency_Card_C_SetTooltipInfo_Params
	{
	public:
		class UClass*                                              mSchematic;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_Dependency_Card.BPW_Dependency_Card_C.PreConstruct
	 */
	struct UBPW_Dependency_Card_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_Dependency_Card.BPW_Dependency_Card_C.ExecuteUbergraph_BPW_Dependency_Card
	 */
	struct UBPW_Dependency_Card_C_ExecuteUbergraph_BPW_Dependency_Card_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
