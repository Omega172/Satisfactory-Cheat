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
	 * Function BPW_HUDNotification_Default.BPW_HUDNotification_Default_C.SetIcon
	 */
	struct UBPW_HUDNotification_Default_C_SetIcon_Params
	{
	public:
		class UTexture2D*                                          mIcon;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_HUDNotification_Default.BPW_HUDNotification_Default_C.SetDescription
	 */
	struct UBPW_HUDNotification_Default_C_SetDescription_Params
	{
	public:
		class FText                                                mDescription;                                            // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BPW_HUDNotification_Default.BPW_HUDNotification_Default_C.SetTitle
	 */
	struct UBPW_HUDNotification_Default_C_SetTitle_Params
	{
	public:
		class FText                                                mTitle;                                                  // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BPW_HUDNotification_Default.BPW_HUDNotification_Default_C.Construct
	 */
	struct UBPW_HUDNotification_Default_C_Construct_Params
	{	};

	/**
	 * Function BPW_HUDNotification_Default.BPW_HUDNotification_Default_C.ExecuteUbergraph_BPW_HUDNotification_Default
	 */
	struct UBPW_HUDNotification_Default_C_ExecuteUbergraph_BPW_HUDNotification_Default_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
