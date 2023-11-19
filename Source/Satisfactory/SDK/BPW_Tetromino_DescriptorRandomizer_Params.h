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
	 * Function BPW_Tetromino_DescriptorRandomizer.BPW_Tetromino_DescriptorRandomizer_C.AddChild
	 */
	struct UBPW_Tetromino_DescriptorRandomizer_C_AddChild_Params
	{
	public:
		class UWidget*                                             Widget;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Index;                                                   // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_Tetromino_DescriptorRandomizer.BPW_Tetromino_DescriptorRandomizer_C.RemoveItem
	 */
	struct UBPW_Tetromino_DescriptorRandomizer_C_RemoveItem_Params
	{
	public:
		class UWidget*                                             WidgetToRemove;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
		bool                                                       AddNewItem;                                              // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_PD5V[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPW_Tetromino_DescriptorRandomizer.BPW_Tetromino_DescriptorRandomizer_C.GenerateList
	 */
	struct UBPW_Tetromino_DescriptorRandomizer_C_GenerateList_Params
	{	};

	/**
	 * Function BPW_Tetromino_DescriptorRandomizer.BPW_Tetromino_DescriptorRandomizer_C.PreConstruct
	 */
	struct UBPW_Tetromino_DescriptorRandomizer_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_Tetromino_DescriptorRandomizer.BPW_Tetromino_DescriptorRandomizer_C.ExecuteUbergraph_BPW_Tetromino_DescriptorRandomizer
	 */
	struct UBPW_Tetromino_DescriptorRandomizer_C_ExecuteUbergraph_BPW_Tetromino_DescriptorRandomizer_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
