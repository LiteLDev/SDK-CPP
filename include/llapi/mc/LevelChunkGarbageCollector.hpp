/**
 * @file  LevelChunkGarbageCollector.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class LevelChunkGarbageCollector.
 *
 */
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
    /**
     * @symbol ??0LevelChunkGarbageCollector@@QEAA@AEAVDimension@@@Z
     * @hash   -1072146944
     */
    MCAPI LevelChunkGarbageCollector(class Dimension &);
    /**
     * @symbol ?acquireDiscardedChunk@LevelChunkGarbageCollector@@QEAAXV?$unique_ptr@VLevelChunk@@U?$default_delete@VLevelChunk@@@std@@@std@@@Z
     * @hash   -908811052
     */
    MCAPI void acquireDiscardedChunk(std::unique_ptr<class LevelChunk>);
    /**
     * @symbol ?getPendingDeletesCount@LevelChunkGarbageCollector@@QEBA_KXZ
     * @hash   -1076587353
     */
    MCAPI unsigned __int64 getPendingDeletesCount() const;
    /**
     * @symbol ??1LevelChunkGarbageCollector@@QEAA@XZ
     * @hash   -955282325
     */
    MCAPI ~LevelChunkGarbageCollector();

//protected:
    /**
     * @symbol ?flush@LevelChunkGarbageCollector@@IEAAXXZ
     * @hash   1166461142
     */
    MCAPI void flush();

protected:

};