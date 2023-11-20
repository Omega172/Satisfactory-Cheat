/**
 * Name: Satisfactory
 * Version: Early_Access_CL#264901
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_ProximitySubsystem.BP_ProximitySubsystem_C.Spawn_Fairies_VFX
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_ProximitySubsystem_C::Spawn_Fairies_VFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProximitySubsystem.BP_ProximitySubsystem_C.Spawn_Fairies_VFX");
		
		ABP_ProximitySubsystem_C_Spawn_Fairies_VFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_ProximitySubsystem.BP_ProximitySubsystem_C.Spawn_TitanForest_Ground_VFX
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsInCave                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EProximityEffectTypes                              TypeEnum                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ProximitySubsystem_C::Spawn_TitanForest_Ground_VFX(bool IsInCave, EProximityEffectTypes TypeEnum)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProximitySubsystem.BP_ProximitySubsystem_C.Spawn_TitanForest_Ground_VFX");
		
		ABP_ProximitySubsystem_C_Spawn_TitanForest_Ground_VFX_Params params {};
		params.IsInCave = IsInCave;
		params.TypeEnum = TypeEnum;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_ProximitySubsystem.BP_ProximitySubsystem_C.AmbienceWindDirection
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     FoliageLocation                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     WindDirection                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ProximitySubsystem_C::AmbienceWindDirection(const struct FVector& FoliageLocation, struct FVector* WindDirection)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProximitySubsystem.BP_ProximitySubsystem_C.AmbienceWindDirection");
		
		ABP_ProximitySubsystem_C_AmbienceWindDirection_Params params {};
		params.FoliageLocation = FoliageLocation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (WindDirection != nullptr)
			*WindDirection = params.WindDirection;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_ProximitySubsystem.BP_ProximitySubsystem_C.StartWeatherTimer
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_ProximitySubsystem_C::StartWeatherTimer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProximitySubsystem.BP_ProximitySubsystem_C.StartWeatherTimer");
		
		ABP_ProximitySubsystem_C_StartWeatherTimer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_ProximitySubsystem.BP_ProximitySubsystem_C.IsFoliageWithinAttenuation
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class UAkAudioEvent*                               AkEvent                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     FoliageLocation                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsWithinRadius                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ProximitySubsystem_C::IsFoliageWithinAttenuation(class UAkAudioEvent* AkEvent, const struct FVector& FoliageLocation, bool* IsWithinRadius)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProximitySubsystem.BP_ProximitySubsystem_C.IsFoliageWithinAttenuation");
		
		ABP_ProximitySubsystem_C_IsFoliageWithinAttenuation_Params params {};
		params.AkEvent = AkEvent;
		params.FoliageLocation = FoliageLocation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsWithinRadius != nullptr)
			*IsWithinRadius = params.IsWithinRadius;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_ProximitySubsystem.BP_ProximitySubsystem_C.SetupAreaAmbienceByFoliageType
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<int32_t>                                    MeshIDs                                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		EProximityEffectTypes                              FoliageType                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UInstancedStaticMeshComponent*               InstancedStaticMeshComp                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     FoliageLocation                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InstanceId                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ProximitySubsystem_C::SetupAreaAmbienceByFoliageType(TArray<int32_t>* MeshIDs, EProximityEffectTypes FoliageType, class UInstancedStaticMeshComponent* InstancedStaticMeshComp, const struct FVector& FoliageLocation, int32_t InstanceId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProximitySubsystem.BP_ProximitySubsystem_C.SetupAreaAmbienceByFoliageType");
		
		ABP_ProximitySubsystem_C_SetupAreaAmbienceByFoliageType_Params params {};
		params.FoliageType = FoliageType;
		params.InstancedStaticMeshComp = InstancedStaticMeshComp;
		params.FoliageLocation = FoliageLocation;
		params.InstanceId = InstanceId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (MeshIDs != nullptr)
			*MeshIDs = params.MeshIDs;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_ProximitySubsystem.BP_ProximitySubsystem_C.ForecastPredictionOnAreas
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_ProximitySubsystem_C::ForecastPredictionOnAreas()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProximitySubsystem.BP_ProximitySubsystem_C.ForecastPredictionOnAreas");
		
		ABP_ProximitySubsystem_C_ForecastPredictionOnAreas_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_ProximitySubsystem.BP_ProximitySubsystem_C.SpawnAkEventSFX
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UAkAudioEvent*                               AkEventDay                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		class UAkAudioEvent*                               AkEventNight                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     SpawnLocation                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            FoliageIndex                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ProximitySubsystem_C::SpawnAkEventSFX(class UAkAudioEvent* AkEventDay, class UAkAudioEvent* AkEventNight, const struct FVector& SpawnLocation, int32_t FoliageIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProximitySubsystem.BP_ProximitySubsystem_C.SpawnAkEventSFX");
		
		ABP_ProximitySubsystem_C_SpawnAkEventSFX_Params params {};
		params.AkEventDay = AkEventDay;
		params.AkEventNight = AkEventNight;
		params.SpawnLocation = SpawnLocation;
		params.FoliageIndex = FoliageIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_ProximitySubsystem.BP_ProximitySubsystem_C.SpawnCascadeVFX
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UParticleSystem*                             CascadeFarDay                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		class UParticleSystem*                             CascadeCloseDay                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		class UParticleSystem*                             CascadeFarNight                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		class UParticleSystem*                             CascadeCloseNight                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     SpawnLocation                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            FoliageIndex                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               ShouldSpawnInAir                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             HeightAboveMesh                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ProximitySubsystem_C::SpawnCascadeVFX(class UParticleSystem* CascadeFarDay, class UParticleSystem* CascadeCloseDay, class UParticleSystem* CascadeFarNight, class UParticleSystem* CascadeCloseNight, const struct FVector& SpawnLocation, int32_t FoliageIndex, bool ShouldSpawnInAir, double HeightAboveMesh)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProximitySubsystem.BP_ProximitySubsystem_C.SpawnCascadeVFX");
		
		ABP_ProximitySubsystem_C_SpawnCascadeVFX_Params params {};
		params.CascadeFarDay = CascadeFarDay;
		params.CascadeCloseDay = CascadeCloseDay;
		params.CascadeFarNight = CascadeFarNight;
		params.CascadeCloseNight = CascadeCloseNight;
		params.SpawnLocation = SpawnLocation;
		params.FoliageIndex = FoliageIndex;
		params.ShouldSpawnInAir = ShouldSpawnInAir;
		params.HeightAboveMesh = HeightAboveMesh;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_ProximitySubsystem.BP_ProximitySubsystem_C.SpawnNiagaraVFX
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UNiagaraSystem*                              NiagaraFarDay                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		class UNiagaraSystem*                              NiagaraCloseDay                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		class UNiagaraSystem*                              NiagaraFarNight                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		class UNiagaraSystem*                              NiagaraCloseNight                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     SpawnLocation                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               ShouldUseFlipBookIndex                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            FoliageIndex                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            FlipBookIndex                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               ShouldAdjustSize                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             Size                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               UseSpawnRate                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             SpawnRate                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               UsingWindDirection                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ProximitySubsystem_C::SpawnNiagaraVFX(class UNiagaraSystem* NiagaraFarDay, class UNiagaraSystem* NiagaraCloseDay, class UNiagaraSystem* NiagaraFarNight, class UNiagaraSystem* NiagaraCloseNight, const struct FVector& SpawnLocation, bool ShouldUseFlipBookIndex, int32_t FoliageIndex, int32_t FlipBookIndex, bool ShouldAdjustSize, double Size, bool UseSpawnRate, double SpawnRate, bool UsingWindDirection)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProximitySubsystem.BP_ProximitySubsystem_C.SpawnNiagaraVFX");
		
		ABP_ProximitySubsystem_C_SpawnNiagaraVFX_Params params {};
		params.NiagaraFarDay = NiagaraFarDay;
		params.NiagaraCloseDay = NiagaraCloseDay;
		params.NiagaraFarNight = NiagaraFarNight;
		params.NiagaraCloseNight = NiagaraCloseNight;
		params.SpawnLocation = SpawnLocation;
		params.ShouldUseFlipBookIndex = ShouldUseFlipBookIndex;
		params.FoliageIndex = FoliageIndex;
		params.FlipBookIndex = FlipBookIndex;
		params.ShouldAdjustSize = ShouldAdjustSize;
		params.Size = Size;
		params.UseSpawnRate = UseSpawnRate;
		params.SpawnRate = SpawnRate;
		params.UsingWindDirection = UsingWindDirection;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_ProximitySubsystem.BP_ProximitySubsystem_C.GetFoliageID
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		TArray<int32_t>                                    FoliageIDs                                                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		int32_t                                            ChosenFoliageID                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            GetFoliageIndex                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ProximitySubsystem_C::GetFoliageID(TArray<int32_t>* FoliageIDs, int32_t* ChosenFoliageID, int32_t* GetFoliageIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProximitySubsystem.BP_ProximitySubsystem_C.GetFoliageID");
		
		ABP_ProximitySubsystem_C_GetFoliageID_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FoliageIDs != nullptr)
			*FoliageIDs = params.FoliageIDs;
		if (ChosenFoliageID != nullptr)
			*ChosenFoliageID = params.ChosenFoliageID;
		if (GetFoliageIndex != nullptr)
			*GetFoliageIndex = params.GetFoliageIndex;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_ProximitySubsystem.BP_ProximitySubsystem_C.StartDynamicSFXAmbienceTimer
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_ProximitySubsystem_C::StartDynamicSFXAmbienceTimer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProximitySubsystem.BP_ProximitySubsystem_C.StartDynamicSFXAmbienceTimer");
		
		ABP_ProximitySubsystem_C_StartDynamicSFXAmbienceTimer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_ProximitySubsystem.BP_ProximitySubsystem_C.StartAmbienceTimer
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_ProximitySubsystem_C::StartAmbienceTimer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProximitySubsystem.BP_ProximitySubsystem_C.StartAmbienceTimer");
		
		ABP_ProximitySubsystem_C_StartAmbienceTimer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_ProximitySubsystem.BP_ProximitySubsystem_C.SFXSwitchOnEnteredArea
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_ProximitySubsystem_C::SFXSwitchOnEnteredArea()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProximitySubsystem.BP_ProximitySubsystem_C.SFXSwitchOnEnteredArea");
		
		ABP_ProximitySubsystem_C_SFXSwitchOnEnteredArea_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_ProximitySubsystem.BP_ProximitySubsystem_C.SetEcoSystemByArea
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            TypeOfEcoSystemInt                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ProximitySubsystem_C::SetEcoSystemByArea(int32_t TypeOfEcoSystemInt)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProximitySubsystem.BP_ProximitySubsystem_C.SetEcoSystemByArea");
		
		ABP_ProximitySubsystem_C_SetEcoSystemByArea_Params params {};
		params.TypeOfEcoSystemInt = TypeOfEcoSystemInt;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_ProximitySubsystem.BP_ProximitySubsystem_C.CalculateEcoSystemByInt
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		int32_t                                            Bushes                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Trees                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Rocks                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Flowers                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            totalAmount                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            TypeOfEcoSystem                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ProximitySubsystem_C::CalculateEcoSystemByInt(int32_t Bushes, int32_t Trees, int32_t Rocks, int32_t Flowers, int32_t totalAmount, int32_t* TypeOfEcoSystem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProximitySubsystem.BP_ProximitySubsystem_C.CalculateEcoSystemByInt");
		
		ABP_ProximitySubsystem_C_CalculateEcoSystemByInt_Params params {};
		params.Bushes = Bushes;
		params.Trees = Trees;
		params.Rocks = Rocks;
		params.Flowers = Flowers;
		params.totalAmount = totalAmount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TypeOfEcoSystem != nullptr)
			*TypeOfEcoSystem = params.TypeOfEcoSystem;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_ProximitySubsystem.BP_ProximitySubsystem_C.CheckAreaDynamicDensity
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		double                                             AreaRadius                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            AmountOfBushes                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            AmountOfTrees                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            AmountOfRocks                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            AmountOfFlowers                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            totalAmount                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ProximitySubsystem_C::CheckAreaDynamicDensity(double AreaRadius, int32_t* AmountOfBushes, int32_t* AmountOfTrees, int32_t* AmountOfRocks, int32_t* AmountOfFlowers, int32_t* totalAmount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProximitySubsystem.BP_ProximitySubsystem_C.CheckAreaDynamicDensity");
		
		ABP_ProximitySubsystem_C_CheckAreaDynamicDensity_Params params {};
		params.AreaRadius = AreaRadius;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AmountOfBushes != nullptr)
			*AmountOfBushes = params.AmountOfBushes;
		if (AmountOfTrees != nullptr)
			*AmountOfTrees = params.AmountOfTrees;
		if (AmountOfRocks != nullptr)
			*AmountOfRocks = params.AmountOfRocks;
		if (AmountOfFlowers != nullptr)
			*AmountOfFlowers = params.AmountOfFlowers;
		if (totalAmount != nullptr)
			*totalAmount = params.totalAmount;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_ProximitySubsystem.BP_ProximitySubsystem_C.CheckSFXDynamicAreaAmbience
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_ProximitySubsystem_C::CheckSFXDynamicAreaAmbience()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProximitySubsystem.BP_ProximitySubsystem_C.CheckSFXDynamicAreaAmbience");
		
		ABP_ProximitySubsystem_C_CheckSFXDynamicAreaAmbience_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_ProximitySubsystem.BP_ProximitySubsystem_C.RemoveContainedSFXIndex
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<int32_t>                                    SFXArray                                                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		int32_t                                            ContainedLifeID                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ProximitySubsystem_C::RemoveContainedSFXIndex(TArray<int32_t>* SFXArray, int32_t ContainedLifeID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProximitySubsystem.BP_ProximitySubsystem_C.RemoveContainedSFXIndex");
		
		ABP_ProximitySubsystem_C_RemoveContainedSFXIndex_Params params {};
		params.ContainedLifeID = ContainedLifeID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SFXArray != nullptr)
			*SFXArray = params.SFXArray;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_ProximitySubsystem.BP_ProximitySubsystem_C.CheckContainedSFXCachedInstances
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            MaxSFXInstances                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ProximitySubsystem_C::CheckContainedSFXCachedInstances(int32_t MaxSFXInstances)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProximitySubsystem.BP_ProximitySubsystem_C.CheckContainedSFXCachedInstances");
		
		ABP_ProximitySubsystem_C_CheckContainedSFXCachedInstances_Params params {};
		params.MaxSFXInstances = MaxSFXInstances;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_ProximitySubsystem.BP_ProximitySubsystem_C.CheckContainedCachedInstances
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            MaxAmbienceInstances                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ProximitySubsystem_C::CheckContainedCachedInstances(int32_t MaxAmbienceInstances)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProximitySubsystem.BP_ProximitySubsystem_C.CheckContainedCachedInstances");
		
		ABP_ProximitySubsystem_C_CheckContainedCachedInstances_Params params {};
		params.MaxAmbienceInstances = MaxAmbienceInstances;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_ProximitySubsystem.BP_ProximitySubsystem_C.RandomBackwardDirectionalVector
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class AFGFoliageRemovalSubsystem*                  FoliageRemovalSystem                                       (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     RandomDirectionalBackwardVector                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ProximitySubsystem_C::RandomBackwardDirectionalVector(class AFGFoliageRemovalSubsystem** FoliageRemovalSystem, struct FVector* RandomDirectionalBackwardVector)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProximitySubsystem.BP_ProximitySubsystem_C.RandomBackwardDirectionalVector");
		
		ABP_ProximitySubsystem_C_RandomBackwardDirectionalVector_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FoliageRemovalSystem != nullptr)
			*FoliageRemovalSystem = params.FoliageRemovalSystem;
		if (RandomDirectionalBackwardVector != nullptr)
			*RandomDirectionalBackwardVector = params.RandomDirectionalBackwardVector;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_ProximitySubsystem.BP_ProximitySubsystem_C.CheckAreaDensityByType
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		double                                             AreaRadius                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            ModBy                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            ModBushes                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            ModTrees                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            ModRocks                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            ModFlowers                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            totalAmount                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ProximitySubsystem_C::CheckAreaDensityByType(double AreaRadius, int32_t ModBy, int32_t* ModBushes, int32_t* ModTrees, int32_t* ModRocks, int32_t* ModFlowers, int32_t* totalAmount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProximitySubsystem.BP_ProximitySubsystem_C.CheckAreaDensityByType");
		
		ABP_ProximitySubsystem_C_CheckAreaDensityByType_Params params {};
		params.AreaRadius = AreaRadius;
		params.ModBy = ModBy;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ModBushes != nullptr)
			*ModBushes = params.ModBushes;
		if (ModTrees != nullptr)
			*ModTrees = params.ModTrees;
		if (ModRocks != nullptr)
			*ModRocks = params.ModRocks;
		if (ModFlowers != nullptr)
			*ModFlowers = params.ModFlowers;
		if (totalAmount != nullptr)
			*totalAmount = params.totalAmount;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_ProximitySubsystem.BP_ProximitySubsystem_C.OnEnteredNewArea
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_ProximitySubsystem_C::OnEnteredNewArea()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProximitySubsystem.BP_ProximitySubsystem_C.OnEnteredNewArea");
		
		ABP_ProximitySubsystem_C_OnEnteredNewArea_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_ProximitySubsystem.BP_ProximitySubsystem_C.RemoveContainedFoliageIndex
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<int32_t>                                    LifeArray                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		int32_t                                            ContainedLifeID                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ProximitySubsystem_C::RemoveContainedFoliageIndex(TArray<int32_t>* LifeArray, int32_t ContainedLifeID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProximitySubsystem.BP_ProximitySubsystem_C.RemoveContainedFoliageIndex");
		
		ABP_ProximitySubsystem_C_RemoveContainedFoliageIndex_Params params {};
		params.ContainedLifeID = ContainedLifeID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (LifeArray != nullptr)
			*LifeArray = params.LifeArray;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_ProximitySubsystem.BP_ProximitySubsystem_C.CheckAreaDensity
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		double                                             AreaRadius                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            ModBy                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     SearchLocation                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            CalculatedAmount                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ProximitySubsystem_C::CheckAreaDensity(double AreaRadius, int32_t ModBy, const struct FVector& SearchLocation, int32_t* CalculatedAmount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProximitySubsystem.BP_ProximitySubsystem_C.CheckAreaDensity");
		
		ABP_ProximitySubsystem_C_CheckAreaDensity_Params params {};
		params.AreaRadius = AreaRadius;
		params.ModBy = ModBy;
		params.SearchLocation = SearchLocation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CalculatedAmount != nullptr)
			*CalculatedAmount = params.CalculatedAmount;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_ProximitySubsystem.BP_ProximitySubsystem_C.SpawnEffectsOnFoliageNewLocation
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class UInstancedStaticMeshComponent*               Foliage                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InstanceId                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     FoliageOriginalLocation                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     FoliageTransformedLocation                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ProximitySubsystem_C::SpawnEffectsOnFoliageNewLocation(class UInstancedStaticMeshComponent* Foliage, int32_t InstanceId, const struct FVector& FoliageOriginalLocation, struct FVector* FoliageTransformedLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProximitySubsystem.BP_ProximitySubsystem_C.SpawnEffectsOnFoliageNewLocation");
		
		ABP_ProximitySubsystem_C_SpawnEffectsOnFoliageNewLocation_Params params {};
		params.Foliage = Foliage;
		params.InstanceId = InstanceId;
		params.FoliageOriginalLocation = FoliageOriginalLocation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FoliageTransformedLocation != nullptr)
			*FoliageTransformedLocation = params.FoliageTransformedLocation;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_ProximitySubsystem.BP_ProximitySubsystem_C.SetupSingleSFXFoliageType
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<int32_t>                                    MeshIndex                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		EProximityEffectTypes                              FoliageType                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UInstancedStaticMeshComponent*               StaticMeshCompReference                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     FoliageLocation                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InstanceId                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ProximitySubsystem_C::SetupSingleSFXFoliageType(TArray<int32_t>* MeshIndex, EProximityEffectTypes FoliageType, class UInstancedStaticMeshComponent* StaticMeshCompReference, const struct FVector& FoliageLocation, int32_t InstanceId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProximitySubsystem.BP_ProximitySubsystem_C.SetupSingleSFXFoliageType");
		
		ABP_ProximitySubsystem_C_SetupSingleSFXFoliageType_Params params {};
		params.FoliageType = FoliageType;
		params.StaticMeshCompReference = StaticMeshCompReference;
		params.FoliageLocation = FoliageLocation;
		params.InstanceId = InstanceId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (MeshIndex != nullptr)
			*MeshIndex = params.MeshIndex;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_ProximitySubsystem.BP_ProximitySubsystem_C.CheckSingleLocationSFX
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_ProximitySubsystem_C::CheckSingleLocationSFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProximitySubsystem.BP_ProximitySubsystem_C.CheckSingleLocationSFX");
		
		ABP_ProximitySubsystem_C_CheckSingleLocationSFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_ProximitySubsystem.BP_ProximitySubsystem_C.RandomForwardDirectionalVector
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class AFGFoliageRemovalSubsystem*                  FoliageRemovalSystem                                       (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     RandomDirectionalForwardVector                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ProximitySubsystem_C::RandomForwardDirectionalVector(class AFGFoliageRemovalSubsystem** FoliageRemovalSystem, struct FVector* RandomDirectionalForwardVector)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProximitySubsystem.BP_ProximitySubsystem_C.RandomForwardDirectionalVector");
		
		ABP_ProximitySubsystem_C_RandomForwardDirectionalVector_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FoliageRemovalSystem != nullptr)
			*FoliageRemovalSystem = params.FoliageRemovalSystem;
		if (RandomDirectionalForwardVector != nullptr)
			*RandomDirectionalForwardVector = params.RandomDirectionalForwardVector;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_ProximitySubsystem.BP_ProximitySubsystem_C.CheckSingleLocationAmbience
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_ProximitySubsystem_C::CheckSingleLocationAmbience()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProximitySubsystem.BP_ProximitySubsystem_C.CheckSingleLocationAmbience");
		
		ABP_ProximitySubsystem_C_CheckSingleLocationAmbience_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_ProximitySubsystem.BP_ProximitySubsystem_C.SetupSingleAmbienceByFoliageType
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<int32_t>                                    MeshIDs                                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		EProximityEffectTypes                              FoliageType                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UInstancedStaticMeshComponent*               InstancedStaticMeshComp                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     FoliageLocation                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InstanceId                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ProximitySubsystem_C::SetupSingleAmbienceByFoliageType(TArray<int32_t>* MeshIDs, EProximityEffectTypes FoliageType, class UInstancedStaticMeshComponent* InstancedStaticMeshComp, const struct FVector& FoliageLocation, int32_t InstanceId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProximitySubsystem.BP_ProximitySubsystem_C.SetupSingleAmbienceByFoliageType");
		
		ABP_ProximitySubsystem_C_SetupSingleAmbienceByFoliageType_Params params {};
		params.FoliageType = FoliageType;
		params.InstancedStaticMeshComp = InstancedStaticMeshComp;
		params.FoliageLocation = FoliageLocation;
		params.InstanceId = InstanceId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (MeshIDs != nullptr)
			*MeshIDs = params.MeshIDs;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_ProximitySubsystem.BP_ProximitySubsystem_C.IsFoliageInSight
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		struct FVector                                     FoliageLocation                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsFoliageInSight                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ProximitySubsystem_C::IsFoliageInSight(const struct FVector& FoliageLocation, bool* IsFoliageInSight)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProximitySubsystem.BP_ProximitySubsystem_C.IsFoliageInSight");
		
		ABP_ProximitySubsystem_C_IsFoliageInSight_Params params {};
		params.FoliageLocation = FoliageLocation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsFoliageInSight != nullptr)
			*IsFoliageInSight = params.IsFoliageInSight;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_ProximitySubsystem.BP_ProximitySubsystem_C.CheckAreaAmbience
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_ProximitySubsystem_C::CheckAreaAmbience()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProximitySubsystem.BP_ProximitySubsystem_C.CheckAreaAmbience");
		
		ABP_ProximitySubsystem_C_CheckAreaAmbience_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_ProximitySubsystem.BP_ProximitySubsystem_C.IsFoliageNear
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		struct FVector                                     FoliageLocation                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             SetDistanceForNearRadius                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               isNear                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ProximitySubsystem_C::IsFoliageNear(const struct FVector& FoliageLocation, double SetDistanceForNearRadius, bool* isNear)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProximitySubsystem.BP_ProximitySubsystem_C.IsFoliageNear");
		
		ABP_ProximitySubsystem_C_IsFoliageNear_Params params {};
		params.FoliageLocation = FoliageLocation;
		params.SetDistanceForNearRadius = SetDistanceForNearRadius;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (isNear != nullptr)
			*isNear = params.isNear;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_ProximitySubsystem.BP_ProximitySubsystem_C.SetupAreaSFXFoliageType
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<int32_t>                                    MeshIndex                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		EProximityEffectTypes                              FoliageType                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UInstancedStaticMeshComponent*               StaticMeshCompReference                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            IstanceID                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     FoliageLocation                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ProximitySubsystem_C::SetupAreaSFXFoliageType(TArray<int32_t>* MeshIndex, EProximityEffectTypes FoliageType, class UInstancedStaticMeshComponent* StaticMeshCompReference, int32_t IstanceID, const struct FVector& FoliageLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProximitySubsystem.BP_ProximitySubsystem_C.SetupAreaSFXFoliageType");
		
		ABP_ProximitySubsystem_C_SetupAreaSFXFoliageType_Params params {};
		params.FoliageType = FoliageType;
		params.StaticMeshCompReference = StaticMeshCompReference;
		params.IstanceID = IstanceID;
		params.FoliageLocation = FoliageLocation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (MeshIndex != nullptr)
			*MeshIndex = params.MeshIndex;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_ProximitySubsystem.BP_ProximitySubsystem_C.Spawn_FireFlies_VFX
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_ProximitySubsystem_C::Spawn_FireFlies_VFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProximitySubsystem.BP_ProximitySubsystem_C.Spawn_FireFlies_VFX");
		
		ABP_ProximitySubsystem_C_Spawn_FireFlies_VFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_ProximitySubsystem.BP_ProximitySubsystem_C.Spawn_Flies_VFX
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_ProximitySubsystem_C::Spawn_Flies_VFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProximitySubsystem.BP_ProximitySubsystem_C.Spawn_Flies_VFX");
		
		ABP_ProximitySubsystem_C_Spawn_Flies_VFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_ProximitySubsystem.BP_ProximitySubsystem_C.Spawn_Ground_Scatter_VFX
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsInCave                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ProximitySubsystem_C::Spawn_Ground_Scatter_VFX(bool IsInCave)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProximitySubsystem.BP_ProximitySubsystem_C.Spawn_Ground_Scatter_VFX");
		
		ABP_ProximitySubsystem_C_Spawn_Ground_Scatter_VFX_Params params {};
		params.IsInCave = IsInCave;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_ProximitySubsystem.BP_ProximitySubsystem_C.WorldAndForwardVector_Func
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class AFGFoliageRemovalSubsystem*                  FoliageRemovalSystem                                       (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     SpawnLocation_Near                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     SpawnLocation_Far                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ProximitySubsystem_C::WorldAndForwardVector_Func(class AFGFoliageRemovalSubsystem** FoliageRemovalSystem, struct FVector* SpawnLocation_Near, struct FVector* SpawnLocation_Far)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProximitySubsystem.BP_ProximitySubsystem_C.WorldAndForwardVector_Func");
		
		ABP_ProximitySubsystem_C_WorldAndForwardVector_Func_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FoliageRemovalSystem != nullptr)
			*FoliageRemovalSystem = params.FoliageRemovalSystem;
		if (SpawnLocation_Near != nullptr)
			*SpawnLocation_Near = params.SpawnLocation_Near;
		if (SpawnLocation_Far != nullptr)
			*SpawnLocation_Far = params.SpawnLocation_Far;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_ProximitySubsystem.BP_ProximitySubsystem_C.Spawn_Falling_VFX
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AFGFoliageRemovalSubsystem*                  FoliageRemovalSystem                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ProximitySubsystem_C::Spawn_Falling_VFX(class AFGFoliageRemovalSubsystem* FoliageRemovalSystem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProximitySubsystem.BP_ProximitySubsystem_C.Spawn_Falling_VFX");
		
		ABP_ProximitySubsystem_C_Spawn_Falling_VFX_Params params {};
		params.FoliageRemovalSystem = FoliageRemovalSystem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_ProximitySubsystem.BP_ProximitySubsystem_C.Spawn_Scatter_Flying_VFX
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     TreeLocation                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bIsInCave                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ProximitySubsystem_C::Spawn_Scatter_Flying_VFX(const struct FVector& TreeLocation, bool bIsInCave)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProximitySubsystem.BP_ProximitySubsystem_C.Spawn_Scatter_Flying_VFX");
		
		ABP_ProximitySubsystem_C_Spawn_Scatter_Flying_VFX_Params params {};
		params.TreeLocation = TreeLocation;
		params.bIsInCave = bIsInCave;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_ProximitySubsystem.BP_ProximitySubsystem_C.Spawn_Beetles_01_VFX
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_ProximitySubsystem_C::Spawn_Beetles_01_VFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProximitySubsystem.BP_ProximitySubsystem_C.Spawn_Beetles_01_VFX");
		
		ABP_ProximitySubsystem_C_Spawn_Beetles_01_VFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_ProximitySubsystem.BP_ProximitySubsystem_C.DuneDesert_AmbientLife_VFX
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_ProximitySubsystem_C::DuneDesert_AmbientLife_VFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProximitySubsystem.BP_ProximitySubsystem_C.DuneDesert_AmbientLife_VFX");
		
		ABP_ProximitySubsystem_C_DuneDesert_AmbientLife_VFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_ProximitySubsystem.BP_ProximitySubsystem_C.Spawn_Butterflies_VFX
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_ProximitySubsystem_C::Spawn_Butterflies_VFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProximitySubsystem.BP_ProximitySubsystem_C.Spawn_Butterflies_VFX");
		
		ABP_ProximitySubsystem_C_Spawn_Butterflies_VFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_ProximitySubsystem.BP_ProximitySubsystem_C.Spawn_NearVFX
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AFGFoliageRemovalSubsystem*                  FoliageRemovalSystem                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ProximitySubsystem_C::Spawn_NearVFX(class AFGFoliageRemovalSubsystem* FoliageRemovalSystem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProximitySubsystem.BP_ProximitySubsystem_C.Spawn_NearVFX");
		
		ABP_ProximitySubsystem_C_Spawn_NearVFX_Params params {};
		params.FoliageRemovalSystem = FoliageRemovalSystem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_ProximitySubsystem.BP_ProximitySubsystem_C.Spawn_FarVFX
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_ProximitySubsystem_C::Spawn_FarVFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProximitySubsystem.BP_ProximitySubsystem_C.Spawn_FarVFX");
		
		ABP_ProximitySubsystem_C_Spawn_FarVFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_ProximitySubsystem.BP_ProximitySubsystem_C.GetValueByQuality
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		double                                             Low                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             Medium                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             High                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             Ultra                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             UltraPlus                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	double ABP_ProximitySubsystem_C::GetValueByQuality(double Low, double Medium, double High, double Ultra, double UltraPlus)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProximitySubsystem.BP_ProximitySubsystem_C.GetValueByQuality");
		
		ABP_ProximitySubsystem_C_GetValueByQuality_Params params {};
		params.Low = Low;
		params.Medium = Medium;
		params.High = High;
		params.Ultra = Ultra;
		params.UltraPlus = UltraPlus;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_ProximitySubsystem.BP_ProximitySubsystem_C.UpdateQualitySettings
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      Property                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void ABP_ProximitySubsystem_C::UpdateQualitySettings(const class FString& Property)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProximitySubsystem.BP_ProximitySubsystem_C.UpdateQualitySettings");
		
		ABP_ProximitySubsystem_C_UpdateQualitySettings_Params params {};
		params.Property = Property;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_ProximitySubsystem.BP_ProximitySubsystem_C.SetupQuality
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_ProximitySubsystem_C::SetupQuality()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProximitySubsystem.BP_ProximitySubsystem_C.SetupQuality");
		
		ABP_ProximitySubsystem_C_SetupQuality_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_ProximitySubsystem.BP_ProximitySubsystem_C.SetupMapAreaEffect
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      NewArea                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ProximitySubsystem_C::SetupMapAreaEffect(class UClass* NewArea)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProximitySubsystem.BP_ProximitySubsystem_C.SetupMapAreaEffect");
		
		ABP_ProximitySubsystem_C_SetupMapAreaEffect_Params params {};
		params.NewArea = NewArea;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_ProximitySubsystem.BP_ProximitySubsystem_C.EnterAreaTimer
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_ProximitySubsystem_C::EnterAreaTimer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProximitySubsystem.BP_ProximitySubsystem_C.EnterAreaTimer");
		
		ABP_ProximitySubsystem_C_EnterAreaTimer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_ProximitySubsystem.BP_ProximitySubsystem_C.OnEnteredMapArea
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class AFGPlayerControllerBase*                     PlayerController                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		class UClass*                                      NewArea                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	 */
	void ABP_ProximitySubsystem_C::OnEnteredMapArea(class AFGPlayerControllerBase* PlayerController, class UClass* NewArea)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProximitySubsystem.BP_ProximitySubsystem_C.OnEnteredMapArea");
		
		ABP_ProximitySubsystem_C_OnEnteredMapArea_Params params {};
		params.PlayerController = PlayerController;
		params.NewArea = NewArea;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_ProximitySubsystem.BP_ProximitySubsystem_C.Spawn_AmbientLife_Far
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_ProximitySubsystem_C::Spawn_AmbientLife_Far()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProximitySubsystem.BP_ProximitySubsystem_C.Spawn_AmbientLife_Far");
		
		ABP_ProximitySubsystem_C_Spawn_AmbientLife_Far_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_ProximitySubsystem.BP_ProximitySubsystem_C.ReceiveTick
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ProximitySubsystem_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProximitySubsystem.BP_ProximitySubsystem_C.ReceiveTick");
		
		ABP_ProximitySubsystem_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_ProximitySubsystem.BP_ProximitySubsystem_C.Spawn_AmbientLife_Near
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_ProximitySubsystem_C::Spawn_AmbientLife_Near()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProximitySubsystem.BP_ProximitySubsystem_C.Spawn_AmbientLife_Near");
		
		ABP_ProximitySubsystem_C_Spawn_AmbientLife_Near_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_ProximitySubsystem.BP_ProximitySubsystem_C.Spawn_FallingLeaves
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_ProximitySubsystem_C::Spawn_FallingLeaves()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProximitySubsystem.BP_ProximitySubsystem_C.Spawn_FallingLeaves");
		
		ABP_ProximitySubsystem_C_Spawn_FallingLeaves_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_ProximitySubsystem.BP_ProximitySubsystem_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABP_ProximitySubsystem_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProximitySubsystem.BP_ProximitySubsystem_C.ReceiveBeginPlay");
		
		ABP_ProximitySubsystem_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_ProximitySubsystem.BP_ProximitySubsystem_C.isDayTime
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               isDayTime                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ProximitySubsystem_C::isDayTime(bool isDayTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProximitySubsystem.BP_ProximitySubsystem_C.isDayTime");
		
		ABP_ProximitySubsystem_C_isDayTime_Params params {};
		params.isDayTime = isDayTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_ProximitySubsystem.BP_ProximitySubsystem_C.OnPawnChanged
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class APawn*                                       NewPawn                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ProximitySubsystem_C::OnPawnChanged(class APawn* NewPawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProximitySubsystem.BP_ProximitySubsystem_C.OnPawnChanged");
		
		ABP_ProximitySubsystem_C_OnPawnChanged_Params params {};
		params.NewPawn = NewPawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_ProximitySubsystem.BP_ProximitySubsystem_C.ReceiveEndPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		EEndPlayReason                                     EndPlayReason                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ProximitySubsystem_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProximitySubsystem.BP_ProximitySubsystem_C.ReceiveEndPlay");
		
		ABP_ProximitySubsystem_C_ReceiveEndPlay_Params params {};
		params.EndPlayReason = EndPlayReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_ProximitySubsystem.BP_ProximitySubsystem_C.ExecuteUbergraph_BP_ProximitySubsystem
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ProximitySubsystem_C::ExecuteUbergraph_BP_ProximitySubsystem(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProximitySubsystem.BP_ProximitySubsystem_C.ExecuteUbergraph_BP_ProximitySubsystem");
		
		ABP_ProximitySubsystem_C_ExecuteUbergraph_BP_ProximitySubsystem_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_ProximitySubsystem_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_ProximitySubsystem_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_ProximitySubsystem.BP_ProximitySubsystem_C");
		return ptr;
	}

}


