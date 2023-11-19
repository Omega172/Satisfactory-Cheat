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
	 * BlueprintGeneratedClass BPCA_AlphaHogRoar.BPCA_AlphaHogRoar_C
	 * Size -> 0x0008 (FullSize[0x01D0] - InheritedSize[0x01C8])
	 */
	class UBPCA_AlphaHogRoar_C : public UFGCreatureActionRoar
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x01C8(0x0008) ZeroConstructor, Transient, DuplicateTransient

	public:
		void OnBeginRoar();
		void ExecuteUbergraph_BPCA_AlphaHogRoar(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
