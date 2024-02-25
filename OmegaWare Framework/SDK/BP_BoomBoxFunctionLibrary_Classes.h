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
	 * BlueprintGeneratedClass BP_BoomBoxFunctionLibrary.BP_BoomBoxFunctionLibrary_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UBP_BoomBoxFunctionLibrary_C : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_TriggerTurboBassShockWaveVFX(class AFGCharacterPlayer* instigatorCharacter, class AActor* Emitter, class UObject* __WorldContext);
		void TraceDebrisSurfaceType(class AActor* Instigator, class UObject* __WorldContext, EPhysicalSurface* Surface, struct FVector* Location, bool* Hit);
		void ShockWave_VFX(EPhysicalSurface Surface, const struct FVector& Location, bool Hit, class AActor* Instigator, const struct FVector& SourceLocation, class UObject* __WorldContext);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
