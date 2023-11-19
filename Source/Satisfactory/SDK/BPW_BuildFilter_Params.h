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
	 * Function BPW_BuildFilter.BPW_BuildFilter_C.SetHeaderText
	 */
	struct UBPW_BuildFilter_C_SetHeaderText_Params
	{
	public:
		class FText                                                mFilterHeaderText;                                       // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BPW_BuildFilter.BPW_BuildFilter_C.OnFilterUpdated
	 */
	struct UBPW_BuildFilter_C_OnFilterUpdated_Params
	{
	public:
		class UClass*                                              newClassFilter;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		class UClass*                                              newItemDescriptor;                                       // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
		class UFGItemDescriptor*                                   NewBlueprintDescriptor;                                  // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_BuildFilter.BPW_BuildFilter_C.PreConstruct
	 */
	struct UBPW_BuildFilter_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_BuildFilter.BPW_BuildFilter_C.ExecuteUbergraph_BPW_BuildFilter
	 */
	struct UBPW_BuildFilter_C_ExecuteUbergraph_BPW_BuildFilter_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
