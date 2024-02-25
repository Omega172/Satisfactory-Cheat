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
	 * BlueprintGeneratedClass Desc_Rebar_Stunshot.Desc_Rebar_Stunshot_C
	 * Size -> 0x0008 (FullSize[0x05D8] - InheritedSize[0x05D0])
	 */
	class UDesc_Rebar_Stunshot_C : public UFGAmmoTypeProjectile
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x05D0(0x0008) ZeroConstructor, Transient, DuplicateTransient

	public:
		void FireAmmunition();
		void ExecuteUbergraph_Desc_Rebar_Stunshot(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
