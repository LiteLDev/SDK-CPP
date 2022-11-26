/**
 * @file  ChunkLoadActionList.hpp
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
 * @brief MC class ChunkLoadActionList.
 *
 */
class ChunkLoadActionList {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CHUNKLOADACTIONLIST
public:
    class ChunkLoadActionList& operator=(class ChunkLoadActionList const &) = delete;
    ChunkLoadActionList(class ChunkLoadActionList const &) = delete;
#endif

public:
    /**
     * @symbol ??0ChunkLoadActionList@@QEAA@XZ
     * @hash   815909203
     */
    MCAPI ChunkLoadActionList();
    /**
     * @symbol ?addChunkLoadedRequest@ChunkLoadActionList@@QEAAXVChunkLoadedRequest@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4ChunksLoadedStatus@@AEAVLevelStorage@@@Z
     * @hash   894258527
     */
    MCAPI void addChunkLoadedRequest(class ChunkLoadedRequest, std::string const &, enum class ChunksLoadedStatus, class LevelStorage &);
    /**
     * @symbol ?loadRequests@ChunkLoadActionList@@QEAAXAEAVLevelStorage@@AEAVICommandOriginLoader@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   -1960613310
     */
    MCAPI void loadRequests(class LevelStorage &, class ICommandOriginLoader &, std::string const &);
    /**
     * @symbol ?onChunkLoaded@ChunkLoadActionList@@QEAAXAEAVLevelStorage@@AEAVChunkSource@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAVLevelChunk@@UTick@@@Z
     * @hash   -172904666
     */
    MCAPI void onChunkLoaded(class LevelStorage &, class ChunkSource &, std::string const &, class LevelChunk &, struct Tick);
    /**
     * @symbol ?onStaticTickingAreaAdded@ChunkLoadActionList@@QEAAXAEAVLevelStorage@@AEAVDimension@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UTick@@@Z
     * @hash   -1105473281
     */
    MCAPI void onStaticTickingAreaAdded(class LevelStorage &, class Dimension &, std::string const &, struct Tick);
    /**
     * @symbol ?queueRequestOrExecuteAction@ChunkLoadActionList@@QEAA?AW4QueueRequestResult@@VChunkLoadedRequest@@AEAVServerLevel@@AEAVLevelStorage@@AEAVDimension@@@Z
     * @hash   -324285336
     */
    MCAPI enum class QueueRequestResult queueRequestOrExecuteAction(class ChunkLoadedRequest, class ServerLevel &, class LevelStorage &, class Dimension &);
    /**
     * @symbol ?tickRequests@ChunkLoadActionList@@QEAAXAEAVServerLevel@@AEAVDimension@@@Z
     * @hash   -816650429
     */
    MCAPI void tickRequests(class ServerLevel &, class Dimension &);
    /**
     * @symbol ??1ChunkLoadActionList@@QEAA@XZ
     * @hash   -1577678781
     */
    MCAPI ~ChunkLoadActionList();

//private:
    /**
     * @symbol ?_addChunkLoadedRequest@ChunkLoadActionList@@AEAAXVChunkLoadedRequest@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4ChunksLoadedStatus@@AEAVLevelStorage@@@Z
     * @hash   -1831589200
     */
    MCAPI void _addChunkLoadedRequest(class ChunkLoadedRequest, std::string const &, enum class ChunksLoadedStatus, class LevelStorage &);
    /**
     * @symbol ?_saveRequest@ChunkLoadActionList@@AEAAXAEAVChunkLoadedRequest@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4ChunkRequestListType@@AEAVLevelStorage@@@Z
     * @hash   240428328
     */
    MCAPI void _saveRequest(class ChunkLoadedRequest &, std::string const &, enum class ChunkRequestListType, class LevelStorage &);
    /**
     * @symbol ?_updateAsyncList@ChunkLoadActionList@@AEAAXAEAVLevelStorage@@AEAVDimension@@V?$function@$$A6A?AW4ChunksLoadedStatus@@AEAVChunkLoadedRequest@@@Z@std@@@Z
     * @hash   -1572112472
     */
    MCAPI void _updateAsyncList(class LevelStorage &, class Dimension &, class std::function<enum class ChunksLoadedStatus (class ChunkLoadedRequest &)>);
    /**
     * @symbol ?_updateTickingList@ChunkLoadActionList@@AEAAXAEAVServerLevel@@AEAVDimension@@V?$function@$$A6A?AW4ChunksLoadedStatus@@AEAVChunkLoadedRequest@@@Z@std@@@Z
     * @hash   1735251557
     */
    MCAPI void _updateTickingList(class ServerLevel &, class Dimension &, class std::function<enum class ChunksLoadedStatus (class ChunkLoadedRequest &)>);

private:

};