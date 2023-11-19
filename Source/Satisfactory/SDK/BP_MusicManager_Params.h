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
	 * Function BP_MusicManager.BP_MusicManager_C.CheckSwampTimer
	 */
	struct UBP_MusicManager_C_CheckSwampTimer_Params
	{	};

	/**
	 * Function BP_MusicManager.BP_MusicManager_C.InitSwampStem
	 */
	struct UBP_MusicManager_C_InitSwampStem_Params
	{	};

	/**
	 * Function BP_MusicManager.BP_MusicManager_C.CheckSwampStem
	 */
	struct UBP_MusicManager_C_CheckSwampStem_Params
	{	};

	/**
	 * Function BP_MusicManager.BP_MusicManager_C.InitializeOverworldStateOnBegin
	 */
	struct UBP_MusicManager_C_InitializeOverworldStateOnBegin_Params
	{
	public:
		class AFGPlayerControllerBase*                             PlayerController;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		class UClass*                                              mapArea;                                                 // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MusicManager.BP_MusicManager_C.UpdateOnMusicBuffer
	 */
	struct UBP_MusicManager_C_UpdateOnMusicBuffer_Params
	{	};

	/**
	 * Function BP_MusicManager.BP_MusicManager_C.CheckOnVisitedArea
	 */
	struct UBP_MusicManager_C_CheckOnVisitedArea_Params
	{
	public:
		class FName                                                UniqueZoneName;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MusicManager.BP_MusicManager_C.UpdateCombatBuffer
	 */
	struct UBP_MusicManager_C_UpdateCombatBuffer_Params
	{	};

	/**
	 * Function BP_MusicManager.BP_MusicManager_C.NotifyInit
	 */
	struct UBP_MusicManager_C_NotifyInit_Params
	{
	public:
		class UWorld*                                              loadedWorld;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		class AWorldSettings*                                      WorldSettings;                                           // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MusicManager.BP_MusicManager_C.OnCombatStatusChanged
	 */
	struct UBP_MusicManager_C_OnCombatStatusChanged_Params
	{
	public:
		bool                                                       inCombat;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MusicManager.BP_MusicManager_C.CombatBufferUpdate
	 */
	struct UBP_MusicManager_C_CombatBufferUpdate_Params
	{	};

	/**
	 * Function BP_MusicManager.BP_MusicManager_C.CheckMapAreaOnExit
	 */
	struct UBP_MusicManager_C_CheckMapAreaOnExit_Params
	{
	public:
		EAkCallbackType                                            CallbackType;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_9AV7[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UAkCallbackInfo*                                     CallbackInfo;                                            // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MusicManager.BP_MusicManager_C.UpdateVisitedAreaName
	 */
	struct UBP_MusicManager_C_UpdateVisitedAreaName_Params
	{
	public:
		class FName                                                ZoneName;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MusicManager.BP_MusicManager_C.InitializeWorldMusic
	 */
	struct UBP_MusicManager_C_InitializeWorldMusic_Params
	{
	public:
		class AFGPlayerControllerBase*                             PlayerController;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		class UClass*                                              mapArea;                                                 // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MusicManager.BP_MusicManager_C.OnPlayerEnteredArea
	 */
	struct UBP_MusicManager_C_OnPlayerEnteredArea_Params
	{
	public:
		class AFGPlayerControllerBase*                             PlayerController;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		class UClass*                                              mapArea;                                                 // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MusicManager.BP_MusicManager_C.OnPlayerNearBaseChanged
	 */
	struct UBP_MusicManager_C_OnPlayerNearBaseChanged_Params
	{
	public:
		bool                                                       isNear;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MusicManager.BP_MusicManager_C.Stop
	 */
	struct UBP_MusicManager_C_Stop_Params
	{	};

	/**
	 * Function BP_MusicManager.BP_MusicManager_C.ExecuteUbergraph_BP_MusicManager
	 */
	struct UBP_MusicManager_C_ExecuteUbergraph_BP_MusicManager_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
