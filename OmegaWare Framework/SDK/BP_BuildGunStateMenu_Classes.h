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
	 * BlueprintGeneratedClass BP_BuildGunStateMenu.BP_BuildGunStateMenu_C
	 * Size -> 0x0020 (FullSize[0x0078] - InheritedSize[0x0058])
	 */
	class UBP_BuildGunStateMenu_C : public UFGBuildGunState
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0058(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UClass*                                              mLastSelectedBuildCategory;                              // 0x0060(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		TArray<class UClass*>                                      mLastSelectedSubCategories;                              // 0x0068(0x0010) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		void EndState();
		void SecondaryFire();
		void BeginState();
		void ExecuteUbergraph_BP_BuildGunStateMenu(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
