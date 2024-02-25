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
	 * BlueprintGeneratedClass BP_BuildGunStateDismantle.BP_BuildGunStateDismantle_C
	 * Size -> 0x0010 (FullSize[0x01C8] - InheritedSize[0x01B8])
	 */
	class UBP_BuildGunStateDismantle_C : public UFGBuildGunStateDismantle
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x01B8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidget_DismantleMode_C*                             mDismantleUI;                                            // 0x01C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash

	public:
		void TickState(float DeltaTime);
		void SecondaryFire();
		void BeginState();
		void EndState();
		void OnStartDismantle();
		void OnStopDismantle();
		void OnRecipeSampled(class UClass* recipe);
		void ExecuteUbergraph_BP_BuildGunStateDismantle(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
