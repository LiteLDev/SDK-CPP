// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class LevelChunkGarbageCollector {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LEVELCHUNKGARBAGECOLLECTOR
public:
    class LevelChunkGarbageCollector& operator=(class LevelChunkGarbageCollector const &) = delete;
    LevelChunkGarbageCollector(class LevelChunkGarbageCollector const &) = delete;
    LevelChunkGarbageCollector() = delete;
#endif


public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_LEVELCHUNKGARBAGECOLLECTOR
public:
#endif
    MCAPI LevelChunkGarbageCollector(class Dimension &);
    MCAPI void acquireDiscardedChunk(std::unique_ptr<class LevelChunk>);
    MCAPI unsigned __int64 getPendingDeletesCount() const;
    MCAPI ~LevelChunkGarbageCollector();

//protected:
    MCAPI void flush();

protected:


};