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
	 * Function BPW_PhotoModeSequencerFloatEntry.BPW_PhotoModeSequencerFloatEntry_C.UpdateEntryIcon
	 */
	struct UBPW_PhotoModeSequencerFloatEntry_C_UpdateEntryIcon_Params
	{	};

	/**
	 * Function BPW_PhotoModeSequencerFloatEntry.BPW_PhotoModeSequencerFloatEntry_C.OnMarkerPressed
	 */
	struct UBPW_PhotoModeSequencerFloatEntry_C_OnMarkerPressed_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0078)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FEventReply                                         ReturnValue;                                             // 0x00B0(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BPW_PhotoModeSequencerFloatEntry.BPW_PhotoModeSequencerFloatEntry_C.UpdateSequencerEntry
	 */
	struct UBPW_PhotoModeSequencerFloatEntry_C_UpdateSequencerEntry_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
