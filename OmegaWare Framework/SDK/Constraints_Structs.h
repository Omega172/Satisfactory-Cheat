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
	// # Enums
	// --------------------------------------------------
	/**
	 * Enum Constraints.EHandleEvent
	 */
	enum class EHandleEvent : uint8_t
	{
		LocalTransformUpdated  = 0,
		GlobalTransformUpdated = 1,
		ComponentUpdated       = 2,
		Max                    = 3
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct Constraints.ConstraintTickFunction
	 * Size -> 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
	 */
	struct FConstraintTickFunction : public FTickFunction
	{
	public:
		unsigned char                                              UnknownData_I0QE[0x18];                                  // 0x0028(0x0018) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Constraints.MovieSceneConstraintChannel
	 * Size -> 0x0000 (FullSize[0x0100] - InheritedSize[0x0100])
	 */
	struct FMovieSceneConstraintChannel : public FMovieSceneBoolChannel
	{	};

	/**
	 * ScriptStruct Constraints.ConstraintAndActiveChannel
	 * Size -> 0x0138
	 */
	struct FConstraintAndActiveChannel
	{
	public:
		unsigned char                                              Constraint[0x30];                                        // 0x0000(0x0030) UNKNOWN PROPERTY: SoftObjectProperty
		struct FMovieSceneConstraintChannel                        ActiveChannel;                                           // 0x0030(0x0100) NativeAccessSpecifierPublic
		class UTickableConstraint*                                 ConstraintCopyToSpawn;                                   // 0x0130(0x0008) ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
