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
	 * Function Build_ConveyorAttachmentSplitterSmart.Build_ConveyorAttachmentSplitterSmart_C.CanUseFactoryClipboard
	 */
	struct ABuild_ConveyorAttachmentSplitterSmart_C_CanUseFactoryClipboard_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Build_ConveyorAttachmentSplitterSmart.Build_ConveyorAttachmentSplitterSmart_C.CopySettings
	 */
	struct ABuild_ConveyorAttachmentSplitterSmart_C_CopySettings_Params
	{
	public:
		class UFGFactoryClipboardSettings*                         ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Build_ConveyorAttachmentSplitterSmart.Build_ConveyorAttachmentSplitterSmart_C.GetClipboardMappingClass
	 */
	struct ABuild_ConveyorAttachmentSplitterSmart_C_GetClipboardMappingClass_Params
	{
	public:
		class UClass*                                              ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	};

	/**
	 * Function Build_ConveyorAttachmentSplitterSmart.Build_ConveyorAttachmentSplitterSmart_C.GetClipboardSettingsClass
	 */
	struct ABuild_ConveyorAttachmentSplitterSmart_C_GetClipboardSettingsClass_Params
	{
	public:
		class UClass*                                              ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	};

	/**
	 * Function Build_ConveyorAttachmentSplitterSmart.Build_ConveyorAttachmentSplitterSmart_C.PasteSettings
	 */
	struct ABuild_ConveyorAttachmentSplitterSmart_C_PasteSettings_Params
	{
	public:
		class UFGFactoryClipboardSettings*                         factoryClipboard;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_T3D5[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Build_ConveyorAttachmentSplitterSmart.Build_ConveyorAttachmentSplitterSmart_C.PlayConstructSound
	 */
	struct ABuild_ConveyorAttachmentSplitterSmart_C_PlayConstructSound_Params
	{	};

	/**
	 * Function Build_ConveyorAttachmentSplitterSmart.Build_ConveyorAttachmentSplitterSmart_C.ExecuteUbergraph_Build_ConveyorAttachmentSplitterSmart
	 */
	struct ABuild_ConveyorAttachmentSplitterSmart_C_ExecuteUbergraph_Build_ConveyorAttachmentSplitterSmart_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_C9G4[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
