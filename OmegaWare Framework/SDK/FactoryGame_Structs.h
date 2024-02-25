#pragma once

/**
 * Name: Satisfactory
 * Version: Early_Access_CL#273254
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Enums
	// --------------------------------------------------
	/**
	 * Enum FactoryGame.EFGRainOcclusionShapeScaling
	 */
	enum class EFGRainOcclusionShapeScaling : uint8_t
	{
		ROCSS_Center = 0,
		ROCSS_Top    = 1,
		ROCSS_Bot    = 2,
		ROCSS_MAX    = 3
	};

	/**
	 * Enum FactoryGame.EFGRainOcclusionShape
	 */
	enum class EFGRainOcclusionShape : uint8_t
	{
		ROCS_Box         = 0,
		ROCS_Box_Special = 1,
		ROCS_Ramp        = 2,
		ROCS_Triangle    = 3,
		ROCS_CornerRamp  = 4,
		ROCS_CustomMesh  = 5,
		ROCS_MAX         = 6
	};

	/**
	 * Enum FactoryGame.EProductionStatus
	 */
	enum class EProductionStatus : uint8_t
	{
		IS_NONE                   = 0,
		IS_PRODUCING              = 1,
		IS_PRODUCING_WITH_CRYSTAL = 2,
		IS_STANDBY                = 3,
		IS_ERROR                  = 4,
		IS_MAX                    = 5
	};

	/**
	 * Enum FactoryGame.EStackSize
	 */
	enum class EStackSize : uint8_t
	{
		SS_ONE       = 0,
		SS_SMALL     = 1,
		SS_MEDIUM    = 2,
		SS_BIG       = 3,
		SS_HUGE      = 4,
		SS_FLUID     = 5,
		SS_LAST_ENUM = 6,
		SS_MAX       = 7
	};

	/**
	 * Enum FactoryGame.EResourceForm
	 */
	enum class EResourceForm : uint8_t
	{
		RF_INVALID   = 0,
		RF_SOLID     = 1,
		RF_LIQUID    = 2,
		RF_GAS       = 3,
		RF_HEAT      = 4,
		RF_LAST_ENUM = 5,
		RF_MAX       = 6
	};

	/**
	 * Enum FactoryGame.ERailroadSignalAspect
	 */
	enum class ERailroadSignalAspect : uint8_t
	{
		RSA_None  = 0,
		RSA_Clear = 1,
		RSA_Stop  = 2,
		RSA_Dock  = 3,
		RSA_MAX   = 4
	};

	/**
	 * Enum FactoryGame.ERailroadBlockValidation
	 */
	enum class ERailroadBlockValidation : uint8_t
	{
		RBV_Unvalidated               = 0,
		RBV_Valid                     = 1,
		RBV_NoExitSignals             = 2,
		RBV_ContainsLoop              = 3,
		RBV_ContainsMixedEntrySignals = 4,
		RBV_ContainsStation           = 5,
		RBV_MAX                       = 6
	};

	/**
	 * Enum FactoryGame.ECompassViewDistance
	 */
	enum class ECompassViewDistance : uint8_t
	{
		CVD_Off    = 0,
		CVD_Near   = 1,
		CVD_Mid    = 2,
		CVD_Far    = 3,
		CVD_Always = 4,
		CVD_MAX    = 5
	};

	/**
	 * Enum FactoryGame.EFogOfWarRevealType
	 */
	enum class EFogOfWarRevealType : uint8_t
	{
		FOWRT_None             = 0,
		FOWRT_Static           = 1,
		FOWRT_StaticNoGradient = 2,
		FOWRT_Dynamic          = 3,
		FOWRT_MAX              = 4
	};

	/**
	 * Enum FactoryGame.ERepresentationType
	 */
	enum class ERepresentationType : uint8_t
	{
		RT_Default               = 0,
		RT_Beacon                = 1,
		RT_Crate                 = 2,
		RT_Hub                   = 3,
		RT_Ping                  = 4,
		RT_Player                = 5,
		RT_RadarTower            = 6,
		RT_Resource              = 7,
		RT_SpaceElevator         = 8,
		RT_StartingPod           = 9,
		RT_Train                 = 10,
		RT_TrainStation          = 11,
		RT_Vehicle               = 12,
		RT_VehicleDockingStation = 13,
		RT_DronePort             = 14,
		RT_Drone                 = 15,
		RT_MapMarker             = 16,
		RT_Stamp                 = 17,
		RT_MAX                   = 18
	};

	/**
	 * Enum FactoryGame.EDockingStationStatus
	 */
	enum class EDockingStationStatus : uint8_t
	{
		DSS_Operational     = 0,
		DSS_FuelTypeWarning = 1,
		DSS_MAX             = 2
	};

	/**
	 * Enum FactoryGame.EDroneStatus
	 */
	enum class EDroneStatus : uint8_t
	{
		EDS_NO_DRONE             = 0,
		EDS_DOCKED               = 1,
		EDS_LOADING              = 2,
		EDS_TAKEOFF              = 3,
		EDS_EN_ROUTE             = 4,
		EDS_DOCKING              = 5,
		EDS_UNLOADING            = 6,
		EDS_NOT_ENOUGH_BATTERIES = 7,
		EDS_CANNOT_UNLOAD        = 8,
		EDS_MAX                  = 9
	};

	/**
	 * Enum FactoryGame.EManualDockingState
	 */
	enum class EManualDockingState : uint8_t
	{
		MDS_NoDocking = 0,
		MDS_CanLoad   = 1,
		MDS_CanUnload = 2,
		MDS_MAX       = 3
	};

	/**
	 * Enum FactoryGame.ETransferAnimationState
	 */
	enum class ETransferAnimationState : uint8_t
	{
		TS_None      = 0,
		TS_Loading   = 1,
		TS_Unloading = 2,
		TS_MAX       = 3
	};

	/**
	 * Enum FactoryGame.ERecordingStatus
	 */
	enum class ERecordingStatus : uint8_t
	{
		RS_NoRecording        = 0,
		RS_RecordingStarted   = 1,
		RS_CompletionPossible = 2,
		RS_RecordingCompleted = 3,
		RS_RecordingAborted   = 4,
		RS_MAX                = 5
	};

	/**
	 * Enum FactoryGame.EVehicleStatus
	 */
	enum class EVehicleStatus : uint8_t
	{
		VS_Operational = 0,
		VS_OutOfFuel   = 1,
		VS_Deadlocked  = 2,
		VS_MAX         = 3
	};

	/**
	 * Enum FactoryGame.ETrainDockingState
	 */
	enum class ETrainDockingState : uint8_t
	{
		TDS_None        = 0,
		TDS_ReadyToDock = 1,
		TDS_Docked      = 2,
		TDS_MAX         = 3
	};

	/**
	 * Enum FactoryGame.ECameraMode
	 */
	enum class ECameraMode : uint8_t
	{
		ECM_None        = 0,
		ECM_FirstPerson = 1,
		ECM_ThirdPerson = 2,
		ECM_MAX         = 3
	};

	/**
	 * Enum FactoryGame.EEquipmentSlot
	 */
	enum class EEquipmentSlot : uint8_t
	{
		ES_NONE = 0,
		ES_ARMS = 1,
		ES_BACK = 2,
		ES_LEGS = 3,
		ES_HEAD = 4,
		ES_BODY = 5,
		ES_MAX  = 6
	};

	/**
	 * Enum FactoryGame.EPlayerKeepInventoryMode
	 */
	enum class EPlayerKeepInventoryMode : uint8_t
	{
		Keep_Nothing    = 0,
		Keep_Equipment  = 1,
		Keep_Everything = 2,
		Keep_MAX        = 3
	};

	/**
	 * Enum FactoryGame.ENudgeFailReason
	 */
	enum class ENudgeFailReason : uint8_t
	{
		NFR_Success           = 0,
		NFR_InvalidHologram   = 1,
		NFR_Disallowed        = 2,
		NFR_IllegalMove       = 3,
		NFR_ExceedMaxDistance = 4,
		NFR_MAX               = 5
	};

	/**
	 * Enum FactoryGame.EEosAccountConnectionResult
	 */
	enum class EEosAccountConnectionResult : uint8_t
	{
		Success                                  = 0,
		NoConnecedId                             = 1,
		SuccessButDifferentAccountConnected      = 2,
		NoConnecedIdButDifferentAccountConnected = 3,
		Error                                    = 4,
		SignedOutEpicUsingSteam                  = 5,
		Close                                    = 6,
		MAX                                      = 7
	};

	/**
	 * Enum FactoryGame.EMenuStateSection
	 */
	enum class EMenuStateSection : uint8_t
	{
		MSS_NONE      = 0,
		MSS_BUILD     = 1,
		MSS_CUSTOMIZE = 2,
		MSS_BLUEPRINT = 3,
		MSS_MAX       = 4
	};

	/**
	 * Enum FactoryGame.EBuildGunState
	 */
	enum class EBuildGunState : uint8_t
	{
		BGS_NONE      = 0,
		BGS_MENU      = 1,
		BGS_BUILD     = 2,
		BGS_DISMANTLE = 3,
		BGS_PAINT     = 4,
		BGS_MAX       = 5
	};

	/**
	 * Enum FactoryGame.ECreateSessionState
	 */
	enum class ECreateSessionState : uint8_t
	{
		CSS_NotCreateingSession        = 0,
		CSS_CreatingSession            = 1,
		CSS_DestroyingOldSession       = 2,
		CSS_UpdatingPresence           = 3,
		CSS_WaitingForPresenceToUpdate = 4,
		CSS_WaitingForLogin            = 5,
		CSS_MAX                        = 6
	};

	/**
	 * Enum FactoryGame.ECreatureState
	 */
	enum class ECreatureState : uint8_t
	{
		CS_Default     = 0,
		CS_Roam        = 1,
		CS_Alert       = 2,
		CS_Fight       = 3,
		CS_Flee        = 4,
		CS_Investigate = 5,
		CS_MAX         = 6
	};

	/**
	 * Enum FactoryGame.EGamePhase
	 */
	enum class EGamePhase : uint8_t
	{
		EGP_EarlyGame = 0,
		EGP_MidGame   = 1,
		EGP_LateGame  = 2,
		EGP_EndGame   = 3,
		EGP_FoodCourt = 4,
		EGP_Victory   = 5,
		EGP_MAX       = 6
	};

	/**
	 * Enum FactoryGame.EHoverPackMode
	 */
	enum class EHoverPackMode : uint8_t
	{
		HPM_Inactive      = 0,
		HPM_Hover         = 1,
		HPM_HoverSlowFall = 2,
		HPM_MAX           = 3
	};

	/**
	 * Enum FactoryGame.EJoinSessionState
	 */
	enum class EJoinSessionState : uint8_t
	{
		JSS_NotJoiningSession         = 0,
		JSS_WaitingForLoginToComplete = 1,
		JSS_QueryingHostsId           = 2,
		JSS_DestroyingOldSession      = 3,
		JSS_ConnectingToHost          = 4,
		JSS_MAX                       = 5
	};

	/**
	 * Enum FactoryGame.ELoginState
	 */
	enum class ELoginState : uint8_t
	{
		LS_NotLoggedIn   = 0,
		LS_FailedToLogin = 1,
		LS_LoggingIn     = 2,
		LS_LoggedIn      = 3,
		LS_MAX           = 4
	};

	/**
	 * Enum FactoryGame.ECachedNATType
	 */
	enum class ECachedNATType : uint8_t
	{
		CNT_Open     = 0,
		CNT_Moderate = 1,
		CNT_Strict   = 2,
		CNT_TBD      = 3,
		CNT_MAX      = 4
	};

	/**
	 * Enum FactoryGame.EResearchState
	 */
	enum class EResearchState : uint8_t
	{
		ERS_NotResearching = 0,
		ERS_Researching    = 1,
		ERS_MAX            = 2
	};

	/**
	 * Enum FactoryGame.ESelfDrivingLocomotiveError
	 */
	enum class ESelfDrivingLocomotiveError : uint8_t
	{
		SDLE_NoError                       = 0,
		SDLE_NoPower                       = 1,
		SDLE_NoTimeTable                   = 2,
		SDLE_InvalidNextStop               = 3,
		SDLE_InvalidLocomotivePlacement    = 4,
		SDLE_NoPath                        = 5,
		SDLE_StationUnreachable            = 6,
		SDLE_StationUnreachableWithSignals = 7,
		SDLE_LongWaitAtSignal              = 8,
		SDLE_MAX                           = 9
	};

	/**
	 * Enum FactoryGame.EPrivilegeLevel
	 */
	enum class EPrivilegeLevel : uint8_t
	{
		NotAuthenticated = 0,
		Client           = 1,
		Administrator    = 2,
		InitialAdmin     = 3,
		MAX              = 4
	};

	/**
	 * Enum FactoryGame.ETrainStatus
	 */
	enum class ETrainStatus : uint8_t
	{
		TS_Parked        = 0,
		TS_ManualDriving = 1,
		TS_SelfDriving   = 2,
		TS_Derailed      = 3,
		TS_MAX           = 4
	};

	/**
	 * Enum FactoryGame.EWeaponState
	 */
	enum class EWeaponState : uint8_t
	{
		EWS_Unequipped = 0,
		EWS_Standby    = 1,
		EWS_NeedReload = 2,
		EWS_Reloading  = 3,
		EWS_Firing     = 4,
		EWS_MAX        = 5
	};

	/**
	 * Enum FactoryGame.EArmEquipment
	 */
	enum class EArmEquipment : uint8_t
	{
		AE_None              = 0,
		AE_ChainSaw          = 1,
		AE_RebarGun          = 2,
		AE_BuildGun          = 3,
		AE_Nobelisk          = 4,
		AE_ResourceScanner   = 5,
		AE_Rifle             = 6,
		AE_ColorGun          = 7,
		AE_OneHandEquipment  = 8,
		AE_Consumables       = 9,
		AE_ObjectScanner     = 10,
		AE_PortableMiner     = 11,
		AE_StunSpear         = 12,
		AE_ShockShank        = 13,
		AE_ResourceCollector = 14,
		AE_Generic1Hand      = 15,
		AE_Generic2Hand      = 16,
		AE_BoomBox           = 17,
		AE_MAX               = 18
	};

	/**
	 * Enum FactoryGame.EBackEquipment
	 */
	enum class EBackEquipment : uint8_t
	{
		BE_None    = 0,
		BE_Jetpack = 1,
		BE_MAX     = 2
	};

	/**
	 * Enum FactoryGame.EFGActionState
	 */
	enum class EFGActionState : uint8_t
	{
		EAS_Uninitialized     = 0,
		EAS_Initialized       = 1,
		EAS_Setup             = 2,
		EAS_RunningPreAction  = 3,
		EAS_RunningMainAction = 4,
		EAS_RunningPostAction = 5,
		EAS_Cancelled         = 6,
		EAS_Finished          = 7,
		EAS_Failed            = 8,
		EAS_MAX               = 9
	};

	/**
	 * Enum FactoryGame.EActorBuiltDependencyType
	 */
	enum class EActorBuiltDependencyType : uint8_t
	{
		ABT_Built           = 0,
		ABT_BuiltTotal      = 1,
		ABT_DismantledTotal = 2,
		ABT_MAX             = 3
	};

	/**
	 * Enum FactoryGame.EHomingPriority
	 */
	enum class EHomingPriority : uint8_t
	{
		HP_None   = 0,
		HP_Low    = 1,
		HP_Medium = 2,
		HP_High   = 3,
		HP_Num    = 4,
		HP_MAX    = 5
	};

	/**
	 * Enum FactoryGame.EAttachmentPointUsage
	 */
	enum class EAttachmentPointUsage : uint8_t
	{
		EAPU_Default       = 0,
		EAPU_BuildableOnly = 1,
		EAPU_HologramOnly  = 2,
		EAPU_MAX           = 3
	};

	/**
	 * Enum FactoryGame.EMessagePriorityType
	 */
	enum class EMessagePriorityType : uint8_t
	{
		MPT_DirectMessage = 0,
		MPT_PriorityCall  = 1,
		MPT_OptionalCall  = 2,
		MPT_MAX           = 3
	};

	/**
	 * Enum FactoryGame.EPoolInstanceFlags
	 */
	enum class EPoolInstanceFlags : uint8_t
	{
		None                     = 0,
		Dirty_EnvironmentContext = 1,
		Dirty_ColorState         = 2,
		Dirty_ForceStateOff      = 3,
		Dirty_StateOn            = 4,
		Dirty_Scalability        = 5,
		Dirty_Any                = 6,
		MAX                      = 7
	};

	/**
	 * Enum FactoryGame.EPoolType
	 */
	enum class EPoolType : uint8_t
	{
		EPT_Undefined    = 0,
		EPT_StaticMesh   = 1,
		EPT_InstanceMesh = 2,
		EPT_Light        = 3,
		EPT_Component    = 4,
		EPT_MAX          = 5
	};

	/**
	 * Enum FactoryGame.EBeamHologramBuildStep
	 */
	enum class EBeamHologramBuildStep : uint8_t
	{
		BHBS_Placement = 0,
		BHBS_Zoop      = 1,
		BHBS_MAX       = 2
	};

	/**
	 * Enum FactoryGame.EOutlineColor
	 */
	enum class EOutlineColor : uint8_t
	{
		OC_NONE            = 0,
		OC_HOLOGRAMLINE    = 1,
		OC_SOFTCLEARANCE   = 2,
		OC_DISMANTLE       = 3,
		OC_USABLE          = 4,
		OC_HOLOGRAM        = 5,
		OC_INVALIDHOLOGRAM = 6,
		OC_RED             = 7,
		OC_MAX             = 8
	};

	/**
	 * Enum FactoryGame.EBoomBoxPlaybackStateBitfield
	 */
	enum class EBoomBoxPlaybackStateBitfield : uint8_t
	{
		NotPlaying                           = 0,
		PlaybackEnabled                      = 1,
		PlaybackAllowedByEquipmentStatus     = 2,
		PlaybackAllowedByPawnPossessedStatus = 3,
		MayActuallyPlay                      = 4,
		MAX                                  = 5
	};

	/**
	 * Enum FactoryGame.EBoomBoxRepeatMode
	 */
	enum class EBoomBoxRepeatMode : uint8_t
	{
		NoRepeat   = 0,
		RepeatTape = 1,
		RepeatSong = 2,
		MAX        = 3
	};

	/**
	 * Enum FactoryGame.EBoomBoxMode
	 */
	enum class EBoomBoxMode : uint8_t
	{
		Undefined       = 0,
		EquippedVisible = 1,
		EquippedHidden  = 2,
		Static          = 3,
		MAX             = 4
	};

	/**
	 * Enum FactoryGame.EBoomBoxPickupButtonState
	 */
	enum class EBoomBoxPickupButtonState : uint8_t
	{
		EHideButton       = 0,
		EEquipBoomBox     = 1,
		EPickUpBoomBox    = 2,
		ENoRoomForBoomBox = 3,
		MAX               = 4
	};

	/**
	 * Enum FactoryGame.EBlueprintDesignerLoadResult
	 */
	enum class EBlueprintDesignerLoadResult : uint8_t
	{
		BDLR_Success             = 0,
		BDLR_InvalidDescriptor   = 1,
		BDLR_CannotAfford        = 2,
		BDLR_MissingFile         = 3,
		BDLR_MissingRecipes      = 4,
		BDLR_IncorrectDimensions = 5,
		BDLR_Undefined           = 6,
		BDLR_MAX                 = 7
	};

	/**
	 * Enum FactoryGame.EDoorConfiguration
	 */
	enum class EDoorConfiguration : uint8_t
	{
		DC_Auto   = 0,
		DC_Closed = 1,
		DC_Open   = 2,
		DC_MAX    = 3
	};

	/**
	 * Enum FactoryGame.EDoorState
	 */
	enum class EFactoryGame_EDoorState : uint8_t
	{
		EDoorStateDS_Closed  = 0,
		EDoorStateDS_Closing = 1,
		EDoorStateDS_Open    = 2,
		EDoorStateDS_Opening = 3,
		EDoorStateDS_MAX     = 4
	};

	/**
	 * Enum FactoryGame.EItemTransferringStage
	 */
	enum class EItemTransferringStage : uint8_t
	{
		ITS_NONE   = 0,
		ITS_UNLOAD = 1,
		ITS_LOAD   = 2,
		ITS_MAX    = 3
	};

	/**
	 * Enum FactoryGame.EItemTransferTickResult
	 */
	enum class EItemTransferTickResult : uint8_t
	{
		ITTR_DONE    = 0,
		ITTR_PARTIAL = 1,
		ITTR_FAILED  = 2,
		ITTR_MAX     = 3
	};

	/**
	 * Enum FactoryGame.EFoundationSide
	 */
	enum class EFoundationSide : uint8_t
	{
		FoundationFront    = 0,
		FoundationRight    = 1,
		FoundationBack     = 2,
		FoundationLeft     = 3,
		FoundationTop      = 4,
		FoundationBottom   = 5,
		FoundationNumSides = 6,
		Invalid            = 7,
		MAX                = 8
	};

	/**
	 * Enum FactoryGame.EGeneratorNuclearWarning
	 */
	enum class EGeneratorNuclearWarning : uint8_t
	{
		GNW_None                          = 0,
		GNW_WasteFull                     = 1,
		GNW_MissmatchBetweenInputAndWaste = 2,
		GNW_MAX                           = 3
	};

	/**
	 * Enum FactoryGame.EGuideLineType
	 */
	enum class EGuideLineType : uint8_t
	{
		GLT_Default      = 0,
		GLT_ConveyorBelt = 1,
		GLT_Pipe         = 2,
		GLT_MAX          = 3
	};

	/**
	 * Enum FactoryGame.EPowerPoleType
	 */
	enum class EPowerPoleType : uint8_t
	{
		PPT_POLE        = 0,
		PPT_WALL        = 1,
		PPT_WALL_DOUBLE = 2,
		PPT_TOWER       = 3,
		PPT_MAX         = 4
	};

	/**
	 * Enum FactoryGame.EBatteryStatus
	 */
	enum class EBatteryStatus : uint8_t
	{
		BS_Idle      = 0,
		BS_IdleEmpty = 1,
		BS_IdleFull  = 2,
		BS_PowerIn   = 3,
		BS_PowerOut  = 4,
		BS_MAX       = 5
	};

	/**
	 * Enum FactoryGame.ESignAttachmentPointSnapType
	 */
	enum class ESignAttachmentPointSnapType : uint8_t
	{
		ESAPST_Center = 0,
		ESAPST_Top    = 1,
		ESAPST_Bottom = 2,
		ESAPST_MAX    = 3
	};

	/**
	 * Enum FactoryGame.EBuildableStairDirection
	 */
	enum class EBuildableStairDirection : uint8_t
	{
		EBSD_Right    = 0,
		EBSD_Left     = 1,
		EBSD_Straight = 2,
		EBSD_MAX      = 3
	};

	/**
	 * Enum FactoryGame.ETrainPlatformDockingStatus
	 */
	enum class ETrainPlatformDockingStatus : uint8_t
	{
		ETPDS_None                     = 0,
		ETPDS_WaitingToStart           = 1,
		ETPDS_Loading                  = 2,
		ETPDS_Unloading                = 3,
		ETPDS_WaitingForTransfer       = 4,
		ETPDS_Complete                 = 5,
		ETPDS_WaitForTransferCondition = 6,
		ETPDS_IdleWaitForTime          = 7,
		ETPDS_MAX                      = 8
	};

	/**
	 * Enum FactoryGame.EBuildableWallType
	 */
	enum class EBuildableWallType : uint8_t
	{
		BWT_Normal       = 0,
		BWT_Glass        = 1,
		BWT_DiagonalUp   = 2,
		BWT_DiagonalDown = 3,
		BWT_Frame        = 4,
		BWT_MAX          = 5
	};

	/**
	 * Enum FactoryGame.EPaintMode
	 */
	enum class EPaintMode : uint8_t
	{
		EPM_Single = 0,
		EPM_Area   = 1,
		EPM_Type   = 2,
		EPM_MAX    = 3
	};

	/**
	 * Enum FactoryGame.EFGChainsawState
	 */
	enum class EFGChainsawState : uint8_t
	{
		None       = 0,
		SpinningUp = 1,
		Idle       = 2,
		Engaged    = 3,
		Sawing     = 4,
		MAX        = 5
	};

	/**
	 * Enum FactoryGame.EDeferredCollisionChange
	 */
	enum class EDeferredCollisionChange : uint8_t
	{
		DCC_None     = 0,
		DCC_TURN_ON  = 1,
		DCC_TURN_OFF = 2,
		DCC_MAX      = 3
	};

	/**
	 * Enum FactoryGame.ECustomMovementMode
	 */
	enum class ECustomMovementMode : uint8_t
	{
		CMM_None          = 0,
		CMM_Ladder        = 1,
		CMM_PipeHyper     = 2,
		CMM_Zipline       = 3,
		CMM_Hover         = 4,
		CMM_HoverSlowFall = 5,
		CMM_Parachute     = 6,
		CMM_MAX           = 7
	};

	/**
	 * Enum FactoryGame.EActionsToBind
	 */
	enum class EActionsToBind : uint8_t
	{
		None     = 0,
		Movement = 1,
		Camera   = 2,
		Actions  = 3,
		Cheats   = 4,
		All      = 5,
		MAX      = 6
	};

	/**
	 * Enum FactoryGame.EPlayerMappingContextCategory
	 */
	enum class EPlayerMappingContextCategory : uint8_t
	{
		None              = 0,
		Movement          = 1,
		Actions           = 2,
		EquipmentHandling = 3,
		EquipmentActions  = 4,
		Interface         = 5,
		Cheats            = 6,
		All               = 7,
		MAX               = 8
	};

	/**
	 * Enum FactoryGame.EFGChatMessageType
	 */
	enum class EFGChatMessageType : uint8_t
	{
		CMT_PlayerMessage = 0,
		CMT_SystemMessage = 1,
		CMT_AdaMessage    = 2,
		CMT_MAX           = 3
	};

	/**
	 * Enum FactoryGame.EFGCrateIconType
	 */
	enum class EFGCrateIconType : uint8_t
	{
		CIT_DeathIcon = 0,
		CIT_MAX       = 1
	};

	/**
	 * Enum FactoryGame.EEnabled
	 */
	enum class EEnabled : uint8_t
	{
		E_Enabled  = 0,
		E_Disabled = 1,
		E_Unknown  = 2,
		E_MAX      = 3
	};

	/**
	 * Enum FactoryGame.EMoveSpeed
	 */
	enum class EMoveSpeed : uint8_t
	{
		MS_Undefined = 0,
		MS_Walk      = 1,
		MS_Run       = 2,
		MS_Sprint    = 3,
		MS_MAX       = 4
	};

	/**
	 * Enum FactoryGame.ECreatureActionTargetSelectionType
	 */
	enum class ECreatureActionTargetSelectionType : uint8_t
	{
		None           = 0,
		Closest        = 1,
		Random         = 2,
		RandomWeighted = 3,
		HighestAggro   = 4,
		MAX            = 5
	};

	/**
	 * Enum FactoryGame.ETargetVisibilityRequirement
	 */
	enum class ETargetVisibilityRequirement : uint8_t
	{
		TVR_None            = 0,
		TVR_Visible         = 1,
		TVR_RecentlyVisible = 2,
		TVR_MAX             = 3
	};

	/**
	 * Enum FactoryGame.ECreatureFamilyHostility
	 */
	enum class ECreatureFamilyHostility : uint8_t
	{
		CFH_Neutral  = 0,
		CFH_Friendly = 1,
		CFH_Hostile  = 2,
		CFH_MAX      = 3
	};

	/**
	 * Enum FactoryGame.EPlayerHostilityMode
	 */
	enum class EPlayerHostilityMode : uint8_t
	{
		PHM_Default   = 0,
		PHM_Passive   = 1,
		PHM_Retaliate = 2,
		PHM_MAX       = 3
	};

	/**
	 * Enum FactoryGame.ECreatureReplaceAction
	 */
	enum class ECreatureReplaceAction : uint8_t
	{
		NOTHING = 0,
		KILL    = 1,
		DESTROY = 2,
		MAX     = 3
	};

	/**
	 * Enum FactoryGame.EDamageModifierType
	 */
	enum class EDamageModifierType : uint8_t
	{
		DMT_Multiplicative = 0,
		DMT_Additive       = 1,
		DMT_MAX            = 2
	};

	/**
	 * Enum FactoryGame.EDebugOverlayType
	 */
	enum class EDebugOverlayType : uint8_t
	{
		DOT_Default              = 0,
		DOT_Story                = 1,
		DOT_Options              = 2,
		DOT_Statistics           = 3,
		DOT_ShoppingList         = 4,
		DOT_AdvancedGameSettings = 5,
		DOT_OnlineInfo           = 6,
		DOT_MAX                  = 7
	};

	/**
	 * Enum FactoryGame.EServerState
	 */
	enum class EServerState : uint8_t
	{
		Offline = 0,
		Idle    = 1,
		Loading = 2,
		Playing = 3,
		MAX     = 4
	};

	/**
	 * Enum FactoryGame.EServerMessage
	 */
	enum class EServerMessage : uint8_t
	{
		InvalidHost            = 0,
		IncorrectPassword      = 1,
		Timeout                = 2,
		NoGameRunning          = 3,
		LoadingGame_Disconnect = 4,
		NotAuthorized          = 5,
		MAX                    = 6
	};

	/**
	 * Enum FactoryGame.EServerComplexState
	 */
	enum class EServerComplexState : uint8_t
	{
		ServerOffline                                  = 0,
		NoGameRunning_NotConnected_CompatibleVersion   = 1,
		NoGameRunning_NotConnected_IncompatibleVersion = 2,
		NoGameRunning_ConnectionPending                = 3,
		NoGameRunning_ConnectionFailed                 = 4,
		NoGameRunning_Connected_Client                 = 5,
		NoGameRunning_Connected_Admin                  = 6,
		NoGameRunning_Connected_NonAuthenticated       = 7,
		GameLoading                                    = 8,
		GameRunning_NotConnected_CompatibleVersion     = 9,
		GameRunning_NotConnected_IncompatibleVersion   = 10,
		GameRunning_ConnectionPending                  = 11,
		GameRunning_ConnectionFailed                   = 12,
		GameRunning_Connected_Client                   = 13,
		GameRunning_Connected_Admin                    = 14,
		GameRunning_Connected_NonAuthenticated         = 15,
		MAX                                            = 16
	};

	/**
	 * Enum FactoryGame.EDestructibleActorState
	 */
	enum class EDestructibleActorState : uint8_t
	{
		DSS_Intact     = 0,
		DSS_Fracturing = 1,
		DSS_Destroyed  = 2,
		DSS_MAX        = 3
	};

	/**
	 * Enum FactoryGame.EDockStationType
	 */
	enum class EDockStationType : uint8_t
	{
		DST_NONE      = 0,
		DST_TRUCK     = 1,
		DST_TRAIN     = 2,
		DST_DRONE     = 3,
		DST_LAST_ENUM = 4,
		DST_MAX       = 5
	};

	/**
	 * Enum FactoryGame.EDroneActionEvent
	 */
	enum class EDroneActionEvent : uint8_t
	{
		DAE_None                      = 0,
		DAE_BeginDocking              = 1,
		DAE_UpdateQueuePosition       = 2,
		DAE_ReachedDestination        = 3,
		DAE_NotifyPairedStationUpdate = 4,
		DAE_MAX                       = 5
	};

	/**
	 * Enum FactoryGame.EDroneFlyingMode
	 */
	enum class EDroneFlyingMode : uint8_t
	{
		DFM_None   = 0,
		DFM_Flying = 1,
		DFM_Travel = 2,
		DFM_MAX    = 3
	};

	/**
	 * Enum FactoryGame.EDroneDockingState
	 */
	enum class EDroneDockingState : uint8_t
	{
		DS_UNDOCKED = 0,
		DS_DOCKING  = 1,
		DS_DOCKED   = 2,
		DS_TAKEOFF  = 3,
		DS_MAX      = 4
	};

	/**
	 * Enum FactoryGame.EDroneDockingRequestState
	 */
	enum class EDroneDockingRequestState : uint8_t
	{
		STravelToQueueLocation      = 0,
		SFlyToQueueLocation         = 1,
		STravelToDockingAirLocation = 2,
		SFlyToDockingAirLocation    = 3,
		SDescendToDockingLocation   = 4,
		MAX                         = 5
	};

	/**
	 * Enum FactoryGame.ESupportedAccountType
	 */
	enum class ESupportedAccountType : uint8_t
	{
		SAT_Unknown  = 0,
		SAT_Epic     = 1,
		SAT_External = 2,
		SAT_MAX      = 3
	};

	/**
	 * Enum FactoryGame.EInputControllerType
	 */
	enum class EInputControllerType : uint8_t
	{
		ICT_Unknown       = 0,
		ICT_MouseKeyboard = 1,
		ICT_Gamepad       = 2,
		ICT_Touch         = 3,
		ICT_MAX           = 4
	};

	/**
	 * Enum FactoryGame.EDefaultEquipmentAction
	 */
	enum class EDefaultEquipmentAction : uint8_t
	{
		None          = 0,
		PrimaryFire   = 1,
		SecondaryFire = 2,
		MAX           = 3,
		ALL           = 4
	};

	/**
	 * Enum FactoryGame.EDefaultEquipmentActionEvent
	 */
	enum class EDefaultEquipmentActionEvent : uint8_t
	{
		Pressed  = 0,
		Released = 1,
		MAX      = 2
	};

	/**
	 * Enum FactoryGame.EErrorResponse
	 */
	enum class EErrorResponse : uint8_t
	{
		ER_NonIntrusivePopup = 0,
		ER_SendToMainMenu    = 1,
		ER_Quit              = 2,
		ER_MAX               = 3
	};

	/**
	 * Enum FactoryGame.EEvents
	 */
	enum class EEvents : uint8_t
	{
		EV_None         = 0,
		EV_Christmas    = 1,
		EV_Birthday     = 2,
		EV_CSSBirthday  = 3,
		EV_FirstOfApril = 4,
		EV_MAX          = 5
	};

	/**
	 * Enum FactoryGame.EHologramZoopDirections
	 */
	enum class EHologramZoopDirections : uint8_t
	{
		HZD_None     = 0,
		HZD_Forward  = 1,
		HZD_Backward = 2,
		HZD_Left     = 3,
		HZD_Right    = 4,
		HZD_Up       = 5,
		HZD_Down     = 6,
		HZD_MAX      = 7
	};

	/**
	 * Enum FactoryGame.EFactoryBuildingHologramBuildStep
	 */
	enum class EFactoryBuildingHologramBuildStep : uint8_t
	{
		FBHBS_PlacementAndRotation = 0,
		FBHBS_Zoop                 = 1,
		FBHBS_MAX                  = 2
	};

	/**
	 * Enum FactoryGame.EFactoryBuildingPlacementRequirements
	 */
	enum class EFactoryBuildingPlacementRequirements : uint8_t
	{
		FBPR_None     = 0,
		FBPR_MustSnap = 1,
		FBPR_MAX      = 2
	};

	/**
	 * Enum FactoryGame.EFactoryConnectionConnector
	 */
	enum class EFactoryConnectionConnector : uint8_t
	{
		FCC_CONVEYOR = 0,
		FCC_PIPE     = 1,
		FCC_MAX      = 2
	};

	/**
	 * Enum FactoryGame.EFactoryConnectionDirection
	 */
	enum class EFactoryConnectionDirection : uint8_t
	{
		FCD_INPUT     = 0,
		FCD_OUTPUT    = 1,
		FCD_ANY       = 2,
		FCD_SNAP_ONLY = 3,
		FCD_MAX       = 4
	};

	/**
	 * Enum FactoryGame.EFloodlightHologramBuildStep
	 */
	enum class EFloodlightHologramBuildStep : uint8_t
	{
		FHBS_PlacementAndRotation = 0,
		FHBS_AdjustAngle          = 1,
		FHBS_MAX                  = 2
	};

	/**
	 * Enum FactoryGame.EFloodlightHologramMountingType
	 */
	enum class EFloodlightHologramMountingType : uint8_t
	{
		FHMT_Ground = 0,
		FHMT_Wall   = 1,
		FHMT_MAX    = 2
	};

	/**
	 * Enum FactoryGame.EProximityEffectTypes
	 */
	enum class EProximityEffectTypes : uint8_t
	{
		PET_None     = 0,
		PET_Bush     = 1,
		PET_Tree     = 2,
		PET_Rock     = 3,
		PET_Flower   = 4,
		PET_Mushroom = 5,
		PET_MAX      = 6
	};

	/**
	 * Enum FactoryGame.EFreightCargoType
	 */
	enum class EFreightCargoType : uint8_t
	{
		FCT_NONE     = 0,
		FCT_Standard = 1,
		FCT_Liquid   = 2,
		FCT_MAX      = 3
	};

	/**
	 * Enum FactoryGame.EGraphicsAPI
	 */
	enum class EGraphicsAPI : uint8_t
	{
		EGR_DX11   = 0,
		EGR_DX12   = 1,
		EGR_Vulkan = 2,
		EGR_MAX    = 3
	};

	/**
	 * Enum FactoryGame.EUpscalingMethod
	 */
	enum class EUpscalingMethod : uint8_t
	{
		EUM_None = 0,
		EUM_TSR  = 1,
		EUM_DLSS = 2,
		EUM_FSR  = 3,
		EUM_XeSS = 4,
		EUM_MAX  = 5
	};

	/**
	 * Enum FactoryGame.EGameUserSettingsState
	 */
	enum class EGameUserSettingsState : uint8_t
	{
		EGUSS_Default  = 0,
		EGUSS_Init     = 1,
		EGUSS_Applying = 2,
		EGUSS_Reset    = 3,
		EGUSS_MAX      = 4
	};

	/**
	 * Enum FactoryGame.EBeamSnappingMode
	 */
	enum class EBeamSnappingMode : uint8_t
	{
		BSM_None        = 0,
		BSM_Center      = 1,
		BSM_KeepUpright = 2,
		BSM_AllSides    = 3,
		BSM_MAX         = 4
	};

	/**
	 * Enum FactoryGame.EPillarSnappingMode
	 */
	enum class EPillarSnappingMode : uint8_t
	{
		PSM_None        = 0,
		PSM_KeepUpright = 1,
		PSM_Underneath  = 2,
		PSM_AllSides    = 3,
		PSM_MAX         = 4
	};

	/**
	 * Enum FactoryGame.EHologramBuildModeCategory
	 */
	enum class EHologramBuildModeCategory : uint8_t
	{
		HBMC_ActorClass   = 0,
		HBMC_Architecture = 1,
		HBMC_Pipe         = 2,
		HBMC_MAX          = 3
	};

	/**
	 * Enum FactoryGame.EHologramMaterialState
	 */
	enum class EHologramMaterialState : uint8_t
	{
		HMS_OK      = 0,
		HMS_WARNING = 1,
		HMS_ERROR   = 2,
		HMS_MAX     = 3
	};

	/**
	 * Enum FactoryGame.EHologramSoftClearanceResponse
	 */
	enum class EHologramSoftClearanceResponse : uint8_t
	{
		HSCR_Default        = 0,
		HSCR_Ignore         = 1,
		HSCR_IgnoreBothSoft = 2,
		HSCR_Block          = 3,
		HSCR_MAX            = 4
	};

	/**
	 * Enum FactoryGame.EHoverConnectionStatus
	 */
	enum class EHoverConnectionStatus : uint8_t
	{
		HCS_NULL         = 0,
		HCS_OK           = 1,
		HCS_NO_POWER     = 2,
		HCS_OUT_OF_RANGE = 3,
		HCS_MAX          = 4
	};

	/**
	 * Enum FactoryGame.ECrosshairState
	 */
	enum class ECrosshairState : uint8_t
	{
		ECS_Default    = 0,
		ECS_GeneralUse = 1,
		ECS_PickUp     = 2,
		ECS_Vehicle    = 3,
		ECS_Weapon     = 4,
		ECS_Workbench  = 5,
		ECS_Dismantle  = 6,
		ECS_Build      = 7,
		ECS_Custom     = 8,
		ECS_Hidden     = 9,
		ECS_MAX        = 10
	};

	/**
	 * Enum FactoryGame.EIconType
	 */
	enum class EIconType : uint8_t
	{
		ESIT_Building   = 0,
		ESIT_Part       = 1,
		ESIT_Equipment  = 2,
		ESIT_Monochrome = 3,
		ESIT_Material   = 4,
		ESIT_Custom     = 5,
		ESIT_MapStamp   = 6,
		ESIT_MAX        = 7
	};

	/**
	 * Enum FactoryGame.ECompatibleItemType
	 */
	enum class ECompatibleItemType : uint8_t
	{
		CIT_OTHER  = 0,
		CIT_AMMO   = 1,
		CIT_FUEL   = 2,
		CIT_WEAPON = 3,
		CIT_FILTER = 4,
		CIT_MAX    = 5
	};

	/**
	 * Enum FactoryGame.EDescriptorStatBarType
	 */
	enum class EDescriptorStatBarType : uint8_t
	{
		DSBT_Damage           = 0,
		DSBT_EnergyEfficiency = 1,
		DSBT_MAX              = 2
	};

	/**
	 * Enum FactoryGame.EItemState
	 */
	enum class EItemState : uint8_t
	{
		ES_SEED   = 0,
		ES_NORMAL = 1,
		ES_MAX    = 2
	};

	/**
	 * Enum FactoryGame.EJumpPadHologramBuildStep
	 */
	enum class EJumpPadHologramBuildStep : uint8_t
	{
		JPHBS_PlacementAndRotation = 0,
		JPHBS_AdjustAngle          = 1,
		JPHBS_MAX                  = 2
	};

	/**
	 * Enum FactoryGame.ELadderHologramBuildStep
	 */
	enum class ELadderHologramBuildStep : uint8_t
	{
		LHBS_SnapToActor  = 0,
		LHBS_AdjustHeight = 1,
		LHBS_MAX          = 2
	};

	/**
	 * Enum FactoryGame.ELocalizationType
	 */
	enum class ELocalizationType : uint8_t
	{
		LT_Official  = 0,
		LT_Community = 1,
		LT_Debug     = 2,
		LT_MAX       = 3
	};

	/**
	 * Enum FactoryGame.ELocomotiveHeadlightsMode
	 */
	enum class ELocomotiveHeadlightsMode : uint8_t
	{
		LHM_Off        = 0,
		LHM_On         = 1,
		LHM_Taillights = 2,
		LHM_MAX        = 3
	};

	/**
	 * Enum FactoryGame.EMultipleUnitControl
	 */
	enum class EMultipleUnitControl : uint8_t
	{
		MUC_Disabled = 0,
		MUC_Master   = 1,
		MUC_Slave    = 2,
		MUC_MAX      = 3
	};

	/**
	 * Enum FactoryGame.EMessageType
	 */
	enum class EMessageType : uint8_t
	{
		MT_PIMARY    = 0,
		MT_TUTORIAL  = 1,
		MT_SPAM      = 2,
		MT_UNDEFINED = 3,
		MT_MAX       = 4
	};

	/**
	 * Enum FactoryGame.EHeightDataType
	 */
	enum class EHeightDataType : uint8_t
	{
		HDT_NONE    = 0,
		HDT_TERRAIN = 1,
		HDT_WATER   = 2,
		HDT_FOLIAGE = 3,
		HDT_MAX     = 4
	};

	/**
	 * Enum FactoryGame.ESessionLookupError
	 */
	enum class ESessionLookupError : uint8_t
	{
		NoError                        = 0,
		ServerConnectionAlreadyPending = 1,
		InvalidArguments               = 2,
		BackendError                   = 3,
		BeaconInitialization           = 4,
		BeaconConnection               = 5,
		ServerSessionNotFoundInOSS     = 6,
		MAX                            = 7
	};

	/**
	 * Enum FactoryGame.ESessionLookupState
	 */
	enum class ESessionLookupState : uint8_t
	{
		Initial                = 0,
		InitialSessionIDSearch = 1,
		Done                   = 2,
		MAX                    = 3
	};

	/**
	 * Enum FactoryGame.ENetIdType
	 */
	enum class ENetIdType : uint8_t
	{
		NIT_EPIC  = 0,
		NIT_STEAM = 1,
		NIT_OTHER = 2,
		NIT_MAX   = 3
	};

	/**
	 * Enum FactoryGame.ECantJoinReason
	 */
	enum class ECantJoinReason : uint8_t
	{
		CJR_InvalidGame      = 0,
		CJR_NotInAGame       = 1,
		CJR_PlayingOtherGame = 2,
		CJR_PrivateGame      = 3,
		CJR_DifferentVersion = 4,
		CJR_FullGame         = 5,
		CJR_Ok               = 6,
		CJR_MAX              = 7
	};

	/**
	 * Enum FactoryGame.EFGScannerCycleDirection
	 */
	enum class EFGScannerCycleDirection : uint8_t
	{
		CD_None      = 0,
		CD_Forward   = 1,
		CD_Backward  = 2,
		CD_Automatic = 3,
		CD_MAX       = 4
	};

	/**
	 * Enum FactoryGame.ESessionVisibility
	 */
	enum class ESessionVisibility : uint8_t
	{
		SV_Private     = 0,
		SV_FriendsOnly = 1,
		SV_Invalid     = 2,
		SV_MAX         = 3
	};

	/**
	 * Enum FactoryGame.EDistanceCullCategory
	 */
	enum class EDistanceCullCategory : uint8_t
	{
		FGDDC_NEVERCULL            = 0,
		FGDDC_Gameplay             = 1,
		FGDCC_BuildingSmall        = 2,
		FGDCC_BuildingMedium       = 3,
		FGDCC_BuildingBig          = 4,
		FGDCC_BuildingSupports     = 5,
		FGDCC_Infrastructure       = 6,
		FGDDC_ProductionIndicators = 7,
		FGDDC_Decor                = 8,
		FGDDC_MAX                  = 9,
		MAX                        = 10
	};

	/**
	 * Enum FactoryGame.EOptionCategory
	 */
	enum class EOptionCategory : uint8_t
	{
		OC_Gameplay      = 0,
		OC_Audio         = 1,
		OC_Video         = 2,
		OC_Controls      = 3,
		OC_Keybindings   = 4,
		OC_UserInterface = 5,
		OC_Online        = 6,
		OC_Debug         = 7,
		OC_MAX           = 8
	};

	/**
	 * Enum FactoryGame.EOptionType
	 */
	enum class EOptionType : uint8_t
	{
		OT_Checkbox         = 0,
		OT_Slider           = 1,
		OT_IntegerSelection = 2,
		OT_FloatSelection   = 3,
		OT_Custom           = 4,
		OT_MAX              = 5
	};

	/**
	 * Enum FactoryGame.EOptionNetmodeType
	 */
	enum class EOptionNetmodeType : uint8_t
	{
		ONT_ServerAndClient = 0,
		ONT_OnlyServer      = 1,
		ONT_OnlyClient      = 2,
		ONT_MAX             = 3
	};

	/**
	 * Enum FactoryGame.EOptionGamemodeType
	 */
	enum class EOptionGamemodeType : uint8_t
	{
		OGT_Always         = 0,
		OGT_OnlyInMainMenu = 1,
		OGT_OnlyInGame     = 2,
		OGT_MAX            = 3
	};

	/**
	 * Enum FactoryGame.EOptionRHIType
	 */
	enum class EOptionRHIType : uint8_t
	{
		ORT_Always           = 0,
		ORT_DisableForVulkan = 1,
		ORT_MAX              = 2
	};

	/**
	 * Enum FactoryGame.EPillarHologramBuildStep
	 */
	enum class EPillarHologramBuildStep : uint8_t
	{
		PHBS_Placement = 0,
		PHBS_Zoop      = 1,
		PHBS_MAX       = 2
	};

	/**
	 * Enum FactoryGame.EPipeAttachmentBuildStep
	 */
	enum class EPipeAttachmentBuildStep : uint8_t
	{
		PABS_PlacementAndDirection = 0,
		PABS_AdjustRotation        = 1,
		PABS_MAX                   = 2
	};

	/**
	 * Enum FactoryGame.EPipeConnectionType
	 */
	enum class EPipeConnectionType : uint8_t
	{
		PCT_ANY       = 0,
		PCT_CONSUMER  = 1,
		PCT_PRODUCER  = 2,
		PCT_SNAP_ONLY = 3,
		PCT_MAX       = 4
	};

	/**
	 * Enum FactoryGame.EPipelineSuppoortHologramBuildStep
	 */
	enum class EPipelineSuppoortHologramBuildStep : uint8_t
	{
		PSHBS_PlacementAndRotation = 0,
		PSHBS_AdjustHeight         = 1,
		PSHBS_MAX                  = 2
	};

	/**
	 * Enum FactoryGame.EHitFeedbackType
	 */
	enum class EHitFeedbackType : uint8_t
	{
		Normal   = 0,
		WeakSpot = 1,
		Armor    = 2,
		MAX      = 3
	};

	/**
	 * Enum FactoryGame.EPoleHologramBuildStep
	 */
	enum class EPoleHologramBuildStep : uint8_t
	{
		PHBS_PlacementAndRotation = 0,
		PHBS_AdjustHeight         = 1,
		PHBS_MAX                  = 2
	};

	/**
	 * Enum FactoryGame.EPopupId
	 */
	enum class EPopupId : uint8_t
	{
		PID_OK        = 0,
		PID_OK_CANCEL = 1,
		PID_NONE      = 2,
		PID_MAX       = 3
	};

	/**
	 * Enum FactoryGame.EPowerConnectionType
	 */
	enum class EPowerConnectionType : uint8_t
	{
		PCT_Default    = 0,
		PCT_PowerTower = 1,
		PCT_Any        = 2,
		PCT_MAX        = 3
	};

	/**
	 * Enum FactoryGame.ERailroadVehicleCoupler
	 */
	enum class ERailroadVehicleCoupler : uint8_t
	{
		RVC_FRONT = 0,
		RVC_BACK  = 1,
		RVC_MAX   = 2
	};

	/**
	 * Enum FactoryGame.EResourceAmount
	 */
	enum class EResourceAmount : uint8_t
	{
		RA_Poor     = 0,
		RA_Normal   = 1,
		RA_Rich     = 2,
		RA_Infinite = 3,
		RA_MAX      = 4
	};

	/**
	 * Enum FactoryGame.EResourcePurity
	 */
	enum class EResourcePurity : uint8_t
	{
		RP_Inpure = 0,
		RP_Normal = 1,
		RP_Pure   = 2,
		RP_MAX    = 3
	};

	/**
	 * Enum FactoryGame.EResourceNodeType
	 */
	enum class EResourceNodeType : uint8_t
	{
		Node              = 0,
		FrackingSatellite = 1,
		FrackingCore      = 2,
		Geyser            = 3,
		MAX               = 4
	};

	/**
	 * Enum FactoryGame.EFrackingSatelliteState
	 */
	enum class EFrackingSatelliteState : uint8_t
	{
		FSS_Untouched = 0,
		FSS_Active    = 1,
		FSS_Inactive  = 2,
		FSS_MAX       = 3
	};

	/**
	 * Enum FactoryGame.EResourceSinkTrack
	 */
	enum class EResourceSinkTrack : uint8_t
	{
		RST_Default     = 0,
		RST_Exploration = 1,
		RST_MAX         = 2
	};

	/**
	 * Enum FactoryGame.ECouponSource
	 */
	enum class ECouponSource : uint8_t
	{
		CS_None             = 0,
		CS_DefaultTrack     = 1,
		CS_ExplorationTrack = 2,
		CS_MAX              = 3
	};

	/**
	 * Enum FactoryGame.ESaveExists
	 */
	enum class ESaveExists : uint8_t
	{
		SE_DoesntExist          = 0,
		SE_ExistsInSameSession  = 1,
		SE_ExistsInOtherSession = 2,
		SE_MAX                  = 3
	};

	/**
	 * Enum FactoryGame.ESaveState
	 */
	enum class ESaveState : uint8_t
	{
		SS_Unsupported = 0,
		SS_Volatile    = 1,
		SS_Supported   = 2,
		SS_Newer       = 3,
		SS_MAX         = 4
	};

	/**
	 * Enum FactoryGame.ESaveModCheckResult
	 */
	enum class ESaveModCheckResult : uint8_t
	{
		MCR_Unknown      = 0,
		MCR_Supported    = 1,
		MCR_Volatile     = 2,
		MCR_Incompatible = 3,
		MCR_MAX          = 4
	};

	/**
	 * Enum FactoryGame.ESaveLocationInfo
	 */
	enum class ESaveLocationInfo : uint8_t
	{
		SLI_Default = 0,
		SLI_Common  = 1,
		SLI_Server  = 2,
		SLI_MAX     = 3
	};

	/**
	 * Enum FactoryGame.ESaveSortMode
	 */
	enum class ESaveSortMode : uint8_t
	{
		SSM_Name = 0,
		SSM_Time = 1,
		SSM_MAX  = 2
	};

	/**
	 * Enum FactoryGame.ESaveSortDirection
	 */
	enum class ESaveSortDirection : uint8_t
	{
		SSD_Ascending  = 0,
		SSD_Descending = 1,
		SSD_MAX        = 2
	};

	/**
	 * Enum FactoryGame.EActorToScanState
	 */
	enum class EActorToScanState : uint8_t
	{
		ATSS_Undetermined     = 0,
		ATSS_Visible          = 1,
		ATSS_Claimed          = 2,
		ATSS_TemporaryClaimed = 3,
		ATSS_MAX              = 4
	};

	/**
	 * Enum FactoryGame.EScannableActorType
	 */
	enum class EScannableActorType : uint8_t
	{
		RTWOT_Default    = 0,
		RTWOT_WeakSignal = 1,
		RTWOT_Fauna      = 2,
		RTWOT_Flora      = 3,
		RTWOT_MAX        = 4
	};

	/**
	 * Enum FactoryGame.ESchematicType
	 */
	enum class ESchematicType : uint8_t
	{
		EST_Custom       = 0,
		EST_Cheat        = 1,
		EST_Tutorial     = 2,
		EST_Milestone    = 3,
		EST_Alternate    = 4,
		EST_Story        = 5,
		EST_MAM          = 6,
		EST_ResourceSink = 7,
		EST_HardDrive    = 8,
		EST_Prototype    = 9,
		EST_MAX          = 10
	};

	/**
	 * Enum FactoryGame.ESchematicState
	 */
	enum class ESchematicState : uint8_t
	{
		ESS_Locked    = 0,
		ESS_Purchased = 1,
		ESS_Available = 2,
		ESS_Hidden    = 3,
		ESS_MAX       = 4
	};

	/**
	 * Enum FactoryGame.EWeatherType
	 */
	enum class EWeatherType : uint8_t
	{
		Weather_Default  = 0,
		Weather_Thunder  = 1,
		Weather_Rain     = 2,
		Weather_Clear    = 3,
		Weather_Overcast = 4,
		Weather_Unset    = 5,
		Weather_MAX      = 6
	};

	/**
	 * Enum FactoryGame.EWeatherIntensity
	 */
	enum class EWeatherIntensity : uint8_t
	{
		WeatherIntensity_Calm   = 0,
		WeatherIntensity_Medium = 1,
		WeatherIntensity_High   = 2,
		WeatherIntensity_Insane = 3,
		WeatherIntensity_MAX    = 4
	};

	/**
	 * Enum FactoryGame.ESplineHologramBuildStep
	 */
	enum class ESplineHologramBuildStep : uint8_t
	{
		SHBS_FindStart             = 0,
		SHBS_AdjustStartingPole    = 1,
		SHBS_PlacePoleOrSnapEnding = 2,
		SHBS_AdjustPole            = 3,
		SHBS_MAX                   = 4
	};

	/**
	 * Enum FactoryGame.ESignHologramBuildStep
	 */
	enum class ESignHologramBuildStep : uint8_t
	{
		ESHBS_SnapToActor  = 0,
		ESHBS_AdjustHeight = 1,
		ESHBS_MAX          = 2
	};

	/**
	 * Enum FactoryGame.EPathDiagnosticsError
	 */
	enum class EPathDiagnosticsError : uint8_t
	{
		PDE_NoError                       = 0,
		PDE_StationUnreachable            = 1,
		PDE_StationUnreachableWithSignals = 2,
		PDE_MAX                           = 3
	};

	/**
	 * Enum FactoryGame.ESelfDrivingLocomotiveState
	 */
	enum class ESelfDrivingLocomotiveState : uint8_t
	{
		SDLS_Idle             = 0,
		SDLS_FollowPath       = 1,
		SDLS_Docking          = 2,
		SDLS_DockingCompleted = 3,
		SDLS_MAX              = 4
	};

	/**
	 * Enum FactoryGame.ETrainDockingDefinition
	 */
	enum class ETrainDockingDefinition : uint8_t
	{
		TDD_LoadUnloadOnce  = 0,
		TDD_FullyLoadUnload = 1,
		TDD_MAX             = 2
	};

	/**
	 * Enum FactoryGame.ETrainPlatformConnectionType
	 */
	enum class ETrainPlatformConnectionType : uint8_t
	{
		ETPC_Out     = 0,
		ETPC_In      = 1,
		ETPC_Neutral = 2,
		ETPC_MAX     = 3
	};

	/**
	 * Enum FactoryGame.EIntroTutorialSteps
	 */
	enum class EIntroTutorialSteps : uint8_t
	{
		ITS_NONE          = 0,
		ITS_INTRO         = 1,
		ITS_DISMANTLE_POD = 2,
		ITS_OPEN_CODEX    = 3,
		ITS_STUN_SPEAR    = 4,
		ITS_IRON_ORE      = 5,
		ITS_HUB           = 6,
		ITS_HUB_LVL1      = 7,
		ITS_HUB_LVL101    = 8,
		ITS_HUB_LVL2      = 9,
		ITS_HUB_LVL3      = 10,
		ITS_HUB_LVL4      = 11,
		ITS_HUB_LVL5      = 12,
		ITS_DONE          = 13,
		ITS_MAX           = 14
	};

	/**
	 * Enum FactoryGame.ESchematicPickupState
	 */
	enum class ESchematicPickupState : uint8_t
	{
		Unknown   = 0,
		Available = 1,
		Collected = 2,
		MAX       = 3
	};

	/**
	 * Enum FactoryGame.EUserSettingManagers
	 */
	enum class EUserSettingManagers : uint8_t
	{
		USM_OptionsMenu = 0,
		USM_Advanced    = 1,
		USM_PhotoMode   = 2,
		USM_None        = 3,
		USM_MAX         = 4
	};

	/**
	 * Enum FactoryGame.ESettingVisiblityDisqualifier
	 */
	enum class ESettingVisiblityDisqualifier : uint8_t
	{
		USAD_None          = 0,
		USAD_NotOnServer   = 1,
		USAD_NotOnClient   = 2,
		USAD_NotInMainMenu = 3,
		USAD_NotInGame     = 4,
		USAD_NotForVulkan  = 5,
		USAD_MAX           = 6
	};

	/**
	 * Enum FactoryGame.ESettingEditabilityDisqualifier
	 */
	enum class ESettingEditabilityDisqualifier : uint8_t
	{
		USED_None          = 0,
		USED_NonReversible = 1,
		USED_MAX           = 2
	};

	/**
	 * Enum FactoryGame.EGameVersion
	 */
	enum class EGameVersion : uint8_t
	{
		GV_Main         = 0,
		GV_Experimental = 1,
		GV_Other        = 2,
		GV_MAX          = 3
	};

	/**
	 * Enum FactoryGame.EMultiplayerButtonType
	 */
	enum class EMultiplayerButtonType : uint8_t
	{
		MBT_Join          = 0,
		MBT_SendInvite    = 1,
		MBT_JoinInvite    = 2,
		MBT_ManagePlayers = 3,
		MBT_MAX           = 4
	};

	/**
	 * Enum FactoryGame.EIncludeInBuilds
	 */
	enum class EIncludeInBuilds : uint8_t
	{
		IIB_Never         = 0,
		IIB_Development   = 1,
		IIB_PrivateBuilds = 2,
		IIB_PublicBuilds  = 3,
		IIB_MAX           = 4
	};

	/**
	 * Enum FactoryGame.ERailroadPathFindingResult
	 */
	enum class ERailroadPathFindingResult : uint8_t
	{
		RPFR_Error       = 0,
		RPFR_Unreachable = 1,
		RPFR_Success     = 2,
		RPFR_MAX         = 3
	};

	/**
	 * Enum FactoryGame.EWeatherStateMask
	 */
	enum class EWeatherStateMask : uint8_t
	{
		Clear  = 0,
		Cloudy = 1,
		Rainy  = 2,
		Windy  = 3,
		Stormy = 4,
		Foggy  = 5,
		MAX    = 6
	};

	/**
	 * Enum FactoryGame.EUndefinedBool
	 */
	enum class EUndefinedBool : uint8_t
	{
		UB_Undefined = 0,
		UB_False     = 1,
		UB_True      = 2,
		UB_MAX       = 3
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct FactoryGame.RepresentationVector2D
	 * Size -> 0x0008
	 */
	struct FRepresentationVector2D
	{
	public:
		float                                                      X;                                                       // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Y;                                                       // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FactoryGame.DescriptorStatBar
	 * Size -> 0x0008
	 */
	struct FDescriptorStatBar
	{
	public:
		EDescriptorStatBarType                                     DescriptorStatBarType;                                   // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3ZPV[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    Value;                                                   // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FactoryGame.CompatibleItemDescriptors
	 * Size -> 0x0018
	 */
	struct FCompatibleItemDescriptors
	{
	public:
		ECompatibleItemType                                        CompatibleItemType;                                      // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XZDM[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UClass*>                                      CompatibleItemDescriptors;                               // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, UObjectWrapper, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FactoryGame.AmmoTickFunction
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	struct FAmmoTickFunction : public FTickFunction
	{
	public:
		unsigned char                                              UnknownData_YE5X[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FactoryGame.FGHomingTarget
	 * Size -> 0x0010
	 */
	struct FFGHomingTarget
	{
	public:
		class UClass*                                              ActorClass;                                              // 0x0000(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EHomingPriority                                            HomingPriority;                                          // 0x0008(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AS8P[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FactoryGame.AnimInstanceProxyTrainDocking
	 * Size -> 0x0020 (FullSize[0x08A0] - InheritedSize[0x0880])
	 */
	struct FAnimInstanceProxyTrainDocking : public FAnimInstanceProxy
	{
	public:
		struct FVector                                             TranslationOffset;                                       // 0x0880(0x0018) Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ETrainPlatformDockingStatus                                DockingStatus;                                           // 0x0898(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       HasPower : 1;                                            // 0x0899(0x0001) BIT_FIELD Edit, BlueprintVisible, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsFullLoad : 1;                                          // 0x0899(0x0001) BIT_FIELD Edit, BlueprintVisible, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsFullUnload : 1;                                        // 0x0899(0x0001) BIT_FIELD Edit, BlueprintVisible, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       ShouldEnterTransferState : 1;                            // 0x0899(0x0001) BIT_FIELD Edit, BlueprintVisible, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       ShouldEnterOfflineState : 1;                             // 0x0899(0x0001) BIT_FIELD Edit, BlueprintVisible, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FWZX[0x6];                                   // 0x089A(0x0006) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FactoryGame.AnimInstanceProxyTruckStation
	 * Size -> 0x0020 (FullSize[0x08A0] - InheritedSize[0x0880])
	 */
	struct FAnimInstanceProxyTruckStation : public FAnimInstanceProxy
	{
	public:
		class FName                                                StateMachineName;                                        // 0x0880(0x0008) Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AnimPlayRate;                                            // 0x0888(0x0004) Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RampUpTime;                                              // 0x088C(0x0004) Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RampDownTime;                                            // 0x0890(0x0004) Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       HasPower : 1;                                            // 0x0894(0x0001) BIT_FIELD Edit, BlueprintVisible, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsLoading : 1;                                           // 0x0894(0x0001) BIT_FIELD Edit, BlueprintVisible, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsUnloading : 1;                                         // 0x0894(0x0001) BIT_FIELD Edit, BlueprintVisible, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsProducing : 1;                                         // 0x0894(0x0001) BIT_FIELD Edit, BlueprintVisible, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       OfflineToLoadTransition : 1;                             // 0x0894(0x0001) BIT_FIELD Edit, BlueprintVisible, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       OfflineToUnloadTransition : 1;                           // 0x0894(0x0001) BIT_FIELD Edit, BlueprintVisible, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       LoadToOfflineTransition : 1;                             // 0x0894(0x0001) BIT_FIELD Edit, BlueprintVisible, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       UnloadToOfflineTransition : 1;                           // 0x0894(0x0001) BIT_FIELD Edit, BlueprintVisible, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_M48A[0xB];                                   // 0x0895(0x000B) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FactoryGame.CreatureSound
	 * Size -> 0x0040
	 */
	struct FCreatureSound
	{
	public:
		unsigned char                                              CreatureClass[0x30];                                     // 0x0000(0x0030) UNKNOWN PROPERTY: SoftClassProperty
		bool                                                       OrChildOf;                                               // 0x0030(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZQ8R[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAkAudioEvent*                                       AudioEvent;                                              // 0x0038(0x0008) Edit, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FactoryGame.AtmosphereVolumeBlend
	 * Size -> 0x000C
	 */
	struct FAtmosphereVolumeBlend
	{
	public:
		TWeakObjectPtr<class AFGAtmosphereVolume>                  Volume;                                                  // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1EO9[0x4];                                   // 0x0008(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FactoryGame.MessageSubtitle
	 * Size -> 0x0028
	 */
	struct FMessageSubtitle
	{
	public:
		class FText                                                Subtitle;                                                // 0x0000(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic
		class UClass*                                              SenderClass;                                             // 0x0018(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Timestamp;                                               // 0x0020(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_V2VV[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FactoryGame.MessageDialogue
	 * Size -> 0x0020
	 */
	struct FMessageDialogue
	{
	public:
		class UAkAudioEvent*                                       AudioEvent;                                              // 0x0000(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FMessageSubtitle>                            MessageSubtitles;                                        // 0x0008(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		float                                                      OverlapWithNextDialogue;                                 // 0x0018(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_R3BH[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FactoryGame.FGPoolType
	 * Size -> 0x0090
	 */
	struct FFGPoolType
	{
	public:
		EPoolType                                                  Type;                                                    // 0x0000(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_46PX[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              mProxyComponent;                                         // 0x0008(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Count;                                                   // 0x0010(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RelevanceDistance;                                       // 0x0014(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAdjustHeight;                                           // 0x0018(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XS6O[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UStaticMesh*                                         mVisual_Mesh;                                            // 0x0020(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bVisual_Instanced;                                       // 0x0028(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NLK0[0x7];                                   // 0x0029(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              mCVarCountScalabilityString;                             // 0x0030(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BQRD[0x8];                                   // 0x0040(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    mCachedCountScalabilityValue;                            // 0x0048(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_V6WC[0x4];                                   // 0x004C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              mCVarRelevancyScalabilityString;                         // 0x0050(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VO8C[0x8];                                   // 0x0060(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      mCachedRelevancyScaleScalabilityValue;                   // 0x0068(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_B1CZ[0x4];                                   // 0x006C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              mCvarQualityScalabilityString;                           // 0x0070(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_78BW[0x8];                                   // 0x0080(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    mCachedQualityScalabilityValue;                          // 0x0088(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OKI4[0x4];                                   // 0x008C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FactoryGame.PopupData
	 * Size -> 0x0070
	 */
	struct FPopupData
	{
	public:
		class FText                                                Title;                                                   // 0x0000(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic
		class FText                                                Body;                                                    // 0x0018(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic
		EPopupId                                                   ID;                                                      // 0x0030(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GQEQ[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              PopupClass;                                              // 0x0038(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UObject*                                             Instigator;                                              // 0x0040(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UFGPopupWidgetContent*                               PopupContent;                                            // 0x0048(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FScriptDelegate                                      PopupConfirmClickedDelegate;                             // 0x0050(0x0010) ZeroConstructor, InstancedReference, Deprecated, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FScriptDelegate                                      PopupClosedDelegate;                                     // 0x0060(0x0010) ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FactoryGame.FGHologramGuidelineSnapResult
	 * Size -> 0x00B0
	 */
	struct FFGHologramGuidelineSnapResult
	{
	public:
		unsigned char                                              UnknownData_VO8G[0xB0];                                  // 0x0000(0x00B0) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FactoryGame.FactoryCustomizationColorSlot
	 * Size -> 0x0028
	 */
	struct FFactoryCustomizationColorSlot
	{
	public:
		struct FLinearColor                                        PrimaryColor;                                            // 0x0000(0x0010) Edit, ZeroConstructor, SaveGame, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        SecondaryColor;                                          // 0x0010(0x0010) Edit, ZeroConstructor, SaveGame, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Metallic;                                                // 0x0020(0x0004) Edit, ZeroConstructor, SaveGame, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Roughness;                                               // 0x0024(0x0004) Edit, ZeroConstructor, SaveGame, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FactoryGame.FactoryCustomizationData
	 * Size -> 0x0078
	 */
	struct FFactoryCustomizationData
	{
	public:
		class UClass*                                              SwatchDesc;                                              // 0x0000(0x0008) Edit, ZeroConstructor, SaveGame, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              PatternDesc;                                             // 0x0008(0x0008) Edit, ZeroConstructor, SaveGame, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              MaterialDesc;                                            // 0x0010(0x0008) Edit, ZeroConstructor, SaveGame, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              SkinDesc;                                                // 0x0018(0x0008) Edit, ZeroConstructor, SaveGame, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FFactoryCustomizationColorSlot                      OverrideColorData;                                       // 0x0020(0x0028) SaveGame, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              PatternRotation;                                         // 0x0048(0x0001) ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5FLS[0x7];                                   // 0x0049(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<float>                                              Data;                                                    // 0x0050(0x0010) BlueprintVisible, ZeroConstructor, RepSkip, NativeAccessSpecifierPublic
		TArray<float>                                              ExtraData;                                               // 0x0060(0x0010) BlueprintVisible, ZeroConstructor, RepSkip, NativeAccessSpecifierPublic
		unsigned char                                              ColorSlot;                                               // 0x0070(0x0001) ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       NeedsSkinUpdate;                                         // 0x0071(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              HasPower;                                                // 0x0072(0x0001) ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_V0ZA[0x5];                                   // 0x0073(0x0005) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FactoryGame.BlueprintSaveData
	 * Size -> 0x0078
	 */
	struct FBlueprintSaveData
	{
	public:
		unsigned char                                              UnknownData_FZXC[0x78];                                  // 0x0000(0x0078) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FactoryGame.BlueprintRecord
	 * Size -> 0x0050
	 */
	struct FBlueprintRecord
	{
	public:
		class FString                                              BlueprintName;                                           // 0x0000(0x0010) BlueprintVisible, ZeroConstructor, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              BlueprintDescription;                                    // 0x0010(0x0010) BlueprintVisible, ZeroConstructor, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    IconID;                                                  // 0x0020(0x0004) BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        Color;                                                   // 0x0024(0x0010) BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QDSV[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UFGBlueprintCategory*                                Category;                                                // 0x0038(0x0008) BlueprintVisible, ZeroConstructor, SaveGame, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UFGBlueprintSubCategory*                             SubCategory;                                             // 0x0040(0x0008) BlueprintVisible, ZeroConstructor, SaveGame, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Priority;                                                // 0x0048(0x0004) BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PD8K[0x4];                                   // 0x004C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FactoryGame.BlueprintSubCategoryRecord
	 * Size -> 0x0028
	 */
	struct FBlueprintSubCategoryRecord
	{
	public:
		class FString                                              SubCategoryName;                                         // 0x0000(0x0010) ZeroConstructor, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MenuPriority;                                            // 0x0010(0x0004) ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              IsUndefined;                                             // 0x0014(0x0001) ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QQJU[0x3];                                   // 0x0015(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FString>                                      BlueprintNames;                                          // 0x0018(0x0010) ZeroConstructor, SaveGame, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FactoryGame.BlueprintCategoryRecord
	 * Size -> 0x0030
	 */
	struct FBlueprintCategoryRecord
	{
	public:
		class FString                                              CategoryName;                                            // 0x0000(0x0010) ZeroConstructor, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    IconID;                                                  // 0x0010(0x0004) ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MenuPriority;                                            // 0x0014(0x0004) ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsUndefined : 1;                                         // 0x0018(0x0001) BIT_FIELD SaveGame, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6DFP[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FBlueprintSubCategoryRecord>                 SubCategoryRecords;                                      // 0x0020(0x0010) ZeroConstructor, SaveGame, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FactoryGame.BlueprintItemAmount
	 * Size -> 0x0010
	 */
	struct FBlueprintItemAmount
	{
	public:
		class UClass*                                              ItemClass;                                               // 0x0000(0x0008) ZeroConstructor, SaveGame, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Amount;                                                  // 0x0008(0x0004) ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GOY2[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FactoryGame.BlueprintHeader
	 * Size -> 0x0058
	 */
	struct FBlueprintHeader
	{
	public:
		unsigned char                                              UnknownData_DKFD[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              BlueprintName;                                           // 0x0008(0x0010) BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FIntVector                                          Dimensions;                                              // 0x0018(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_V2MG[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FBlueprintItemAmount>                        cost;                                                    // 0x0028(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class UClass*>                                      Recipes;                                                 // 0x0038(0x0010) ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_44NP[0x10];                                  // 0x0048(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FactoryGame.BlueprintNameAndHash
	 * Size -> 0x0020
	 */
	struct FBlueprintNameAndHash
	{
	public:
		class FString                                              BlueprintName;                                           // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Hash;                                                    // 0x0010(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FactoryGame.BlueprintManifest
	 * Size -> 0x0010
	 */
	struct FBlueprintManifest
	{
	public:
		TArray<struct FBlueprintNameAndHash>                       Entries;                                                 // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FactoryGame.BlueprintBuildEffectData
	 * Size -> 0x0080
	 */
	struct FBlueprintBuildEffectData
	{
	public:
		struct FTransform                                          Transform;                                               // 0x0000(0x0060) IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ID;                                                      // 0x0060(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NumBuildables;                                           // 0x0064(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class AFGBuildable*>                                Buildables;                                              // 0x0068(0x0010) ZeroConstructor, RepSkip, NativeAccessSpecifierPublic
		TWeakObjectPtr<class APawn>                                Instigator;                                              // 0x0078(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FactoryGame.FirstPersonMaterialArray
	 * Size -> 0x0010
	 */
	struct FFirstPersonMaterialArray
	{
	public:
		TArray<class UMaterialInterface*>                          FirstPersonMaterials;                                    // 0x0000(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FactoryGame.BoomBoxPlayerState
	 * Size -> 0x0018
	 */
	struct FBoomBoxPlayerState
	{
	public:
		class UClass*                                              mCurrentTape;                                            // 0x0000(0x0008) ZeroConstructor, SaveGame, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    mCurrentSongIx;                                          // 0x0008(0x0004) ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    mSongOffsetMS;                                           // 0x000C(0x0004) ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      mVolume;                                                 // 0x0010(0x0004) ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    mPlaybackState;                                          // 0x0014(0x0004) ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FactoryGame.CustomizationDescToRecipeData
	 * Size -> 0x0060
	 */
	struct FCustomizationDescToRecipeData
	{
	public:
		unsigned char                                              mMaterial[0x30];                                         // 0x0000(0x0030) UNKNOWN PROPERTY: SoftClassProperty
		unsigned char                                              mRecipe[0x30];                                           // 0x0030(0x0030) UNKNOWN PROPERTY: SoftClassProperty
	};

	/**
	 * ScriptStruct FactoryGame.FactoryTickFunction
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	struct FFactoryTickFunction : public FTickFunction
	{
	public:
		unsigned char                                              UnknownData_RQOQ[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FactoryGame.FGAttachmentPoint
	 * Size -> 0x0080
	 */
	struct FFGAttachmentPoint
	{
	public:
		unsigned char                                              UnknownData_SRQW[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          RelativeTransform;                                       // 0x0010(0x0060) BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              Type;                                                    // 0x0070(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class AActor*                                              Owner;                                                   // 0x0078(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FactoryGame.NetConstructionID
	 * Size -> 0x0006
	 */
	struct FNetConstructionID
	{
	public:
		int8_t                                                     NetPlayerID;                                             // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BOS4[0x1];                                   // 0x0001(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		uint16_t                                                   Server_ID;                                               // 0x0002(0x0002) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint16_t                                                   Client_ID;                                               // 0x0004(0x0002) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FactoryGame.ReplicationDetailData
	 * Size -> 0x0028
	 */
	struct FReplicationDetailData
	{
	public:
		class AActor*                                              mOwningActor;                                            // 0x0000(0x0008) ZeroConstructor, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UFGInventoryComponent*                               mActiveInventoryComponent;                               // 0x0008(0x0008) ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UFGInventoryComponent*                               mMainInventoryComponent;                                 // 0x0010(0x0008) ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UFGInventoryComponent*                               mReplicationInventoryComponent;                          // 0x0018(0x0008) ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class AFGReplicationDetailActor*                           mReplicationDetailActor;                                 // 0x0020(0x0008) ZeroConstructor, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	};

	/**
	 * ScriptStruct FactoryGame.ItemAmount
	 * Size -> 0x0010
	 */
	struct FItemAmount
	{
	public:
		class UClass*                                              ItemClass;                                               // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, SaveGame, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Amount;                                                  // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LF18[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FactoryGame.SlotIndextoRandomRewardMapping
	 * Size -> 0x0008
	 */
	struct FSlotIndextoRandomRewardMapping
	{
	public:
		int32_t                                                    SlotIndex;                                               // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    RandomRewardIndex;                                       // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FactoryGame.FluidBox
	 * Size -> 0x005C
	 */
	struct FFluidBox
	{
	public:
		unsigned char                                              UnknownData_V51D[0x5C];                                  // 0x0000(0x005C) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FactoryGame.ConveyorBeltItems
	 * Size -> 0x00A8
	 */
	struct FConveyorBeltItems
	{
	public:
		unsigned char                                              UnknownData_O2DG[0xA8];                                  // 0x0000(0x00A8) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FactoryGame.DockingVehicleStatistics
	 * Size -> 0x000C
	 */
	struct FDockingVehicleStatistics
	{
	public:
		float                                                      mTimeSinceLastDocking;                                   // 0x0000(0x0004) ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      mWeightedAverageTimeBetweenDocks;                        // 0x0004(0x0004) ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      mWeightedAverageItemsTransferred;                        // 0x0008(0x0004) ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FactoryGame.LightSourceControlData
	 * Size -> 0x000C
	 */
	struct FLightSourceControlData
	{
	public:
		int32_t                                                    ColorSlotIndex;                                          // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Intensity;                                               // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsTimeOfDayAware;                                        // 0x0008(0x0001) Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Z7VO[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FactoryGame.FoundationSideSelectionFlags
	 * Size -> 0x0001
	 */
	struct FFoundationSideSelectionFlags
	{
	public:
		bool                                                       Front : 1;                                               // 0x0000(0x0001) BIT_FIELD Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Right : 1;                                               // 0x0000(0x0001) BIT_FIELD Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Back : 1;                                                // 0x0000(0x0001) BIT_FIELD Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Left : 1;                                                // 0x0000(0x0001) BIT_FIELD Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Top : 1;                                                 // 0x0000(0x0001) BIT_FIELD Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Bottom : 1;                                              // 0x0000(0x0001) BIT_FIELD Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FactoryGame.TrajectoryData
	 * Size -> 0x0030
	 */
	struct FTrajectoryData
	{
	public:
		unsigned char                                              UnknownData_W8HS[0x30];                                  // 0x0000(0x0030) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FactoryGame.FGPipeHyperJunctionPath
	 * Size -> 0x0018
	 */
	struct FFGPipeHyperJunctionPath
	{
	public:
		class UFGPipeConnectionComponentBase*                      Connection0;                                             // 0x0000(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UFGPipeConnectionComponentBase*                      Connection1;                                             // 0x0008(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USplineComponent*                                    SplineComponent;                                         // 0x0010(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FactoryGame.FGPipeHyperJunctionConnectionInfo
	 * Size -> 0x0028
	 */
	struct FFGPipeHyperJunctionConnectionInfo
	{
	public:
		class UFGPipeConnectionComponentBase*                      Connection;                                              // 0x0000(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, SaveGame, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FText                                                ConnectionLabel;                                         // 0x0008(0x0018) Edit, BlueprintVisible, SaveGame, NativeAccessSpecifierPublic
		int32_t                                                    ConnectionIconIndex;                                     // 0x0020(0x0004) Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDefaultRoute;                                           // 0x0024(0x0001) Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_W0L7[0x3];                                   // 0x0025(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FactoryGame.QuantizedPipelineIndicatorData
	 * Size -> 0x0002
	 */
	struct FQuantizedPipelineIndicatorData
	{
	public:
		int8_t                                                     PackedFlow;                                              // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              PackedContent;                                           // 0x0001(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct FactoryGame.StringPair
	 * Size -> 0x0020
	 */
	struct FStringPair
	{
	public:
		class FString                                              WwiseSafeName;                                           // 0x0000(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ActualName;                                              // 0x0010(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FactoryGame.QuantizedPumpIndicatorData
	 * Size -> 0x0002
	 */
	struct FQuantizedPumpIndicatorData
	{
	public:
		int8_t                                                     PackedFlow;                                              // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              PackedPressure;                                          // 0x0001(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct FactoryGame.QuantizedReservoirIndicatorData
	 * Size -> 0x0003
	 */
	struct FQuantizedReservoirIndicatorData
	{
	public:
		unsigned char                                              PackedFlowFill;                                          // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              PackedFlowDrain;                                         // 0x0001(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              PackedContent;                                           // 0x0002(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct FactoryGame.PoleHeightMesh
	 * Size -> 0x0010
	 */
	struct FPoleHeightMesh
	{
	public:
		class UStaticMesh*                                         Mesh;                                                    // 0x0000(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Height;                                                  // 0x0008(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LVWK[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FactoryGame.TrainDockingRuleSet
	 * Size -> 0x0030
	 */
	struct FTrainDockingRuleSet
	{
	public:
		ETrainDockingDefinition                                    DockingDefinition;                                       // 0x0000(0x0001) BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZYE6[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      DockForDuration;                                         // 0x0004(0x0004) BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsDurationAndRule;                                       // 0x0008(0x0001) BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IgnoreFullLoadUnloadIfTransferBlockedByFilters;          // 0x0009(0x0001) BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OE54[0x6];                                   // 0x000A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UClass*>                                      LoadFilterDescriptors;                                   // 0x0010(0x0010) BlueprintVisible, ZeroConstructor, SaveGame, UObjectWrapper, NativeAccessSpecifierPublic
		TArray<class UClass*>                                      UnloadFilterDescriptors;                                 // 0x0020(0x0010) BlueprintVisible, ZeroConstructor, SaveGame, UObjectWrapper, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FactoryGame.SwitchData
	 * Size -> 0x0002
	 */
	struct FSwitchData
	{
	public:
		unsigned char                                              Position;                                                // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              numPositions;                                            // 0x0001(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FactoryGame.SplitterSortRule
	 * Size -> 0x0010
	 */
	struct FSplitterSortRule
	{
	public:
		class UClass*                                              ItemClass;                                               // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    OutputIndex;                                             // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2R1N[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FactoryGame.SharedInventoryStatePtr
	 * Size -> 0x0010
	 */
	struct FSharedInventoryStatePtr
	{
	public:
		class AActor*                                              ActorPtr;                                                // 0x0000(0x0008) ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_9AOC[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FactoryGame.InventoryItem
	 * Size -> 0x0020
	 */
	struct FInventoryItem
	{
	public:
		unsigned char                                              UnknownData_4F0E[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              ItemClass;                                               // 0x0008(0x0008) Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FSharedInventoryStatePtr                            ItemState;                                               // 0x0010(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FactoryGame.ConnectionItemStruct
	 * Size -> 0x0038
	 */
	struct FConnectionItemStruct
	{
	public:
		class UFGFactoryConnectionComponent*                       Connection;                                              // 0x0000(0x0008) ExportObject, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FInventoryItem                                      Item;                                                    // 0x0008(0x0020) NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0OIL[0x10];                                  // 0x0028(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FactoryGame.ConveyorSpaceData
	 * Size -> 0x0008
	 */
	struct FConveyorSpaceData
	{
	public:
		unsigned char                                              UnknownData_YI78[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FactoryGame.DistanceBasedTickRate
	 * Size -> 0x0008
	 */
	struct FDistanceBasedTickRate
	{
	public:
		float                                                      Distance;                                                // 0x0000(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TickRate;                                                // 0x0004(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FactoryGame.PrefabSignData
	 * Size -> 0x00F0
	 */
	struct FPrefabSignData
	{
	public:
		class UClass*                                              PrefabLayout;                                            // 0x0000(0x0008) BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TMap<class FString, class FString>                         TextElementData;                                         // 0x0008(0x0050) BlueprintVisible, RepSkip, NativeAccessSpecifierPublic
		TMap<class FString, int32_t>                               IconElementData;                                         // 0x0058(0x0050) BlueprintVisible, RepSkip, NativeAccessSpecifierPublic
		struct FLinearColor                                        ForegroundColor;                                         // 0x00A8(0x0010) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        BackgroundColor;                                         // 0x00B8(0x0010) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        AuxiliaryColor;                                          // 0x00C8(0x0010) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Emissive;                                                // 0x00D8(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Glossiness;                                              // 0x00DC(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              SignTypeDesc;                                            // 0x00E0(0x0008) BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GHIA[0x8];                                   // 0x00E8(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FactoryGame.PrefabTextElementSaveData
	 * Size -> 0x0020
	 */
	struct FPrefabTextElementSaveData
	{
	public:
		class FString                                              ElementName;                                             // 0x0000(0x0010) ZeroConstructor, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Text;                                                    // 0x0010(0x0010) ZeroConstructor, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FactoryGame.PrefabIconElementSaveData
	 * Size -> 0x0018
	 */
	struct FPrefabIconElementSaveData
	{
	public:
		class FString                                              ElementName;                                             // 0x0000(0x0010) ZeroConstructor, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    IconID;                                                  // 0x0010(0x0004) ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NTV1[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FactoryGame.WireInstance
	 * Size -> 0x0068
	 */
	struct FWireInstance
	{
	public:
		class UStaticMeshComponent*                                WireMesh;                                                // 0x0000(0x0008) ExportObject, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Locations[0x2];                                          // 0x0008(0x0030) ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             CachedRelativeLocations[0x2];                            // 0x0038(0x0030) ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FactoryGame.DamageModifier
	 * Size -> 0x0018
	 */
	struct FDamageModifier
	{
	public:
		class UClass*                                              DamageType;                                              // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EDamageModifierType                                        DamageModifierType;                                      // 0x0008(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DT8H[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      DamageModifier;                                          // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UObject*                                             AppliedBy;                                               // 0x0010(0x0008) BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FactoryGame.ConnectionRepresentation
	 * Size -> 0x0010
	 */
	struct FConnectionRepresentation
	{
	public:
		class UFGConnectionComponent*                              mConnectionComponent;                                    // 0x0000(0x0008) ExportObject, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UStaticMeshComponent*                                mConnectionRepresentation;                               // 0x0008(0x0008) ExportObject, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FactoryGame.AttachmentPointRepresentation
	 * Size -> 0x0010
	 */
	struct FAttachmentPointRepresentation
	{
	public:
		unsigned char                                              UnknownData_NFRG[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UStaticMeshComponent*                                mAttachmentRepresentation;                               // 0x0008(0x0008) ExportObject, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FactoryGame.ActorClearanceData
	 * Size -> 0x0050
	 */
	struct FActorClearanceData
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008) ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UStaticMeshComponent*>                        ClearanceMeshComponents;                                 // 0x0008(0x0010) ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		class UStaticMeshComponent*                                BlueprintProxyMesh;                                      // 0x0018(0x0008) ExportObject, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FConnectionRepresentation>                   mConnectionComponents;                                   // 0x0020(0x0010) ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		TArray<struct FAttachmentPointRepresentation>              mAttachmentPointMeshes;                                  // 0x0030(0x0010) ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		TArray<class UBoxComponent*>                               OverlappingClearanceDetectors;                           // 0x0040(0x0010) ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FactoryGame.InventoryStack
	 * Size -> 0x0028
	 */
	struct FInventoryStack
	{
	public:
		struct FInventoryItem                                      Item;                                                    // 0x0000(0x0020) Edit, SaveGame, NativeAccessSpecifierPublic
		int32_t                                                    NumItems;                                                // 0x0020(0x0004) Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FZYU[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FactoryGame.DismantleRefunds
	 * Size -> 0x0018
	 */
	struct FDismantleRefunds
	{
	public:
		uint32_t                                                   NumPendingActors;                                        // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KWDN[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FInventoryStack>                             PeekDismantleRefund;                                     // 0x0008(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FactoryGame.FootstepEffect
	 * Size -> 0x0018
	 */
	struct FFootstepEffect
	{
	public:
		class UParticleSystem*                                     Particle;                                                // 0x0000(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UMaterialInterface*>                          GroundDecals;                                            // 0x0008(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FactoryGame.FootstepEffectSurface
	 * Size -> 0x0020
	 */
	struct FFootstepEffectSurface
	{
	public:
		EPhysicalSurface                                           Surface;                                                 // 0x0000(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JDPF[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FFootstepEffect                                     Effect;                                                  // 0x0008(0x0018) Edit, DisableEditOnInstance, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FactoryGame.BoneDamageModifier
	 * Size -> 0x0038
	 */
	struct FBoneDamageModifier
	{
	public:
		class FName                                                BoneName;                                                // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EDamageModifierType                                        DamageModifierType;                                      // 0x0008(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VCIN[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      DamageModifier;                                          // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IncludeChildBones;                                       // 0x0010(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YHG3[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UClass*>                                      DamageTypesBlackList;                                    // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, UObjectWrapper, NativeAccessSpecifierPublic
		TArray<class UClass*>                                      DamageTypesWhiteList;                                    // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, UObjectWrapper, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FactoryGame.FGPipeHyperDynamicPipeData
	 * Size -> 0x0028
	 */
	struct FFGPipeHyperDynamicPipeData
	{
	public:
		unsigned char                                              UnknownData_6OZ1[0x28];                                  // 0x0000(0x0028) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FactoryGame.PlayerPipeHyperData
	 * Size -> 0x0190
	 */
	struct FPlayerPipeHyperData
	{
	public:
		class AActor*                                              mTravelingPipeHyperReal;                                 // 0x0000(0x0008) ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FFGPipeHyperDynamicPipeData                         mTravelingPipeHyperRealData;                             // 0x0008(0x0028) NativeAccessSpecifierPublic
		class AActor*                                              mTravelingPipeHyperLast;                                 // 0x0030(0x0008) ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FFGPipeHyperDynamicPipeData                         mTravelingPipeHyperLastData;                             // 0x0038(0x0028) NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VLEG[0x60];                                  // 0x0060(0x0060) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UFGPipeConnectionComponentBase*                      mConnectionToEjectThrough;                               // 0x00C0(0x0008) ExportObject, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_W7TZ[0x8];                                   // 0x00C8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              mTravelingPipeHyper;                                     // 0x00D0(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      mPipeProgress;                                           // 0x00D8(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      mPipeVelocity;                                           // 0x00DC(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             mPipeDirection;                                          // 0x00E0(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FFGPipeHyperDynamicPipeData                         mTravelingPipeHyperData;                                 // 0x00F8(0x0028) NativeAccessSpecifierPublic
		float                                                      mMinPipeSpeed;                                           // 0x0120(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      mPipeGravityStrength;                                    // 0x0124(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      mPipeFriction;                                           // 0x0128(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      mPipeConstantAcceleration;                               // 0x012C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      mPipeCurveDamping;                                       // 0x0130(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      mPipeCurveDumpingTime;                                   // 0x0134(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      mPipeEjectOffset;                                        // 0x0138(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      mPipeEntranceImmunityTime;                               // 0x013C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      mMinManualControlVelocity;                               // 0x0140(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      mMaxJunctionSearchDistance;                              // 0x0144(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      mMaxCurveDiffThisFrame;                                  // 0x0148(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      mMaxCurveDiffTimeLeft;                                   // 0x014C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      mPipeTempMinSpeed;                                       // 0x0150(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HVY6[0x3C];                                  // 0x0154(0x003C) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FactoryGame.FGPendingHyperJunctionInfo
	 * Size -> 0x0028
	 */
	struct FFGPendingHyperJunctionInfo
	{
	public:
		class AFGBuildablePipeHyperJunction*                       mJunction;                                               // 0x0000(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UFGPipeConnectionComponentBase*                      mConnectionEnteredThrough;                               // 0x0008(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      mDistanceToJunction;                                     // 0x0010(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      mLastJunctionCheckDistance;                              // 0x0014(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FFGPipeHyperJunctionConnectionInfo>          mAvailableOutputConnections;                             // 0x0018(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, ContainsInstancedReference, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FactoryGame.PlayerZiplineData
	 * Size -> 0x00A0
	 */
	struct FPlayerZiplineData
	{
	public:
		float                                                      SpeedMultiplier;                                         // 0x0000(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WKAI[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             Direction;                                               // 0x0008(0x0018) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TMY4[0x78];                                  // 0x0020(0x0078) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              AttachActor;                                             // 0x0098(0x0008) ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FactoryGame.UseState
	 * Size -> 0x0030
	 */
	struct FUseState
	{
	public:
		class UFGUseState*                                         AdditionalData;                                          // 0x0000(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             UseLocation;                                             // 0x0008(0x0018) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPrimitiveComponent*                                 UseComponent;                                            // 0x0020(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              State;                                                   // 0x0028(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
	};

	/**
	 * ScriptStruct FactoryGame.FGActorPlayerPerceptionInfo
	 * Size -> 0x0010
	 */
	struct FFGActorPlayerPerceptionInfo
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AggroLevel;                                              // 0x0008(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_T25O[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FactoryGame.PlayerMappingContext
	 * Size -> 0x0018
	 */
	struct FPlayerMappingContext
	{
	public:
		EPlayerMappingContextCategory                              ContextCategory;                                         // 0x0000(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RL6K[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UInputMappingContext*                                MappingContext;                                          // 0x0008(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Priority;                                                // 0x0010(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FYB1[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FactoryGame.FGPipeHyperConnectionHistoryEntry
	 * Size -> 0x0010
	 */
	struct FFGPipeHyperConnectionHistoryEntry
	{
	public:
		class UFGPipeConnectionComponentBase*                      ConnectionEnteredThrough;                                // 0x0000(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UFGPipeConnectionComponentBase*                      PickedOutputConnection;                                  // 0x0008(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FactoryGame.ChatMessageStruct
	 * Size -> 0x0048
	 */
	struct FChatMessageStruct
	{
	public:
		class FString                                              MessageString;                                           // 0x0000(0x0010) BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ServerTimeStamp;                                         // 0x0010(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3XSZ[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AFGPlayerState*                                      Sender;                                                  // 0x0018(0x0008) ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              CachedPlayerName;                                        // 0x0020(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        CachedColor;                                             // 0x0030(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EFGChatMessageType                                         MessageType;                                             // 0x0040(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_I86A[0x7];                                   // 0x0041(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FactoryGame.InstanceLODs
	 * Size -> 0x0020
	 */
	struct FInstanceLODs
	{
	public:
		class UStaticMesh*                                         mMesh;                                                   // 0x0000(0x0008) Edit, ZeroConstructor, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UFGConveyorInstanceMeshBucket*>               mInstanceBucket;                                         // 0x0008(0x0010) Edit, ExportObject, ZeroConstructor, EditConst, ContainsInstancedReference, NativeAccessSpecifierPublic
		int32_t                                                    mBucketSize;                                             // 0x0018(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    mLodLevel;                                               // 0x001C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FactoryGame.ConveyorItemArray
	 * Size -> 0x0048
	 */
	struct FConveyorItemArray
	{
	public:
		unsigned char                                              UnknownData_CX3G[0x38];                                  // 0x0000(0x0038) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FInstanceLODs>                               mItemLodBucket;                                          // 0x0038(0x0010) Edit, ZeroConstructor, EditConst, ContainsInstancedReference, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FactoryGame.ConveyorLodData
	 * Size -> 0x0010
	 */
	struct FConveyorLodData
	{
	public:
		TArray<class UFGConveyorInstanceMeshBucket*>               Buckets;                                                 // 0x0000(0x0010) ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FactoryGame.ConveyorBucketData
	 * Size -> 0x0018
	 */
	struct FConveyorBucketData
	{
	public:
		class UClass*                                              Desc;                                                    // 0x0000(0x0008) ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FConveyorLodData>                            LodBuckets;                                              // 0x0008(0x0010) ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FactoryGame.LODDataEntry
	 * Size -> 0x000C
	 */
	struct FLODDataEntry
	{
	public:
		float                                                      Distance;                                                // 0x0000(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TargetFPS;                                               // 0x0004(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bViewCheck;                                              // 0x0008(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bRotate;                                                 // 0x0009(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCastShadows;                                            // 0x000A(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0L03[0x1];                                   // 0x000B(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FactoryGame.ConveyorBeltItem
	 * Size -> 0x0048
	 */
	struct FConveyorBeltItem
	{
	public:
		unsigned char                                              UnknownData_TMB9[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FInventoryItem                                      Item;                                                    // 0x0008(0x0020) NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4E2J[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Offset;                                                  // 0x0030(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0AM4[0x14];                                  // 0x0034(0x0014) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FactoryGame.NoiseToInvestigate
	 * Size -> 0x0028
	 */
	struct FNoiseToInvestigate
	{
	public:
		class UClass*                                              NoiseType;                                               // 0x0000(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UClass*>                                      SourceActorFilter;                                       // 0x0008(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, UObjectWrapper, NativeAccessSpecifierPublic
		struct FFloatInterval                                      MinMaxRange;                                             // 0x0018(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FFloatInterval                                      MinMaxLoudness;                                          // 0x0020(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FactoryGame.CreatureBehaviorOverride
	 * Size -> 0x0010
	 */
	struct FCreatureBehaviorOverride
	{
	public:
		unsigned char                                              OverriddenStates;                                        // 0x0000(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2OPY[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UBehaviorTree*                                       BehaviorTree;                                            // 0x0008(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FactoryGame.FGCreaturePerceptionSettings
	 * Size -> 0x0018
	 */
	struct FFGCreaturePerceptionSettings
	{
	public:
		class UAISenseConfig_Sight*                                SightConfig;                                             // 0x0000(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ImmediateVisibilityRadius;                               // 0x0008(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9ZKR[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAISenseConfig_Hearing*                              HearingConfig;                                           // 0x0010(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FactoryGame.CreatureAction
	 * Size -> 0x0020
	 */
	struct FCreatureAction
	{
	public:
		unsigned char                                              RequiredStates;                                          // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       StartsWithCooldown;                                      // 0x0001(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_B8AM[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              ActionName;                                              // 0x0008(0x0010) Edit, ZeroConstructor, EditConst, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UFGAction*                                           Action;                                                  // 0x0018(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FactoryGame.CreatureActionInterrupt
	 * Size -> 0x0030
	 */
	struct FCreatureActionInterrupt
	{
	public:
		unsigned char                                              StateInterrupt;                                          // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8QEC[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              ActionName;                                              // 0x0008(0x0010) Edit, ZeroConstructor, EditConst, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UFGCreatureInterruptTest*>                    Interrupts;                                              // 0x0018(0x0010) Edit, ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		class UFGAction*                                           Action;                                                  // 0x0028(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FactoryGame.MoveSpeedPair
	 * Size -> 0x0008
	 */
	struct FMoveSpeedPair
	{
	public:
		EMoveSpeed                                                 MoveSpeedType;                                           // 0x0000(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JR9B[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Speed;                                                   // 0x0004(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FactoryGame.CreatureActionTargetParams
	 * Size -> 0x0008
	 */
	struct FCreatureActionTargetParams
	{
	public:
		ECreatureActionTargetSelectionType                         TargetType;                                              // 0x0000(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ETargetVisibilityRequirement                               VisibilityRequirement;                                   // 0x0001(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5HXM[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MinimumAggro;                                            // 0x0004(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FactoryGame.FGCreatureActionSpawnData
	 * Size -> 0x0030
	 */
	struct FFGCreatureActionSpawnData
	{
	public:
		TArray<class UClass*>                                      ActorTypesToSpawn;                                       // 0x0000(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, UObjectWrapper, NativeAccessSpecifierPublic
		struct FInt32Interval                                      NumToSpawn;                                              // 0x0010(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UClass*>                                      NotifyTriggers;                                          // 0x0018(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, UObjectWrapper, NativeAccessSpecifierPublic
		bool                                                       ShouldTriggerOnPerform;                                  // 0x0028(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_U3FV[0x7];                                   // 0x0029(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FactoryGame.FGCreatureAggroData
	 * Size -> 0x0010
	 */
	struct FFGCreatureAggroData
	{
	public:
		class AActor*                                              Target;                                                  // 0x0000(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Aggro;                                                   // 0x0008(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsVisible;                                               // 0x000C(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IIJD[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FactoryGame.FGCreatureVisibilityData
	 * Size -> 0x0010
	 */
	struct FFGCreatureVisibilityData
	{
	public:
		class AActor*                                              Target;                                                  // 0x0000(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      VisibilityLevel;                                         // 0x0008(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsPerceived;                                             // 0x000C(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsActivelyVisible;                                       // 0x000D(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8U84[0x2];                                   // 0x000E(0x0002) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FactoryGame.FGCreaturePathToTarget
	 * Size -> 0x0020
	 */
	struct FFGCreaturePathToTarget
	{
	public:
		class AActor*                                              Target;                                                  // 0x0000(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TimeCached;                                              // 0x0008(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UAMV[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UNavigationPath*                                     PathObject;                                              // 0x0010(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              QueryFilter;                                             // 0x0018(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FactoryGame.FGRecentDamageTaken
	 * Size -> 0x0038
	 */
	struct FFGRecentDamageTaken
	{
	public:
		class UFGDamageType*                                       DamageType;                                              // 0x0000(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Timestamp;                                               // 0x0008(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Amount;                                                  // 0x000C(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class AActor*                                              DamageCauser;                                            // 0x0010(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class AController*                                         DamageInstigator;                                        // 0x0018(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             DamageLocation;                                          // 0x0020(0x0018) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FactoryGame.SpawnData
	 * Size -> 0x0020
	 */
	struct FSpawnData
	{
	public:
		class AFGCreature*                                         creature;                                                // 0x0000(0x0008) ZeroConstructor, SaveGame, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       WasKilled;                                               // 0x0008(0x0001) ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LMO3[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    NumTimesKilled;                                          // 0x000C(0x0004) ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    KilledOnDayNr;                                           // 0x0010(0x0004) ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_06FO[0xC];                                   // 0x0014(0x000C) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FactoryGame.AgentGenerationProperties
	 * Size -> 0x0050
	 */
	struct FAgentGenerationProperties
	{
	public:
		class FName                                                agentName;                                               // 0x0000(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       autoTileSize;                                            // 0x0008(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Z2HX[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      autoTileSizeMultiplier;                                  // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRecastNavMeshGenerationProperties                  navGenerationProperties;                                 // 0x0010(0x0040) Edit, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FactoryGame.SpawnerInfo
	 * Size -> 0x0010
	 */
	struct FSpawnerInfo
	{
	public:
		class AFGCreatureSpawner*                                  Spawner;                                                 // 0x0000(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PlayerDistanceSq;                                        // 0x0008(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7TXA[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FactoryGame.CreatureClassOverride
	 * Size -> 0x0010
	 */
	struct FCreatureClassOverride
	{
	public:
		class UClass*                                              CreatureClassToReplace;                                  // 0x0000(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              CreatureClassOverride;                                   // 0x0008(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FactoryGame.ActiveDOT
	 * Size -> 0x0028
	 */
	struct FActiveDOT
	{
	public:
		class UClass*                                              DotClass;                                                // 0x0000(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class AActor*>                                      SourceActors;                                            // 0x0008(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_R744[0x10];                                  // 0x0018(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FactoryGame.DroneTripInformation
	 * Size -> 0x0014
	 */
	struct FDroneTripInformation
	{
	public:
		float                                                      TripDuration;                                            // 0x0000(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    IncomingItemCount;                                       // 0x0004(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    OutgoingItemCount;                                       // 0x0008(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      IncomingItemStacks;                                      // 0x000C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      OutgoingItemStacks;                                      // 0x0010(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FactoryGame.FGDroneTripStatistics
	 * Size -> 0x0054
	 */
	struct FFGDroneTripStatistics
	{
	public:
		float                                                      LatestRoundTripTime;                                     // 0x0000(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    LatestIncomingItemAmount;                                // 0x0004(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    LatestOutgoingItemAmount;                                // 0x0008(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LatestIncomingItemStacks;                                // 0x000C(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LatestOutgoingItemStacks;                                // 0x0010(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LatestIncomingItemStackRate;                             // 0x0014(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LatestOutgoingItemStackRate;                             // 0x0018(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AverageRoundTripTime;                                    // 0x001C(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AverageIncomingItemAmount;                               // 0x0020(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AverageOutgoingItemAmount;                               // 0x0024(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AverageIncomingItemStacks;                               // 0x0028(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AverageOutgoingItemStacks;                               // 0x002C(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AverageIncomingItemRate;                                 // 0x0030(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AverageOutgoingItemRate;                                 // 0x0034(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AverageIncomingItemStackRate;                            // 0x0038(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AverageOutgoingItemStackRate;                            // 0x003C(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MedianRoundTripTime;                                     // 0x0040(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MedianIncomingItemAmount;                                // 0x0044(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MedianOutgoingItemAmount;                                // 0x0048(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MedianIncomingItemStacks;                                // 0x004C(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MedianOutgoingItemStacks;                                // 0x0050(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FactoryGame.VehiclePhysicsData
	 * Size -> 0x0090
	 */
	struct FVehiclePhysicsData
	{
	public:
		unsigned char                                              UnknownData_GNFC[0x90];                                  // 0x0000(0x0090) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FactoryGame.DroneDockingStateInfo
	 * Size -> 0x0008
	 */
	struct FDroneDockingStateInfo
	{
	public:
		EDroneDockingState                                         State;                                                   // 0x0000(0x0001) ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_73SN[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      StateStartTime;                                          // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FactoryGame.ItemDrop
	 * Size -> 0x0010
	 */
	struct FItemDrop
	{
	public:
		class UClass*                                              ItemClass;                                               // 0x0000(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FInt32Interval                                      NumItems;                                                // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FactoryGame.DropPackage
	 * Size -> 0x0038
	 */
	struct FDropPackage
	{
	public:
		class FText                                                DropDisplayText;                                         // 0x0000(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		float                                                      DropChance;                                              // 0x0018(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_P78R[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FItemDrop>                                   Items;                                                   // 0x0020(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		class UClass*                                              RequiredSchematic;                                       // 0x0030(0x0008) Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FactoryGame.SimpleDate
	 * Size -> 0x000C
	 */
	struct FSimpleDate
	{
	public:
		int32_t                                                    mYearOffset;                                             // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    mMonth;                                                  // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    mDay;                                                    // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FactoryGame.FGEventData
	 * Size -> 0x0018
	 */
	struct FFGEventData
	{
	public:
		struct FSimpleDate                                         mStartDate;                                              // 0x0000(0x000C) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		struct FSimpleDate                                         mEndDate;                                                // 0x000C(0x000C) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FactoryGame.CalendarData
	 * Size -> 0x0070
	 */
	struct FCalendarData
	{
	public:
		TArray<struct FInventoryStack>                             InventoryStacks;                                         // 0x0000(0x0010) ZeroConstructor, SaveGame, NativeAccessSpecifierPublic
		TArray<int32_t>                                            OpenedSlotsInCalendar;                                   // 0x0010(0x0010) ZeroConstructor, SaveGame, NativeAccessSpecifierPublic
		TMap<int32_t, int32_t>                                     InventoryIndexToRandomRewardIndexMapping;                // 0x0020(0x0050) SaveGame, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FactoryGame.IndexToMaterialData
	 * Size -> 0x0010
	 */
	struct FIndexToMaterialData
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2FSP[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMaterialInterface*                                  Material;                                                // 0x0008(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FactoryGame.FactorySkinComponentData
	 * Size -> 0x0018
	 */
	struct FFactorySkinComponentData
	{
	public:
		class FName                                                ComponentName;                                           // 0x0000(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FIndexToMaterialData>                        IndexToMaterialData;                                     // 0x0008(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FactoryGame.FactorySkinComponentGroup
	 * Size -> 0x0010
	 */
	struct FFactorySkinComponentGroup
	{
	public:
		TArray<struct FFactorySkinComponentData>                   mComponentData;                                          // 0x0000(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FactoryGame.FeetOffset
	 * Size -> 0x000C
	 */
	struct FFeetOffset
	{
	public:
		unsigned char                                              FeetIndex;                                               // 0x0000(0x0001) ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YZFN[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      OffsetZ;                                                 // 0x0004(0x0004) ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsValidOffset;                                           // 0x0008(0x0001) ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_K2GR[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FactoryGame.ViscosityToPuddlePair
	 * Size -> 0x0008
	 */
	struct FViscosityToPuddlePair
	{
	public:
		float                                                      Viscosity;                                               // 0x0000(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Puddle;                                                  // 0x0004(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FactoryGame.AnimInstanceProxyFactory
	 * Size -> 0x0050 (FullSize[0x08D0] - InheritedSize[0x0880])
	 */
	struct FAnimInstanceProxyFactory : public FAnimInstanceProxy
	{
	public:
		float                                                      mDeltaTime;                                              // 0x0880(0x0004) Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      mProductionProgress;                                     // 0x0884(0x0004) Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      mProductionCycleTime;                                    // 0x0888(0x0004) Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      mAnimPlayRate;                                           // 0x088C(0x0004) Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      mRampUpTime;                                             // 0x0890(0x0004) Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      mTimeNotProducing;                                       // 0x0894(0x0004) Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      mRampDownTime;                                           // 0x0898(0x0004) Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      mLastProductionProgress;                                 // 0x089C(0x0004) Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      mRecipePlayRate;                                         // 0x08A0(0x0004) Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      mCycleTime;                                              // 0x08A4(0x0004) Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      mDefaultCycleTime;                                       // 0x08A8(0x0004) Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      mStartFrame;                                             // 0x08AC(0x0004) Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      mLoadPercentage;                                         // 0x08B0(0x0004) Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       mHasFuel;                                                // 0x08B4(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TU3R[0x3];                                   // 0x08B5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      mIsFuelGeneratorOnlineFloat;                             // 0x08B8(0x0004) Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      mHasPowerFloat;                                          // 0x08BC(0x0004) Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      mIsProducingFloat;                                       // 0x08C0(0x0004) Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    mCurrentPotential;                                       // 0x08C4(0x0004) Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       mHasPower : 1;                                           // 0x08C8(0x0001) BIT_FIELD Edit, BlueprintVisible, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       mIsProducing : 1;                                        // 0x08C8(0x0001) BIT_FIELD Edit, BlueprintVisible, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       mIsActivated : 1;                                        // 0x08C8(0x0001) BIT_FIELD Edit, BlueprintVisible, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       mCycleComplete : 1;                                      // 0x08C8(0x0001) BIT_FIELD Edit, BlueprintVisible, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       mUseRampUp : 1;                                          // 0x08C8(0x0001) BIT_FIELD Edit, BlueprintVisible, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       mIsGenerator : 1;                                        // 0x08C8(0x0001) BIT_FIELD Edit, BlueprintVisible, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       mIsFuelGeneratorOnline : 1;                              // 0x08C8(0x0001) BIT_FIELD Edit, BlueprintVisible, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       mIsShutDown : 1;                                         // 0x08C8(0x0001) BIT_FIELD Edit, BlueprintVisible, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_01AP[0x7];                                   // 0x08C9(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FactoryGame.RemovedInstance
	 * Size -> 0x0060
	 */
	struct FRemovedInstance
	{
	public:
		struct FTransform                                          Transform;                                               // 0x0000(0x0060) SaveGame, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FactoryGame.RemovedInstanceArray
	 * Size -> 0x0010
	 */
	struct FRemovedInstanceArray
	{
	public:
		TArray<struct FRemovedInstance>                            Items;                                                   // 0x0000(0x0010) ZeroConstructor, SaveGame, RepSkip, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FactoryGame.FoliageRemovalSaveDataForFoliageType
	 * Size -> 0x0070
	 */
	struct FFoliageRemovalSaveDataForFoliageType
	{
	public:
		TArray<struct FVector>                                     RemovedLocations;                                        // 0x0000(0x0010) ZeroConstructor, SaveGame, NativeAccessSpecifierPrivate
		unsigned char                                              RemovedLocationLookup[0x50];                             // 0x0010(0x0050) UNKNOWN PROPERTY: SetProperty
		TArray<struct FInt32Range>                                 RemovalBuckets;                                          // 0x0060(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct FactoryGame.FoliageRemovalSaveDataPerCell
	 * Size -> 0x0050
	 */
	struct FFoliageRemovalSaveDataPerCell
	{
	public:
		TMap<class UFoliageType*, struct FFoliageRemovalSaveDataForFoliageType> SaveDataMap;                                             // 0x0000(0x0050) SaveGame, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FactoryGame.FoliageRemovalUnresolvedSaveDataPerCell
	 * Size -> 0x0050
	 */
	struct FFoliageRemovalUnresolvedSaveDataPerCell
	{
	public:
		TMap<class FName, struct FFoliageRemovalSaveDataForFoliageType> SaveDataMap;                                             // 0x0000(0x0050) SaveGame, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FactoryGame.ItemDropWithChance
	 * Size -> 0x0018
	 */
	struct FItemDropWithChance
	{
	public:
		float                                                      DropChance;                                              // 0x0000(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_N86Q[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FItemDrop                                           Drop;                                                    // 0x0008(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FactoryGame.FoliageLocationHash
	 * Size -> 0x0004 (FullSize[0x0010] - InheritedSize[0x000C])
	 */
	struct FFoliageLocationHash : public FFastArraySerializerItem
	{
	public:
		uint32_t                                                   Hash;                                                    // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FactoryGame.FoliageRemovalHashArray
	 * Size -> 0x0020 (FullSize[0x0128] - InheritedSize[0x0108])
	 */
	struct FFoliageRemovalHashArray : public FFastArraySerializer
	{
	public:
		TArray<struct FFoliageLocationHash>                        Items;                                                   // 0x0108(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_013F[0x10];                                  // 0x0118(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FactoryGame.RailroadTrackPosition
	 * Size -> 0x0010
	 */
	struct FRailroadTrackPosition
	{
	public:
		TWeakObjectPtr<class AFGBuildableRailroadTrack>            Track;                                                   // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Offset;                                                  // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Forward;                                                 // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FactoryGame.FGEngineCommon
	 * Size -> 0x0010
	 */
	struct FFGEngineCommon
	{
	public:
		class UEngine*                                             Engine;                                                  // 0x0000(0x0008) ZeroConstructor, Transient, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UFGAtmosphereUpdater*                                AtmosphereUpdater;                                       // 0x0008(0x0008) ZeroConstructor, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	};

	/**
	 * ScriptStruct FactoryGame.OnJoinSessionData
	 * Size -> 0x0130
	 */
	struct FOnJoinSessionData
	{
	public:
		class UFGLocalPlayer*                                      LocalPlayer;                                             // 0x0000(0x0008) ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_D0GU[0x128];                                 // 0x0008(0x0128) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FactoryGame.FGModPackage
	 * Size -> 0x0040
	 */
	struct FFGModPackage
	{
	public:
		class FName                                                ModPath;                                                 // 0x0000(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       HasFGMods;                                               // 0x0008(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3EXN[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Author;                                                  // 0x0010(0x0010) BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Version;                                                 // 0x0020(0x0010) BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Description;                                             // 0x0030(0x0010) BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FactoryGame.PhaseTierInfo
	 * Size -> 0x0028
	 */
	struct FPhaseTierInfo
	{
	public:
		EGamePhase                                                 gamePhase;                                               // 0x0000(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PNDG[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    LastTierOfPhase;                                         // 0x0004(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FText                                                Name;                                                    // 0x0008(0x0018) Edit, DisableEditOnInstance, NativeAccessSpecifierPublic
		class UClass*                                              PhaseUnlockedMessage;                                    // 0x0020(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FactoryGame.PhaseCost
	 * Size -> 0x0018
	 */
	struct FPhaseCost
	{
	public:
		EGamePhase                                                 gamePhase;                                               // 0x0000(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9IZU[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FItemAmount>                                 cost;                                                    // 0x0008(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, SaveGame, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FactoryGame.GlobalColorPreset
	 * Size -> 0x0028
	 */
	struct FGlobalColorPreset
	{
	public:
		class FText                                                PresetName;                                              // 0x0000(0x0018) Edit, BlueprintVisible, DisableEditOnInstance, SaveGame, NativeAccessSpecifierPublic
		struct FLinearColor                                        Color;                                                   // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FactoryGame.SwatchGroupData
	 * Size -> 0x0010
	 */
	struct FSwatchGroupData
	{
	public:
		class UClass*                                              SwatchGroup;                                             // 0x0000(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, SaveGame, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              Swatch;                                                  // 0x0008(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, SaveGame, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FactoryGame.MiniGameResult
	 * Size -> 0x0028
	 */
	struct FMiniGameResult
	{
	public:
		class FString                                              LevelName;                                               // 0x0000(0x0010) BlueprintVisible, ZeroConstructor, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              PlayerName;                                              // 0x0010(0x0010) BlueprintVisible, ZeroConstructor, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Points;                                                  // 0x0020(0x0004) BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CDQY[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FactoryGame.TutorialHintData
	 * Size -> 0x0088
	 */
	struct FTutorialHintData
	{
	public:
		EIntroTutorialSteps                                        ID;                                                      // 0x0000(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HPBF[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                Title;                                                   // 0x0008(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic
		TArray<class FText>                                        HintTexts;                                               // 0x0020(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		class UClass*                                              Message;                                                 // 0x0030(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TMap<class UClass*, float>                                 AdditionalMessages;                                      // 0x0038(0x0050) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FactoryGame.FGKeyMapping
	 * Size -> 0x0058
	 */
	struct FFGKeyMapping
	{
	public:
		struct FInputActionKeyMapping                              ActionKeyMapping;                                        // 0x0000(0x0028) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		struct FInputAxisKeyMapping                                AxisKeyMapping;                                          // 0x0028(0x0028) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		bool                                                       IsAxisMapping;                                           // 0x0050(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_US9O[0x7];                                   // 0x0051(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FactoryGame.FGCustomInputActionMapping
	 * Size -> 0x0030
	 */
	struct FFGCustomInputActionMapping
	{
	public:
		class FName                                                ActionName;                                              // 0x0000(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FKey                                                PrimaryKey;                                              // 0x0008(0x0018) BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FKey>                                        ModifierKeys;                                            // 0x0020(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FactoryGame.IconData
	 * Size -> 0x0058
	 */
	struct FIconData
	{
	public:
		int32_t                                                    ID;                                                      // 0x0000(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZN9P[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              Texture[0x30];                                           // 0x0008(0x0030) UNKNOWN PROPERTY: SoftObjectProperty
		class FText                                                IconName;                                                // 0x0038(0x0018) Edit, DisableEditOnInstance, NativeAccessSpecifierPublic
		EIconType                                                  IconType;                                                // 0x0050(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Hidden;                                                  // 0x0051(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       SearchOnly;                                              // 0x0052(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Animated;                                                // 0x0053(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UK2I[0x4];                                   // 0x0054(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FactoryGame.InputActionTagBinding
	 * Size -> 0x0038
	 */
	struct FInputActionTagBinding
	{
	public:
		class FName                                                BindingName;                                             // 0x0000(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGameplayTag                                        GameplayTag;                                             // 0x0008(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSoftObjectPath                                     ObjectPath;                                              // 0x0010(0x0020) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UInputAction*                                        CachedInputAction;                                       // 0x0030(0x0008) ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FactoryGame.HeadlightParams
	 * Size -> 0x0018
	 */
	struct FHeadlightParams
	{
	public:
		bool                                                       ShowBeam;                                                // 0x0000(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WK89[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FLinearColor                                        Color;                                                   // 0x0004(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Intensity;                                               // 0x0014(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FactoryGame.WheelsetSetup
	 * Size -> 0x0010
	 */
	struct FWheelsetSetup
	{
	public:
		class FName                                                BoneName;                                                // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       CanSwivel;                                               // 0x0008(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7I7B[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FactoryGame.CouplerSetup
	 * Size -> 0x0010
	 */
	struct FCouplerSetup
	{
	public:
		class FName                                                BoneName;                                                // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Length;                                                  // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BLG1[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FactoryGame.ReplicatedRailroadVehicleState
	 * Size -> 0x0014
	 */
	struct FReplicatedRailroadVehicleState
	{
	public:
		int32_t                                                    ReverserInput;                                           // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ThrottleInput;                                           // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DynamicBrakeInput;                                       // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AirBrakeInput;                                           // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       HornInput;                                               // 0x0010(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DSHT[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FactoryGame.RailroadVehicleInputRate
	 * Size -> 0x0008
	 */
	struct FRailroadVehicleInputRate
	{
	public:
		float                                                      RiseRate;                                                // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FallRate;                                                // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FactoryGame.ColorMapAreaPair
	 * Size -> 0x0018
	 */
	struct FColorMapAreaPair
	{
	public:
		class UClass*                                              mapArea;                                                 // 0x0000(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MinX;                                                    // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MinY;                                                    // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxX;                                                    // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxY;                                                    // 0x0014(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FactoryGame.MapMarker
	 * Size -> 0x0050
	 */
	struct FMapMarker
	{
	public:
		unsigned char                                              MarkerID;                                                // 0x0000(0x0001) ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PVHY[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector_NetQuantize                                 Location;                                                // 0x0008(0x0018) BlueprintVisible, SaveGame, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Name;                                                    // 0x0020(0x0010) BlueprintVisible, ZeroConstructor, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ERepresentationType                                        MapMarkerType;                                           // 0x0030(0x0001) BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1FWX[0x3];                                   // 0x0031(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    IconID;                                                  // 0x0034(0x0004) BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        Color;                                                   // 0x0038(0x0010) BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Scale;                                                   // 0x0048(0x0004) BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ECompassViewDistance                                       compassViewDistance;                                     // 0x004C(0x0001) BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TL3T[0x3];                                   // 0x004D(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FactoryGame.FogOfWarQueuePair
	 * Size -> 0x0020
	 */
	struct FFogOfWarQueuePair
	{
	public:
		class AFGPlayerController*                                 PlayerController;                                        // 0x0000(0x0008) ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_I1HM[0x18];                                  // 0x0008(0x0018) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FactoryGame.MapMarkerQueuePair
	 * Size -> 0x0020
	 */
	struct FMapMarkerQueuePair
	{
	public:
		class AFGPlayerController*                                 PlayerController;                                        // 0x0000(0x0008) ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_59PK[0x18];                                  // 0x0008(0x0018) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FactoryGame.HighlightedMarkerPair
	 * Size -> 0x0010
	 */
	struct FHighlightedMarkerPair
	{
	public:
		class AFGPlayerState*                                      PlayerState;                                             // 0x0000(0x0008) ZeroConstructor, SaveGame, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UFGHighlightedMarker*                                HighlightedMarker;                                       // 0x0008(0x0008) ZeroConstructor, SaveGame, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FactoryGame.CachedMaterialArray
	 * Size -> 0x0020
	 */
	struct FCachedMaterialArray
	{
	public:
		TArray<class UMaterialInterface*>                          MaterialInterfaces;                                      // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		class FName                                                MeshFName;                                               // 0x0010(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TWeakObjectPtr<class UMeshComponent>                       MeshComponent;                                           // 0x0018(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FactoryGame.MigratedActorFromTo
	 * Size -> 0x0030
	 */
	struct FMigratedActorFromTo
	{
	public:
		class FString                                              FromLevel;                                               // 0x0000(0x0010) Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ToLevel;                                                 // 0x0010(0x0010) Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ActorName;                                               // 0x0020(0x0010) Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FactoryGame.NewsFeedMap
	 * Size -> 0x0018
	 */
	struct FNewsFeedMap
	{
	public:
		EGameVersion                                               GameVersion;                                             // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8QGS[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              URL;                                                     // 0x0008(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FactoryGame.CullSettings
	 * Size -> 0x000C
	 */
	struct FCullSettings
	{
	public:
		int32_t                                                    mMinDistance;                                            // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    mMaxDistance;                                            // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    mInstanceDestroyDistance;                                // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FactoryGame.IntegerSelection
	 * Size -> 0x0020
	 */
	struct FIntegerSelection
	{
	public:
		class FText                                                Name;                                                    // 0x0000(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		int32_t                                                    Value;                                                   // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VQ4U[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FactoryGame.FloatSelection
	 * Size -> 0x0020
	 */
	struct FFloatSelection
	{
	public:
		class FText                                                Name;                                                    // 0x0000(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		float                                                      Value;                                                   // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_05EU[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FactoryGame.OptionRowData
	 * Size -> 0x00A0
	 */
	struct FOptionRowData
	{
	public:
		class FText                                                OptionName;                                              // 0x0000(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		class FText                                                ToolTip;                                                 // 0x0018(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		EOptionType                                                OptionType;                                              // 0x0030(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GQ7F[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              ConsoleVariable;                                         // 0x0038(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       DefaultCheckBoxValue;                                    // 0x0048(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_THAH[0x3];                                   // 0x0049(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MinValue;                                                // 0x004C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxValue;                                                // 0x0050(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinDisplayValue;                                         // 0x0054(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxDisplayValue;                                         // 0x0058(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxFractionalDigits;                                     // 0x005C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       ShowZeroAsOff;                                           // 0x0060(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YCYU[0x3];                                   // 0x0061(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      DefaultSliderValue;                                      // 0x0064(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FIntegerSelection>                           IntegerSelectionValues;                                  // 0x0068(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FFloatSelection>                             FloatSelectionValues;                                    // 0x0078(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		int32_t                                                    DefaultSelectionIndex;                                   // 0x0088(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       BlockLastIndexFromManualSelection;                       // 0x008C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_T8CB[0x3];                                   // 0x008D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              CustomWidgetClass;                                       // 0x0090(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EOptionNetmodeType                                         NetmodeAvailability;                                     // 0x0098(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EOptionGamemodeType                                        GamemodeAvailability;                                    // 0x0099(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EOptionRHIType                                             RHIAvailability;                                         // 0x009A(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EIncludeInBuilds                                           BuildAvailability;                                       // 0x009B(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       SubOption;                                               // 0x009C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PUI9[0x3];                                   // 0x009D(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FactoryGame.SplineSupportPair
	 * Size -> 0x0010
	 */
	struct FSplineSupportPair
	{
	public:
		class UClass*                                              SplineSupportRecipeClass;                                // 0x0000(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              SplineRecipeClass;                                       // 0x0008(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FactoryGame.FGCachedActionMapping
	 * Size -> 0x00E8
	 */
	struct FFGCachedActionMapping
	{
	public:
		struct FEnhancedActionKeyMapping                           DefaultKeyMapping;                                       // 0x0000(0x0098) ContainsInstancedReference, NativeAccessSpecifierPublic
		TMap<class FName, struct FEnhancedActionKeyMapping>        MappingsByPlayerMappableName;                            // 0x0098(0x0050) ContainsInstancedReference, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FactoryGame.FGCachedActionMappingContextMap
	 * Size -> 0x0050
	 */
	struct FFGCachedActionMappingContextMap
	{
	public:
		TMap<class UInputMappingContext*, struct FFGCachedActionMapping> Mappings;                                                // 0x0000(0x0050) ContainsInstancedReference, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FactoryGame.PlayerColorData
	 * Size -> 0x0020
	 */
	struct FPlayerColorData
	{
	public:
		struct FLinearColor                                        PingColor;                                               // 0x0000(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        NametagColor;                                            // 0x0010(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FactoryGame.RecipeAmountPair
	 * Size -> 0x0038
	 */
	struct FRecipeAmountPair
	{
	public:
		unsigned char                                              recipe[0x30];                                            // 0x0000(0x0030) UNKNOWN PROPERTY: SoftClassProperty
		int32_t                                                    Amount;                                                  // 0x0030(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CCSE[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FactoryGame.RecipeAmounts
	 * Size -> 0x0010
	 */
	struct FRecipeAmounts
	{
	public:
		TArray<struct FRecipeAmountPair>                           RecipeAmountPairs;                                       // 0x0000(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FactoryGame.ArrayOfInventoryStacksHolder
	 * Size -> 0x0010
	 */
	struct FArrayOfInventoryStacksHolder
	{
	public:
		TArray<struct FInventoryStack>                             mArrayOfInventoryStacks;                                 // 0x0000(0x0010) ZeroConstructor, SaveGame, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FactoryGame.InventoryToRespawnWith
	 * Size -> 0x00B0
	 */
	struct FInventoryToRespawnWith
	{
	public:
		TArray<struct FInventoryStack>                             mInventoryStacks;                                        // 0x0000(0x0010) ZeroConstructor, SaveGame, NativeAccessSpecifierPublic
		TMap<EEquipmentSlot, struct FArrayOfInventoryStacksHolder> mEquipmentPairs;                                         // 0x0010(0x0050) SaveGame, NativeAccessSpecifierPublic
		TMap<class FString, class UObject*>                        mMetadata;                                               // 0x0060(0x0050) SaveGame, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FactoryGame.Hotbar
	 * Size -> 0x0010
	 */
	struct FHotbar
	{
	public:
		TArray<class UFGHotbarShortcut*>                           HotbarShortcuts;                                         // 0x0000(0x0010) ZeroConstructor, SaveGame, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FactoryGame.SubCategoryMaterialDefault
	 * Size -> 0x0010
	 */
	struct FSubCategoryMaterialDefault
	{
	public:
		class UClass*                                              Category;                                                // 0x0000(0x0008) ZeroConstructor, SaveGame, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              MaterialDesc;                                            // 0x0008(0x0008) ZeroConstructor, SaveGame, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FactoryGame.PlayerRules
	 * Size -> 0x0005
	 */
	struct FPlayerRules
	{
	public:
		bool                                                       HasInitialized;                                          // 0x0000(0x0001) ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       NoBuildCost;                                             // 0x0001(0x0001) ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EPlayerKeepInventoryMode                                   keepInventoryMode;                                       // 0x0002(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       FlightMode;                                              // 0x0003(0x0001) ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       GodMode;                                                 // 0x0004(0x0001) ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FactoryGame.ShoppingListSettings
	 * Size -> 0x0008
	 */
	struct FShoppingListSettings
	{
	public:
		bool                                                       PublicTodoListVisibilty;                                 // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       PrivateTodoListVisibilty;                                // 0x0001(0x0001) Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       RecipeListVisibilty;                                     // 0x0002(0x0001) Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_51AW[0x1];                                   // 0x0003(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Size;                                                    // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FactoryGame.MessageData
	 * Size -> 0x0010
	 */
	struct FMessageData
	{
	public:
		bool                                                       WasRead;                                                 // 0x0000(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TMHT[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              MessageClass;                                            // 0x0008(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, SaveGame, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FactoryGame.PowerGraphPoint
	 * Size -> 0x0014
	 */
	struct FPowerGraphPoint
	{
	public:
		float                                                      Consumed;                                                // 0x0000(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Produced;                                                // 0x0004(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ProductionCapacity;                                      // 0x0008(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaximumConsumption;                                      // 0x000C(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BatteryPowerInput;                                       // 0x0010(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FactoryGame.PowerCircuitStats
	 * Size -> 0x0058
	 */
	struct FPowerCircuitStats
	{
	public:
		float                                                      StatIntervalTime;                                        // 0x0000(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      StatHistoryTime;                                         // 0x0004(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4W3Z[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      PowerProductionCapacity;                                 // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PowerProduced;                                           // 0x0014(0x0004) ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PowerConsumed;                                           // 0x0018(0x0004) ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaximumPowerConsumption;                                 // 0x001C(0x0004) ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BatteryPowerInput;                                       // 0x0020(0x0004) ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BK43[0x1C];                                  // 0x0024(0x001C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FPowerGraphPoint>                            Items;                                                   // 0x0040(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		int8_t                                                     FirstIndex;                                              // 0x0050(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_TNIB[0x7];                                   // 0x0051(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FactoryGame.FGIndicatorReaction
	 * Size -> 0x0014
	 */
	struct FFGIndicatorReaction
	{
	public:
		int32_t                                                    FlashingPattern;                                         // 0x0000(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        mColor;                                                  // 0x0004(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FactoryGame.MapAreaParticleCollection
	 * Size -> 0x0018
	 */
	struct FMapAreaParticleCollection
	{
	public:
		TArray<class UClass*>                                      Areas;                                                   // 0x0000(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, UObjectWrapper, NativeAccessSpecifierPublic
		class UParticleSystem*                                     Particle;                                                // 0x0010(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FactoryGame.ScanObjectPair
	 * Size -> 0x0010
	 */
	struct FScanObjectPair
	{
	public:
		class UClass*                                              itemDescriptor;                                          // 0x0000(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NumActorsFound;                                          // 0x0008(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6NQ0[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FactoryGame.RadioactiveSource
	 * Size -> 0x0018
	 */
	struct FRadioactiveSource
	{
	public:
		class USceneComponent*                                     AttachRoot;                                              // 0x0000(0x0008) ExportObject, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KA84[0x10];                                  // 0x0008(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FactoryGame.TrackGraph
	 * Size -> 0x0030
	 */
	struct FTrackGraph
	{
	public:
		TArray<class AFGBuildableRailroadTrack*>                   Tracks;                                                  // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PDTA[0x10];                                  // 0x0010(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UFGPowerConnectionComponent*                         ThirdRail;                                               // 0x0020(0x0008) ExportObject, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_I3OM[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FactoryGame.TimeTableStop
	 * Size -> 0x0038
	 */
	struct FTimeTableStop
	{
	public:
		class AFGTrainStationIdentifier*                           Station;                                                 // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, EditConst, SaveGame, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FTrainDockingRuleSet                                DockingRuleSet;                                          // 0x0008(0x0030) Edit, BlueprintVisible, EditConst, SaveGame, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FactoryGame.AnimInstanceProxyRailroadVehicle
	 * Size -> 0x0170 (FullSize[0x09F0] - InheritedSize[0x0880])
	 */
	struct FAnimInstanceProxyRailroadVehicle : public FAnimInstanceProxy
	{
	public:
		unsigned char                                              UnknownData_9C7D[0x80];                                  // 0x0880(0x0080) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRotator                                            mFrontBogieRotation;                                     // 0x0900(0x0018) Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FRotator                                            mBackBogieRotation;                                      // 0x0918(0x0018) Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FRotator                                            mWheelRotation;                                          // 0x0930(0x0018) Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FRotator                                            mFrontConnectorRotation;                                 // 0x0948(0x0018) Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FVector                                             mFrontConnectorTranslation;                              // 0x0960(0x0018) Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator                                            mBackConnectorRotation;                                  // 0x0978(0x0018) Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FVector                                             mBackConnectorTranslation;                               // 0x0990(0x0018) Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator                                            mTrackCurvature;                                         // 0x09A8(0x0018) Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		float                                                      mForwardSpeed;                                           // 0x09C0(0x0004) Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      mTractiveForce;                                          // 0x09C4(0x0004) Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      mHandBrakeForce;                                         // 0x09C8(0x0004) Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      mBrakeForce;                                             // 0x09CC(0x0004) Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      mHandBrakeForceSpeed;                                    // 0x09D0(0x0004) Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      mHandBrakeGlow;                                          // 0x09D4(0x0004) Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      mHandBrakeVfxSpawn;                                      // 0x09D8(0x0004) Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      mAGBrakePlayRate;                                        // 0x09DC(0x0004) Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       mIsMoving : 1;                                           // 0x09E0(0x0001) BIT_FIELD Edit, BlueprintVisible, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       mIsUsingHandBrake : 1;                                   // 0x09E0(0x0001) BIT_FIELD Edit, BlueprintVisible, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       mIsLocomotive : 1;                                       // 0x09E0(0x0001) BIT_FIELD Edit, BlueprintVisible, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       mHasPower : 1;                                           // 0x09E0(0x0001) BIT_FIELD Edit, BlueprintVisible, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       mAGThrottleZero : 1;                                     // 0x09E0(0x0001) BIT_FIELD Edit, BlueprintVisible, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       mAGThrottlePositive : 1;                                 // 0x09E0(0x0001) BIT_FIELD Edit, BlueprintVisible, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       mAGStartToRunningTransition : 1;                         // 0x09E0(0x0001) BIT_FIELD Edit, BlueprintVisible, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       mAGHandBrakeTransition01 : 1;                            // 0x09E0(0x0001) BIT_FIELD Edit, BlueprintVisible, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       mAGHandBrakeTransition02 : 1;                            // 0x09E1(0x0001) BIT_FIELD Edit, BlueprintVisible, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       mAGBrakeForcePositive : 1;                               // 0x09E1(0x0001) BIT_FIELD Edit, BlueprintVisible, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       mAGBrakeToRunningTransition : 1;                         // 0x09E1(0x0001) BIT_FIELD Edit, BlueprintVisible, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       mAGHandBrakeReset01 : 1;                                 // 0x09E1(0x0001) BIT_FIELD Edit, BlueprintVisible, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       mAGHandBrakeReset02 : 1;                                 // 0x09E1(0x0001) BIT_FIELD Edit, BlueprintVisible, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       mAGHandBrakeStop : 1;                                    // 0x09E1(0x0001) BIT_FIELD Edit, BlueprintVisible, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5X92[0xE];                                   // 0x09E2(0x000E) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FactoryGame.ConnectionAlwaysRelevant_NodePair
	 * Size -> 0x0010
	 */
	struct FConnectionAlwaysRelevant_NodePair
	{
	public:
		class UNetConnection*                                      NetConnection;                                           // 0x0000(0x0008) ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UReplicationGraphNode_AlwaysRelevant_ForConnection*  Node;                                                    // 0x0008(0x0008) ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FactoryGame.ResearchData
	 * Size -> 0x0020
	 */
	struct FResearchData
	{
	public:
		class UClass*                                              schematic;                                               // 0x0000(0x0008) ZeroConstructor, SaveGame, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              InitiatingResearchTree;                                  // 0x0008(0x0008) ZeroConstructor, SaveGame, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UClass*>                                      PendingRewards;                                          // 0x0010(0x0010) ZeroConstructor, SaveGame, UObjectWrapper, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FactoryGame.ResearchTime
	 * Size -> 0x0030
	 */
	struct FResearchTime
	{
	public:
		unsigned char                                              UnknownData_TOZ1[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FResearchData                                       ResearchData;                                            // 0x0008(0x0020) SaveGame, NativeAccessSpecifierPublic
		float                                                      ResearchCompleteTimestamp;                               // 0x0028(0x0004) ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EE17[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FactoryGame.PurityTextPair
	 * Size -> 0x0020
	 */
	struct FPurityTextPair
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018) Edit, DisableEditOnInstance, NativeAccessSpecifierPublic
		EResourcePurity                                            Purity;                                                  // 0x0018(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ISA4[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FactoryGame.ResourceDepositPackage
	 * Size -> 0x0048
	 */
	struct FResourceDepositPackage
	{
	public:
		float                                                      DropChance;                                              // 0x0000(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_63UG[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              ResourceClass[0x30];                                     // 0x0008(0x0030) UNKNOWN PROPERTY: SoftClassProperty
		int32_t                                                    MinAmount;                                               // 0x0038(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxAmount;                                               // 0x003C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MiningAmount;                                            // 0x0040(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZD70[0x4];                                   // 0x0044(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FactoryGame.NodeClusterData
	 * Size -> 0x0030
	 */
	struct FNodeClusterData
	{
	public:
		TArray<class AFGResourceNodeBase*>                         Nodes;                                                   // 0x0000(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		struct FVector                                             MidPoint;                                                // 0x0010(0x0018) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              ResourceDescriptor;                                      // 0x0028(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FactoryGame.ResourceSinkHistory
	 * Size -> 0x0010
	 */
	struct FResourceSinkHistory
	{
	public:
		TArray<int32_t>                                            Values;                                                  // 0x0000(0x0010) ZeroConstructor, SaveGame, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FactoryGame.ResourceSinkValuePair32
	 * Size -> 0x0008
	 */
	struct FResourceSinkValuePair32
	{
	public:
		EResourceSinkTrack                                         TrackType;                                               // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_N7A3[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    Value;                                                   // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FactoryGame.SaveHeader
	 * Size -> 0x00A8
	 */
	struct FSaveHeader
	{
	public:
		unsigned char                                              UnknownData_DGTV[0xA8];                                  // 0x0000(0x00A8) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FactoryGame.SessionSaveStruct
	 * Size -> 0x0020
	 */
	struct FSessionSaveStruct
	{
	public:
		class FString                                              SessionName;                                             // 0x0000(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FSaveHeader>                                 SaveHeaders;                                             // 0x0010(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FactoryGame.MapRedirector
	 * Size -> 0x0020
	 */
	struct FMapRedirector
	{
	public:
		class FString                                              OldMapName;                                              // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              NewMapName;                                              // 0x0010(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FactoryGame.WorldScannableData
	 * Size -> 0x0030
	 */
	struct FWorldScannableData
	{
	public:
		class FString                                              ObjectReferenceDiscAsString;                             // 0x0000(0x0010) Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              ActorClass;                                              // 0x0010(0x0008) Edit, ZeroConstructor, EditConst, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             ActorLocation;                                           // 0x0018(0x0018) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FactoryGame.SchematicCost
	 * Size -> 0x0018
	 */
	struct FSchematicCost
	{
	public:
		class UClass*                                              schematic;                                               // 0x0000(0x0008) ZeroConstructor, SaveGame, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FItemAmount>                                 ItemCost;                                                // 0x0008(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, SaveGame, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FactoryGame.ServerAuthenticationToken
	 * Size -> 0x0018
	 */
	struct FServerAuthenticationToken
	{
	public:
		EPrivilegeLevel                                            PrivilegeLevel;                                          // 0x0000(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_443N[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Fingerprint;                                             // 0x0008(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FactoryGame.ServerGameState
	 * Size -> 0x0030
	 */
	struct FServerGameState
	{
	public:
		class FString                                              ActiveSessionName;                                       // 0x0000(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NumConnectedPlayers;                                     // 0x0010(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    TechTier;                                                // 0x0014(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              activeSchematic;                                         // 0x0018(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EGamePhase                                                 gamePhase;                                               // 0x0020(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsGameRunning;                                           // 0x0021(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_C6YS[0x2];                                   // 0x0022(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    TotalGameDuration;                                       // 0x0024(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AverageTickRate;                                         // 0x0028(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TOCN[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FactoryGame.ServerBasicSettings
	 * Size -> 0x0018
	 */
	struct FServerBasicSettings
	{
	public:
		bool                                                       AutoPause;                                               // 0x0000(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       AutoSaveOnDisconnect;                                    // 0x0001(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NT86[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              AutoLoadSessionName;                                     // 0x0008(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FactoryGame.ShoppingListBlueprintEntry
	 * Size -> 0x0018
	 */
	struct FShoppingListBlueprintEntry
	{
	public:
		class FString                                              BlueprintName;                                           // 0x0000(0x0010) ZeroConstructor, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Amount;                                                  // 0x0010(0x0004) ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_32ZQ[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FactoryGame.ShoppingListRecipeEntry
	 * Size -> 0x0010
	 */
	struct FShoppingListRecipeEntry
	{
	public:
		class UClass*                                              recipeClass;                                             // 0x0000(0x0008) BlueprintVisible, ZeroConstructor, SaveGame, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Amount;                                                  // 0x0008(0x0004) BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_K8E8[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FactoryGame.SortedPendingSign
	 * Size -> 0x0010
	 */
	struct FSortedPendingSign
	{
	public:
		class AFGBuildableWidgetSign*                              Sign;                                                    // 0x0000(0x0008) ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_A0TB[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FactoryGame.MappedSignData
	 * Size -> 0x0020
	 */
	struct FMappedSignData
	{
	public:
		class UMaterialInstanceDynamic*                            mMaterialInstance;                                       // 0x0000(0x0008) ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UWidgetComponent*                                    mRootWidgetComponent;                                    // 0x0008(0x0008) ExportObject, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class AFGBuildableWidgetSign*>                      Owners;                                                  // 0x0010(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FactoryGame.WeatherChanceEntry
	 * Size -> 0x0028
	 */
	struct FWeatherChanceEntry
	{
	public:
		class FName                                                EntryName;                                               // 0x0000(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      mProbability;                                            // 0x0008(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JEM1[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              mWeatherBehaviour;                                       // 0x0010(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    mWeatherStartupDelayDays;                                // 0x0018(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAllowedToRunInSequence;                                 // 0x001C(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bRequiresOcclusionRenderTarget;                          // 0x001D(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TI1F[0x2];                                   // 0x001E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FFloatInterval                                      mWeatherEffectDuration;                                  // 0x0020(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FactoryGame.ActorBuiltData
	 * Size -> 0x0020
	 */
	struct FActorBuiltData
	{
	public:
		int64_t                                                    Current;                                                 // 0x0000(0x0008) ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int64_t                                                    CurrentMax;                                              // 0x0008(0x0008) ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int64_t                                                    Total;                                                   // 0x0010(0x0008) ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int64_t                                                    TotalDismantled;                                         // 0x0018(0x0008) ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FactoryGame.EventTriggeredMessage
	 * Size -> 0x0010
	 */
	struct FEventTriggeredMessage
	{
	public:
		class UFGAvailabilityDependency*                           TriggerDependency;                                       // 0x0000(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              Message;                                                 // 0x0008(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FactoryGame.SchematicMessagePair
	 * Size -> 0x0040
	 */
	struct FSchematicMessagePair
	{
	public:
		TArray<class UClass*>                                      Messages;                                                // 0x0000(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, UObjectWrapper, NativeAccessSpecifierPublic
		unsigned char                                              SchematicUnlocked[0x30];                                 // 0x0010(0x0030) UNKNOWN PROPERTY: SoftClassProperty
	};

	/**
	 * ScriptStruct FactoryGame.ItemFoundData
	 * Size -> 0x0078
	 */
	struct FItemFoundData
	{
	public:
		bool                                                       WasFound;                                                // 0x0000(0x0001) ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1HYK[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UClass*>                                      Messages;                                                // 0x0008(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, UObjectWrapper, NativeAccessSpecifierPublic
		unsigned char                                              SchematicClass[0x30];                                    // 0x0018(0x0030) UNKNOWN PROPERTY: SoftClassProperty
		unsigned char                                              ItemClass[0x30];                                         // 0x0048(0x0030) UNKNOWN PROPERTY: SoftClassProperty
	};

	/**
	 * ScriptStruct FactoryGame.ResearchTreeMessageData
	 * Size -> 0x0040
	 */
	struct FResearchTreeMessageData
	{
	public:
		TArray<class UClass*>                                      Messages;                                                // 0x0000(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, UObjectWrapper, NativeAccessSpecifierPublic
		unsigned char                                              researchTree[0x30];                                      // 0x0010(0x0030) UNKNOWN PROPERTY: SoftClassProperty
	};

	/**
	 * ScriptStruct FactoryGame.MaterialAndSlotName
	 * Size -> 0x0010
	 */
	struct FMaterialAndSlotName
	{
	public:
		class FName                                                SlotName;                                                // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMaterialInterface*                                  Material;                                                // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FactoryGame.SongData
	 * Size -> 0x0018
	 */
	struct FSongData
	{
	public:
		class UAkAudioEvent*                                       Song;                                                    // 0x0000(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                ArtistName;                                              // 0x0008(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                SongName;                                                // 0x0010(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FactoryGame.TrainConsist
	 * Size -> 0x0030
	 */
	struct FTrainConsist
	{
	public:
		TArray<class AFGRailroadVehicle*>                          Vehicles;                                                // 0x0000(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		float                                                      Length;                                                  // 0x0010(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Mass;                                                    // 0x0014(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxSpeed;                                                // 0x0018(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NIHS[0x14];                                  // 0x001C(0x0014) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FactoryGame.TrainAtcPoint
	 * Size -> 0x0020
	 */
	struct FTrainAtcPoint
	{
	public:
		class UFGRailroadTrackConnectionComponent*                 TrackConnection;                                         // 0x0000(0x0008) ExportObject, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_A20I[0x18];                                  // 0x0008(0x0018) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FactoryGame.TrainAtcData
	 * Size -> 0x0080
	 */
	struct FTrainAtcData
	{
	public:
		unsigned char                                              UnknownData_MOBG[0x28];                                  // 0x0000(0x0028) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FTrainAtcPoint>                              TargetPoints;                                            // 0x0028(0x0010) ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WSPP[0x48];                                  // 0x0038(0x0048) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FactoryGame.TrainSimulationData
	 * Size -> 0x0068
	 */
	struct FTrainSimulationData
	{
	public:
		TArray<class AFGRailroadVehicle*>                          SimulatedVehicles;                                       // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class UFGRailroadVehicleMovementComponent*>         SimulatedMovements;                                      // 0x0010(0x0010) ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PPF3[0x20];                                  // 0x0020(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UFGLocomotiveMovementComponent*                      MasterMovement;                                          // 0x0040(0x0008) ExportObject, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KG5G[0x18];                                  // 0x0048(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Velocity;                                                // 0x0060(0x0004) ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WNO2[0x4];                                   // 0x0064(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FactoryGame.ClientTrainData
	 * Size -> 0x0004
	 */
	struct FClientTrainData
	{
	public:
		uint32_t                                                   PackedData;                                              // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct FactoryGame.TutorialData
	 * Size -> 0x0010
	 */
	struct FTutorialData
	{
	public:
		class UClass*                                              ClassBuilt;                                              // 0x0000(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              MessageID;                                               // 0x0008(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FactoryGame.ScannableObjectData
	 * Size -> 0x0018
	 */
	struct FScannableObjectData
	{
	public:
		class UClass*                                              itemDescriptor;                                          // 0x0000(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UClass*>                                      ActorsAllowedToScan;                                     // 0x0008(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, UObjectWrapper, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FactoryGame.ScannableResourcePair
	 * Size -> 0x0010
	 */
	struct FScannableResourcePair
	{
	public:
		class UClass*                                              ResourceDescriptor;                                      // 0x0000(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EResourceNodeType                                          ResourceNodeType;                                        // 0x0008(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8QLI[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FactoryGame.GCheckmarkUnlockData
	 * Size -> 0x0018
	 */
	struct FGCheckmarkUnlockData
	{
	public:
		class FString                                              PlayerName;                                              // 0x0000(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FDateTime                                           UnlockTime;                                              // 0x0010(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, SaveGame, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FactoryGame.PawnImpactAudio
	 * Size -> 0x0010
	 */
	struct FPawnImpactAudio
	{
	public:
		float                                                      MinImpactVelocity;                                       // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CRB5[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAkAudioEvent*                                       ImpactEvent;                                             // 0x0008(0x0008) Edit, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FactoryGame.SurfaceForceMultiplierOverride
	 * Size -> 0x0018
	 */
	struct FSurfaceForceMultiplierOverride
	{
	public:
		float                                                      OverrideForceMultiplier;                                 // 0x0000(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4OL3[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<EPhysicalSurface>                                   Surfaces;                                                // 0x0008(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FactoryGame.TireTrackDecalDetails
	 * Size -> 0x0010
	 */
	struct FTireTrackDecalDetails
	{
	public:
		class UPhysicalMaterial*                                   SurfacePhysicsMaterial;                                  // 0x0000(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMaterial*                                           DecalMaterialOverride;                                   // 0x0008(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FactoryGame.SurfaceParticlePair
	 * Size -> 0x0010
	 */
	struct FSurfaceParticlePair
	{
	public:
		class UParticleSystem*                                     EmitterTemplate;                                         // 0x0000(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EPhysicalSurface                                           Surface;                                                 // 0x0008(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CCA6[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FactoryGame.WheelSoundSurfacePair
	 * Size -> 0x0020
	 */
	struct FWheelSoundSurfacePair
	{
	public:
		class UAkAudioEvent*                                       PlayEvent;                                               // 0x0000(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAkAudioEvent*                                       StopEvent;                                               // 0x0008(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<EPhysicalSurface>                                   Surfaces;                                                // 0x0010(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FactoryGame.ParticleTemplatePair
	 * Size -> 0x0010
	 */
	struct FParticleTemplatePair
	{
	public:
		class UParticleSystem*                                     Template;                                                // 0x0000(0x0008) ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UParticleSystemComponent*                            Particle;                                                // 0x0008(0x0008) ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FactoryGame.FGWorldGridCellData
	 * Size -> 0x0004
	 */
	struct FFGWorldGridCellData
	{
	public:
		float                                                      Elevation;                                               // 0x0000(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FactoryGame.FGWorldGridCell
	 * Size -> 0x0038
	 */
	struct FFGWorldGridCell
	{
	public:
		unsigned char                                              UnknownData_2LO9[0x38];                                  // 0x0000(0x0038) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FactoryGame.ExponentialFogSettings
	 * Size -> 0x0058
	 */
	struct FExponentialFogSettings
	{
	public:
		float                                                      FogHeight;                                               // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FogDensity;                                              // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        FogInscatteringLuminance;                                // 0x0008(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FullyDirectionalInscatteringColorDistance;               // 0x0018(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      NonDirectionalInscatteringColorDistance;                 // 0x001C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DirectionalInscatteringExponent;                         // 0x0020(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DirectionalInscatteringStartDistance;                    // 0x0024(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        DirectionalInscatteringLuminance;                        // 0x0028(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FogHeightFalloff;                                        // 0x0038(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FogMaxOpacity;                                           // 0x003C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      StartDistance;                                           // 0x0040(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FogCutoffDistance;                                       // 0x0044(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SecondFogDensity;                                        // 0x0048(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SecondFogHeightFalloff;                                  // 0x004C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SecondFogHeightOffset;                                   // 0x0050(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4VD4[0x4];                                   // 0x0054(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FactoryGame.WPGridValidationData
	 * Size -> 0x0058
	 */
	struct FWPGridValidationData
	{
	public:
		int32_t                                                    CellSize;                                                // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   GridHash;                                                // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TMap<class FName, uint32_t>                                CellHashes;                                              // 0x0008(0x0050) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FactoryGame.WorldPartitionValidationData
	 * Size -> 0x0050
	 */
	struct FWorldPartitionValidationData
	{
	public:
		TMap<class FName, struct FWPGridValidationData>            Grids;                                                   // 0x0000(0x0050) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FactoryGame.WPCellIdentifier
	 * Size -> 0x0010
	 */
	struct FWPCellIdentifier
	{
	public:
		class FName                                                GridName;                                                // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                CellName;                                                // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FactoryGame.CyclicRuntimeFloatCurve
	 * Size -> 0x0088
	 */
	struct FCyclicRuntimeFloatCurve
	{
	public:
		struct FRuntimeFloatCurve                                  mCurveData;                                              // 0x0000(0x0088) Edit, DisableEditOnTemplate, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FactoryGame.CyclicRuntimeColorCurve
	 * Size -> 0x0208
	 */
	struct FCyclicRuntimeColorCurve
	{
	public:
		struct FRuntimeCurveLinearColor                            mCurveData;                                              // 0x0000(0x0208) Edit, DisableEditOnTemplate, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FactoryGame.DisabledInputGate
	 * Size -> 0x0002
	 */
	struct FDisabledInputGate
	{
	public:
		bool                                                       mBuildGun : 1;                                           // 0x0000(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       mDismantle : 1;                                          // 0x0000(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       mFlashLight : 1;                                         // 0x0000(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       mResourceScanner : 1;                                    // 0x0000(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       mOpenCodex : 1;                                          // 0x0000(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       mInventory : 1;                                          // 0x0000(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       mToggleMap : 1;                                          // 0x0000(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       mHotbar : 1;                                             // 0x0000(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       mJump : 1;                                               // 0x0001(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       mChat : 1;                                               // 0x0001(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       mUse : 1;                                                // 0x0001(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       mVehicleRecording : 1;                                   // 0x0001(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       mCrouch : 1;                                             // 0x0001(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       mOpenSearch : 1;                                         // 0x0001(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       mEmote : 1;                                              // 0x0001(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       mPhotoMode : 1;                                          // 0x0001(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FactoryGame.FGOnlineFriend
	 * Size -> 0x0010
	 */
	struct FFGOnlineFriend
	{
	public:
		unsigned char                                              UnknownData_M0MM[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FactoryGame.UpdatedFriends
	 * Size -> 0x0010
	 */
	struct FUpdatedFriends
	{
	public:
		TArray<struct FFGOnlineFriend>                             Friends;                                                 // 0x0000(0x0010) BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FactoryGame.PendingInvite
	 * Size -> 0x0140
	 */
	struct FPendingInvite
	{
	public:
		unsigned char                                              UnknownData_UW66[0x140];                                 // 0x0000(0x0140) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FactoryGame.ResourceNodeRepresentationPair
	 * Size -> 0x0010
	 */
	struct FResourceNodeRepresentationPair
	{
	public:
		class AFGResourceNodeBase*                                 ResourceNode;                                            // 0x0000(0x0008) ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ScanCount;                                               // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TD0L[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FactoryGame.SkyAtmosphereSettings
	 * Size -> 0x0060
	 */
	struct FSkyAtmosphereSettings
	{
	public:
		unsigned char                                              UnknownData_QDYM[0x60];                                  // 0x0000(0x0060) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FactoryGame.AudioSubtitlePair
	 * Size -> 0x0028
	 */
	struct FAudioSubtitlePair
	{
	public:
		class UAkAudioEvent*                                       AudioEvent;                                              // 0x0000(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FText                                                Subtitle;                                                // 0x0008(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic
		class UClass*                                              SenderClass;                                             // 0x0020(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FactoryGame.PendingMessage
	 * Size -> 0x0010
	 */
	struct FPendingMessage
	{
	public:
		class UClass*                                              MessageWidget;                                           // 0x0000(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UFGMessage*                                          Message;                                                 // 0x0008(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FactoryGame.PoolFloatScalability
	 * Size -> 0x0010
	 */
	struct FPoolFloatScalability
	{
	public:
		TArray<float>                                              Values;                                                  // 0x0000(0x0010) BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FactoryGame.PoolBoolScalability
	 * Size -> 0x0010
	 */
	struct FPoolBoolScalability
	{
	public:
		TArray<bool>                                               Values;                                                  // 0x0000(0x0010) BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FactoryGame.PoolLightSettings
	 * Size -> 0x0050
	 */
	struct FPoolLightSettings
	{
	public:
		float                                                      mDefaultDrawRange;                                       // 0x0000(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      mFadePercentage;                                         // 0x0004(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      mMaxTraceDistance;                                       // 0x0008(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      mMinIntensity;                                           // 0x000C(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      mMaxIntensity;                                           // 0x0010(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      mInnerConeAngle;                                         // 0x0014(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      mOuterConeAngle;                                         // 0x0018(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      mLightFalloff;                                           // 0x001C(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FPoolBoolScalability                                bUseDistanceFieldShadows;                                // 0x0020(0x0010) BlueprintVisible, NativeAccessSpecifierPublic
		struct FPoolBoolScalability                                mCastShadows;                                            // 0x0030(0x0010) BlueprintVisible, NativeAccessSpecifierPublic
		struct FPoolBoolScalability                                mCastDFShadows;                                          // 0x0040(0x0010) BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FactoryGame.PoolMeshSettings
	 * Size -> 0x0004
	 */
	struct FPoolMeshSettings
	{
	public:
		float                                                      mMaxTraceDistance;                                       // 0x0000(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FactoryGame.FGHologramGuidelineData
	 * Size -> 0x0090
	 */
	struct FFGHologramGuidelineData
	{
	public:
		class UObject*                                             mGuidelineObject;                                        // 0x0000(0x0008) ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8FBN[0x88];                                  // 0x0008(0x0088) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FactoryGame.FGPipeHyperBasePipeData
	 * Size -> 0x0001
	 */
	struct FFGPipeHyperBasePipeData
	{
	public:
		bool                                                       bDummy;                                                  // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FactoryGame.FGPipeHyperJunctionPipeData
	 * Size -> 0x0007 (FullSize[0x0008] - InheritedSize[0x0001])
	 */
	struct FFGPipeHyperJunctionPipeData : public FFGPipeHyperBasePipeData
	{
	public:
		unsigned char                                              UnknownData_0MUO[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    TravelRouteIndex;                                        // 0x0004(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FactoryGame.BuildableBucket
	 * Size -> 0x0018
	 */
	struct FBuildableBucket
	{
	public:
		class UClass*                                              BuildableClass;                                          // 0x0000(0x0008) ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class AFGBuildable*>                                Buildables;                                              // 0x0008(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FactoryGame.ConveyorTickGroup
	 * Size -> 0x0018
	 */
	struct FConveyorTickGroup
	{
	public:
		class AFGBuildable*                                        ForceIntoSharedByBuildable;                              // 0x0000(0x0008) ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class AFGBuildableConveyorBase*>                    Conveyors;                                               // 0x0008(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FactoryGame.BuildableGroupTimeData
	 * Size -> 0x0008
	 */
	struct FBuildableGroupTimeData
	{
	public:
		unsigned char                                              UnknownData_WB41[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FactoryGame.PickedUpInstance
	 * Size -> 0x0020
	 */
	struct FPickedUpInstance
	{
	public:
		class UStaticMesh*                                         InstanceMesh;                                            // 0x0000(0x0008) ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Location;                                                // 0x0008(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FactoryGame.FootstepEffectWater
	 * Size -> 0x0020
	 */
	struct FFootstepEffectWater
	{
	public:
		float                                                      MinWaterDepth;                                           // 0x0000(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5WNY[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FFootstepEffect                                     Effect;                                                  // 0x0008(0x0018) Edit, DisableEditOnInstance, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FactoryGame.ConstructHologramMessage
	 * Size -> 0x0030
	 */
	struct FConstructHologramMessage
	{
	public:
		struct FNetConstructionID                                  ConstructionID;                                          // 0x0000(0x0006) NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5X7V[0x2];                                   // 0x0006(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              recipe;                                                  // 0x0008(0x0008) ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class AActor*                                              UpgradeActor;                                            // 0x0010(0x0008) ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<unsigned char>                                      SerializedHologramData;                                  // 0x0018(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		int64_t                                                    NumBits;                                                 // 0x0028(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FactoryGame.DebrisMesh
	 * Size -> 0x0010
	 */
	struct FDebrisMesh
	{
	public:
		class UStaticMesh*                                         Mesh;                                                    // 0x0000(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FInt32Interval                                      Num;                                                     // 0x0008(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FactoryGame.DebrisActor
	 * Size -> 0x0010
	 */
	struct FDebrisActor
	{
	public:
		class UClass*                                              ActorClass;                                              // 0x0000(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FInt32Interval                                      Num;                                                     // 0x0008(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FactoryGame.DebrisItemDrop
	 * Size -> 0x0038
	 */
	struct FDebrisItemDrop
	{
	public:
		struct FInt32Interval                                      NumItems;                                                // 0x0000(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              ItemClass[0x30];                                         // 0x0008(0x0030) UNKNOWN PROPERTY: SoftClassProperty
	};

	/**
	 * ScriptStruct FactoryGame.SimulatedMeshTransform
	 * Size -> 0x0070
	 */
	struct FSimulatedMeshTransform
	{
	public:
		class UStaticMesh*                                         StaticMesh;                                              // 0x0000(0x0008) ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GULU[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          MeshTransform;                                           // 0x0010(0x0060) IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FactoryGame.SimulatedActorTransform
	 * Size -> 0x0070
	 */
	struct FSimulatedActorTransform
	{
	public:
		class UClass*                                              ActorClass;                                              // 0x0000(0x0008) ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_M9FD[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          ActorTransform;                                          // 0x0010(0x0060) IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FactoryGame.SimulatedItemDropTransform
	 * Size -> 0x0060
	 */
	struct FSimulatedItemDropTransform
	{
	public:
		struct FTransform                                          ItemDropTransform;                                       // 0x0000(0x0060) IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FactoryGame.FGMeleeAttackHit
	 * Size -> 0x00F0
	 */
	struct FFGMeleeAttackHit
	{
	public:
		class AFGCharacterBase*                                    hitCharacter;                                            // 0x0000(0x0008) ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FHitResult                                          HitResult;                                               // 0x0008(0x00E8) IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FactoryGame.ServerStateShort
	 * Size -> 0x0018
	 */
	struct FServerStateShort
	{
	public:
		class FString                                              GameVersion;                                             // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EServerState                                               ServerState;                                             // 0x0010(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_70B9[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FactoryGame.ServerEntryToken
	 * Size -> 0x0020
	 */
	struct FServerEntryToken
	{
	public:
		EPrivilegeLevel                                            Privilege;                                               // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WVOP[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FDateTime                                           IssueDate;                                               // 0x0008(0x0008) ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Fingerprint;                                             // 0x0010(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FactoryGame.DestroyedFoliageEffectData
	 * Size -> 0x0028
	 */
	struct FDestroyedFoliageEffectData
	{
	public:
		struct FVector                                             SpawnLocation;                                           // 0x0000(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UParticleSystem*                                     DestroyedEffect;                                         // 0x0018(0x0008) ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Priority;                                                // 0x0020(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_E0MM[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FactoryGame.DroneStationData
	 * Size -> 0x0010
	 */
	struct FDroneStationData
	{
	public:
		class AFGDroneStationInfo*                                 Station;                                                 // 0x0000(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsOrigin;                                                // 0x0008(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsPairedToOrigin;                                        // 0x0009(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsPairedFromOrigin;                                      // 0x000A(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_331M[0x1];                                   // 0x000B(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Distance;                                                // 0x000C(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FactoryGame.DroneAction
	 * Size -> 0x0010
	 */
	struct FDroneAction
	{
	public:
		unsigned char                                              UnknownData_JW9B[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FactoryGame.DroneAction_Timed
	 * Size -> 0x0008 (FullSize[0x0018] - InheritedSize[0x0010])
	 */
	struct FDroneAction_Timed : public FDroneAction
	{
	public:
		unsigned char                                              UnknownData_GB47[0x8];                                   // 0x0010(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FactoryGame.DroneAction_TraversePath
	 * Size -> 0x0018 (FullSize[0x0028] - InheritedSize[0x0010])
	 */
	struct FDroneAction_TraversePath : public FDroneAction
	{
	public:
		TArray<struct FVector>                                     mPath;                                                   // 0x0010(0x0010) ZeroConstructor, SaveGame, NativeAccessSpecifierPrivate
		EDroneFlyingMode                                           mFlyingMode;                                             // 0x0020(0x0001) ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       mStopAtDestination;                                      // 0x0021(0x0001) ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_S4MU[0x6];                                   // 0x0022(0x0006) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FactoryGame.DroneAction_RequestDocking
	 * Size -> 0x0018 (FullSize[0x0028] - InheritedSize[0x0010])
	 */
	struct FDroneAction_RequestDocking : public FDroneAction
	{
	public:
		class AFGBuildableDroneStation*                            mStation;                                                // 0x0010(0x0008) ZeroConstructor, SaveGame, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       mShouldTransferItems;                                    // 0x0018(0x0001) ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		EDroneDockingRequestState                                  mCurrentState;                                           // 0x0019(0x0001) ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_Y7OT[0x2];                                   // 0x001A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      mTotalQueueTime;                                         // 0x001C(0x0004) ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		int32_t                                                    mQueuePosition;                                          // 0x0020(0x0004) ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_5U0J[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FactoryGame.DroneAction_DockingSequence
	 * Size -> 0x0010 (FullSize[0x0028] - InheritedSize[0x0018])
	 */
	struct FDroneAction_DockingSequence : public FDroneAction_Timed
	{
	public:
		class AFGBuildableDroneStation*                            mStation;                                                // 0x0018(0x0008) ZeroConstructor, SaveGame, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       mShouldTransferItems;                                    // 0x0020(0x0001) ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_M4PN[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FactoryGame.DroneAction_TakeoffSequence
	 * Size -> 0x0018 (FullSize[0x0030] - InheritedSize[0x0018])
	 */
	struct FDroneAction_TakeoffSequence : public FDroneAction_Timed
	{
	public:
		class AFGBuildableDroneStation*                            mStation;                                                // 0x0018(0x0008) ZeroConstructor, SaveGame, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class AFGBuildableDroneStation*                            mNewTravelDestination;                                   // 0x0020(0x0008) ZeroConstructor, SaveGame, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       mHasNewPairedStation;                                    // 0x0028(0x0001) ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_TH6D[0x7];                                   // 0x0029(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FactoryGame.DroneAction_TravelStartSequence
	 * Size -> 0x0018 (FullSize[0x0030] - InheritedSize[0x0018])
	 */
	struct FDroneAction_TravelStartSequence : public FDroneAction_Timed
	{
	public:
		struct FVector                                             mDestination;                                            // 0x0018(0x0018) ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct FactoryGame.Category
	 * Size -> 0x00F0
	 */
	struct FCategory
	{
	public:
		class FText                                                Name;                                                    // 0x0000(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XSDG[0x8];                                   // 0x0018(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSlateBrush                                         Icon;                                                    // 0x0020(0x00D0) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FactoryGame.PlayingAudioEventInfo
	 * Size -> 0x0010
	 */
	struct FPlayingAudioEventInfo
	{
	public:
		unsigned char                                              UnknownData_Z1PF[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAkComponent*                                        Component;                                               // 0x0008(0x0008) ExportObject, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FactoryGame.HashableVectorWrapper
	 * Size -> 0x0018
	 */
	struct FHashableVectorWrapper
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x0018) Edit, ZeroConstructor, EditConst, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FactoryGame.FoliageRemovalDataKey
	 * Size -> 0x0018
	 */
	struct FFoliageRemovalDataKey
	{
	public:
		struct FIntVector                                          CellCoord;                                               // 0x0000(0x000C) ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_29W9[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UFoliageType*                                        FoliageType;                                             // 0x0010(0x0008) ZeroConstructor, SaveGame, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FactoryGame.FoliageInstanceStableId
	 * Size -> 0x0020
	 */
	struct FFoliageInstanceStableId
	{
	public:
		uint32_t                                                   InstanceHash;                                            // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_APB0[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UFoliageType*                                        FoliageType;                                             // 0x0008(0x0008) ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FIntVector                                          FoliageCell;                                             // 0x0010(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ANW6[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FactoryGame.FGGameNetworkErrorMsg
	 * Size -> 0x0018
	 */
	struct FFGGameNetworkErrorMsg
	{
	public:
		ENetworkFailure                                            ErrorType;                                               // 0x0000(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_35VK[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              ErrorMsg;                                                // 0x0008(0x0010) BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FactoryGame.AudioVolumeMap
	 * Size -> 0x0018
	 */
	struct FAudioVolumeMap
	{
	public:
		class FString                                              Name;                                                    // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Value;                                                   // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_S2BD[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FactoryGame.OptionUpdateDelegateData
	 * Size -> 0x0010
	 */
	struct FOptionUpdateDelegateData
	{
	public:
		TArray<class FScriptDelegate>                              OptionUpdatedDelegates;                                  // 0x0000(0x0010) ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FactoryGame.ItemView
	 * Size -> 0x0028
	 */
	struct FItemView
	{
	public:
		float                                                      Distance;                                                // 0x0000(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EEV0[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             FocalOffset;                                             // 0x0008(0x0018) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CameraPitch;                                             // 0x0020(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5RSW[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FactoryGame.ItemDescriptors
	 * Size -> 0x0010
	 */
	struct FItemDescriptors
	{
	public:
		unsigned char                                              ItemDescriptors[0x10];                                   // 0x0000(0x0010) UNKNOWN PROPERTY: ArrayProperty
	};

	/**
	 * ScriptStruct FactoryGame.LocalizationEntry
	 * Size -> 0x0028 (FullSize[0x0030] - InheritedSize[0x0008])
	 */
	struct FLocalizationEntry : public FTableRowBase
	{
	public:
		class FString                                              EnglishName;                                             // 0x0008(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              NativeName;                                              // 0x0018(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ELocalizationType                                          LocalizationType;                                        // 0x0028(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6C2N[0x3];                                   // 0x0029(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    CompletionPercentage;                                    // 0x002C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FactoryGame.FOWData
	 * Size -> 0x0020
	 */
	struct FFOWData
	{
	public:
		unsigned char                                              UnknownData_030E[0x20];                                  // 0x0000(0x0020) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FactoryGame.CostIngredientEffectActorInfo
	 * Size -> 0x0028
	 */
	struct FCostIngredientEffectActorInfo
	{
	public:
		class UClass*                                              ItemClass;                                               // 0x0000(0x0008) BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SpawnDelay;                                              // 0x0008(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YN3I[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             TargetLocation;                                          // 0x0010(0x0018) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FactoryGame.MaterialFlowGraph
	 * Size -> 0x0010
	 */
	struct FMaterialFlowGraph
	{
	public:
		unsigned char                                              UnknownData_Y0OV[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FactoryGame.MaterialFlowConnection
	 * Size -> 0x0018
	 */
	struct FMaterialFlowConnection
	{
	public:
		class UClass*                                              Descriptor;                                              // 0x0000(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Count;                                                   // 0x0008(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Flow;                                                    // 0x000C(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    TotalCount;                                              // 0x0010(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TotalFlow;                                               // 0x0014(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FactoryGame.MaterialFlowNode
	 * Size -> 0x0030
	 */
	struct FMaterialFlowNode
	{
	public:
		class UClass*                                              recipe;                                                  // 0x0000(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Depth;                                                   // 0x0008(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ProducerCount;                                           // 0x000C(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FMaterialFlowConnection>                     Outputs;                                                 // 0x0010(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FMaterialFlowConnection>                     Inputs;                                                  // 0x0020(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FactoryGame.FGHeightData
	 * Size -> 0x0040
	 */
	struct FFGHeightData
	{
	public:
		unsigned char                                              UnknownData_D6GS[0x40];                                  // 0x0000(0x0040) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FactoryGame.CustomFastArraySerializerItem
	 * Size -> 0x000C
	 */
	struct FCustomFastArraySerializerItem
	{
	public:
		int32_t                                                    ReplicationID;                                           // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ReplicationKey;                                          // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MostRecentArrayReplicationKey;                           // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FactoryGame.CustomFastArraySerializer
	 * Size -> 0x00B0
	 */
	struct FCustomFastArraySerializer
	{
	public:
		unsigned char                                              UnknownData_DXWG[0xB0];                                  // 0x0000(0x00B0) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FactoryGame.OnlinePresence
	 * Size -> 0x0010
	 */
	struct FOnlinePresence
	{
	public:
		unsigned char                                              UnknownData_65TB[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FactoryGame.UserFeedbackFrontEndData
	 * Size -> 0x0028
	 */
	struct FUserFeedbackFrontEndData
	{
	public:
		bool                                                       isSatisfactory;                                          // 0x0000(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7I89[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              typeOfFeedback;                                          // 0x0008(0x0010) BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Body;                                                    // 0x0018(0x0010) BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FactoryGame.FGOnlineSessionSettings
	 * Size -> 0x0048
	 */
	struct FFGOnlineSessionSettings
	{
	public:
		int32_t                                                    PlayDuration;                                            // 0x0000(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_W9Z5[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              BuildVersion;                                            // 0x0008(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              SaveSessionName;                                         // 0x0018(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ECachedNATType                                             NATType;                                                 // 0x0028(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsCreativeModeEnabled;                                   // 0x0029(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESessionVisibility                                         Visibility;                                              // 0x002A(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GWN6[0x1];                                   // 0x002B(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    NumSessionMembers;                                       // 0x002C(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxSessionMembers;                                       // 0x0030(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XJUM[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              HostNickname;                                            // 0x0038(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FactoryGame.ActionMappingDisplayName
	 * Size -> 0x0038
	 */
	struct FActionMappingDisplayName
	{
	public:
		class FName                                                ActionMappingName;                                       // 0x0000(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FText                                                DisplayName;                                             // 0x0008(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		class FText                                                ToolTip;                                                 // 0x0020(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FactoryGame.AxisMappingDisplayName
	 * Size -> 0x0050
	 */
	struct FAxisMappingDisplayName
	{
	public:
		class FName                                                AxisMappingName;                                         // 0x0000(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FText                                                DisplayNamePositiveScale;                                // 0x0008(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		class FText                                                DisplayNameNegativeScale;                                // 0x0020(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		class FText                                                ToolTip;                                                 // 0x0038(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FactoryGame.PumpHeadLiftLocationPath
	 * Size -> 0x0028
	 */
	struct FPumpHeadLiftLocationPath
	{
	public:
		unsigned char                                              UnknownData_9XIR[0x28];                                  // 0x0000(0x0028) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FactoryGame.ProximityEntry
	 * Size -> 0x0010
	 */
	struct FProximityEntry
	{
	public:
		unsigned char                                              UnknownData_C0RH[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FactoryGame.RadiationVisualization
	 * Size -> 0x0024
	 */
	struct FRadiationVisualization
	{
	public:
		class FName                                                Case;                                                    // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ItemAmount;                                              // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Decay;                                                   // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    UnitMultiplier;                                          // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      HighestIntensity;                                        // 0x0014(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      HighestDamageInterval;                                   // 0x0018(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DistanceForHighestIntensity;                             // 0x001C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DistanceForNoticableIntensity;                           // 0x0020(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FactoryGame.RemoveEmitterID
	 * Size -> 0x0010
	 */
	struct FRemoveEmitterID
	{
	public:
		class UObject*                                             Owner;                                                   // 0x0000(0x0008) ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Q905[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FactoryGame.SetEmitterID
	 * Size -> 0x0038
	 */
	struct FSetEmitterID
	{
	public:
		class UObject*                                             Owner;                                                   // 0x0000(0x0008) ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USceneComponent*                                     AttachRoot;                                              // 0x0008(0x0008) ExportObject, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IKBD[0x28];                                  // 0x0010(0x0028) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FactoryGame.SetEmitterIDArray
	 * Size -> 0x0038
	 */
	struct FSetEmitterIDArray
	{
	public:
		class UObject*                                             Owner;                                                   // 0x0000(0x0008) ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USceneComponent*                                     AttachRoot;                                              // 0x0008(0x0008) ExportObject, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YHNO[0x28];                                  // 0x0010(0x0028) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FactoryGame.PendingTrainCollisionEvent
	 * Size -> 0x0030
	 */
	struct FPendingTrainCollisionEvent
	{
	public:
		unsigned char                                              UnknownData_A6BE[0x30];                                  // 0x0000(0x0030) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FactoryGame.ConnectionComponentArrayWrapper
	 * Size -> 0x0010
	 */
	struct FConnectionComponentArrayWrapper
	{
	public:
		unsigned char                                              UnknownData_H6EY[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FactoryGame.ResearchRecipeReward
	 * Size -> 0x0030
	 */
	struct FResearchRecipeReward
	{
	public:
		TArray<struct FItemAmount>                                 Products;                                                // 0x0000(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class UClass*>                                      ResearchRecipes;                                         // 0x0010(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic
		TArray<class UClass*>                                      Schematics;                                              // 0x0020(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FactoryGame.ItemSettings
	 * Size -> 0x0040
	 */
	struct FItemSettings
	{
	public:
		unsigned char                                              ResourceClass[0x30];                                     // 0x0000(0x0030) UNKNOWN PROPERTY: SoftClassProperty
		int32_t                                                    Resolution;                                              // 0x0030(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6T1H[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMaterial*                                           MasterMaterial;                                          // 0x0038(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FactoryGame.ResourceSinkRewardLevelsData
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FResourceSinkRewardLevelsData : public FTableRowBase
	{
	public:
		int64_t                                                    RequiredPoints;                                          // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NumRepeats;                                              // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NRGH[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FactoryGame.ResourceSinkPointsData
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FResourceSinkPointsData : public FTableRowBase
	{
	public:
		class UClass*                                              ItemClass;                                               // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Points;                                                  // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    OverriddenResourceSinkPoints;                            // 0x0014(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FactoryGame.ActorToScan
	 * Size -> 0x0030
	 */
	struct FActorToScan
	{
	public:
		class AActor*                                              FoundActor;                                              // 0x0000(0x0008) ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              ScanningClass;                                           // 0x0008(0x0008) ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Location;                                                // 0x0010(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EActorToScanState                                          State;                                                   // 0x0028(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JPG2[0x7];                                   // 0x0029(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FactoryGame.ScannedActor
	 * Size -> 0x0018
	 */
	struct FScannedActor
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008) ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class ULevel*                                              Level;                                                   // 0x0008(0x0008) ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UFGScannableDetails*                                 ScannableDetails;                                        // 0x0010(0x0008) ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FactoryGame.ScannableDetails
	 * Size -> 0x0098
	 */
	struct FScannableDetails
	{
	public:
		class UClass*                                              ScannableClass;                                          // 0x0000(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FText                                                DisplayText;                                             // 0x0008(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic
		struct FColor                                              ScannerLightColor;                                       // 0x0020(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZPYV[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              Icon[0x30];                                              // 0x0028(0x0030) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              RequiredSchematic[0x30];                                 // 0x0058(0x0030) UNKNOWN PROPERTY: SoftClassProperty
		bool                                                       PreCacheAllOfType;                                       // 0x0088(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       ShouldOverrideDetectionRange;                            // 0x0089(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CYGP[0x2];                                   // 0x008A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      NewDetectionRange;                                       // 0x008C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NumActorsFound;                                          // 0x0090(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_L0E4[0x4];                                   // 0x0094(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FactoryGame.SchematicSubCategoryData
	 * Size -> 0x0018
	 */
	struct FSchematicSubCategoryData
	{
	public:
		class UClass*                                              SchematicSubCategory;                                    // 0x0000(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UClass*>                                      Schematics;                                              // 0x0008(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, UObjectWrapper, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FactoryGame.SchematicCategoryData
	 * Size -> 0x0018
	 */
	struct FSchematicCategoryData
	{
	public:
		class UClass*                                              SchematicCategory;                                       // 0x0000(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FSchematicSubCategoryData>                   SchematicSubCategoryData;                                // 0x0008(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FactoryGame.FGSequenceKeyFrame
	 * Size -> 0x000C
	 */
	struct FFGSequenceKeyFrame
	{
	public:
		struct FFrameTime                                          KeyFrameTime;                                            // 0x0000(0x0008) BlueprintVisible, SaveGame, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsSet;                                                   // 0x0008(0x0001) BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UNYL[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FactoryGame.FGSequenceFloatKeyFrame
	 * Size -> 0x0004 (FullSize[0x0010] - InheritedSize[0x000C])
	 */
	struct FFGSequenceFloatKeyFrame : public FFGSequenceKeyFrame
	{
	public:
		float                                                      Value;                                                   // 0x000C(0x0004) BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FactoryGame.FGSequenceSection
	 * Size -> 0x0008
	 */
	struct FFGSequenceSection
	{
	public:
		struct FFrameTime                                          SectionFrameTime;                                        // 0x0000(0x0008) BlueprintVisible, SaveGame, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FactoryGame.FGSequenceFloatSection
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FFGSequenceFloatSection : public FFGSequenceSection
	{
	public:
		struct FFGSequenceFloatKeyFrame                            Value;                                                   // 0x0008(0x0010) BlueprintVisible, SaveGame, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FactoryGame.FGSequenceVectorSection
	 * Size -> 0x0030 (FullSize[0x0038] - InheritedSize[0x0008])
	 */
	struct FFGSequenceVectorSection : public FFGSequenceSection
	{
	public:
		struct FFGSequenceFloatKeyFrame                            X;                                                       // 0x0008(0x0010) BlueprintVisible, SaveGame, NoDestructor, NativeAccessSpecifierPublic
		struct FFGSequenceFloatKeyFrame                            Y;                                                       // 0x0018(0x0010) BlueprintVisible, SaveGame, NoDestructor, NativeAccessSpecifierPublic
		struct FFGSequenceFloatKeyFrame                            Z;                                                       // 0x0028(0x0010) BlueprintVisible, SaveGame, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FactoryGame.FGSequenceTrack
	 * Size -> 0x0000
	 */
	struct FFGSequenceTrack
	{	};

	/**
	 * ScriptStruct FactoryGame.FGSequenceFloatTrack
	 * Size -> 0x0010
	 */
	struct FFGSequenceFloatTrack : public FFGSequenceTrack
	{
	public:
		TArray<struct FFGSequenceFloatSection>                     FloatSections;                                           // 0x0000(0x0010) BlueprintVisible, ZeroConstructor, SaveGame, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FactoryGame.FGSequenceVectorTrack
	 * Size -> 0x0010
	 */
	struct FFGSequenceVectorTrack : public FFGSequenceTrack
	{
	public:
		TArray<struct FFGSequenceVectorSection>                    VectorSections;                                          // 0x0000(0x0010) BlueprintVisible, ZeroConstructor, SaveGame, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FactoryGame.FGSequence
	 * Size -> 0x0060
	 */
	struct FFGSequence
	{
	public:
		struct FFGSequenceVectorTrack                              LocationTrack;                                           // 0x0000(0x0010) BlueprintVisible, SaveGame, NativeAccessSpecifierPublic
		struct FFGSequenceVectorTrack                              RotationTrack;                                           // 0x0010(0x0010) BlueprintVisible, SaveGame, NativeAccessSpecifierPublic
		struct FFGSequenceFloatTrack                               FOVTrack;                                                // 0x0020(0x0010) BlueprintVisible, SaveGame, NativeAccessSpecifierPublic
		struct FFrameTime                                          SequenceStart;                                           // 0x0030(0x0008) SaveGame, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FFrameTime                                          SequenceEnd;                                             // 0x0038(0x0008) SaveGame, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class APawn*                                               Pawn;                                                    // 0x0040(0x0008) ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class APlayerController*                                   PlayerController;                                        // 0x0048(0x0008) ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_1CRK[0x10];                                  // 0x0050(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FactoryGame.GainSignificanceData
	 * Size -> 0x0008
	 */
	struct FGainSignificanceData
	{
	public:
		unsigned char                                              UnknownData_A3MZ[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FactoryGame.SignRPC_Data
	 * Size -> 0x0068
	 */
	struct FSignRPC_Data
	{
	public:
		TArray<class AFGBuildableWidgetSign*>                      Signs;                                                   // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TMap<class AFGBuildableWidgetSign*, struct FPrefabSignData> SignToDataMap;                                           // 0x0010(0x0050) RepSkip, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7JU1[0x8];                                   // 0x0060(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FactoryGame.ClientSetSignData
	 * Size -> 0x00F8
	 */
	struct FClientSetSignData
	{
	public:
		class AFGBuildableWidgetSign*                              Sign;                                                    // 0x0000(0x0008) ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FPrefabSignData                                     SignData;                                                // 0x0008(0x00F0) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FactoryGame.SkySphereSettings
	 * Size -> 0x002C
	 */
	struct FSkySphereSettings
	{
	public:
		struct FLinearColor                                        SunLightColor;                                           // 0x0000(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SunIntensity;                                            // 0x0010(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        MoonLightColor;                                          // 0x0014(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MoonIntensity;                                           // 0x0024(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HZAL[0x4];                                   // 0x0028(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FactoryGame.DrivingTargetListMapStationData
	 * Size -> 0x0018
	 */
	struct FDrivingTargetListMapStationData
	{
	public:
		class UFGActorRepresentation*                              Station;                                                 // 0x0000(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           DisplayPosition;                                         // 0x0008(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FactoryGame.DrivingTargetListMapData
	 * Size -> 0x0068
	 */
	struct FDrivingTargetListMapData
	{
	public:
		TArray<struct FVector2D>                                   PathPoints;                                              // 0x0000(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		struct FWidgetTransform                                    MapTransform;                                            // 0x0010(0x0038) BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic
		TArray<struct FDrivingTargetListMapStationData>            Stations;                                                // 0x0048(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FWidgetTransform>                            ArrowTransforms;                                         // 0x0058(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FactoryGame.TrainSelfDrivingData
	 * Size -> 0x0010
	 */
	struct FTrainSelfDrivingData
	{
	public:
		unsigned char                                              UnknownData_LU70[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FactoryGame.UserSettingSubCategoryMapping
	 * Size -> 0x0018
	 */
	struct FUserSettingSubCategoryMapping
	{
	public:
		class UClass*                                              SubCategory;                                             // 0x0000(0x0008) BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UUserWidget*>                                 SettingWidgets;                                          // 0x0008(0x0010) BlueprintVisible, ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FactoryGame.UserSettingCategoryMapping
	 * Size -> 0x0018
	 */
	struct FUserSettingCategoryMapping
	{
	public:
		class UClass*                                              Category;                                                // 0x0000(0x0008) BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FUserSettingSubCategoryMapping>              SubCategories;                                           // 0x0008(0x0010) BlueprintVisible, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FactoryGame.VehicleSeat
	 * Size -> 0x0040
	 */
	struct FVehicleSeat
	{
	public:
		class UClass*                                              SeatClass;                                               // 0x0000(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, RepSkip, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                SitSocket;                                               // 0x0008(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsVisible;                                               // 0x0010(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SVPD[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAnimSequence*                                       SitAnimation;                                            // 0x0018(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DamageMultiplier;                                        // 0x0020(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RK57[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AFGDriveablePawn*                                    mSeatPawn;                                               // 0x0028(0x0008) ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class AFGCharacterPlayer*                                  mCharacter;                                              // 0x0030(0x0008) ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class AController*                                         mController;                                             // 0x0038(0x0008) ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FactoryGame.FGWorldPartitionContentBundleRegistration
	 * Size -> 0x0020
	 */
	struct FFGWorldPartitionContentBundleRegistration
	{
	public:
		class UFGWorldPartitionContentBundle*                      LoadedContentBundle;                                     // 0x0000(0x0008) ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MSM8[0x18];                                  // 0x0008(0x0018) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FactoryGame.PlayerPresenceState
	 * Size -> 0x0030
	 */
	struct FPlayerPresenceState
	{
	public:
		unsigned char                                              UnknownData_X8F1[0x30];                                  // 0x0000(0x0030) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FactoryGame.Errors
	 * Size -> 0x00F0
	 */
	struct FErrors
	{
	public:
		unsigned char                                              UnknownData_MR2Z[0x50];                                  // 0x0000(0x0050) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              UnknownLevels[0x50];                                     // 0x0050(0x0050) UNKNOWN PROPERTY: SetProperty
		unsigned char                                              UnknownClasses[0x50];                                    // 0x00A0(0x0050) UNKNOWN PROPERTY: SetProperty
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
