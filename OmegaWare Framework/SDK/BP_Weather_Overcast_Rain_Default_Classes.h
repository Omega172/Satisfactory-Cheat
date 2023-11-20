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
	// # Classes
	// --------------------------------------------------
	/**
	 * BlueprintGeneratedClass BP_Weather_Overcast_Rain_Default.BP_Weather_Overcast_Rain_Default_C
	 * Size -> 0x0070 (FullSize[0x03F8] - InheritedSize[0x0388])
	 */
	class ABP_Weather_Overcast_Rain_Default_C : public ABP_Weather_Overcast_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0388(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UNiagaraComponent*                                   mRainParticleSystem;                                     // 0x0390(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash
		double                                                     mRainIntensityTarget;                                    // 0x0398(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAkComponent*                                        mRainAKComponent;                                        // 0x03A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash
		class UAkAudioEvent*                                       mRainAkEvent;                                            // 0x03A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class UAkAudioEvent*                                       mRainAkStopEvent;                                        // 0x03B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		int32_t                                                    mRainAKPostEventId;                                      // 0x03B8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_WF2D[0x4];                                   // 0x03BC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     mInitialWorldWetness;                                    // 0x03C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FTimerHandle                                        mCheckLocationTimer;                                     // 0x03C8(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class UClass*                                              mDDZoneType;                                             // 0x03D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		bool                                                       bIsInDD;                                                 // 0x03D8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bIsFadingOut;                                            // 0x03D9(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_TRQ8[0x6];                                   // 0x03DA(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTimerHandle                                        mFadeOutHandle;                                          // 0x03E0(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		double                                                     pct;                                                     // 0x03E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AFGSkySphere*                                        SkySphere;                                               // 0x03F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash

	public:
		void UpdateRainIntensity(double Alpha);
		void SetCollisionRainSpawnBox(const struct FVector& InValue);
		void SetRainParticleParams();
		void SetRainIntensityFar(double RainIntesnity);
		void SetRainVelocity(const struct FVector& Param);
		void SetRainIntensity(double RainIntesnity);
		void SetRainFarVelocityMultiplier(double Param);
		void SetRainFarAreaSize(double Value);
		void SetRainAreaSize(const struct FVector& InValue);
		void SetCollisionRainSpawnRate(double Param);
		void StartWeatherState(class AFGSkySphere* SkySphere);
		void TransitionBeginWeatherState(float dt, float percentage);
		void EndWeatherState(class AFGSkySphere* SkySphere);
		void TransitionEndWeatherState(float dt, float percentage);
		void OnTransitionFinished(bool bEventFinished);
		void RecheckLocation();
		void FadeWetness();
		void BecomeWet();
		void ExecuteUbergraph_BP_Weather_Overcast_Rain_Default(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
