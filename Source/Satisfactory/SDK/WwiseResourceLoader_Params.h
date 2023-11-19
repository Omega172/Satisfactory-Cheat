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
	 * Function WwiseResourceLoader.WwiseEventInfoLibrary.SetWwiseShortId
	 */
	struct UWwiseEventInfoLibrary_SetWwiseShortId_Params
	{
	public:
		struct FWwiseEventInfo                                     Ref;                                                     // 0x0000(0x0024)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    WwiseShortId;                                            // 0x0024(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FWwiseEventInfo                                     ReturnValue;                                             // 0x0028(0x0024)  (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function WwiseResourceLoader.WwiseEventInfoLibrary.SetWwiseName
	 */
	struct UWwiseEventInfoLibrary_SetWwiseName_Params
	{
	public:
		struct FWwiseEventInfo                                     Ref;                                                     // 0x0000(0x0024)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_CRFL[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              WwiseName;                                               // 0x0028(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FWwiseEventInfo                                     ReturnValue;                                             // 0x0038(0x0024)  (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function WwiseResourceLoader.WwiseEventInfoLibrary.SetWwiseGuid
	 */
	struct UWwiseEventInfoLibrary_SetWwiseGuid_Params
	{
	public:
		struct FWwiseEventInfo                                     Ref;                                                     // 0x0000(0x0024)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGuid                                               WwiseGuid;                                               // 0x0024(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FWwiseEventInfo                                     ReturnValue;                                             // 0x0034(0x0024)  (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function WwiseResourceLoader.WwiseEventInfoLibrary.SetSwitchContainerLoading
	 */
	struct UWwiseEventInfoLibrary_SetSwitchContainerLoading_Params
	{
	public:
		struct FWwiseEventInfo                                     Ref;                                                     // 0x0000(0x0024)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EWwiseEventSwitchContainerLoading                          SwitchContainerLoading;                                  // 0x0024(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_UQPS[0x3];                                   // 0x0025(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FWwiseEventInfo                                     ReturnValue;                                             // 0x0028(0x0024)  (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function WwiseResourceLoader.WwiseEventInfoLibrary.SetHardCodedSoundBankShortId
	 */
	struct UWwiseEventInfoLibrary_SetHardCodedSoundBankShortId_Params
	{
	public:
		struct FWwiseEventInfo                                     Ref;                                                     // 0x0000(0x0024)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    HardCodedSoundBankShortId;                               // 0x0024(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FWwiseEventInfo                                     ReturnValue;                                             // 0x0028(0x0024)  (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function WwiseResourceLoader.WwiseEventInfoLibrary.SetDestroyOptions
	 */
	struct UWwiseEventInfoLibrary_SetDestroyOptions_Params
	{
	public:
		struct FWwiseEventInfo                                     Ref;                                                     // 0x0000(0x0024)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EWwiseEventDestroyOptions                                  DestroyOptions;                                          // 0x0024(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_HL0E[0x3];                                   // 0x0025(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FWwiseEventInfo                                     ReturnValue;                                             // 0x0028(0x0024)  (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function WwiseResourceLoader.WwiseEventInfoLibrary.MakeStruct
	 */
	struct UWwiseEventInfoLibrary_MakeStruct_Params
	{
	public:
		struct FGuid                                               WwiseGuid;                                               // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    WwiseShortId;                                            // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_A6N2[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              WwiseName;                                               // 0x0018(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EWwiseEventSwitchContainerLoading                          SwitchContainerLoading;                                  // 0x0028(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EWwiseEventDestroyOptions                                  DestroyOptions;                                          // 0x0029(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_GJ6K[0x2];                                   // 0x002A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    HardCodedSoundBankShortId;                               // 0x002C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FWwiseEventInfo                                     ReturnValue;                                             // 0x0030(0x0024)  (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function WwiseResourceLoader.WwiseEventInfoLibrary.GetWwiseShortId
	 */
	struct UWwiseEventInfoLibrary_GetWwiseShortId_Params
	{
	public:
		struct FWwiseEventInfo                                     Ref;                                                     // 0x0000(0x0024)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0024(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function WwiseResourceLoader.WwiseEventInfoLibrary.GetWwiseName
	 */
	struct UWwiseEventInfoLibrary_GetWwiseName_Params
	{
	public:
		struct FWwiseEventInfo                                     Ref;                                                     // 0x0000(0x0024)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_T180[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              ReturnValue;                                             // 0x0028(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function WwiseResourceLoader.WwiseEventInfoLibrary.GetWwiseGuid
	 */
	struct UWwiseEventInfoLibrary_GetWwiseGuid_Params
	{
	public:
		struct FWwiseEventInfo                                     Ref;                                                     // 0x0000(0x0024)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGuid                                               ReturnValue;                                             // 0x0024(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function WwiseResourceLoader.WwiseEventInfoLibrary.GetSwitchContainerLoading
	 */
	struct UWwiseEventInfoLibrary_GetSwitchContainerLoading_Params
	{
	public:
		struct FWwiseEventInfo                                     Ref;                                                     // 0x0000(0x0024)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EWwiseEventSwitchContainerLoading                          ReturnValue;                                             // 0x0024(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function WwiseResourceLoader.WwiseEventInfoLibrary.GetHardCodedSoundBankShortId
	 */
	struct UWwiseEventInfoLibrary_GetHardCodedSoundBankShortId_Params
	{
	public:
		struct FWwiseEventInfo                                     Ref;                                                     // 0x0000(0x0024)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0024(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function WwiseResourceLoader.WwiseEventInfoLibrary.GetDestroyOptions
	 */
	struct UWwiseEventInfoLibrary_GetDestroyOptions_Params
	{
	public:
		struct FWwiseEventInfo                                     Ref;                                                     // 0x0000(0x0024)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EWwiseEventDestroyOptions                                  ReturnValue;                                             // 0x0024(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function WwiseResourceLoader.WwiseEventInfoLibrary.BreakStruct
	 */
	struct UWwiseEventInfoLibrary_BreakStruct_Params
	{
	public:
		struct FWwiseEventInfo                                     Ref;                                                     // 0x0000(0x0024)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGuid                                               OutWwiseGuid;                                            // 0x0024(0x0010)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    OutWwiseShortId;                                         // 0x0034(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              OutWwiseName;                                            // 0x0038(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EWwiseEventSwitchContainerLoading                          OutSwitchContainerLoading;                               // 0x0048(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EWwiseEventDestroyOptions                                  OutDestroyOptions;                                       // 0x0049(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_E5ZH[0x2];                                   // 0x004A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    OutHardCodedSoundBankShortId;                            // 0x004C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function WwiseResourceLoader.WwiseGroupValueInfoLibrary.SetWwiseShortId
	 */
	struct UWwiseGroupValueInfoLibrary_SetWwiseShortId_Params
	{
	public:
		struct FWwiseGroupValueInfo                                Ref;                                                     // 0x0000(0x0024)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    WwiseShortId;                                            // 0x0024(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FWwiseGroupValueInfo                                ReturnValue;                                             // 0x0028(0x0024)  (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function WwiseResourceLoader.WwiseGroupValueInfoLibrary.SetWwiseName
	 */
	struct UWwiseGroupValueInfoLibrary_SetWwiseName_Params
	{
	public:
		struct FWwiseGroupValueInfo                                Ref;                                                     // 0x0000(0x0024)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_HQ1F[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              WwiseName;                                               // 0x0028(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FWwiseGroupValueInfo                                ReturnValue;                                             // 0x0038(0x0024)  (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function WwiseResourceLoader.WwiseGroupValueInfoLibrary.SetGroupShortId
	 */
	struct UWwiseGroupValueInfoLibrary_SetGroupShortId_Params
	{
	public:
		struct FWwiseGroupValueInfo                                Ref;                                                     // 0x0000(0x0024)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    GroupShortId;                                            // 0x0024(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FWwiseGroupValueInfo                                ReturnValue;                                             // 0x0028(0x0024)  (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function WwiseResourceLoader.WwiseGroupValueInfoLibrary.SetAssetGuid
	 */
	struct UWwiseGroupValueInfoLibrary_SetAssetGuid_Params
	{
	public:
		struct FWwiseGroupValueInfo                                Ref;                                                     // 0x0000(0x0024)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGuid                                               AssetGuid;                                               // 0x0024(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FWwiseGroupValueInfo                                ReturnValue;                                             // 0x0034(0x0024)  (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function WwiseResourceLoader.WwiseGroupValueInfoLibrary.MakeStruct
	 */
	struct UWwiseGroupValueInfoLibrary_MakeStruct_Params
	{
	public:
		struct FGuid                                               AssetGuid;                                               // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    GroupShortId;                                            // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    WwiseShortId;                                            // 0x0014(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              WwiseName;                                               // 0x0018(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FWwiseGroupValueInfo                                ReturnValue;                                             // 0x0028(0x0024)  (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function WwiseResourceLoader.WwiseGroupValueInfoLibrary.GetWwiseShortId
	 */
	struct UWwiseGroupValueInfoLibrary_GetWwiseShortId_Params
	{
	public:
		struct FWwiseGroupValueInfo                                Ref;                                                     // 0x0000(0x0024)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0024(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function WwiseResourceLoader.WwiseGroupValueInfoLibrary.GetWwiseName
	 */
	struct UWwiseGroupValueInfoLibrary_GetWwiseName_Params
	{
	public:
		struct FWwiseGroupValueInfo                                Ref;                                                     // 0x0000(0x0024)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_LVSD[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              ReturnValue;                                             // 0x0028(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function WwiseResourceLoader.WwiseGroupValueInfoLibrary.GetGroupShortId
	 */
	struct UWwiseGroupValueInfoLibrary_GetGroupShortId_Params
	{
	public:
		struct FWwiseGroupValueInfo                                Ref;                                                     // 0x0000(0x0024)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0024(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function WwiseResourceLoader.WwiseGroupValueInfoLibrary.GetAssetGuid
	 */
	struct UWwiseGroupValueInfoLibrary_GetAssetGuid_Params
	{
	public:
		struct FWwiseGroupValueInfo                                Ref;                                                     // 0x0000(0x0024)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGuid                                               ReturnValue;                                             // 0x0024(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function WwiseResourceLoader.WwiseGroupValueInfoLibrary.BreakStruct
	 */
	struct UWwiseGroupValueInfoLibrary_BreakStruct_Params
	{
	public:
		struct FWwiseGroupValueInfo                                Ref;                                                     // 0x0000(0x0024)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGuid                                               OutAssetGuid;                                            // 0x0024(0x0010)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    OutGroupShortId;                                         // 0x0034(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    OutWwiseShortId;                                         // 0x0038(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_KMKX[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              OutWwiseName;                                            // 0x0040(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function WwiseResourceLoader.WwiseObjectInfoLibrary.SetWwiseShortId
	 */
	struct UWwiseObjectInfoLibrary_SetWwiseShortId_Params
	{
	public:
		struct FWwiseObjectInfo                                    Ref;                                                     // 0x0000(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    WwiseShortId;                                            // 0x0020(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FWwiseObjectInfo                                    ReturnValue;                                             // 0x0024(0x0020)  (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function WwiseResourceLoader.WwiseObjectInfoLibrary.SetWwiseName
	 */
	struct UWwiseObjectInfoLibrary_SetWwiseName_Params
	{
	public:
		struct FWwiseObjectInfo                                    Ref;                                                     // 0x0000(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              WwiseName;                                               // 0x0020(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FWwiseObjectInfo                                    ReturnValue;                                             // 0x0030(0x0020)  (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function WwiseResourceLoader.WwiseObjectInfoLibrary.SetWwiseGuid
	 */
	struct UWwiseObjectInfoLibrary_SetWwiseGuid_Params
	{
	public:
		struct FWwiseObjectInfo                                    Ref;                                                     // 0x0000(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGuid                                               WwiseGuid;                                               // 0x0020(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FWwiseObjectInfo                                    ReturnValue;                                             // 0x0030(0x0020)  (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function WwiseResourceLoader.WwiseObjectInfoLibrary.SetHardCodedSoundBankShortId
	 */
	struct UWwiseObjectInfoLibrary_SetHardCodedSoundBankShortId_Params
	{
	public:
		struct FWwiseObjectInfo                                    Ref;                                                     // 0x0000(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    HardCodedSoundBankShortId;                               // 0x0020(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FWwiseObjectInfo                                    ReturnValue;                                             // 0x0024(0x0020)  (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function WwiseResourceLoader.WwiseObjectInfoLibrary.MakeStruct
	 */
	struct UWwiseObjectInfoLibrary_MakeStruct_Params
	{
	public:
		struct FGuid                                               WwiseGuid;                                               // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    WwiseShortId;                                            // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_DA9T[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              WwiseName;                                               // 0x0018(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    HardCodedSoundBankShortId;                               // 0x0028(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FWwiseObjectInfo                                    ReturnValue;                                             // 0x002C(0x0020)  (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function WwiseResourceLoader.WwiseObjectInfoLibrary.GetWwiseShortId
	 */
	struct UWwiseObjectInfoLibrary_GetWwiseShortId_Params
	{
	public:
		struct FWwiseObjectInfo                                    Ref;                                                     // 0x0000(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0020(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function WwiseResourceLoader.WwiseObjectInfoLibrary.GetWwiseName
	 */
	struct UWwiseObjectInfoLibrary_GetWwiseName_Params
	{
	public:
		struct FWwiseObjectInfo                                    Ref;                                                     // 0x0000(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              ReturnValue;                                             // 0x0020(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function WwiseResourceLoader.WwiseObjectInfoLibrary.GetWwiseGuid
	 */
	struct UWwiseObjectInfoLibrary_GetWwiseGuid_Params
	{
	public:
		struct FWwiseObjectInfo                                    Ref;                                                     // 0x0000(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGuid                                               ReturnValue;                                             // 0x0020(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function WwiseResourceLoader.WwiseObjectInfoLibrary.GetHardCodedSoundBankShortId
	 */
	struct UWwiseObjectInfoLibrary_GetHardCodedSoundBankShortId_Params
	{
	public:
		struct FWwiseObjectInfo                                    Ref;                                                     // 0x0000(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0020(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function WwiseResourceLoader.WwiseObjectInfoLibrary.BreakStruct
	 */
	struct UWwiseObjectInfoLibrary_BreakStruct_Params
	{
	public:
		struct FWwiseObjectInfo                                    Ref;                                                     // 0x0000(0x0020)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGuid                                               OutWwiseGuid;                                            // 0x0020(0x0010)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    OutWwiseShortId;                                         // 0x0030(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_NBIK[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              OutWwiseName;                                            // 0x0038(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    OutHardCodedSoundBankShortId;                            // 0x0048(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
