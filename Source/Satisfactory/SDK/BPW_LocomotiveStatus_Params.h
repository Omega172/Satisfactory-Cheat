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
	 * Function BPW_LocomotiveStatus.BPW_LocomotiveStatus_C.SetStatusElements
	 */
	struct UBPW_LocomotiveStatus_C_SetStatusElements_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FLinearColor                                        iconColor;                                               // 0x0018(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UTexture2D*                                          Icon;                                                    // 0x0028(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                                       PulseIcon;                                               // 0x0030(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_P11H[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPW_LocomotiveStatus.BPW_LocomotiveStatus_C.SetTrain
	 */
	struct UBPW_LocomotiveStatus_C_SetTrain_Params
	{
	public:
		class AFGTrain*                                            mTrain;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_LocomotiveStatus.BPW_LocomotiveStatus_C.SetTrainStatus
	 */
	struct UBPW_LocomotiveStatus_C_SetTrainStatus_Params
	{
	public:
		ETrainStatus                                               mTrainStatus;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_LocomotiveStatus.BPW_LocomotiveStatus_C.Construct
	 */
	struct UBPW_LocomotiveStatus_C_Construct_Params
	{	};

	/**
	 * Function BPW_LocomotiveStatus.BPW_LocomotiveStatus_C.ExecuteUbergraph_BPW_LocomotiveStatus
	 */
	struct UBPW_LocomotiveStatus_C_ExecuteUbergraph_BPW_LocomotiveStatus_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
