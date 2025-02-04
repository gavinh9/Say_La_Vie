// Copyright 1998-2014 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectBase.h"

#ifdef SAYLAVIE_minigameActor_generated_h
#error "minigameActor.generated.h already included, missing '#pragma once' in minigameActor.h"
#endif
#define SAYLAVIE_minigameActor_generated_h

#define AminigameActor_EVENTPARMS
#define AminigameActor_RPC_WRAPPERS
#define AminigameActor_CALLBACK_WRAPPERS
#define AminigameActor_INCLASS \
	private: \
	static void StaticRegisterNativesAminigameActor(); \
	friend SAYLAVIE_API class UClass* Z_Construct_UClass_AminigameActor(); \
	public: \
	DECLARE_CLASS(AminigameActor, AActor, COMPILED_IN_FLAGS(0), 0, SayLaVie, NO_API) \
	DECLARE_SERIALIZER(AminigameActor) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	UObject* _getUObject() const { return const_cast<AminigameActor*>(this); }


#define AminigameActor_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AminigameActor(const class FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AminigameActor) \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API AminigameActor(const AminigameActor& InCopy); \
public:


#define AminigameActor_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AminigameActor(const class FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) { }; \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API AminigameActor(const AminigameActor& InCopy); \
public: \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AminigameActor)


#undef UCLASS_CURRENT_FILE_NAME
#define UCLASS_CURRENT_FILE_NAME AminigameActor


#undef UCLASS
#undef UINTERFACE
#if UE_BUILD_DOCS
#define UCLASS(...)
#else
#define UCLASS(...) \
AminigameActor_EVENTPARMS
#endif


#undef GENERATED_UCLASS_BODY
#undef GENERATED_BODY
#undef GENERATED_IINTERFACE_BODY
#define GENERATED_UCLASS_BODY() \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AminigameActor_RPC_WRAPPERS \
	AminigameActor_CALLBACK_WRAPPERS \
	AminigameActor_INCLASS \
	AminigameActor_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GENERATED_BODY() \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AminigameActor_RPC_WRAPPERS \
	AminigameActor_CALLBACK_WRAPPERS \
	AminigameActor_INCLASS \
	AminigameActor_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class minigameActor."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


