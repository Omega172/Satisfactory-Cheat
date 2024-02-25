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
	// # Classes
	// --------------------------------------------------
	/**
	 * BlueprintGeneratedClass Desc_CartridgeStandard.Desc_CartridgeStandard_C
	 * Size -> 0x0008 (FullSize[0x03F8] - InheritedSize[0x03F0])
	 */
	class UDesc_CartridgeStandard_C : public UFGAmmoTypeInstantHit
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x03F0(0x0008) ZeroConstructor, Transient, DuplicateTransient

	public:
		struct FVector NewFunction(const struct FVector& InNormal, const struct FVector& A, const struct FVector& B, const struct FVector& A2, const struct FVector& B2, const struct FVector& InputPin, const struct FVector& InputPin2, struct FVector* ReturnValue2, bool* ReturnValue3);
		void CalculateRicochet(const struct FVector& Location, const struct FVector& ImpactPoint, const struct FVector& Normal, const struct FVector& ImpactNormal, const struct FVector& TraceStart, struct FVector* FlyByPosition, double* TravelDistance);
		void ProcessHit(const struct FHitResult& HitResult);
		void ExecuteUbergraph_Desc_CartridgeStandard(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
