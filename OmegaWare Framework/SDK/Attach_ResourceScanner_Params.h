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
	 * Function Attach_ResourceScanner.Attach_ResourceScanner_C.PlayUseEffect
	 */
	struct AAttach_ResourceScanner_C_PlayUseEffect_Params
	{
	public:
		struct FVector                                             UseLocation;                                             // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Attach_ResourceScanner.Attach_ResourceScanner_C.Event BuildgunVisibility
	 */
	struct AAttach_ResourceScanner_C_EventBuildgunVisibility_Params
	{	};

	/**
	 * Function Attach_ResourceScanner.Attach_ResourceScanner_C.Event ScannerIKTimer
	 */
	struct AAttach_ResourceScanner_C_EventScannerIKTimer_Params
	{	};

	/**
	 * Function Attach_ResourceScanner.Attach_ResourceScanner_C.ExecuteUbergraph_Attach_ResourceScanner
	 */
	struct AAttach_ResourceScanner_C_ExecuteUbergraph_Attach_ResourceScanner_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_MFM7[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
