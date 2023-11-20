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
	 * BlueprintGeneratedClass BPFL_DamageTypes.BPFL_DamageTypes_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UBPFL_DamageTypes_C : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_IsDamageFromWorldBounds(class UFGDamageType* DamageType, class UObject* __WorldContext, bool* isRadiationDamages);
		void STATIC_IsDamageFromDrown(class UFGDamageType* DamageType, class UObject* __WorldContext, bool* isRadiationDamages);
		void STATIC_IsDamageFromFall(class UFGDamageType* DamageType, class UObject* __WorldContext, bool* isRadiationDamages);
		void STATIC_IsDamageFromHeat(class UFGDamageType* DamageType, class UObject* __WorldContext, bool* isRadiationDamages);
		void STATIC_IsDamageFromGas(class UFGDamageType* DamageType, class UObject* __WorldContext, bool* isRadiationDamages);
		void STATIC_IsDamageFromRadiation(class UFGDamageType* DamageType, class UObject* __WorldContext, bool* isRadiationDamages);
		void STATIC_IsDamageFromEnergy(class UFGDamageType* DamageType, class UObject* __WorldContext, bool* isRadiationDamages);
		void STATIC_IsDamageFromPhysical(class UFGDamageType* DamageType, class UObject* __WorldContext, bool* isRadiationDamages);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
