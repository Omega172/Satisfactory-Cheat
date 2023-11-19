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
	 * Function BPW_LightsControlPanel_ListEntry.BPW_LightsControlPanel_ListEntry_C.BP_OnEntryReleased
	 */
	struct UBPW_LightsControlPanel_ListEntry_C_BP_OnEntryReleased_Params
	{	};

	/**
	 * Function BPW_LightsControlPanel_ListEntry.BPW_LightsControlPanel_ListEntry_C.BP_OnItemExpansionChanged
	 */
	struct UBPW_LightsControlPanel_ListEntry_C_BP_OnItemExpansionChanged_Params
	{
	public:
		bool                                                       bIsExpanded;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_LightsControlPanel_ListEntry.BPW_LightsControlPanel_ListEntry_C.BP_OnItemSelectionChanged
	 */
	struct UBPW_LightsControlPanel_ListEntry_C_BP_OnItemSelectionChanged_Params
	{
	public:
		bool                                                       bIsSelected;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_LightsControlPanel_ListEntry.BPW_LightsControlPanel_ListEntry_C.OnListItemObjectSet
	 */
	struct UBPW_LightsControlPanel_ListEntry_C_OnListItemObjectSet_Params
	{
	public:
		class UObject*                                             ListItemObject;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_LightsControlPanel_ListEntry.BPW_LightsControlPanel_ListEntry_C.ExecuteUbergraph_BPW_LightsControlPanel_ListEntry
	 */
	struct UBPW_LightsControlPanel_ListEntry_C_ExecuteUbergraph_BPW_LightsControlPanel_ListEntry_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
