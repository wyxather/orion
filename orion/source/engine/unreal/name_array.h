#pragma once
#include "source/engine/unreal/unreal_types.h"

class FNameEntry
{
private:
	friend class NameArray;

private:
	static constexpr int32 NameWideMask = 0x1;

private:
	static inline int32 FNameEntryLengthShiftCount = 0x0;

	static inline std::string(*GetStr)(uint8* NameEntry) = nullptr;

private:
	uint8* Address;

public:
	FNameEntry() = default;

	FNameEntry(void* Ptr);

public:
	std::string GetString();
	void* GetAddress();

private:
	//Optional to avoid code duplication for FNamePool
	static void Init(uint8_t* FirstChunkPtr = nullptr, int64 NameEntryStringOffset = 0x0);
};

class NameArray
{
private:
	static inline uint32 FNameBlockOffsetBits = 0x10;

private:
	static uint8* GNames;

	static inline int64 NameEntryStride = 0x0;

	static inline void* (*ByIndex)(void* NamesArray, int32 ComparisonIndex, int32 NamePoolBlockOffsetBits) = nullptr;

private:
	static bool InitializeNameArray(uint8_t* NameArray);
	static bool InitializeNamePool(uint8_t* NamePool);

public:
	static void Init();
	static void PostInit();

	static void Init(int32 GNamesOffset, bool bIsNamePool);
	
public:
	static int32 GetNumChunks();

	static int32 GetNumElements();
	static int32 GetByteCursor();

	static FNameEntry GetNameEntry(void* Name);
	static FNameEntry GetNameEntry(int32 Idx);
};
