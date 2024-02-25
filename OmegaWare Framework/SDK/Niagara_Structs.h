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
	 * Enum Niagara.ENiagaraSimCacheAttributeCaptureMode
	 */
	enum class ENiagaraSimCacheAttributeCaptureMode : uint8_t
	{
		All                = 0,
		RenderingOnly      = 1,
		ExplicitAttributes = 2,
		MAX                = 3
	};

	/**
	 * Enum Niagara.ENiagaraCollisionMode
	 */
	enum class ENiagaraCollisionMode : uint8_t
	{
		None          = 0,
		SceneGeometry = 1,
		DepthBuffer   = 2,
		DistanceField = 3,
		MAX           = 4
	};

	/**
	 * Enum Niagara.ENiagaraBaseTypes
	 */
	enum class ENiagaraBaseTypes : uint8_t
	{
		Half  = 0,
		Float = 1,
		Int32 = 2,
		Bool  = 3,
		Max   = 4
	};

	/**
	 * Enum Niagara.ENiagaraGpuBufferFormat
	 */
	enum class ENiagaraGpuBufferFormat : uint8_t
	{
		Float                  = 0,
		HalfFloat              = 1,
		UnsignedNormalizedByte = 2,
		Max                    = 3
	};

	/**
	 * Enum Niagara.ENiagaraGpuSyncMode
	 */
	enum class ENiagaraGpuSyncMode : uint8_t
	{
		None         = 0,
		SyncCpuToGpu = 1,
		SyncGpuToCpu = 2,
		SyncBoth     = 3,
		MAX          = 4
	};

	/**
	 * Enum Niagara.ENiagaraMipMapGeneration
	 */
	enum class ENiagaraMipMapGeneration : uint8_t
	{
		Disabled     = 0,
		PostStage    = 1,
		PostSimulate = 2,
		MAX          = 3
	};

	/**
	 * Enum Niagara.ENiagaraDefaultMode
	 */
	enum class ENiagaraDefaultMode : uint8_t
	{
		Value                  = 0,
		Binding                = 1,
		Custom                 = 2,
		FailIfPreviouslyNotSet = 3,
		MAX                    = 4
	};

	/**
	 * Enum Niagara.ENiagaraDefaultRendererMotionVectorSetting
	 */
	enum class ENiagaraDefaultRendererMotionVectorSetting : uint8_t
	{
		Precise     = 0,
		Approximate = 1,
		MAX         = 2
	};

	/**
	 * Enum Niagara.ENiagaraRendererMotionVectorSetting
	 */
	enum class ENiagaraRendererMotionVectorSetting : uint8_t
	{
		AutoDetect  = 0,
		Precise     = 1,
		Approximate = 2,
		Disable     = 3,
		MAX         = 4
	};

	/**
	 * Enum Niagara.ENiagaraSimTarget
	 */
	enum class ENiagaraSimTarget : uint8_t
	{
		CPUSim        = 0,
		GPUComputeSim = 1,
		MAX           = 2
	};

	/**
	 * Enum Niagara.ENiagaraAgeUpdateMode
	 */
	enum class ENiagaraAgeUpdateMode : uint8_t
	{
		TickDeltaTime    = 0,
		DesiredAge       = 1,
		DesiredAgeNoSeek = 2,
		MAX              = 3
	};

	/**
	 * Enum Niagara.ENiagaraStatEvaluationType
	 */
	enum class ENiagaraStatEvaluationType : uint8_t
	{
		Average = 0,
		Maximum = 1,
		MAX     = 2
	};

	/**
	 * Enum Niagara.ENiagaraStatDisplayMode
	 */
	enum class ENiagaraStatDisplayMode : uint8_t
	{
		Percent  = 0,
		Absolute = 1,
		MAX      = 2
	};

	/**
	 * Enum Niagara.ENiagaraDataSetType
	 */
	enum class ENiagaraDataSetType : uint8_t
	{
		ParticleData = 0,
		Shared       = 1,
		Event        = 2,
		MAX          = 3
	};

	/**
	 * Enum Niagara.ENiagaraInputNodeUsage
	 */
	enum class ENiagaraInputNodeUsage : uint8_t
	{
		Undefined               = 0,
		Parameter               = 1,
		Attribute               = 2,
		SystemConstant          = 3,
		TranslatorConstant      = 4,
		RapidIterationParameter = 5,
		MAX                     = 6
	};

	/**
	 * Enum Niagara.ENiagaraScriptCompileStatus
	 */
	enum class ENiagaraScriptCompileStatus : uint8_t
	{
		NCS_Unknown                     = 0,
		NCS_Dirty                       = 1,
		NCS_Error                       = 2,
		NCS_UpToDate                    = 3,
		NCS_BeingCreated                = 4,
		NCS_UpToDateWithWarnings        = 5,
		NCS_ComputeUpToDateWithWarnings = 6,
		NCS_MAX                         = 7
	};

	/**
	 * Enum Niagara.ENiagaraScriptUsage
	 */
	enum class ENiagaraScriptUsage : uint8_t
	{
		Function                        = 0,
		Module                          = 1,
		DynamicInput                    = 2,
		ParticleSpawnScript             = 3,
		ParticleSpawnScriptInterpolated = 4,
		ParticleUpdateScript            = 5,
		ParticleEventScript             = 6,
		ParticleSimulationStageScript   = 7,
		ParticleGPUComputeScript        = 8,
		EmitterSpawnScript              = 9,
		EmitterUpdateScript             = 10,
		SystemSpawnScript               = 11,
		SystemUpdateScript              = 12,
		MAX                             = 13
	};

	/**
	 * Enum Niagara.ENiagaraCompileUsageStaticSwitch
	 */
	enum class ENiagaraCompileUsageStaticSwitch : uint8_t
	{
		Spawn           = 0,
		Update          = 1,
		Event           = 2,
		SimulationStage = 3,
		Default         = 4,
		MAX             = 5
	};

	/**
	 * Enum Niagara.ENiagaraScriptContextStaticSwitch
	 */
	enum class ENiagaraScriptContextStaticSwitch : uint8_t
	{
		System   = 0,
		Emitter  = 1,
		Particle = 2,
		MAX      = 3
	};

	/**
	 * Enum Niagara.ENiagaraScriptGroup
	 */
	enum class ENiagaraScriptGroup : uint8_t
	{
		Particle = 0,
		Emitter  = 1,
		System   = 2,
		Max      = 3
	};

	/**
	 * Enum Niagara.ENiagaraBindingSource
	 */
	enum class ENiagaraBindingSource : uint8_t
	{
		ImplicitFromSource = 0,
		ExplicitParticles  = 1,
		ExplicitEmitter    = 2,
		ExplicitSystem     = 3,
		ExplicitUser       = 4,
		MaxBindingSource   = 5,
		MAX                = 6
	};

	/**
	 * Enum Niagara.ENiagaraRendererSourceDataMode
	 */
	enum class ENiagaraRendererSourceDataMode : uint8_t
	{
		Particles = 0,
		Emitter   = 1,
		MAX       = 2
	};

	/**
	 * Enum Niagara.ENiagaraLegacyTrailWidthMode
	 */
	enum class ENiagaraLegacyTrailWidthMode : uint8_t
	{
		FromCentre = 0,
		FromFirst  = 1,
		FromSecond = 2,
		MAX        = 3
	};

	/**
	 * Enum Niagara.ENiagaraSystemInstanceState
	 */
	enum class ENiagaraSystemInstanceState : uint8_t
	{
		None               = 0,
		PendingSpawn       = 1,
		PendingSpawnPaused = 2,
		Spawning           = 3,
		Running            = 4,
		Paused             = 5,
		Num                = 6,
		MAX                = 7
	};

	/**
	 * Enum Niagara.ENiagaraFunctionDebugState
	 */
	enum class ENiagaraFunctionDebugState : uint8_t
	{
		NoDebug = 0,
		Basic   = 1,
		MAX     = 2
	};

	/**
	 * Enum Niagara.ENiagaraGpuComputeTickStage
	 */
	enum class ENiagaraGpuComputeTickStage : uint8_t
	{
		PreInitViews     = 0,
		PostInitViews    = 1,
		PostOpaqueRender = 2,
		Max              = 3,
		First            = 4,
		Last             = 5
	};

	/**
	 * Enum Niagara.ENCPoolMethod
	 */
	enum class ENCPoolMethod : uint8_t
	{
		None                     = 0,
		AutoRelease              = 1,
		ManualRelease            = 2,
		ManualRelease_OnComplete = 3,
		FreeInPool               = 4,
		MAX                      = 5
	};

	/**
	 * Enum Niagara.ENiagaraDataChannelAllocationMode
	 */
	enum class ENiagaraDataChannelAllocationMode : uint8_t
	{
		Static = 0,
		MAX    = 1
	};

	/**
	 * Enum Niagara.ENiagaraSortMode
	 */
	enum class ENiagaraSortMode : uint8_t
	{
		None            = 0,
		ViewDepth       = 1,
		ViewDistance    = 2,
		CustomAscending = 3,
		CustomDecending = 4,
		MAX             = 5
	};

	/**
	 * Enum Niagara.ENDISkelMesh_GpuMaxInfluences
	 */
	enum class ENDISkelMesh_GpuMaxInfluences : uint8_t
	{
		AllowMax4        = 0,
		AllowMax8        = 1,
		Unlimited        = 2,
		ENDISkelMesh_MAX = 3
	};

	/**
	 * Enum Niagara.ENDISkelMesh_GpuUniformSamplingFormat
	 */
	enum class ENDISkelMesh_GpuUniformSamplingFormat : uint8_t
	{
		Full             = 0,
		Limited_24       = 1,
		Limited_23       = 2,
		ENDISkelMesh_MAX = 3
	};

	/**
	 * Enum Niagara.ENDISkelMesh_AdjacencyTriangleIndexFormat
	 */
	enum class ENDISkelMesh_AdjacencyTriangleIndexFormat : uint8_t
	{
		Full             = 0,
		Half             = 1,
		ENDISkelMesh_MAX = 2
	};

	/**
	 * Enum Niagara.ENiagaraDefaultRendererPixelCoverageMode
	 */
	enum class ENiagaraDefaultRendererPixelCoverageMode : uint8_t
	{
		Enabled  = 0,
		Disabled = 1,
		MAX      = 2
	};

	/**
	 * Enum Niagara.ENiagaraDefaultSortPrecision
	 */
	enum class ENiagaraDefaultSortPrecision : uint8_t
	{
		Low  = 0,
		High = 1,
		MAX  = 2
	};

	/**
	 * Enum Niagara.ENiagaraDefaultGpuTranslucentLatency
	 */
	enum class ENiagaraDefaultGpuTranslucentLatency : uint8_t
	{
		Immediate = 0,
		Latent    = 1,
		MAX       = 2
	};

	/**
	 * Enum Niagara.ENDICollisionQuery_AsyncGpuTraceProvider
	 */
	enum class ENDICollisionQuery_AsyncGpuTraceProvider : uint8_t
	{
		Default                = 0,
		HWRT                   = 1,
		GSDF                   = 2,
		None                   = 3,
		ENDICollisionQuery_MAX = 4
	};

	/**
	 * Enum Niagara.ENiagaraTickBehavior
	 */
	enum class ENiagaraTickBehavior : uint8_t
	{
		UsePrereqs            = 0,
		UseComponentTickGroup = 1,
		ForceTickFirst        = 2,
		ForceTickLast         = 3,
		MAX                   = 4
	};

	/**
	 * Enum Niagara.ENDIActorComponentSourceMode
	 */
	enum class ENDIActorComponentSourceMode : uint8_t
	{
		Default      = 0,
		AttachParent = 1,
		LocalPlayer  = 2,
		MAX          = 3
	};

	/**
	 * Enum Niagara.ENDIStaticMesh_SourceMode
	 */
	enum class ENDIStaticMesh_SourceMode : uint8_t
	{
		Default            = 0,
		Source             = 1,
		AttachParent       = 2,
		DefaultMeshOnly    = 3,
		ENDIStaticMesh_MAX = 4
	};

	/**
	 * Enum Niagara.ENiagaraSystemSpawnSectionStartBehavior
	 */
	enum class ENiagaraSystemSpawnSectionStartBehavior : uint8_t
	{
		Activate = 0,
		MAX      = 1
	};

	/**
	 * Enum Niagara.ENiagaraSystemSpawnSectionEvaluateBehavior
	 */
	enum class ENiagaraSystemSpawnSectionEvaluateBehavior : uint8_t
	{
		ActivateIfInactive = 0,
		None               = 1,
		MAX                = 2
	};

	/**
	 * Enum Niagara.ENiagaraSystemSpawnSectionEndBehavior
	 */
	enum class ENiagaraSystemSpawnSectionEndBehavior : uint8_t
	{
		SetSystemInactive = 0,
		Deactivate        = 1,
		None              = 2,
		MAX               = 3
	};

	/**
	 * Enum Niagara.ENiagaraCompilationState
	 */
	enum class ENiagaraCompilationState : uint8_t
	{
		CheckDDC         = 0,
		Precompile       = 1,
		StartCompileJob  = 2,
		AwaitResult      = 3,
		OptimizeByteCode = 4,
		ProcessResult    = 5,
		PutToDDC         = 6,
		Finished         = 7,
		Aborted          = 8,
		MAX              = 9
	};

	/**
	 * Enum Niagara.ENiagaraBakerViewMode
	 */
	enum class ENiagaraBakerViewMode : uint8_t
	{
		Perspective = 0,
		OrthoFront  = 1,
		OrthoBack   = 2,
		OrthoLeft   = 3,
		OrthoRight  = 4,
		OrthoTop    = 5,
		OrthoBottom = 6,
		Num         = 7,
		MAX         = 8
	};

	/**
	 * Enum Niagara.ENiagaraDataInterfaceEmitterBindingMode
	 */
	enum class ENiagaraDataInterfaceEmitterBindingMode : uint8_t
	{
		Self  = 0,
		Other = 1,
		MAX   = 2
	};

	/**
	 * Enum Niagara.ENDIExport_GPUAllocationMode
	 */
	enum class ENDIExport_GPUAllocationMode : uint8_t
	{
		FixedSize      = 0,
		PerParticle    = 1,
		ENDIExport_MAX = 2
	};

	/**
	 * Enum Niagara.ENDILandscape_SourceMode
	 */
	enum class ENDILandscape_SourceMode : uint8_t
	{
		Default           = 0,
		Source            = 1,
		AttachParent      = 2,
		ENDILandscape_MAX = 3
	};

	/**
	 * Enum Niagara.ESetResolutionMethod
	 */
	enum class ESetResolutionMethod : uint8_t
	{
		Independent = 0,
		MaxAxis     = 1,
		CellSize    = 2,
		MAX         = 3
	};

	/**
	 * Enum Niagara.ENDISkeletalMesh_SourceMode
	 */
	enum class ENDISkeletalMesh_SourceMode : uint8_t
	{
		Default              = 0,
		Source               = 1,
		AttachParent         = 2,
		ENDISkeletalMesh_MAX = 3
	};

	/**
	 * Enum Niagara.ENDISkeletalMesh_SkinningMode
	 */
	enum class ENDISkeletalMesh_SkinningMode : uint8_t
	{
		Invalid              = 0,
		None                 = 1,
		SkinOnTheFly         = 2,
		PreSkin              = 3,
		ENDISkeletalMesh_MAX = 4
	};

	/**
	 * Enum Niagara.ENiagaraDebugPlaybackMode
	 */
	enum class ENiagaraDebugPlaybackMode : uint8_t
	{
		Play   = 0,
		Loop   = 1,
		Paused = 2,
		Step   = 3,
		MAX    = 4
	};

	/**
	 * Enum Niagara.ENiagaraDebugHudHAlign
	 */
	enum class ENiagaraDebugHudHAlign : uint8_t
	{
		Left   = 0,
		Center = 1,
		Right  = 2,
		MAX    = 3
	};

	/**
	 * Enum Niagara.ENiagaraDebugHudVAlign
	 */
	enum class ENiagaraDebugHudVAlign : uint8_t
	{
		Top    = 0,
		Center = 1,
		Bottom = 2,
		MAX    = 3
	};

	/**
	 * Enum Niagara.ENiagaraDebugHudFont
	 */
	enum class ENiagaraDebugHudFont : uint8_t
	{
		Small  = 0,
		Normal = 1,
		MAX    = 2
	};

	/**
	 * Enum Niagara.ENiagaraDebugHudVerbosity
	 */
	enum class ENiagaraDebugHudVerbosity : uint8_t
	{
		None    = 0,
		Basic   = 1,
		Verbose = 2,
		MAX     = 3
	};

	/**
	 * Enum Niagara.ENiagaraDebugHUDOverviewMode
	 */
	enum class ENiagaraDebugHUDOverviewMode : uint8_t
	{
		Overview              = 0,
		Scalability           = 1,
		Performance           = 2,
		GpuComputePerformance = 3,
		MAX                   = 4
	};

	/**
	 * Enum Niagara.ENiagaraDebugHUDPerfGraphMode
	 */
	enum class ENiagaraDebugHUDPerfGraphMode : uint8_t
	{
		None         = 0,
		GameThread   = 1,
		RenderThread = 2,
		GPU          = 3,
		MAX          = 4
	};

	/**
	 * Enum Niagara.ENiagaraDebugHUDPerfSampleMode
	 */
	enum class ENiagaraDebugHUDPerfSampleMode : uint8_t
	{
		FrameTotal         = 0,
		PerInstanceAverage = 1,
		MAX                = 2
	};

	/**
	 * Enum Niagara.ENiagaraCullReaction
	 */
	enum class ENiagaraCullReaction : uint8_t
	{
		Deactivate                = 0,
		DeactivateImmediate       = 1,
		DeactivateResume          = 2,
		DeactivateImmediateResume = 3,
		MAX                       = 4
	};

	/**
	 * Enum Niagara.ENiagaraScalabilityUpdateFrequency
	 */
	enum class ENiagaraScalabilityUpdateFrequency : uint8_t
	{
		SpawnOnly  = 0,
		Low        = 1,
		Medium     = 2,
		High       = 3,
		Continuous = 4,
		MAX        = 5
	};

	/**
	 * Enum Niagara.ENiagaraCullProxyMode
	 */
	enum class ENiagaraCullProxyMode : uint8_t
	{
		None               = 0,
		Instanced_Rendered = 1,
		MAX                = 2
	};

	/**
	 * Enum Niagara.EScriptExecutionMode
	 */
	enum class EScriptExecutionMode : uint8_t
	{
		EveryParticle    = 0,
		SpawnedParticles = 1,
		SingleParticle   = 2,
		MAX              = 3
	};

	/**
	 * Enum Niagara.EParticleAllocationMode
	 */
	enum class EParticleAllocationMode : uint8_t
	{
		AutomaticEstimate = 0,
		ManualEstimate    = 1,
		FixedCount        = 2,
		MAX               = 3
	};

	/**
	 * Enum Niagara.ENiagaraEmitterCalculateBoundMode
	 */
	enum class ENiagaraEmitterCalculateBoundMode : uint8_t
	{
		Dynamic      = 0,
		Fixed        = 1,
		Programmable = 2,
		MAX          = 3
	};

	/**
	 * Enum Niagara.ENiagaraMeshFacingMode
	 */
	enum class ENiagaraMeshFacingMode : uint8_t
	{
		Default        = 0,
		Velocity       = 1,
		CameraPosition = 2,
		CameraPlane    = 3,
		MAX            = 4
	};

	/**
	 * Enum Niagara.ENiagaraMeshPivotOffsetSpace
	 */
	enum class ENiagaraMeshPivotOffsetSpace : uint8_t
	{
		Mesh       = 0,
		Simulation = 1,
		World      = 2,
		Local      = 3,
		MAX        = 4
	};

	/**
	 * Enum Niagara.ENiagaraMeshLockedAxisSpace
	 */
	enum class ENiagaraMeshLockedAxisSpace : uint8_t
	{
		Simulation = 0,
		World      = 1,
		Local      = 2,
		MAX        = 3
	};

	/**
	 * Enum Niagara.ENiagaraPlatformSelectionState
	 */
	enum class ENiagaraPlatformSelectionState : uint8_t
	{
		Default  = 0,
		Enabled  = 1,
		Disabled = 2,
		MAX      = 3
	};

	/**
	 * Enum Niagara.ENiagaraPlatformSetState
	 */
	enum class ENiagaraPlatformSetState : uint8_t
	{
		Disabled = 0,
		Enabled  = 1,
		Active   = 2,
		Unknown  = 3,
		MAX      = 4
	};

	/**
	 * Enum Niagara.ENiagaraCVarConditionResponse
	 */
	enum class ENiagaraCVarConditionResponse : uint8_t
	{
		None    = 0,
		Enable  = 1,
		Disable = 2,
		MAX     = 3
	};

	/**
	 * Enum Niagara.ENiagaraDeviceProfileRedirectMode
	 */
	enum class ENiagaraDeviceProfileRedirectMode : uint8_t
	{
		CVar          = 0,
		DeviceProfile = 1,
		MAX           = 2
	};

	/**
	 * Enum Niagara.ENiagaraPreviewGridResetMode
	 */
	enum class ENiagaraPreviewGridResetMode : uint8_t
	{
		Never      = 0,
		Individual = 1,
		All        = 2,
		MAX        = 3
	};

	/**
	 * Enum Niagara.ENiagaraRendererSortPrecision
	 */
	enum class ENiagaraRendererSortPrecision : uint8_t
	{
		Default = 0,
		Low     = 1,
		High    = 2,
		MAX     = 3
	};

	/**
	 * Enum Niagara.ENiagaraRendererGpuTranslucentLatency
	 */
	enum class ENiagaraRendererGpuTranslucentLatency : uint8_t
	{
		ProjectDefault = 0,
		Immediate      = 1,
		Latent         = 2,
		MAX            = 3
	};

	/**
	 * Enum Niagara.ENiagaraRibbonFacingMode
	 */
	enum class ENiagaraRibbonFacingMode : uint8_t
	{
		Screen           = 0,
		Custom           = 1,
		CustomSideVector = 2,
		MAX              = 3
	};

	/**
	 * Enum Niagara.ENiagaraRibbonAgeOffsetMode
	 */
	enum class ENiagaraRibbonAgeOffsetMode : uint8_t
	{
		Scale = 0,
		Clip  = 1,
		MAX   = 2
	};

	/**
	 * Enum Niagara.ENiagaraRibbonDrawDirection
	 */
	enum class ENiagaraRibbonDrawDirection : uint8_t
	{
		FrontToBack = 0,
		BackToFront = 1,
		MAX         = 2
	};

	/**
	 * Enum Niagara.ENiagaraRibbonShapeMode
	 */
	enum class ENiagaraRibbonShapeMode : uint8_t
	{
		Plane      = 0,
		MultiPlane = 1,
		Tube       = 2,
		Custom     = 3,
		MAX        = 4
	};

	/**
	 * Enum Niagara.ENiagaraRibbonTessellationMode
	 */
	enum class ENiagaraRibbonTessellationMode : uint8_t
	{
		Automatic = 0,
		Custom    = 1,
		Disabled  = 2,
		MAX       = 3
	};

	/**
	 * Enum Niagara.ENiagaraRibbonUVEdgeMode
	 */
	enum class ENiagaraRibbonUVEdgeMode : uint8_t
	{
		SmoothTransition = 0,
		Locked           = 1,
		MAX              = 2
	};

	/**
	 * Enum Niagara.ENiagaraRibbonUVDistributionMode
	 */
	enum class ENiagaraRibbonUVDistributionMode : uint8_t
	{
		ScaledUniformly                = 0,
		ScaledUsingRibbonSegmentLength = 1,
		TiledOverRibbonLength          = 2,
		TiledFromStartOverRibbonLength = 3,
		MAX                            = 4
	};

	/**
	 * Enum Niagara.EUnusedAttributeBehaviour
	 */
	enum class EUnusedAttributeBehaviour : uint8_t
	{
		Copy        = 0,
		Zero        = 1,
		None        = 2,
		MarkInvalid = 3,
		PassThrough = 4,
		MAX         = 5
	};

	/**
	 * Enum Niagara.ENiagaraModuleDependencyType
	 */
	enum class ENiagaraModuleDependencyType : uint8_t
	{
		PreDependency  = 0,
		PostDependency = 1,
		MAX            = 2
	};

	/**
	 * Enum Niagara.ENiagaraModuleDependencyScriptConstraint
	 */
	enum class ENiagaraModuleDependencyScriptConstraint : uint8_t
	{
		SameScript = 0,
		AllScripts = 1,
		MAX        = 2
	};

	/**
	 * Enum Niagara.ENiagaraScriptLibraryVisibility
	 */
	enum class ENiagaraScriptLibraryVisibility : uint8_t
	{
		Invalid   = 0,
		Unexposed = 1,
		Library   = 2,
		Hidden    = 3,
		MAX       = 4
	};

	/**
	 * Enum Niagara.ENiagaraScriptTemplateSpecification
	 */
	enum class ENiagaraScriptTemplateSpecification : uint8_t
	{
		None     = 0,
		Template = 1,
		Behavior = 2,
		MAX      = 3
	};

	/**
	 * Enum Niagara.ENiagaraModuleDependencyUsage
	 */
	enum class ENiagaraModuleDependencyUsage : uint8_t
	{
		None            = 0,
		Spawn           = 1,
		Update          = 2,
		Event           = 3,
		SimulationStage = 4,
		MAX             = 5
	};

	/**
	 * Enum Niagara.ENiagaraSpriteAlignment
	 */
	enum class ENiagaraSpriteAlignment : uint8_t
	{
		Unaligned       = 0,
		VelocityAligned = 1,
		CustomAlignment = 2,
		MAX             = 3
	};

	/**
	 * Enum Niagara.ENiagaraSpriteFacingMode
	 */
	enum class ENiagaraSpriteFacingMode : uint8_t
	{
		FaceCamera              = 0,
		FaceCameraPlane         = 1,
		CustomFacingVector      = 2,
		FaceCameraPosition      = 3,
		FaceCameraDistanceBlend = 4,
		MAX                     = 5
	};

	/**
	 * Enum Niagara.ENiagaraRendererPixelCoverageMode
	 */
	enum class ENiagaraRendererPixelCoverageMode : uint8_t
	{
		Automatic    = 0,
		Disabled     = 1,
		Enabled      = 2,
		Enabled_RGBA = 3,
		Enabled_RGB  = 4,
		Enabled_A    = 5,
		MAX          = 6
	};

	/**
	 * Enum Niagara.ENiagaraStructConversionType
	 */
	enum class ENiagaraStructConversionType : uint8_t
	{
		CopyOnly      = 0,
		DoubleToFloat = 1,
		Vector2       = 2,
		Vector3       = 3,
		Vector4       = 4,
		Quat          = 5,
		MAX           = 6
	};

	/**
	 * Enum Niagara.ENiagaraNumericOutputTypeSelectionMode
	 */
	enum class ENiagaraNumericOutputTypeSelectionMode : uint8_t
	{
		None     = 0,
		Largest  = 1,
		Smallest = 2,
		Scalar   = 3,
		Custom   = 4,
		MAX      = 5
	};

	/**
	 * Enum Niagara.ENiagaraExecutionStateSource
	 */
	enum class ENiagaraExecutionStateSource : uint8_t
	{
		Scalability        = 0,
		Internal           = 1,
		Owner              = 2,
		InternalCompletion = 3,
		MAX                = 4
	};

	/**
	 * Enum Niagara.ENiagaraExecutionState
	 */
	enum class ENiagaraExecutionState : uint8_t
	{
		Active        = 0,
		Inactive      = 1,
		InactiveClear = 2,
		Complete      = 3,
		Disabled      = 4,
		Num           = 5,
		MAX           = 6
	};

	/**
	 * Enum Niagara.ENiagaraCoordinateSpace
	 */
	enum class ENiagaraCoordinateSpace : uint8_t
	{
		Simulation = 0,
		World      = 1,
		Local      = 2,
		MAX        = 3
	};

	/**
	 * Enum Niagara.ENiagaraPythonUpdateScriptReference
	 */
	enum class ENiagaraPythonUpdateScriptReference : uint8_t
	{
		None            = 0,
		ScriptAsset     = 1,
		DirectTextEntry = 2,
		MAX             = 3
	};

	/**
	 * Enum Niagara.ENiagaraOrientationAxis
	 */
	enum class ENiagaraOrientationAxis : uint8_t
	{
		XAxis = 0,
		YAxis = 1,
		ZAxis = 2,
		MAX   = 3
	};

	/**
	 * Enum Niagara.ENiagaraBoolDisplayMode
	 */
	enum class ENiagaraBoolDisplayMode : uint8_t
	{
		DisplayAlways  = 0,
		DisplayIfTrue  = 1,
		DisplayIfFalse = 2,
		MAX            = 3
	};

	/**
	 * Enum Niagara.ENiagaraValidationSeverity
	 */
	enum class ENiagaraValidationSeverity : uint8_t
	{
		Info    = 0,
		Warning = 1,
		Error   = 2,
		MAX     = 3
	};

	/**
	 * Enum Niagara.ENiagaraVariantMode
	 */
	enum class ENiagaraVariantMode : uint8_t
	{
		None          = 0,
		Object        = 1,
		DataInterface = 2,
		Bytes         = 3,
		MAX           = 4
	};

	/**
	 * Enum Niagara.EVolumeCacheType
	 */
	enum class EVolumeCacheType : uint8_t
	{
		OpenVDB = 0,
		MAX     = 1
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct Niagara.NDIRenderTargetVolumeSimCacheFrame
	 * Size -> 0x0048
	 */
	struct FNDIRenderTargetVolumeSimCacheFrame
	{
	public:
		struct FIntVector                                          Size;                                                    // 0x0000(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EPixelFormat                                               Format;                                                  // 0x000C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UER9[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    UncompressedSize;                                        // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    CompressedSize;                                          // 0x0014(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_E82B[0x30];                                  // 0x0018(0x0030) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Niagara.NiagaraTypeDefinitionHandle
	 * Size -> 0x0004
	 */
	struct FNiagaraTypeDefinitionHandle
	{
	public:
		int32_t                                                    RegisteredTypeIndex;                                     // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct Niagara.NiagaraVariableBase
	 * Size -> 0x000C
	 */
	struct FNiagaraVariableBase
	{
	public:
		class FName                                                Name;                                                    // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FNiagaraTypeDefinitionHandle                        TypeDefHandle;                                           // 0x0008(0x0004) Edit, NoDestructor, Protected, NativeAccessSpecifierProtected
	};

	/**
	 * ScriptStruct Niagara.NiagaraVariable
	 * Size -> 0x0014 (FullSize[0x0020] - InheritedSize[0x000C])
	 */
	struct FNiagaraVariable : public FNiagaraVariableBase
	{
	public:
		unsigned char                                              UnknownData_Q6XG[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<unsigned char>                                      VarData;                                                 // 0x0010(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct Niagara.NiagaraTypeLayoutInfo
	 * Size -> 0x0060
	 */
	struct FNiagaraTypeLayoutInfo
	{
	public:
		TArray<uint32_t>                                           FloatComponentByteOffsets;                               // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<uint32_t>                                           FloatComponentRegisterOffsets;                           // 0x0010(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<uint32_t>                                           Int32ComponentByteOffsets;                               // 0x0020(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<uint32_t>                                           Int32ComponentRegisterOffsets;                           // 0x0030(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<uint32_t>                                           HalfComponentByteOffsets;                                // 0x0040(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<uint32_t>                                           HalfComponentRegisterOffsets;                            // 0x0050(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Niagara.NiagaraVariableLayoutInfo
	 * Size -> 0x0070
	 */
	struct FNiagaraVariableLayoutInfo
	{
	public:
		uint32_t                                                   FloatComponentStart;                                     // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   Int32ComponentStart;                                     // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   HalfComponentStart;                                      // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AI1J[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FNiagaraTypeLayoutInfo                              LayoutInfo;                                              // 0x0010(0x0060) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Niagara.NiagaraDataSetID
	 * Size -> 0x000C
	 */
	struct FNiagaraDataSetID
	{
	public:
		class FName                                                Name;                                                    // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ENiagaraDataSetType                                        Type;                                                    // 0x0008(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TX2J[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Niagara.NiagaraDataSetCompiledData
	 * Size -> 0x0048
	 */
	struct FNiagaraDataSetCompiledData
	{
	public:
		TArray<struct FNiagaraVariable>                            Variables;                                               // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FNiagaraVariableLayoutInfo>                  VariableLayouts;                                         // 0x0010(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		struct FNiagaraDataSetID                                   ID;                                                      // 0x0020(0x000C) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   TotalFloatComponents;                                    // 0x002C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   TotalInt32Components;                                    // 0x0030(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   TotalHalfComponents;                                     // 0x0034(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bRequiresPersistentIDs : 1;                              // 0x0038(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_H6GG[0x3];                                   // 0x0039(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		ENiagaraSimTarget                                          SimTarget;                                               // 0x003C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BX8S[0xB];                                   // 0x003D(0x000B) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Niagara.NiagaraStructConversionStep
	 * Size -> 0x0014
	 */
	struct FNiagaraStructConversionStep
	{
	public:
		int32_t                                                    LWCBytes;                                                // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    LWCOffset;                                               // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SimulationBytes;                                         // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SimulationOffset;                                        // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ENiagaraStructConversionType                               ConversionType;                                          // 0x0010(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QTHF[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Niagara.NiagaraLwcStructConverter
	 * Size -> 0x0018
	 */
	struct FNiagaraLwcStructConverter
	{
	public:
		int32_t                                                    LWCSize;                                                 // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		int32_t                                                    SWCSize;                                                 // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<struct FNiagaraStructConversionStep>                ConversionSteps;                                         // 0x0008(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct Niagara.NiagaraDataChannelGameDataLayout
	 * Size -> 0x0060
	 */
	struct FNiagaraDataChannelGameDataLayout
	{
	public:
		TMap<struct FNiagaraVariableBase, int32_t>                 VariableIndices;                                         // 0x0000(0x0050) NativeAccessSpecifierPublic
		TArray<struct FNiagaraLwcStructConverter>                  LwcConverters;                                           // 0x0050(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Niagara.NiagaraDataChannelReference
	 * Size -> 0x0008
	 */
	struct FNiagaraDataChannelReference
	{
	public:
		class FName                                                ChannelName;                                             // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Niagara.NDIDataChannelFunctionInfo
	 * Size -> 0x0028
	 */
	struct FNDIDataChannelFunctionInfo
	{
	public:
		class FName                                                FunctionName;                                            // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FNiagaraVariableBase>                        Inputs;                                                  // 0x0008(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FNiagaraVariableBase>                        Outputs;                                                 // 0x0018(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Niagara.NDIDataChannel_GPUScriptParameterAccessInfo
	 * Size -> 0x0010
	 */
	struct FNDIDataChannel_GPUScriptParameterAccessInfo
	{
	public:
		TArray<struct FNiagaraVariableBase>                        SortedParameters;                                        // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Niagara.NDIDataChannelCompiledData
	 * Size -> 0x0068
	 */
	struct FNDIDataChannelCompiledData
	{
	public:
		TArray<struct FNDIDataChannelFunctionInfo>                 FunctionInfo;                                            // 0x0000(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		TMap<struct FNiagaraCompileHash, struct FNDIDataChannel_GPUScriptParameterAccessInfo> GPUScriptParameterInfos;                                 // 0x0010(0x0050) Protected, NativeAccessSpecifierProtected
		uint32_t                                                   TotalParams;                                             // 0x0060(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bUsedByCPU;                                              // 0x0064(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bUsedByGPU;                                              // 0x0065(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_F28X[0x2];                                   // 0x0066(0x0002) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Niagara.NiagaraDataInterfaceEmitterBinding
	 * Size -> 0x000C
	 */
	struct FNiagaraDataInterfaceEmitterBinding
	{
	public:
		ENiagaraDataInterfaceEmitterBindingMode                    BindingMode;                                             // 0x0000(0x0001) ELEMENT_SIZE_MISMATCH Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VFG7[0x3];                                   // 0x0001(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		class FName                                                EmitterName;                                             // 0x0004(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Niagara.NDIDataChannelWriteCompiledData
	 * Size -> 0x0048 (FullSize[0x00B0] - InheritedSize[0x0068])
	 */
	struct FNDIDataChannelWriteCompiledData : public FNDIDataChannelCompiledData
	{
	public:
		struct FNiagaraDataSetCompiledData                         DataLayout;                                              // 0x0068(0x0048) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Niagara.NiagaraPlatformSetCVarCondition
	 * Size -> 0x0030
	 */
	struct FNiagaraPlatformSetCVarCondition
	{
	public:
		class FName                                                CVarName;                                                // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ENiagaraCVarConditionResponse                              PassResponse;                                            // 0x0008(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ENiagaraCVarConditionResponse                              FailResponse;                                            // 0x0009(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Value;                                                   // 0x000A(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PSSV[0x1];                                   // 0x000B(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    MinInt;                                                  // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxInt;                                                  // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinFloat;                                                // 0x0014(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxFloat;                                                // 0x0018(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseMinInt : 1;                                          // 0x001C(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseMaxInt : 1;                                          // 0x001C(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseMinFloat : 1;                                        // 0x001C(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseMaxFloat : 1;                                        // 0x001C(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1RZD[0x13];                                  // 0x001D(0x0013) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Niagara.NiagaraPlatformSetRedirect
	 * Size -> 0x0080
	 */
	struct FNiagaraPlatformSetRedirect
	{
	public:
		TArray<class FName>                                        ProfileNames;                                            // 0x0000(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		ENiagaraDeviceProfileRedirectMode                          Mode;                                                    // 0x0010(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6D73[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                RedirectProfileName;                                     // 0x0014(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0VB4[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FNiagaraPlatformSetCVarCondition                    CVarConditionEnabled;                                    // 0x0020(0x0030) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FNiagaraPlatformSetCVarCondition                    CVarConditionDisabled;                                   // 0x0050(0x0030) Edit, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Niagara.NiagaraUserParameterBinding
	 * Size -> 0x0020
	 */
	struct FNiagaraUserParameterBinding
	{
	public:
		struct FNiagaraVariable                                    Parameter;                                               // 0x0000(0x0020) Edit, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Niagara.NiagaraDynamicMeshSection
	 * Size -> 0x0008
	 */
	struct FNiagaraDynamicMeshSection
	{
	public:
		int32_t                                                    NumTriangles;                                            // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaterialIndex;                                           // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Niagara.NiagaraDynamicMeshMaterial
	 * Size -> 0x0028
	 */
	struct FNiagaraDynamicMeshMaterial
	{
	public:
		class UMaterialInterface*                                  Material;                                                // 0x0000(0x0008) Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FNiagaraUserParameterBinding                        MaterialUserParamBinding;                                // 0x0008(0x0020) Edit, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Niagara.NDIStaticMeshSectionFilter
	 * Size -> 0x0010
	 */
	struct FNDIStaticMeshSectionFilter
	{
	public:
		TArray<int32_t>                                            AllowedMaterialSlots;                                    // 0x0000(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Niagara.NiagaraUObjectPropertyReaderRemap
	 * Size -> 0x0010
	 */
	struct FNiagaraUObjectPropertyReaderRemap
	{
	public:
		class FName                                                GraphName;                                               // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                RemapName;                                               // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Niagara.NiagaraSimCacheCreateParameters
	 * Size -> 0x0058
	 */
	struct FNiagaraSimCacheCreateParameters
	{
	public:
		ENiagaraSimCacheAttributeCaptureMode                       AttributeCaptureMode;                                    // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GF32[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bAllowRebasing : 1;                                      // 0x0004(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAllowDataInterfaceCaching : 1;                          // 0x0004(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAllowInterpolation : 1;                                 // 0x0004(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAllowVelocityExtrapolation : 1;                         // 0x0004(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2OG2[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FName>                                        RebaseIncludeAttributes;                                 // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class FName>                                        RebaseExcludeAttributes;                                 // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class FName>                                        InterpolationIncludeAttributes;                          // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class FName>                                        InterpolationExcludeAttributes;                          // 0x0038(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class FName>                                        ExplicitCaptureAttributes;                               // 0x0048(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Niagara.NiagaraBakerTextureSource
	 * Size -> 0x0018
	 */
	struct FNiagaraBakerTextureSource
	{
	public:
		class FString                                              DisplayString;                                           // 0x0000(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                SourceName;                                              // 0x0010(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Niagara.NiagaraBakerCameraSettings
	 * Size -> 0x0050
	 */
	struct FNiagaraBakerCameraSettings
	{
	public:
		ENiagaraBakerViewMode                                      ViewMode;                                                // 0x0000(0x0001) ELEMENT_SIZE_MISMATCH ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TZI3[0x3];                                   // 0x0001(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		unsigned char                                              UnknownData_N59X[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             ViewportLocation;                                        // 0x0008(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator                                            ViewportRotation;                                        // 0x0020(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		float                                                      OrbitDistance;                                           // 0x0038(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FOV;                                                     // 0x003C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      OrthoWidth;                                              // 0x0040(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseAspectRatio;                                         // 0x0044(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MEGW[0x3];                                   // 0x0045(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      AspectRatio;                                             // 0x0048(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5VZB[0x4];                                   // 0x004C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Niagara.NiagaraBakerTextureSettings
	 * Size -> 0x0040
	 */
	struct FNiagaraBakerTextureSettings
	{
	public:
		class FName                                                OutputName;                                              // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FNiagaraBakerTextureSource                          SourceBinding;                                           // 0x0008(0x0018) Edit, NativeAccessSpecifierPublic
		bool                                                       bUseFrameSize : 1;                                       // 0x0020(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VQHV[0x3];                                   // 0x0021(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FIntPoint                                           FrameSize;                                               // 0x0024(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FIntPoint                                           TextureSize;                                             // 0x002C(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7ZMC[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTexture2D*                                          GeneratedTexture;                                        // 0x0038(0x0008) Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Niagara.NiagaraVariableWithOffset
	 * Size -> 0x001C (FullSize[0x0028] - InheritedSize[0x000C])
	 */
	struct FNiagaraVariableWithOffset : public FNiagaraVariableBase
	{
	public:
		int32_t                                                    Offset;                                                  // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FNiagaraLwcStructConverter                          StructConverter;                                         // 0x0010(0x0018) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Niagara.NiagaraPositionSource
	 * Size -> 0x0020
	 */
	struct FNiagaraPositionSource
	{
	public:
		class FName                                                Name;                                                    // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Value;                                                   // 0x0008(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Niagara.NiagaraParameterStore
	 * Size -> 0x0088
	 */
	struct FNiagaraParameterStore
	{
	public:
		unsigned char                                              UnknownData_2Q3G[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TWeakObjectPtr<class UObject>                              Owner;                                                   // 0x0008(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<struct FNiagaraVariableWithOffset>                  SortedParameterOffsets;                                  // 0x0010(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		TArray<unsigned char>                                      ParameterData;                                           // 0x0020(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		TArray<class UNiagaraDataInterface*>                       DataInterfaces;                                          // 0x0030(0x0010) ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPrivate
		TArray<class UObject*>                                     UObjects;                                                // 0x0040(0x0010) ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPrivate
		TArray<struct FNiagaraPositionSource>                      OriginalPositionData;                                    // 0x0050(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_CP22[0x28];                                  // 0x0060(0x0028) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Niagara.NiagaraUserRedirectionParameterStore
	 * Size -> 0x0050 (FullSize[0x00D8] - InheritedSize[0x0088])
	 */
	struct FNiagaraUserRedirectionParameterStore : public FNiagaraParameterStore
	{
	public:
		TMap<struct FNiagaraVariable, struct FNiagaraVariable>     UserParameterRedirects;                                  // 0x0088(0x0050) NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct Niagara.NCPoolElement
	 * Size -> 0x0010
	 */
	struct FNCPoolElement
	{
	public:
		class UNiagaraComponent*                                   Component;                                               // 0x0000(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SNO5[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Niagara.NCPool
	 * Size -> 0x0010
	 */
	struct FNCPool
	{
	public:
		TArray<struct FNCPoolElement>                              FreeElements;                                            // 0x0000(0x0010) ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Niagara.NiagaraDeviceProfileStateEntry
	 * Size -> 0x0010
	 */
	struct FNiagaraDeviceProfileStateEntry
	{
	public:
		class FName                                                ProfileName;                                             // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   QualityLevelMask;                                        // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   SetQualityLevelMask;                                     // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Niagara.NiagaraPlatformSet
	 * Size -> 0x0030
	 */
	struct FNiagaraPlatformSet
	{
	public:
		int32_t                                                    QualityLevelMask;                                        // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3NUC[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FNiagaraDeviceProfileStateEntry>             DeviceProfileStates;                                     // 0x0008(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FNiagaraPlatformSetCVarCondition>            CVarConditions;                                          // 0x0018(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TI7E[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Niagara.NiagaraVariableAttributeBinding
	 * Size -> 0x0058
	 */
	struct FNiagaraVariableAttributeBinding
	{
	public:
		struct FNiagaraVariableBase                                ParamMapVariable;                                        // 0x0000(0x000C) NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_YU8R[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FNiagaraVariable                                    DataSetVariable;                                         // 0x0010(0x0020) Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FNiagaraVariable                                    RootVariable;                                            // 0x0030(0x0020) Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		ENiagaraBindingSource                                      BindingSourceMode;                                       // 0x0050(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_NGM1[0x3];                                   // 0x0051(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bBindingExistsOnSource : 1;                              // 0x0054(0x0001) BIT_FIELD NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bIsCachedParticleValue : 1;                              // 0x0054(0x0001) BIT_FIELD NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_13UZ[0x3];                                   // 0x0055(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Niagara.NiagaraTypeDefinition
	 * Size -> 0x0010
	 */
	struct FNiagaraTypeDefinition
	{
	public:
		class UObject*                                             ClassStructOrEnum;                                       // 0x0000(0x0008) Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint16_t                                                   UnderlyingType;                                          // 0x0008(0x0002) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              Flags;                                                   // 0x000A(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_TEN4[0x5];                                   // 0x000B(0x0005) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Niagara.NiagaraComponentPropertyBinding
	 * Size -> 0x00C8
	 */
	struct FNiagaraComponentPropertyBinding
	{
	public:
		struct FNiagaraVariableAttributeBinding                    AttributeBinding;                                        // 0x0000(0x0058) NativeAccessSpecifierPublic
		class FName                                                PropertyName;                                            // 0x0058(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FNiagaraTypeDefinition                              PropertyType;                                            // 0x0060(0x0010) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                MetadataSetterName;                                      // 0x0070(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TMap<class FString, class FString>                         PropertySetterParameterDefaults;                         // 0x0078(0x0050) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Niagara.NiagaraCulledComponentInfo
	 * Size -> 0x0008
	 */
	struct FNiagaraCulledComponentInfo
	{
	public:
		unsigned char                                              UnknownData_5WNT[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Niagara.NiagaraPosition
	 * Size -> 0x0000 (FullSize[0x000C] - InheritedSize[0x000C])
	 */
	struct FNiagaraPosition : public FVector3f
	{	};

	/**
	 * ScriptStruct Niagara.NiagaraID
	 * Size -> 0x0008
	 */
	struct FNiagaraID
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    AcquireTag;                                              // 0x0004(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Niagara.NiagaraDebugHUDVariable
	 * Size -> 0x0018
	 */
	struct FNiagaraDebugHUDVariable
	{
	public:
		bool                                                       bEnabled;                                                // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LMHG[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Name;                                                    // 0x0008(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Niagara.NiagaraDebugHudTextOptions
	 * Size -> 0x0018
	 */
	struct FNiagaraDebugHudTextOptions
	{
	public:
		ENiagaraDebugHudFont                                       Font;                                                    // 0x0000(0x0001) ELEMENT_SIZE_MISMATCH Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QS4G[0x3];                                   // 0x0001(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		ENiagaraDebugHudHAlign                                     HorizontalAlignment;                                     // 0x0004(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ENiagaraDebugHudVAlign                                     VerticalAlignment;                                       // 0x0005(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GX66[0x2];                                   // 0x0006(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector2D                                           ScreenOffset;                                            // 0x0008(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Niagara.NiagaraDebugHUDSettingsData
	 * Size -> 0x0238
	 */
	struct FNiagaraDebugHUDSettingsData
	{
	public:
		bool                                                       bHudEnabled;                                             // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bHudRenderingEnabled;                                    // 0x0001(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bValidateSystemSimulationDataBuffers;                    // 0x0002(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bValidateParticleDataBuffers;                            // 0x0003(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOverviewEnabled;                                        // 0x0004(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SFEK[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		ENiagaraDebugHUDOverviewMode                               OverviewMode;                                            // 0x0008(0x0001) ELEMENT_SIZE_MISMATCH Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_06YC[0x3];                                   // 0x0009(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		ENiagaraDebugHudFont                                       OverviewFont;                                            // 0x000C(0x0001) ELEMENT_SIZE_MISMATCH Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YY10[0x3];                                   // 0x000D(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		struct FVector2D                                           OverviewLocation;                                        // 0x0010(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShowRegisteredComponents;                               // 0x0020(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOverviewShowFilteredSystemOnly;                         // 0x0021(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0IAX[0x6];                                   // 0x0022(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              ActorFilter;                                             // 0x0028(0x0010) Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bComponentFilterEnabled;                                 // 0x0038(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_B89E[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              ComponentFilter;                                         // 0x0040(0x0010) Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSystemFilterEnabled;                                    // 0x0050(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5GSA[0x7];                                   // 0x0051(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              SystemFilter;                                            // 0x0058(0x0010) Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEmitterFilterEnabled;                                   // 0x0068(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QMA9[0x7];                                   // 0x0069(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              EmitterFilter;                                           // 0x0070(0x0010) Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bActorFilterEnabled;                                     // 0x0080(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_I5KY[0x3];                                   // 0x0081(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		ENiagaraDebugHudVerbosity                                  SystemDebugVerbosity;                                    // 0x0084(0x0001) ELEMENT_SIZE_MISMATCH Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_J6OK[0x3];                                   // 0x0085(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		ENiagaraDebugHudVerbosity                                  SystemEmitterVerbosity;                                  // 0x0088(0x0001) ELEMENT_SIZE_MISMATCH Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_G12Q[0x3];                                   // 0x0089(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		ENiagaraDebugHudVerbosity                                  DataInterfaceVerbosity;                                  // 0x008C(0x0001) ELEMENT_SIZE_MISMATCH Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_K0B7[0x3];                                   // 0x008D(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		bool                                                       bSystemShowBounds;                                       // 0x0090(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0QGO[0x3];                                   // 0x0091(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      SystemBoundsSolidBoxAlpha;                               // 0x0094(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSystemShowActiveOnlyInWorld;                            // 0x0098(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShowSystemVariables;                                    // 0x0099(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YUSL[0x6];                                   // 0x009A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FNiagaraDebugHUDVariable>                    SystemVariables;                                         // 0x00A0(0x0010) Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic
		struct FNiagaraDebugHudTextOptions                         SystemTextOptions;                                       // 0x00B0(0x0018) Edit, Config, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bShowParticleVariables;                                  // 0x00C8(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnableGpuParticleReadback;                              // 0x00C9(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShowParticleIndex;                                      // 0x00CA(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ROO4[0x5];                                   // 0x00CB(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FNiagaraDebugHUDVariable>                    ParticlesVariables;                                      // 0x00D0(0x0010) Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic
		struct FNiagaraDebugHudTextOptions                         ParticleTextOptions;                                     // 0x00E0(0x0018) Edit, Config, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bShowParticlesVariablesWithSystem;                       // 0x00F8(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShowParticleVariablesVertical;                          // 0x00F9(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseMaxParticlesToDisplay;                               // 0x00FA(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseParticleDisplayClip;                                 // 0x00FB(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4ODE[0x4];                                   // 0x00FC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector2D                                           ParticleDisplayClip;                                     // 0x0100(0x0010) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseParticleDisplayCenterRadius;                         // 0x0110(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7ZWB[0x3];                                   // 0x0111(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ParticleDisplayCenterRadius;                             // 0x0114(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxParticlesToDisplay;                                   // 0x0118(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    PerfReportFrames;                                        // 0x011C(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ENiagaraDebugHUDPerfSampleMode                             PerfSampleMode;                                          // 0x0120(0x0001) ELEMENT_SIZE_MISMATCH Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PVRM[0x3];                                   // 0x0121(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		ENiagaraDebugHUDPerfGraphMode                              PerfGraphMode;                                           // 0x0124(0x0001) ELEMENT_SIZE_MISMATCH Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5759[0x3];                                   // 0x0125(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		int32_t                                                    PerfHistoryFrames;                                       // 0x0128(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PerfGraphTimeRange;                                      // 0x012C(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           PerfGraphSize;                                           // 0x0130(0x0010) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        PerfGraphAxisColor;                                      // 0x0140(0x0010) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnableSmoothing;                                        // 0x0150(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SBZS[0x3];                                   // 0x0151(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    SmoothingWidth;                                          // 0x0154(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        DefaultBackgroundColor;                                  // 0x0158(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        OverviewHeadingColor;                                    // 0x0168(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        OverviewDetailColor;                                     // 0x0178(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        OverviewDetailHighlightColor;                            // 0x0188(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        InWorldErrorTextColor;                                   // 0x0198(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        InWorldTextColor;                                        // 0x01A8(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        MessageInfoTextColor;                                    // 0x01B8(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        MessageWarningTextColor;                                 // 0x01C8(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        MessageErrorTextColor;                                   // 0x01D8(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SystemColorTableOpacity;                                 // 0x01E8(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   SystemColorSeed;                                         // 0x01EC(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             SystemColorHSVMin;                                       // 0x01F0(0x0018) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             SystemColorHSVMax;                                       // 0x0208(0x0018) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ENiagaraDebugPlaybackMode                                  PlaybackMode;                                            // 0x0220(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPlaybackRateEnabled;                                    // 0x0221(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TXGK[0x2];                                   // 0x0222(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      PlaybackRate;                                            // 0x0224(0x0004) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bLoopTimeEnabled;                                        // 0x0228(0x0001) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_G8H7[0x3];                                   // 0x0229(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      LoopTime;                                                // 0x022C(0x0004) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShowGlobalBudgetInfo;                                   // 0x0230(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HKQC[0x7];                                   // 0x0231(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Niagara.NiagaraParameterBinding
	 * Size -> 0x000C
	 */
	struct FNiagaraParameterBinding
	{
	public:
		struct FNiagaraVariableBase                                Parameter;                                               // 0x0000(0x000C) Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Niagara.NiagaraMaterialAttributeBinding
	 * Size -> 0x002C
	 */
	struct FNiagaraMaterialAttributeBinding
	{
	public:
		class FName                                                MaterialParameterName;                                   // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FNiagaraVariableBase                                NiagaraVariable;                                         // 0x0008(0x000C) Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FNiagaraVariableBase                                ResolvedNiagaraVariable;                                 // 0x0014(0x000C) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FNiagaraVariableBase                                NiagaraChildVariable;                                    // 0x0020(0x000C) Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Niagara.NiagaraRendererMaterialScalarParameter
	 * Size -> 0x000C
	 */
	struct FNiagaraRendererMaterialScalarParameter
	{
	public:
		class FName                                                MaterialParameterName;                                   // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Value;                                                   // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Niagara.NiagaraRendererMaterialVectorParameter
	 * Size -> 0x0018
	 */
	struct FNiagaraRendererMaterialVectorParameter
	{
	public:
		class FName                                                MaterialParameterName;                                   // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        Value;                                                   // 0x0008(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Niagara.NiagaraRendererMaterialTextureParameter
	 * Size -> 0x0010
	 */
	struct FNiagaraRendererMaterialTextureParameter
	{
	public:
		class FName                                                MaterialParameterName;                                   // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTexture*                                            Texture;                                                 // 0x0008(0x0008) Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Niagara.NiagaraRendererMaterialStaticBoolParameter
	 * Size -> 0x0010
	 */
	struct FNiagaraRendererMaterialStaticBoolParameter
	{
	public:
		class FName                                                MaterialParameterName;                                   // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                StaticVariableName;                                      // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Niagara.NiagaraRendererMaterialParameters
	 * Size -> 0x0050
	 */
	struct FNiagaraRendererMaterialParameters
	{
	public:
		TArray<struct FNiagaraMaterialAttributeBinding>            AttributeBindings;                                       // 0x0000(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FNiagaraRendererMaterialScalarParameter>     ScalarParameters;                                        // 0x0010(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FNiagaraRendererMaterialVectorParameter>     VectorParameters;                                        // 0x0020(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FNiagaraRendererMaterialTextureParameter>    TextureParameters;                                       // 0x0030(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FNiagaraRendererMaterialStaticBoolParameter> StaticBoolParameters;                                    // 0x0040(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Niagara.NiagaraSystemVisibilityCullingSettings
	 * Size -> 0x000C
	 */
	struct FNiagaraSystemVisibilityCullingSettings
	{
	public:
		bool                                                       bCullWhenNotRendered : 1;                                // 0x0000(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCullByViewFrustum : 1;                                  // 0x0000(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAllowPreCullingByViewFrustum : 1;                       // 0x0000(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AMXH[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MaxTimeOutsideViewFrustum;                               // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxTimeWithoutRender;                                    // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Niagara.NiagaraLinearRamp
	 * Size -> 0x0010
	 */
	struct FNiagaraLinearRamp
	{
	public:
		float                                                      StartX;                                                  // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      StartY;                                                  // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      EndX;                                                    // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      EndY;                                                    // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Niagara.NiagaraGlobalBudgetScaling
	 * Size -> 0x0038
	 */
	struct FNiagaraGlobalBudgetScaling
	{
	public:
		bool                                                       bCullByGlobalBudget : 1;                                 // 0x0000(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bScaleMaxDistanceByGlobalBudgetUse : 1;                  // 0x0000(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bScaleMaxInstanceCountByGlobalBudgetUse : 1;             // 0x0000(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bScaleSystemInstanceCountByGlobalBudgetUse : 1;          // 0x0000(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PFQF[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MaxGlobalBudgetUsage;                                    // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FNiagaraLinearRamp                                  MaxDistanceScaleByGlobalBudgetUse;                       // 0x0008(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FNiagaraLinearRamp                                  MaxInstanceCountScaleByGlobalBudgetUse;                  // 0x0018(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FNiagaraLinearRamp                                  MaxSystemInstanceCountScaleByGlobalBudgetUse;            // 0x0028(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Niagara.NiagaraSystemScalabilitySettings
	 * Size -> 0x0098
	 */
	struct FNiagaraSystemScalabilitySettings
	{
	public:
		struct FNiagaraPlatformSet                                 Platforms;                                               // 0x0000(0x0030) Edit, NativeAccessSpecifierPublic
		bool                                                       bCullByDistance : 1;                                     // 0x0030(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCullMaxInstanceCount : 1;                               // 0x0030(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCullPerSystemMaxInstanceCount : 1;                      // 0x0030(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MXMQ[0x3];                                   // 0x0031(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MaxDistance;                                             // 0x0034(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCullByMaxTimeWithoutRender : 1;                         // 0x0038(0x0001) BIT_FIELD Deprecated, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0V8W[0x3];                                   // 0x0039(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    MaxInstances;                                            // 0x003C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxSystemInstances;                                      // 0x0040(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxTimeWithoutRender;                                    // 0x0044(0x0004) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ENiagaraCullProxyMode                                      CullProxyMode;                                           // 0x0048(0x0001) ELEMENT_SIZE_MISMATCH Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AW35[0x3];                                   // 0x0049(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		int32_t                                                    MaxSystemProxies;                                        // 0x004C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FNiagaraSystemVisibilityCullingSettings             VisibilityCulling;                                       // 0x0050(0x000C) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FNiagaraGlobalBudgetScaling                         BudgetScaling;                                           // 0x005C(0x0038) Edit, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LXRS[0x4];                                   // 0x0094(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Niagara.NiagaraSystemScalabilitySettingsArray
	 * Size -> 0x0010
	 */
	struct FNiagaraSystemScalabilitySettingsArray
	{
	public:
		TArray<struct FNiagaraSystemScalabilitySettings>           Settings;                                                // 0x0000(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Niagara.NiagaraEmitterScalabilitySettings
	 * Size -> 0x0038
	 */
	struct FNiagaraEmitterScalabilitySettings
	{
	public:
		struct FNiagaraPlatformSet                                 Platforms;                                               // 0x0000(0x0030) Edit, NativeAccessSpecifierPublic
		bool                                                       bScaleSpawnCount : 1;                                    // 0x0030(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9K2G[0x3];                                   // 0x0031(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      SpawnCountScale;                                         // 0x0034(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Niagara.NiagaraEmitterScalabilitySettingsArray
	 * Size -> 0x0010
	 */
	struct FNiagaraEmitterScalabilitySettingsArray
	{
	public:
		TArray<struct FNiagaraEmitterScalabilitySettings>          Settings;                                                // 0x0000(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Niagara.NiagaraPerfBaselineStats
	 * Size -> 0x0010
	 */
	struct FNiagaraPerfBaselineStats
	{
	public:
		float                                                      PerInstanceAvg_GT;                                       // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PerInstanceAvg_RT;                                       // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PerInstanceMax_GT;                                       // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PerInstanceMax_RT;                                       // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Niagara.NiagaraAssetVersion
	 * Size -> 0x001C
	 */
	struct FNiagaraAssetVersion
	{
	public:
		int32_t                                                    MajorVersion;                                            // 0x0000(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MinorVersion;                                            // 0x0004(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGuid                                               VersionGuid;                                             // 0x0008(0x0010) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsVisibleInVersionSelector;                             // 0x0018(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GJY3[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Niagara.NiagaraEventReceiverProperties
	 * Size -> 0x0018
	 */
	struct FNiagaraEventReceiverProperties
	{
	public:
		class FName                                                Name;                                                    // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                SourceEventGenerator;                                    // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                SourceEmitter;                                           // 0x0010(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Niagara.NiagaraEventGeneratorProperties
	 * Size -> 0x0058
	 */
	struct FNiagaraEventGeneratorProperties
	{
	public:
		int32_t                                                    MaxEventsPerFrame;                                       // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                ID;                                                      // 0x0004(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_97ZW[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FNiagaraDataSetCompiledData                         DataSetCompiledData;                                     // 0x0010(0x0048) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Niagara.NiagaraEmitterScriptProperties
	 * Size -> 0x0028
	 */
	struct FNiagaraEmitterScriptProperties
	{
	public:
		class UNiagaraScript*                                      Script;                                                  // 0x0000(0x0008) ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FNiagaraEventReceiverProperties>             EventReceivers;                                          // 0x0008(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FNiagaraEventGeneratorProperties>            EventGenerators;                                         // 0x0018(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Niagara.NiagaraEventScriptProperties
	 * Size -> 0x0030 (FullSize[0x0058] - InheritedSize[0x0028])
	 */
	struct FNiagaraEventScriptProperties : public FNiagaraEmitterScriptProperties
	{
	public:
		EScriptExecutionMode                                       ExecutionMode;                                           // 0x0028(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JBWC[0x3];                                   // 0x0029(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		uint32_t                                                   SpawnNumber;                                             // 0x002C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   MaxEventsPerFrame;                                       // 0x0030(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGuid                                               SourceEmitterID;                                         // 0x0034(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                SourceEventName;                                         // 0x0044(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bRandomSpawnNumber;                                      // 0x004C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NEFG[0x3];                                   // 0x004D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		uint32_t                                                   MinSpawnNumber;                                          // 0x0050(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       UpdateAttributeInitialValues;                            // 0x0054(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CTDP[0x3];                                   // 0x0055(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Niagara.NiagaraEmitterScalabilityOverride
	 * Size -> 0x0008 (FullSize[0x0040] - InheritedSize[0x0038])
	 */
	struct FNiagaraEmitterScalabilityOverride : public FNiagaraEmitterScalabilitySettings
	{
	public:
		bool                                                       bOverrideSpawnCountScale : 1;                            // 0x0038(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_320B[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Niagara.NiagaraEmitterScalabilityOverrides
	 * Size -> 0x0010
	 */
	struct FNiagaraEmitterScalabilityOverrides
	{
	public:
		TArray<struct FNiagaraEmitterScalabilityOverride>          Overrides;                                               // 0x0000(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Niagara.VersionedNiagaraEmitterData
	 * Size -> 0x02E8
	 */
	struct FVersionedNiagaraEmitterData
	{
	public:
		struct FNiagaraAssetVersion                                Version;                                                 // 0x0000(0x001C) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDeprecated;                                             // 0x001C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BCRK[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                DeprecationMessage;                                      // 0x0020(0x0018) NativeAccessSpecifierPublic
		bool                                                       bLocalSpace;                                             // 0x0038(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDeterminism;                                            // 0x0039(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CPJH[0x2];                                   // 0x003A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    RandomSeed;                                              // 0x003C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bInterpolatedSpawning : 1;                               // 0x0040(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DQQ4[0x3];                                   // 0x0041(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		ENiagaraSimTarget                                          SimTarget;                                               // 0x0044(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ENiagaraEmitterCalculateBoundMode                          CalculateBoundsMode;                                     // 0x0045(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QPW7[0x2];                                   // 0x0046(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FBox                                                FixedBounds;                                             // 0x0048(0x0038) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bRequiresPersistentIDs : 1;                              // 0x0080(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCombineEventSpawn : 1;                                  // 0x0080(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AX4E[0x7];                                   // 0x0081(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FNiagaraEventScriptProperties>               EventHandlerScriptProps;                                 // 0x0088(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		struct FNiagaraPlatformSet                                 Platforms;                                               // 0x0098(0x0030) Edit, NativeAccessSpecifierPublic
		struct FNiagaraEmitterScalabilityOverrides                 ScalabilityOverrides;                                    // 0x00C8(0x0010) Edit, NativeAccessSpecifierPublic
		bool                                                       bLimitDeltaTime : 1;                                     // 0x00D8(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_234K[0x3];                                   // 0x00D9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    MaxGPUParticlesSpawnPerFrame;                            // 0x00DC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxDeltaTimePerTick;                                     // 0x00E0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EParticleAllocationMode                                    AllocationMode;                                          // 0x00E4(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YJIY[0x3];                                   // 0x00E5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    PreAllocationCount;                                      // 0x00E8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KABG[0x4];                                   // 0x00EC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FNiagaraEmitterScriptProperties                     UpdateScriptProps;                                       // 0x00F0(0x0028) NativeAccessSpecifierPublic
		struct FNiagaraEmitterScriptProperties                     SpawnScriptProps;                                        // 0x0118(0x0028) NativeAccessSpecifierPublic
		struct FNiagaraParameterStore                              RendererBindings;                                        // 0x0140(0x0088) NativeAccessSpecifierPublic
		TArray<class UNiagaraRendererProperties*>                  RendererProperties;                                      // 0x01C8(0x0010) ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPrivate
		TArray<class UNiagaraSimulationStageBase*>                 SimulationStages;                                        // 0x01D8(0x0010) ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPrivate
		class UNiagaraScript*                                      GPUComputeScript;                                        // 0x01E8(0x0008) ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<class FName>                                        SharedEventGeneratorIds;                                 // 0x01F0(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		struct FNiagaraEmitterScalabilitySettings                  CurrentScalabilitySettings;                              // 0x0200(0x0038) Transient, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_39OY[0xB0];                                  // 0x0238(0x00B0) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Niagara.NiagaraMeshRendererMeshProperties
	 * Size -> 0x0068
	 */
	struct FNiagaraMeshRendererMeshProperties
	{
	public:
		class UStaticMesh*                                         Mesh;                                                    // 0x0000(0x0008) Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FNiagaraParameterBinding                            MeshParameterBinding;                                    // 0x0008(0x000C) Edit, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PVY9[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             Scale;                                                   // 0x0018(0x0018) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator                                            Rotation;                                                // 0x0030(0x0018) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FVector                                             PivotOffset;                                             // 0x0048(0x0018) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ENiagaraMeshPivotOffsetSpace                               PivotOffsetSpace;                                        // 0x0060(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_314Q[0x7];                                   // 0x0061(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Niagara.NiagaraMeshMaterialOverride
	 * Size -> 0x0028
	 */
	struct FNiagaraMeshMaterialOverride
	{
	public:
		class UMaterialInterface*                                  ExplicitMat;                                             // 0x0000(0x0008) Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FNiagaraUserParameterBinding                        UserParamBinding;                                        // 0x0008(0x0020) Edit, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Niagara.NiagaraMeshMICOverride
	 * Size -> 0x0010
	 */
	struct FNiagaraMeshMICOverride
	{
	public:
		class UMaterialInterface*                                  OriginalMaterial;                                        // 0x0000(0x0008) ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMaterialInstanceConstant*                           ReplacementMaterial;                                     // 0x0008(0x0008) ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Niagara.NiagaraRibbonUVSettings
	 * Size -> 0x0038
	 */
	struct FNiagaraRibbonUVSettings
	{
	public:
		ENiagaraRibbonUVDistributionMode                           DistributionMode;                                        // 0x0000(0x0001) ELEMENT_SIZE_MISMATCH Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0M9W[0x3];                                   // 0x0001(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		ENiagaraRibbonUVEdgeMode                                   LeadingEdgeMode;                                         // 0x0004(0x0001) ELEMENT_SIZE_MISMATCH Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3ZKC[0x3];                                   // 0x0005(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		ENiagaraRibbonUVEdgeMode                                   TrailingEdgeMode;                                        // 0x0008(0x0001) ELEMENT_SIZE_MISMATCH Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_C8S0[0x3];                                   // 0x0009(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		float                                                      TilingLength;                                            // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           Offset;                                                  // 0x0010(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           Scale;                                                   // 0x0020(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnablePerParticleUOverride;                             // 0x0030(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnablePerParticleVRangeOverride;                        // 0x0031(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TXQ7[0x6];                                   // 0x0032(0x0006) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Niagara.NiagaraRibbonShapeCustomVertex
	 * Size -> 0x0014
	 */
	struct FNiagaraRibbonShapeCustomVertex
	{
	public:
		struct FVector2f                                           Position;                                                // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2f                                           Normal;                                                  // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TextureV;                                                // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Niagara.NiagaraScriptExecutionPaddingInfo
	 * Size -> 0x0008
	 */
	struct FNiagaraScriptExecutionPaddingInfo
	{
	public:
		uint16_t                                                   SrcOffset;                                               // 0x0000(0x0002) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint16_t                                                   DestOffset;                                              // 0x0002(0x0002) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint16_t                                                   SrcSize;                                                 // 0x0004(0x0002) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint16_t                                                   DestSize;                                                // 0x0006(0x0002) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Niagara.NiagaraScriptExecutionParameterStore
	 * Size -> 0x0020 (FullSize[0x00A8] - InheritedSize[0x0088])
	 */
	struct FNiagaraScriptExecutionParameterStore : public FNiagaraParameterStore
	{
	public:
		int32_t                                                    ParameterSize;                                           // 0x0088(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   PaddedParameterSize;                                     // 0x008C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FNiagaraScriptExecutionPaddingInfo>          PaddingInfo;                                             // 0x0090(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       bInitialized : 1;                                        // 0x00A0(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WCY8[0x7];                                   // 0x00A1(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Niagara.NiagaraBoundParameter
	 * Size -> 0x0028
	 */
	struct FNiagaraBoundParameter
	{
	public:
		struct FNiagaraVariable                                    Parameter;                                               // 0x0000(0x0020) HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SrcOffset;                                               // 0x0020(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    DestOffset;                                              // 0x0024(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Niagara.NiagaraVMExecutableDataId
	 * Size -> 0x0058
	 */
	struct FNiagaraVMExecutableDataId
	{
	public:
		struct FGuid                                               CompilerVersionID;                                       // 0x0000(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ENiagaraScriptUsage                                        ScriptUsageType;                                         // 0x0010(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_W0NV[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGuid                                               ScriptUsageTypeID;                                       // 0x0014(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUsesRapidIterationParams : 1;                           // 0x0024(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDisableDebugSwitches : 1;                               // 0x0024(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bInterpolatedSpawn : 1;                                  // 0x0024(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bRequiresPersistentIDs : 1;                              // 0x0024(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HS6T[0x3];                                   // 0x0025(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGuid                                               BaseScriptID;                                            // 0x0028(0x0010) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FNiagaraCompileHash                                 BaseScriptCompileHash;                                   // 0x0038(0x0010) HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGuid                                               ScriptVersionID;                                         // 0x0048(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Niagara.NiagaraVMExecutableByteCode
	 * Size -> 0x0018
	 */
	struct FNiagaraVMExecutableByteCode
	{
	public:
		TArray<unsigned char>                                      Data;                                                    // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		int32_t                                                    UncompressedSize;                                        // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_MML9[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Niagara.NiagaraCompilerTag
	 * Size -> 0x0030
	 */
	struct FNiagaraCompilerTag
	{
	public:
		struct FNiagaraVariable                                    Variable;                                                // 0x0000(0x0020) HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              StringValue;                                             // 0x0020(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Niagara.NiagaraScriptDataUsageInfo
	 * Size -> 0x0001
	 */
	struct FNiagaraScriptDataUsageInfo
	{
	public:
		bool                                                       bReadsAttributeData;                                     // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Niagara.NiagaraScriptDataInterfaceCompileInfo
	 * Size -> 0x0038
	 */
	struct FNiagaraScriptDataInterfaceCompileInfo
	{
	public:
		class FName                                                Name;                                                    // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    UserPtrIdx;                                              // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2GQT[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FNiagaraTypeDefinition                              Type;                                                    // 0x0010(0x0010) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                RegisteredParameterMapRead;                              // 0x0020(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                RegisteredParameterMapWrite;                             // 0x0028(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsPlaceholder;                                          // 0x0030(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9DKE[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Niagara.VMFunctionSpecifier
	 * Size -> 0x0010
	 */
	struct FVMFunctionSpecifier
	{
	public:
		class FName                                                Key;                                                     // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                Value;                                                   // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Niagara.VMExternalFunctionBindingInfo
	 * Size -> 0x0058
	 */
	struct FVMExternalFunctionBindingInfo
	{
	public:
		class FName                                                Name;                                                    // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                OwnerName;                                               // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<bool>                                               InputParamLocations;                                     // 0x0010(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		int32_t                                                    NumOutputs;                                              // 0x0020(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IHJZ[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FVMFunctionSpecifier>                        FunctionSpecifiers;                                      // 0x0028(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FNiagaraVariableBase>                        VariadicInputs;                                          // 0x0038(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FNiagaraVariableBase>                        VariadicOutputs;                                         // 0x0048(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Niagara.NiagaraDataSetProperties
	 * Size -> 0x0020
	 */
	struct FNiagaraDataSetProperties
	{
	public:
		struct FNiagaraDataSetID                                   ID;                                                      // 0x0000(0x000C) Edit, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LKIU[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FNiagaraVariable>                            Variables;                                               // 0x0010(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Niagara.NiagaraStatScope
	 * Size -> 0x0010
	 */
	struct FNiagaraStatScope
	{
	public:
		class FName                                                FullName;                                                // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                FriendlyName;                                            // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Niagara.NiagaraVMExecutableData
	 * Size -> 0x0190
	 */
	struct FNiagaraVMExecutableData
	{
	public:
		struct FNiagaraVMExecutableByteCode                        ByteCode;                                                // 0x0000(0x0018) NativeAccessSpecifierPublic
		struct FNiagaraVMExecutableByteCode                        OptimizedByteCode;                                       // 0x0018(0x0018) Transient, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WORX[0x38];                                  // 0x0030(0x0038) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    NumTempRegisters;                                        // 0x0068(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NumUserPtrs;                                             // 0x006C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FNiagaraCompilerTag>                         CompileTags;                                             // 0x0070(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<unsigned char>                                      ScriptLiterals;                                          // 0x0080(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FNiagaraVariable>                            Attributes;                                              // 0x0090(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		struct FNiagaraScriptDataUsageInfo                         DataUsage;                                               // 0x00A0(0x0001) NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8UU9[0x7];                                   // 0x00A1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FNiagaraScriptDataInterfaceCompileInfo>      DataInterfaceInfo;                                       // 0x00A8(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FVMExternalFunctionBindingInfo>              CalledVMExternalFunctions;                               // 0x00B8(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_59PQ[0x10];                                  // 0x00C8(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FNiagaraDataSetID>                           ReadDataSets;                                            // 0x00D8(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FNiagaraDataSetProperties>                   WriteDataSets;                                           // 0x00E8(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FNiagaraStatScope>                           StatScopes;                                              // 0x00F8(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		struct FNiagaraShaderScriptParametersMetadata              ShaderScriptParametersMetadata;                          // 0x0108(0x0058) NativeAccessSpecifierPublic
		ENiagaraScriptCompileStatus                                LastCompileStatus;                                       // 0x0160(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_N5OI[0x7];                                   // 0x0161(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FSimulationStageMetaData>                    SimulationStageMetaData;                                 // 0x0168(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<unsigned char>                                      ExperimentalContextData;                                 // 0x0178(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       bReadsSignificanceIndex : 1;                             // 0x0188(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bNeedsGPUContextInit : 1;                                // 0x0188(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DWAQ[0x7];                                   // 0x0189(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Niagara.NiagaraScriptDataInterfaceInfo
	 * Size -> 0x0038
	 */
	struct FNiagaraScriptDataInterfaceInfo
	{
	public:
		class UNiagaraDataInterface*                               DataInterface;                                           // 0x0000(0x0008) ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                Name;                                                    // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    UserPtrIdx;                                              // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9WUV[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FNiagaraTypeDefinition                              Type;                                                    // 0x0018(0x0010) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                RegisteredParameterMapRead;                              // 0x0028(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                RegisteredParameterMapWrite;                             // 0x0030(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Niagara.NiagaraSimCacheVariable
	 * Size -> 0x0018
	 */
	struct FNiagaraSimCacheVariable
	{
	public:
		struct FNiagaraVariableBase                                Variable;                                                // 0x0000(0x000C) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint16_t                                                   FloatOffset;                                             // 0x000C(0x0002) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint16_t                                                   FloatCount;                                              // 0x000E(0x0002) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint16_t                                                   HalfOffset;                                              // 0x0010(0x0002) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint16_t                                                   HalfCount;                                               // 0x0012(0x0002) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint16_t                                                   Int32Offset;                                             // 0x0014(0x0002) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint16_t                                                   Int32Count;                                              // 0x0016(0x0002) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Niagara.NiagaraSimCacheDataBuffersLayout
	 * Size -> 0x00B8
	 */
	struct FNiagaraSimCacheDataBuffersLayout
	{
	public:
		class FName                                                LayoutName;                                              // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ENiagaraSimTarget                                          SimTarget;                                               // 0x0008(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_T83F[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FNiagaraSimCacheVariable>                    Variables;                                               // 0x0010(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		uint16_t                                                   FloatCount;                                              // 0x0020(0x0002) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint16_t                                                   HalfCount;                                               // 0x0022(0x0002) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint16_t                                                   Int32Count;                                              // 0x0024(0x0002) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bLocalSpace;                                             // 0x0026(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAllowInterpolation;                                     // 0x0027(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAllowVelocityExtrapolation;                             // 0x0028(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZNHK[0x7];                                   // 0x0029(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FName>                                        RebaseVariableNames;                                     // 0x0030(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class FName>                                        InterpVariableNames;                                     // 0x0040(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		uint16_t                                                   ComponentVelocity;                                       // 0x0050(0x0002) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GO2E[0x66];                                  // 0x0052(0x0066) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Niagara.NiagaraSimCacheLayout
	 * Size -> 0x00C8
	 */
	struct FNiagaraSimCacheLayout
	{
	public:
		struct FNiagaraSimCacheDataBuffersLayout                   SystemLayout;                                            // 0x0000(0x00B8) NativeAccessSpecifierPublic
		TArray<struct FNiagaraSimCacheDataBuffersLayout>           EmitterLayouts;                                          // 0x00B8(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Niagara.NiagaraSimCacheDataBuffers
	 * Size -> 0x0060
	 */
	struct FNiagaraSimCacheDataBuffers
	{
	public:
		uint32_t                                                   NumInstances;                                            // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JVS7[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<unsigned char>                                      FloatData;                                               // 0x0008(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<unsigned char>                                      HalfData;                                                // 0x0018(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<unsigned char>                                      Int32Data;                                               // 0x0028(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<int32_t>                                            IDToIndexTable;                                          // 0x0038(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		uint32_t                                                   IDAcquireTag;                                            // 0x0048(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SIP4[0x4];                                   // 0x004C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<uint32_t>                                           InterpMapping;                                           // 0x0050(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Niagara.NiagaraSimCacheSystemFrame
	 * Size -> 0x0098
	 */
	struct FNiagaraSimCacheSystemFrame
	{
	public:
		struct FBox                                                LocalBounds;                                             // 0x0000(0x0038) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FNiagaraSimCacheDataBuffers                         SystemDataBuffers;                                       // 0x0038(0x0060) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Niagara.NiagaraSimCacheEmitterFrame
	 * Size -> 0x00A0
	 */
	struct FNiagaraSimCacheEmitterFrame
	{
	public:
		struct FBox                                                LocalBounds;                                             // 0x0000(0x0038) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		int32_t                                                    TotalSpawnedParticles;                                   // 0x0038(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WSI6[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FNiagaraSimCacheDataBuffers                         ParticleDataBuffers;                                     // 0x0040(0x0060) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Niagara.NiagaraSimCacheFrame
	 * Size -> 0x0120
	 */
	struct FNiagaraSimCacheFrame
	{
	public:
		struct FTransform                                          LocalToWorld;                                            // 0x0000(0x0060) IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector3f                                           LWCTile;                                                 // 0x0060(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SimulationAge;                                           // 0x006C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FNiagaraSimCacheSystemFrame                         SystemData;                                              // 0x0070(0x0098) NativeAccessSpecifierPublic
		TArray<struct FNiagaraSimCacheEmitterFrame>                EmitterData;                                             // 0x0108(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KDIW[0x8];                                   // 0x0118(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Niagara.NiagaraVariableDataInterfaceBinding
	 * Size -> 0x0020
	 */
	struct FNiagaraVariableDataInterfaceBinding
	{
	public:
		struct FNiagaraVariable                                    BoundVariable;                                           // 0x0000(0x0020) HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Niagara.NiagaraSystemScalabilityOverride
	 * Size -> 0x0008 (FullSize[0x00A0] - InheritedSize[0x0098])
	 */
	struct FNiagaraSystemScalabilityOverride : public FNiagaraSystemScalabilitySettings
	{
	public:
		bool                                                       bOverrideDistanceSettings : 1;                           // 0x0098(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOverrideInstanceCountSettings : 1;                      // 0x0098(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOverridePerSystemInstanceCountSettings : 1;             // 0x0098(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOverrideVisibilitySettings : 1;                         // 0x0098(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOverrideGlobalBudgetScalingSettings : 1;                // 0x0098(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOverrideCullProxySettings : 1;                          // 0x0098(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7LDR[0x7];                                   // 0x0099(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Niagara.NiagaraSystemScalabilityOverrides
	 * Size -> 0x0010
	 */
	struct FNiagaraSystemScalabilityOverrides
	{
	public:
		TArray<struct FNiagaraSystemScalabilityOverride>           Overrides;                                               // 0x0000(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Niagara.VersionedNiagaraEmitter
	 * Size -> 0x0018
	 */
	struct FVersionedNiagaraEmitter
	{
	public:
		class UNiagaraEmitter*                                     Emitter;                                                 // 0x0000(0x0008) ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGuid                                               Version;                                                 // 0x0008(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Niagara.NiagaraEmitterHandle
	 * Size -> 0x0048
	 */
	struct FNiagaraEmitterHandle
	{
	public:
		struct FGuid                                               ID;                                                      // 0x0000(0x0010) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FName                                                IdName;                                                  // 0x0010(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bIsEnabled;                                              // 0x0018(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_R3LG[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                Name;                                                    // 0x001C(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_VVMY[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UNiagaraEmitter*                                     Instance;                                                // 0x0028(0x0008) ZeroConstructor, Deprecated, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FVersionedNiagaraEmitter                            VersionedInstance;                                       // 0x0030(0x0018) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct Niagara.NiagaraParameterDataSetBinding
	 * Size -> 0x0008
	 */
	struct FNiagaraParameterDataSetBinding
	{
	public:
		int32_t                                                    ParameterOffset;                                         // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    DataSetComponentOffset;                                  // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Niagara.NiagaraParameterDataSetBindingCollection
	 * Size -> 0x0020
	 */
	struct FNiagaraParameterDataSetBindingCollection
	{
	public:
		TArray<struct FNiagaraParameterDataSetBinding>             FloatOffsets;                                            // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FNiagaraParameterDataSetBinding>             Int32Offsets;                                            // 0x0010(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Niagara.NiagaraSystemCompiledData
	 * Size -> 0x0240
	 */
	struct FNiagaraSystemCompiledData
	{
	public:
		struct FNiagaraParameterStore                              InstanceParamStore;                                      // 0x0000(0x0088) NativeAccessSpecifierPublic
		struct FNiagaraDataSetCompiledData                         DataSetCompiledData;                                     // 0x0088(0x0048) NativeAccessSpecifierPublic
		struct FNiagaraDataSetCompiledData                         SpawnInstanceParamsDataSetCompiledData;                  // 0x00D0(0x0048) NativeAccessSpecifierPublic
		struct FNiagaraDataSetCompiledData                         UpdateInstanceParamsDataSetCompiledData;                 // 0x0118(0x0048) NativeAccessSpecifierPublic
		struct FNiagaraParameterDataSetBindingCollection           SpawnInstanceGlobalBinding;                              // 0x0160(0x0020) NativeAccessSpecifierPublic
		struct FNiagaraParameterDataSetBindingCollection           SpawnInstanceSystemBinding;                              // 0x0180(0x0020) NativeAccessSpecifierPublic
		struct FNiagaraParameterDataSetBindingCollection           SpawnInstanceOwnerBinding;                               // 0x01A0(0x0020) NativeAccessSpecifierPublic
		TArray<struct FNiagaraParameterDataSetBindingCollection>   SpawnInstanceEmitterBindings;                            // 0x01C0(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		struct FNiagaraParameterDataSetBindingCollection           UpdateInstanceGlobalBinding;                             // 0x01D0(0x0020) NativeAccessSpecifierPublic
		struct FNiagaraParameterDataSetBindingCollection           UpdateInstanceSystemBinding;                             // 0x01F0(0x0020) NativeAccessSpecifierPublic
		struct FNiagaraParameterDataSetBindingCollection           UpdateInstanceOwnerBinding;                              // 0x0210(0x0020) NativeAccessSpecifierPublic
		TArray<struct FNiagaraParameterDataSetBindingCollection>   UpdateInstanceEmitterBindings;                           // 0x0230(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Niagara.NiagaraFunctionSignature
	 * Size -> 0x0090
	 */
	struct FNiagaraFunctionSignature
	{
	public:
		class FName                                                Name;                                                    // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FNiagaraVariable>                            Inputs;                                                  // 0x0008(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FNiagaraVariable>                            Outputs;                                                 // 0x0018(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		class FName                                                OwnerName;                                               // 0x0028(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bRequiresContext : 1;                                    // 0x0030(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bRequiresExecPin : 1;                                    // 0x0030(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bMemberFunction : 1;                                     // 0x0030(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bExperimental : 1;                                       // 0x0030(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSupportsCPU : 1;                                        // 0x0030(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSupportsGPU : 1;                                        // 0x0030(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bWriteFunction : 1;                                      // 0x0030(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bReadFunction : 1;                                       // 0x0030(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSoftDeprecatedFunction : 1;                             // 0x0031(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsCompileTagGenerator : 1;                              // 0x0031(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bHidden : 1;                                             // 0x0031(0x0001) BIT_FIELD Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_37GG[0x2];                                   // 0x0032(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    ModuleUsageBitmask;                                      // 0x0034(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ContextStageIndex;                                       // 0x0038(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int16_t                                                    RequiredInputs;                                          // 0x003C(0x0002) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int16_t                                                    RequiredOutputs;                                         // 0x003E(0x0002) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TMap<class FName, class FName>                             FunctionSpecifiers;                                      // 0x0040(0x0050) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Niagara.NiagaraSystemUpdateContext
	 * Size -> 0x0078
	 */
	struct FNiagaraSystemUpdateContext
	{
	public:
		TArray<class UNiagaraComponent*>                           ComponentsToReset;                                       // 0x0000(0x0010) ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPrivate
		TArray<class UNiagaraComponent*>                           ComponentsToReInit;                                      // 0x0010(0x0010) ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPrivate
		TArray<class UNiagaraComponent*>                           ComponentsToNotifySimDestroy;                            // 0x0020(0x0010) ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPrivate
		TArray<class UNiagaraSystem*>                              SystemSimsToDestroy;                                     // 0x0030(0x0010) ZeroConstructor, Transient, UObjectWrapper, NativeAccessSpecifierPrivate
		TArray<class UNiagaraSystem*>                              SystemSimsToRecache;                                     // 0x0040(0x0010) ZeroConstructor, Transient, UObjectWrapper, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_OTZH[0x28];                                  // 0x0050(0x0028) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Niagara.NiagaraVariableInfo
	 * Size -> 0x0040
	 */
	struct FNiagaraVariableInfo
	{
	public:
		struct FNiagaraVariable                                    Variable;                                                // 0x0000(0x0020) HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FText                                                Definition;                                              // 0x0020(0x0018) NativeAccessSpecifierPublic
		class UNiagaraDataInterface*                               DataInterface;                                           // 0x0038(0x0008) ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Niagara.NiagaraScriptVariableBinding
	 * Size -> 0x0008
	 */
	struct FNiagaraScriptVariableBinding
	{
	public:
		class FName                                                Name;                                                    // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Niagara.NiagaraCompileDependency
	 * Size -> 0x0050
	 */
	struct FNiagaraCompileDependency
	{
	public:
		class FString                                              LinkerErrorMessage;                                      // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGuid                                               NodeGuid;                                                // 0x0010(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGuid                                               PinGuid;                                                 // 0x0020(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FGuid>                                       StackGuids;                                              // 0x0030(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		struct FNiagaraVariableBase                                DependentVariable;                                       // 0x0040(0x000C) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDependentVariableFromCustomIterationNamespace;          // 0x004C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8VEY[0x3];                                   // 0x004D(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Niagara.NiagaraCompileHashVisitorDebugInfo
	 * Size -> 0x0030
	 */
	struct FNiagaraCompileHashVisitorDebugInfo
	{
	public:
		class FString                                              Object;                                                  // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class FString>                                      PropertyKeys;                                            // 0x0010(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class FString>                                      PropertyValues;                                          // 0x0020(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Niagara.NiagaraScalabilityState
	 * Size -> 0x000C
	 */
	struct FNiagaraScalabilityState
	{
	public:
		float                                                      Significance;                                            // 0x0000(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LastVisibleTime;                                         // 0x0004(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8NI7[0x2];                                   // 0x0008(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bCulled : 1;                                             // 0x000A(0x0001) BIT_FIELD Edit, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPreviousCulled : 1;                                     // 0x000A(0x0001) BIT_FIELD Edit, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCulledByDistance : 1;                                   // 0x000A(0x0001) BIT_FIELD Edit, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCulledByInstanceCount : 1;                              // 0x000A(0x0001) BIT_FIELD Edit, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCulledByVisibility : 1;                                 // 0x000A(0x0001) BIT_FIELD Edit, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCulledByGlobalBudget : 1;                               // 0x000A(0x0001) BIT_FIELD Edit, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_26R1[0x1];                                   // 0x000B(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Niagara.NiagaraSimCacheCaptureParameters
	 * Size -> 0x0010
	 */
	struct FNiagaraSimCacheCaptureParameters
	{
	public:
		int32_t                                                    NumFrames;                                               // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    CaptureRate;                                             // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bManuallyAdvanceSimulation;                              // 0x0008(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WOD2[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      AdvanceDeltaTime;                                        // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Niagara.NiagaraStackSection
	 * Size -> 0x0038
	 */
	struct FNiagaraStackSection
	{
	public:
		class FName                                                SectionIdentifier;                                       // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FText                                                SectionDisplayName;                                      // 0x0008(0x0018) Edit, NativeAccessSpecifierPublic
		TArray<class FText>                                        Categories;                                              // 0x0020(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       bEnabled;                                                // 0x0030(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QI5H[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Niagara.MovieSceneNiagaraSystemTrackTemplate
	 * Size -> 0x0000 (FullSize[0x0020] - InheritedSize[0x0020])
	 */
	struct FMovieSceneNiagaraSystemTrackTemplate : public FMovieSceneEvalTemplate
	{	};

	/**
	 * ScriptStruct Niagara.MovieSceneNiagaraSystemTrackImplementation
	 * Size -> 0x0018 (FullSize[0x0028] - InheritedSize[0x0010])
	 */
	struct FMovieSceneNiagaraSystemTrackImplementation : public FMovieSceneTrackImplementation
	{
	public:
		struct FFrameNumber                                        SpawnSectionStartFrame;                                  // 0x0010(0x0004) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FFrameNumber                                        SpawnSectionEndFrame;                                    // 0x0014(0x0004) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		ENiagaraSystemSpawnSectionStartBehavior                    SpawnSectionStartBehavior;                               // 0x0018(0x0001) ELEMENT_SIZE_MISMATCH ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_5TJS[0x3];                                   // 0x0019(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		ENiagaraSystemSpawnSectionEvaluateBehavior                 SpawnSectionEvaluateBehavior;                            // 0x001C(0x0001) ELEMENT_SIZE_MISMATCH ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_7U3A[0x3];                                   // 0x001D(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		ENiagaraSystemSpawnSectionEndBehavior                      SpawnSectionEndBehavior;                                 // 0x0020(0x0001) ELEMENT_SIZE_MISMATCH ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_Q3QY[0x3];                                   // 0x0021(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		ENiagaraAgeUpdateMode                                      AgeUpdateMode;                                           // 0x0024(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bAllowScalability;                                       // 0x0025(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_WZMG[0x2];                                   // 0x0026(0x0002) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Niagara.MovieSceneNiagaraParameterSectionTemplate
	 * Size -> 0x0020 (FullSize[0x0040] - InheritedSize[0x0020])
	 */
	struct FMovieSceneNiagaraParameterSectionTemplate : public FMovieSceneEvalTemplate
	{
	public:
		struct FNiagaraVariable                                    Parameter;                                               // 0x0020(0x0020) HasGetValueTypeHash, NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct Niagara.MovieSceneNiagaraBoolParameterSectionTemplate
	 * Size -> 0x0100 (FullSize[0x0140] - InheritedSize[0x0040])
	 */
	struct FMovieSceneNiagaraBoolParameterSectionTemplate : public FMovieSceneNiagaraParameterSectionTemplate
	{
	public:
		struct FMovieSceneBoolChannel                              BoolChannel;                                             // 0x0040(0x0100) NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct Niagara.MovieSceneNiagaraColorParameterSectionTemplate
	 * Size -> 0x0440 (FullSize[0x0480] - InheritedSize[0x0040])
	 */
	struct FMovieSceneNiagaraColorParameterSectionTemplate : public FMovieSceneNiagaraParameterSectionTemplate
	{
	public:
		struct FMovieSceneFloatChannel                             RedChannel;                                              // 0x0040(0x0110) NativeAccessSpecifierPrivate
		struct FMovieSceneFloatChannel                             GreenChannel;                                            // 0x0150(0x0110) NativeAccessSpecifierPrivate
		struct FMovieSceneFloatChannel                             BlueChannel;                                             // 0x0260(0x0110) NativeAccessSpecifierPrivate
		struct FMovieSceneFloatChannel                             AlphaChannel;                                            // 0x0370(0x0110) NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct Niagara.MovieSceneNiagaraFloatParameterSectionTemplate
	 * Size -> 0x0110 (FullSize[0x0150] - InheritedSize[0x0040])
	 */
	struct FMovieSceneNiagaraFloatParameterSectionTemplate : public FMovieSceneNiagaraParameterSectionTemplate
	{
	public:
		struct FMovieSceneFloatChannel                             FloatChannel;                                            // 0x0040(0x0110) NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct Niagara.MovieSceneNiagaraIntegerParameterSectionTemplate
	 * Size -> 0x0100 (FullSize[0x0140] - InheritedSize[0x0040])
	 */
	struct FMovieSceneNiagaraIntegerParameterSectionTemplate : public FMovieSceneNiagaraParameterSectionTemplate
	{
	public:
		struct FMovieSceneIntegerChannel                           IntegerChannel;                                          // 0x0040(0x0100) NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct Niagara.MovieSceneNiagaraVectorParameterSectionTemplate
	 * Size -> 0x0448 (FullSize[0x0488] - InheritedSize[0x0040])
	 */
	struct FMovieSceneNiagaraVectorParameterSectionTemplate : public FMovieSceneNiagaraParameterSectionTemplate
	{
	public:
		struct FMovieSceneFloatChannel                             VectorChannels[0x4];                                     // 0x0040(0x0440) NativeAccessSpecifierPrivate
		int32_t                                                    ChannelsUsed;                                            // 0x0480(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_F7DT[0x4];                                   // 0x0484(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Niagara.EmitterCompiledScriptPair
	 * Size -> 0x00A0
	 */
	struct FEmitterCompiledScriptPair
	{
	public:
		unsigned char                                              UnknownData_3B6B[0xA0];                                  // 0x0000(0x00A0) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Niagara.BasicParticleData
	 * Size -> 0x0038
	 */
	struct FBasicParticleData
	{
	public:
		struct FVector                                             Position;                                                // 0x0000(0x0018) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Size;                                                    // 0x0018(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DG8C[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             Velocity;                                                // 0x0020(0x0018) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Niagara.MeshTriCoordinate
	 * Size -> 0x0010
	 */
	struct FMeshTriCoordinate
	{
	public:
		int32_t                                                    Tri;                                                     // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector3f                                           BaryCoord;                                               // 0x0004(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Niagara.NiagaraDataInterfaceSplineLUT
	 * Size -> 0x0040
	 */
	struct FNiagaraDataInterfaceSplineLUT
	{
	public:
		TArray<struct FVector>                                     Positions;                                               // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FVector>                                     Scales;                                                  // 0x0010(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FQuat>                                       Rotations;                                               // 0x0020(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		float                                                      SplineLength;                                            // 0x0030(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SplineDistanceStep;                                      // 0x0034(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      InvSplineDistanceStep;                                   // 0x0038(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxIndex;                                                // 0x003C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Niagara.NiagaraOutlinerTimingData
	 * Size -> 0x0008
	 */
	struct FNiagaraOutlinerTimingData
	{
	public:
		float                                                      GameThread;                                              // 0x0000(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RenderThread;                                            // 0x0004(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Niagara.NiagaraOutlinerEmitterInstanceData
	 * Size -> 0x0020
	 */
	struct FNiagaraOutlinerEmitterInstanceData
	{
	public:
		class FString                                              EmitterName;                                             // 0x0000(0x0010) Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ENiagaraSimTarget                                          SimTarget;                                               // 0x0010(0x0001) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KKXR[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		ENiagaraExecutionState                                     ExecState;                                               // 0x0014(0x0001) ELEMENT_SIZE_MISMATCH Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OB9O[0x3];                                   // 0x0015(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		int32_t                                                    NumParticles;                                            // 0x0018(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bRequiresPersistentIDs : 1;                              // 0x001C(0x0001) BIT_FIELD Edit, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4LYW[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Niagara.NiagaraOutlinerSystemInstanceData
	 * Size -> 0x0068
	 */
	struct FNiagaraOutlinerSystemInstanceData
	{
	public:
		class FString                                              ComponentName;                                           // 0x0000(0x0010) Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector3f                                           LWCTile;                                                 // 0x0010(0x000C) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DABZ[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FNiagaraOutlinerEmitterInstanceData>         Emitters;                                                // 0x0020(0x0010) Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic
		ENiagaraExecutionState                                     ActualExecutionState;                                    // 0x0030(0x0001) ELEMENT_SIZE_MISMATCH Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_64BE[0x3];                                   // 0x0031(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		ENiagaraExecutionState                                     RequestedExecutionState;                                 // 0x0034(0x0001) ELEMENT_SIZE_MISMATCH Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JB0B[0x3];                                   // 0x0035(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		struct FNiagaraScalabilityState                            ScalabilityState;                                        // 0x0038(0x000C) Edit, EditConst, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bPendingKill : 1;                                        // 0x0044(0x0001) BIT_FIELD Edit, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUsingCullProxy : 1;                                     // 0x0044(0x0001) BIT_FIELD Edit, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GGWE[0x3];                                   // 0x0045(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		ENCPoolMethod                                              PoolMethod;                                              // 0x0048(0x0001) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_M6WE[0x3];                                   // 0x0049(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FNiagaraOutlinerTimingData                          AverageTime;                                             // 0x004C(0x0008) Edit, EditConst, NoDestructor, NativeAccessSpecifierPublic
		struct FNiagaraOutlinerTimingData                          MaxTime;                                                 // 0x0054(0x0008) Edit, EditConst, NoDestructor, NativeAccessSpecifierPublic
		ETickingGroup                                              TickGroup;                                               // 0x005C(0x0001) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ENiagaraGpuComputeTickStage                                GpuTickStage;                                            // 0x005D(0x0001) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_33FQ[0x2];                                   // 0x005E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bIsSolo : 1;                                             // 0x0060(0x0001) BIT_FIELD Edit, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bRequiresDistanceFieldData : 1;                          // 0x0060(0x0001) BIT_FIELD Edit, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bRequiresDepthBuffer : 1;                                // 0x0060(0x0001) BIT_FIELD Edit, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bRequiresEarlyViewData : 1;                              // 0x0060(0x0001) BIT_FIELD Edit, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bRequiresViewUniformBuffer : 1;                          // 0x0060(0x0001) BIT_FIELD Edit, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bRequiresRayTracingScene : 1;                            // 0x0060(0x0001) BIT_FIELD Edit, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IG4M[0x7];                                   // 0x0061(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Niagara.NiagaraOutlinerSystemData
	 * Size -> 0x0030
	 */
	struct FNiagaraOutlinerSystemData
	{
	public:
		TArray<struct FNiagaraOutlinerSystemInstanceData>          SystemInstances;                                         // 0x0000(0x0010) Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic
		struct FNiagaraOutlinerTimingData                          AveragePerFrameTime;                                     // 0x0010(0x0008) Edit, EditConst, NoDestructor, NativeAccessSpecifierPublic
		struct FNiagaraOutlinerTimingData                          MaxPerFrameTime;                                         // 0x0018(0x0008) Edit, EditConst, NoDestructor, NativeAccessSpecifierPublic
		struct FNiagaraOutlinerTimingData                          AveragePerInstanceTime;                                  // 0x0020(0x0008) Edit, EditConst, NoDestructor, NativeAccessSpecifierPublic
		struct FNiagaraOutlinerTimingData                          MaxPerInstanceTime;                                      // 0x0028(0x0008) Edit, EditConst, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Niagara.NiagaraOutlinerWorldData
	 * Size -> 0x0068
	 */
	struct FNiagaraOutlinerWorldData
	{
	public:
		TMap<class FString, struct FNiagaraOutlinerSystemData>     Systems;                                                 // 0x0000(0x0050) Edit, EditConst, NativeAccessSpecifierPublic
		bool                                                       bHasBegunPlay;                                           // 0x0050(0x0001) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              WorldType;                                               // 0x0051(0x0001) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              NetMode;                                                 // 0x0052(0x0001) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_X4E7[0x1];                                   // 0x0053(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FNiagaraOutlinerTimingData                          AveragePerFrameTime;                                     // 0x0054(0x0008) Edit, EditConst, NoDestructor, NativeAccessSpecifierPublic
		struct FNiagaraOutlinerTimingData                          MaxPerFrameTime;                                         // 0x005C(0x0008) Edit, EditConst, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_L1AD[0x4];                                   // 0x0064(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Niagara.NiagaraOutlinerData
	 * Size -> 0x0050
	 */
	struct FNiagaraOutlinerData
	{
	public:
		TMap<class FString, struct FNiagaraOutlinerWorldData>      WorldData;                                               // 0x0000(0x0050) Edit, EditConst, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Niagara.NiagaraDebuggerRequestConnection
	 * Size -> 0x0020
	 */
	struct FNiagaraDebuggerRequestConnection
	{
	public:
		struct FGuid                                               SessionId;                                               // 0x0000(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGuid                                               InstanceId;                                              // 0x0010(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Niagara.NiagaraDebuggerAcceptConnection
	 * Size -> 0x0020
	 */
	struct FNiagaraDebuggerAcceptConnection
	{
	public:
		struct FGuid                                               SessionId;                                               // 0x0000(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGuid                                               InstanceId;                                              // 0x0010(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Niagara.NiagaraDebuggerConnectionClosed
	 * Size -> 0x0020
	 */
	struct FNiagaraDebuggerConnectionClosed
	{
	public:
		struct FGuid                                               SessionId;                                               // 0x0000(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGuid                                               InstanceId;                                              // 0x0010(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Niagara.NiagaraDebuggerExecuteConsoleCommand
	 * Size -> 0x0018
	 */
	struct FNiagaraDebuggerExecuteConsoleCommand
	{
	public:
		class FString                                              Command;                                                 // 0x0000(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bRequiresWorld;                                          // 0x0010(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IS7K[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Niagara.NiagaraDebuggerOutlinerUpdate
	 * Size -> 0x0050
	 */
	struct FNiagaraDebuggerOutlinerUpdate
	{
	public:
		struct FNiagaraOutlinerData                                OutlinerData;                                            // 0x0000(0x0050) Edit, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Niagara.NiagaraRequestSimpleClientInfoMessage
	 * Size -> 0x0001
	 */
	struct FNiagaraRequestSimpleClientInfoMessage
	{
	public:
		unsigned char                                              UnknownData_FEMP[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Niagara.NiagaraOutlinerCaptureSettings
	 * Size -> 0x0010
	 */
	struct FNiagaraOutlinerCaptureSettings
	{
	public:
		bool                                                       bTriggerCapture;                                         // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Z7MQ[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		uint32_t                                                   CaptureDelayFrames;                                      // 0x0004(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bGatherPerfData;                                         // 0x0008(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1CRN[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		uint32_t                                                   SimCacheCaptureFrames;                                   // 0x000C(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Niagara.NiagaraSimpleClientInfo
	 * Size -> 0x0040
	 */
	struct FNiagaraSimpleClientInfo
	{
	public:
		TArray<class FString>                                      Systems;                                                 // 0x0000(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class FString>                                      Actors;                                                  // 0x0010(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class FString>                                      Components;                                              // 0x0020(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class FString>                                      Emitters;                                                // 0x0030(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Niagara.NiagaraSystemSimCacheCaptureRequest
	 * Size -> 0x0010
	 */
	struct FNiagaraSystemSimCacheCaptureRequest
	{
	public:
		class FName                                                ComponentName;                                           // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   CaptureDelayFrames;                                      // 0x0008(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   CaptureFrames;                                           // 0x000C(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Niagara.NiagaraSystemSimCacheCaptureReply
	 * Size -> 0x0018
	 */
	struct FNiagaraSystemSimCacheCaptureReply
	{
	public:
		class FName                                                ComponentName;                                           // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<unsigned char>                                      SimCacheData;                                            // 0x0008(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Niagara.NiagaraGraphViewSettings
	 * Size -> 0x0018
	 */
	struct FNiagaraGraphViewSettings
	{
	public:
		struct FVector2D                                           Location;                                                // 0x0000(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      Zoom;                                                    // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bIsValid;                                                // 0x0014(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_RURE[0x3];                                   // 0x0015(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Niagara.NiagaraDetailsLevelScaleOverrides
	 * Size -> 0x0014
	 */
	struct FNiagaraDetailsLevelScaleOverrides
	{
	public:
		float                                                      Low;                                                     // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Medium;                                                  // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      High;                                                    // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Epic;                                                    // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Cine;                                                    // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Niagara.NiagaraCollisionEventPayload
	 * Size -> 0x0050
	 */
	struct FNiagaraCollisionEventPayload
	{
	public:
		struct FVector                                             CollisionPos;                                            // 0x0000(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             CollisionNormal;                                         // 0x0018(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             CollisionVelocity;                                       // 0x0030(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ParticleIndex;                                           // 0x0048(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    PhysicalMaterialIndex;                                   // 0x004C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Niagara.ParameterDefinitionsSubscription
	 * Size -> 0x0001
	 */
	struct FParameterDefinitionsSubscription
	{
	public:
		unsigned char                                              UnknownData_Z1JE[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Niagara.NiagaraParameters
	 * Size -> 0x0010
	 */
	struct FNiagaraParameters
	{
	public:
		TArray<struct FNiagaraVariable>                            Parameters;                                              // 0x0000(0x0010) Edit, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Niagara.NiagaraPlatformSetConflictEntry
	 * Size -> 0x000C
	 */
	struct FNiagaraPlatformSetConflictEntry
	{
	public:
		class FName                                                ProfileName;                                             // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    QualityLevelMask;                                        // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Niagara.NiagaraPlatformSetConflictInfo
	 * Size -> 0x0018
	 */
	struct FNiagaraPlatformSetConflictInfo
	{
	public:
		int32_t                                                    SetAIndex;                                               // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SetBIndex;                                               // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FNiagaraPlatformSetConflictEntry>            Conflicts;                                               // 0x0008(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Niagara.NiagaraScalabilityManager
	 * Size -> 0x00E0
	 */
	struct FNiagaraScalabilityManager
	{
	public:
		class UNiagaraEffectType*                                  EffectType;                                              // 0x0000(0x0008) ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UNiagaraComponent*>                           ManagedComponents;                                       // 0x0008(0x0010) ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4RRN[0xC8];                                  // 0x0018(0x00C8) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Niagara.NiagaraModuleDependency
	 * Size -> 0x0068
	 */
	struct FNiagaraModuleDependency
	{
	public:
		class FName                                                ID;                                                      // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ENiagaraModuleDependencyType                               Type;                                                    // 0x0008(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ENiagaraModuleDependencyScriptConstraint                   ScriptConstraint;                                        // 0x0009(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_P8DY[0x6];                                   // 0x000A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              RequiredVersion;                                         // 0x0010(0x0010) Edit, ZeroConstructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    OnlyEvaluateInScriptUsage;                               // 0x0020(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8M28[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                Description;                                             // 0x0028(0x0018) Edit, AssetRegistrySearchable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_P5OQ[0x28];                                  // 0x0040(0x0028) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Niagara.VersionedNiagaraScriptData
	 * Size -> 0x0001
	 */
	struct FVersionedNiagaraScriptData
	{
	public:
		unsigned char                                              UnknownData_CM6K[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Niagara.NiagaraScriptInstanceParameterStore
	 * Size -> 0x0010 (FullSize[0x0098] - InheritedSize[0x0088])
	 */
	struct FNiagaraScriptInstanceParameterStore : public FNiagaraParameterStore
	{
	public:
		unsigned char                                              UnknownData_C8LX[0x10];                                  // 0x0088(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Niagara.NiagaraScriptHighlight
	 * Size -> 0x0028
	 */
	struct FNiagaraScriptHighlight
	{
	public:
		struct FLinearColor                                        Color;                                                   // 0x0000(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FText                                                DisplayName;                                             // 0x0010(0x0018) Edit, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Niagara.NiagaraEmitterCompiledData
	 * Size -> 0x0138
	 */
	struct FNiagaraEmitterCompiledData
	{
	public:
		TArray<class FName>                                        SpawnAttributes;                                         // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		struct FNiagaraVariable                                    EmitterSpawnIntervalVar;                                 // 0x0010(0x0020) HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FNiagaraVariable                                    EmitterInterpSpawnStartDTVar;                            // 0x0030(0x0020) HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FNiagaraVariable                                    EmitterSpawnGroupVar;                                    // 0x0050(0x0020) HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FNiagaraVariable                                    EmitterAgeVar;                                           // 0x0070(0x0020) HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FNiagaraVariable                                    EmitterRandomSeedVar;                                    // 0x0090(0x0020) HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FNiagaraVariable                                    EmitterInstanceSeedVar;                                  // 0x00B0(0x0020) HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FNiagaraVariable                                    EmitterTotalSpawnedParticlesVar;                         // 0x00D0(0x0020) HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FNiagaraDataSetCompiledData                         DataSetCompiledData;                                     // 0x00F0(0x0048) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Niagara.NiagaraSystemCompileRequest
	 * Size -> 0x0018
	 */
	struct FNiagaraSystemCompileRequest
	{
	public:
		unsigned char                                              UnknownData_TFXK[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UObject*>                                     RootObjects;                                             // 0x0008(0x0010) ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Niagara.NiagaraWildcard
	 * Size -> 0x0001
	 */
	struct FNiagaraWildcard
	{
	public:
		unsigned char                                              UnknownData_Y9FS[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Niagara.NiagaraFloat
	 * Size -> 0x0004
	 */
	struct FNiagaraFloat
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Niagara.NiagaraInt32
	 * Size -> 0x0004
	 */
	struct FNiagaraInt32
	{
	public:
		int32_t                                                    Value;                                                   // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Niagara.NiagaraBool
	 * Size -> 0x0004
	 */
	struct FNiagaraBool
	{
	public:
		int32_t                                                    Value;                                                   // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct Niagara.NiagaraHalf
	 * Size -> 0x0002
	 */
	struct FNiagaraHalf
	{
	public:
		uint16_t                                                   Value;                                                   // 0x0000(0x0002) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Niagara.NiagaraHalfVector2
	 * Size -> 0x0004
	 */
	struct FNiagaraHalfVector2
	{
	public:
		uint16_t                                                   X;                                                       // 0x0000(0x0002) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint16_t                                                   Y;                                                       // 0x0002(0x0002) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Niagara.NiagaraHalfVector3
	 * Size -> 0x0006
	 */
	struct FNiagaraHalfVector3
	{
	public:
		uint16_t                                                   X;                                                       // 0x0000(0x0002) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint16_t                                                   Y;                                                       // 0x0002(0x0002) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint16_t                                                   Z;                                                       // 0x0004(0x0002) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Niagara.NiagaraHalfVector4
	 * Size -> 0x0008
	 */
	struct FNiagaraHalfVector4
	{
	public:
		uint16_t                                                   X;                                                       // 0x0000(0x0002) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint16_t                                                   Y;                                                       // 0x0002(0x0002) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint16_t                                                   Z;                                                       // 0x0004(0x0002) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint16_t                                                   W;                                                       // 0x0006(0x0002) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Niagara.NiagaraNumeric
	 * Size -> 0x0001
	 */
	struct FNiagaraNumeric
	{
	public:
		unsigned char                                              UnknownData_NRFY[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Niagara.NiagaraParameterMap
	 * Size -> 0x0001
	 */
	struct FNiagaraParameterMap
	{
	public:
		unsigned char                                              UnknownData_X41F[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Niagara.NiagaraDouble
	 * Size -> 0x0008
	 */
	struct FNiagaraDouble
	{
	public:
		double                                                     Value;                                                   // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Niagara.NiagaraMatrix
	 * Size -> 0x0040
	 */
	struct FNiagaraMatrix
	{
	public:
		struct FVector4f                                           Row0;                                                    // 0x0000(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector4f                                           Row1;                                                    // 0x0010(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector4f                                           Row2;                                                    // 0x0020(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector4f                                           Row3;                                                    // 0x0030(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Niagara.NiagaraSpawnInfo
	 * Size -> 0x0010
	 */
	struct FNiagaraSpawnInfo
	{
	public:
		int32_t                                                    Count;                                                   // 0x0000(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      InterpStartDt;                                           // 0x0004(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      IntervalDt;                                              // 0x0008(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SpawnGroup;                                              // 0x000C(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Niagara.NiagaraRandInfo
	 * Size -> 0x000C
	 */
	struct FNiagaraRandInfo
	{
	public:
		int32_t                                                    Seed1;                                                   // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Seed2;                                                   // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Seed3;                                                   // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Niagara.NiagaraInputConditionMetadata
	 * Size -> 0x0018
	 */
	struct FNiagaraInputConditionMetadata
	{
	public:
		class FName                                                InputName;                                               // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class FString>                                      TargetValues;                                            // 0x0008(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Niagara.NiagaraEnumParameterMetaData
	 * Size -> 0x0028
	 */
	struct FNiagaraEnumParameterMetaData
	{
	public:
		class FName                                                OverrideName;                                            // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTexture2D*                                          IconOverride;                                            // 0x0008(0x0008) Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseColorOverride;                                       // 0x0010(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BU85[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FLinearColor                                        ColorOverride;                                           // 0x0014(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5U0D[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Niagara.NiagaraBoolParameterMetaData
	 * Size -> 0x0028
	 */
	struct FNiagaraBoolParameterMetaData
	{
	public:
		ENiagaraBoolDisplayMode                                    DisplayMode;                                             // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AUNK[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                OverrideNameTrue;                                        // 0x0004(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                OverrideNameFalse;                                       // 0x000C(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WGH9[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTexture2D*                                          IconOverrideTrue;                                        // 0x0018(0x0008) Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTexture2D*                                          IconOverrideFalse;                                       // 0x0020(0x0008) Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Niagara.NiagaraVariableMetaData
	 * Size -> 0x0148
	 */
	struct FNiagaraVariableMetaData
	{
	public:
		class FText                                                Description;                                             // 0x0000(0x0018) Edit, NativeAccessSpecifierPublic
		class FText                                                CategoryName;                                            // 0x0018(0x0018) Edit, NativeAccessSpecifierPublic
		bool                                                       bAdvancedDisplay;                                        // 0x0030(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDisplayInOverviewStack;                                 // 0x0031(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0DM7[0x2];                                   // 0x0032(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    InlineParameterSortPriority;                             // 0x0034(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOverrideColor;                                          // 0x0038(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_N88C[0x3];                                   // 0x0039(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FLinearColor                                        InlineParameterColorOverride;                            // 0x003C(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_772Z[0x4];                                   // 0x004C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FNiagaraEnumParameterMetaData>               InlineParameterEnumOverrides;                            // 0x0050(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       bEnableBoolOverride;                                     // 0x0060(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WMH5[0x7];                                   // 0x0061(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FNiagaraBoolParameterMetaData                       InlineParameterBoolOverride;                             // 0x0068(0x0028) Edit, NoDestructor, NativeAccessSpecifierPublic
		int32_t                                                    EditorSortPriority;                                      // 0x0090(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bInlineEditConditionToggle;                              // 0x0094(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_F7BN[0x3];                                   // 0x0095(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FNiagaraInputConditionMetadata                      EditCondition;                                           // 0x0098(0x0018) Edit, NativeAccessSpecifierPublic
		struct FNiagaraInputConditionMetadata                      VisibleCondition;                                        // 0x00B0(0x0018) Edit, NativeAccessSpecifierPublic
		TMap<class FName, class FString>                           PropertyMetaData;                                        // 0x00C8(0x0050) Edit, NativeAccessSpecifierPublic
		class FName                                                ParentAttribute;                                         // 0x0118(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class FName>                                        AlternateAliases;                                        // 0x0120(0x0010) Edit, ZeroConstructor, AdvancedDisplay, NativeAccessSpecifierPublic
		struct FGuid                                               VariableGuid;                                            // 0x0130(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bIsStaticSwitch;                                         // 0x0140(0x0001) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_8SRW[0x3];                                   // 0x0141(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    StaticSwitchDefaultValue;                                // 0x0144(0x0004) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct Niagara.NiagaraVariant
	 * Size -> 0x0028
	 */
	struct FNiagaraVariant
	{
	public:
		class UObject*                                             Object;                                                  // 0x0000(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UNiagaraDataInterface*                               DataInterface;                                           // 0x0008(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<unsigned char>                                      Bytes;                                                   // 0x0010(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPrivate
		ENiagaraVariantMode                                        CurrentMode;                                             // 0x0020(0x0001) ELEMENT_SIZE_MISMATCH Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_RGKS[0x3];                                   // 0x0021(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		unsigned char                                              UnknownData_5TKW[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Niagara.NiagaraWorldManagerTickFunction
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	struct FNiagaraWorldManagerTickFunction : public FTickFunction
	{
	public:
		unsigned char                                              UnknownData_CHKK[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (PADDING)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
