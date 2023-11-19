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
	// # Enums
	// --------------------------------------------------
	/**
	 * Enum NiagaraCore.ENiagaraIterationSource
	 */
	enum class ENiagaraIterationSource : uint8_t
	{
		Particles     = 0,
		DataInterface = 1,
		DirectSet     = 2,
		MAX           = 3
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct NiagaraCore.NiagaraVariableCommonReference
	 * Size -> 0x0010
	 */
	struct FNiagaraVariableCommonReference
	{
	public:
		class FName                                                Name;                                                    // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UObject*                                             UnderlyingType;                                          // 0x0008(0x0008) ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct NiagaraCore.NiagaraCompileHash
	 * Size -> 0x0010
	 */
	struct FNiagaraCompileHash
	{
	public:
		TArray<unsigned char>                                      DataHash;                                                // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
