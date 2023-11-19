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
	 * Function BUILD_SingleDoor_Base_01.BUILD_SingleDoor_Base_01_C.GetLookAtDecription
	 */
	struct ABUILD_SingleDoor_Base_01_C_GetLookAtDecription_Params
	{
	public:
		class AFGCharacterPlayer*                                  byCharacter;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		struct FUseState                                           State;                                                   // 0x0008(0x0030)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
		class FText                                                ReturnValue;                                             // 0x0038(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BUILD_SingleDoor_Base_01.BUILD_SingleDoor_Base_01_C.PlayCloseFromStart
	 */
	struct ABUILD_SingleDoor_Base_01_C_PlayCloseFromStart_Params
	{	};

	/**
	 * Function BUILD_SingleDoor_Base_01.BUILD_SingleDoor_Base_01_C.PlayCloseFromSeekTime
	 */
	struct ABUILD_SingleDoor_Base_01_C_PlayCloseFromSeekTime_Params
	{
	public:
		double                                                     SeekTime;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BUILD_SingleDoor_Base_01.BUILD_SingleDoor_Base_01_C.PlayOpenFromSeekTime
	 */
	struct ABUILD_SingleDoor_Base_01_C_PlayOpenFromSeekTime_Params
	{
	public:
		double                                                     SeekTime;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BUILD_SingleDoor_Base_01.BUILD_SingleDoor_Base_01_C.PlayOpenFromStart
	 */
	struct ABUILD_SingleDoor_Base_01_C_PlayOpenFromStart_Params
	{	};

	/**
	 * Function BUILD_SingleDoor_Base_01.BUILD_SingleDoor_Base_01_C.GetDoorLocation
	 */
	struct ABUILD_SingleDoor_Base_01_C_GetDoorLocation_Params
	{
	public:
		struct FVector                                             ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BUILD_SingleDoor_Base_01.BUILD_SingleDoor_Base_01_C.OnMovementStateChanged
	 */
	struct ABUILD_SingleDoor_Base_01_C_OnMovementStateChanged_Params
	{
	public:
		EFactoryGame_EDoorState                                    oldState;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EFactoryGame_EDoorState                                    NewState;                                                // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_KPQ4[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      percentage;                                              // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BUILD_SingleDoor_Base_01.BUILD_SingleDoor_Base_01_C.OnDoorConfigurationChanged
	 */
	struct ABUILD_SingleDoor_Base_01_C_OnDoorConfigurationChanged_Params
	{
	public:
		EDoorConfiguration                                         NewState;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BUILD_SingleDoor_Base_01.BUILD_SingleDoor_Base_01_C.ExecuteUbergraph_BUILD_SingleDoor_Base_01
	 */
	struct ABUILD_SingleDoor_Base_01_C_ExecuteUbergraph_BUILD_SingleDoor_Base_01_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_0PON[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
