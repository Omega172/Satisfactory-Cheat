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
	// # Structs
	// --------------------------------------------------
	/**
	 * Function MetasoundEngine.MetasoundGeneratorHandle.CreateMetaSoundGeneratorHandle
	 */
	struct UMetasoundGeneratorHandle_CreateMetaSoundGeneratorHandle_Params
	{
	public:
		class UAudioComponent*                                     OnComponent;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UMetasoundGeneratorHandle*                           ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MetasoundEngine.MetasoundGeneratorHandle.ApplyParameterPack
	 */
	struct UMetasoundGeneratorHandle_ApplyParameterPack_Params
	{
	public:
		class UMetasoundParameterPack*                             Pack;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MetasoundEngine.MetaSoundAssetSubsystem.UnregisterAssetClassesInDirectories
	 */
	struct UMetaSoundAssetSubsystem_UnregisterAssetClassesInDirectories_Params
	{
	public:
		TArray<struct FMetaSoundAssetDirectory>                    Directories;                                             // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MetasoundEngine.MetaSoundAssetSubsystem.RegisterAssetClassesInDirectories
	 */
	struct UMetaSoundAssetSubsystem_RegisterAssetClassesInDirectories_Params
	{
	public:
		TArray<struct FMetaSoundAssetDirectory>                    Directories;                                             // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
