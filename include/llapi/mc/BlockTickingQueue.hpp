/**
 * @file  BlockTickingQueue.hpp
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
 * @brief MC class BlockTickingQueue.
 *
 */
class BlockTickingQueue {

#define AFTER_EXTRA
// Add Member There
public:
class TickDataSet {
public:
    TickDataSet() = delete;
    TickDataSet(TickDataSet const&) = delete;
    TickDataSet(TickDataSet const&&) = delete;
};

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLOCKTICKINGQUEUE
public:
    class BlockTickingQueue& operator=(class BlockTickingQueue const &) = delete;
    BlockTickingQueue(class BlockTickingQueue const &) = delete;
    BlockTickingQueue() = delete;
#endif

public:
    /**
     * @symbol ?acquireAllRandomTicks@BlockTickingQueue@@QEAAXAEAVLevelChunk@@@Z
     * @hash   -1302344820
     */
    MCAPI void acquireAllRandomTicks(class LevelChunk &);
    /**
     * @symbol ?acquireAllTicks@BlockTickingQueue@@QEAAXAEAV1@@Z
     * @hash   1298406614
     */
    MCAPI void acquireAllTicks(class BlockTickingQueue &);
    /**
     * @symbol ?acquireAllTicks@BlockTickingQueue@@QEAAXAEAVLevelChunk@@@Z
     * @hash   -1557319188
     */
    MCAPI void acquireAllTicks(class LevelChunk &);
    /**
     * @symbol ?add@BlockTickingQueue@@QEAAXAEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@HH@Z
     * @hash   -1922906446
     */
    MCAPI void add(class BlockSource &, class BlockPos const &, class Block const &, int, int);
    /**
     * @symbol ?addTickToLevelChunk@BlockTickingQueue@@QEAAXAEAVLevelChunk@@AEBVBlockPos@@AEBVBlock@@HH@Z
     * @hash   -1446083148
     */
    MCAPI void addTickToLevelChunk(class LevelChunk &, class BlockPos const &, class Block const &, int, int);
    /**
     * @symbol ?eliminateAllTicksZeroAndAbove@BlockTickingQueue@@QEAAXXZ
     * @hash   237742015
     */
    MCAPI void eliminateAllTicksZeroAndAbove();
    /**
     * @symbol ?eliminateDuplicatesOf@BlockTickingQueue@@QEAAXAEBVBlockLegacy@@@Z
     * @hash   591155474
     */
    MCAPI void eliminateDuplicatesOf(class BlockLegacy const &);
    /**
     * @symbol ?getNextUpdateForPos@BlockTickingQueue@@QEBA_NAEBVBlockPos@@AEAUTick@@@Z
     * @hash   -781612134
     */
    MCAPI bool getNextUpdateForPos(class BlockPos const &, struct Tick &) const;
    /**
     * @symbol ?getTickDelaysInArea@BlockTickingQueue@@QEBA?AV?$unordered_multimap@VBlockPos@@UTickDelayBlock@@U?$hash@VBlockPos@@@std@@U?$equal_to@VBlockPos@@@4@V?$allocator@U?$pair@$$CBVBlockPos@@UTickDelayBlock@@@std@@@4@@std@@AEBVBoundingBox@@@Z
     * @hash   -1381437438
     */
    MCAPI class std::unordered_multimap<class BlockPos, struct TickDelayBlock, struct std::hash<class BlockPos>, struct std::equal_to<class BlockPos>, class std::allocator<struct std::pair<class BlockPos const, struct TickDelayBlock>>> getTickDelaysInArea(class BoundingBox const &) const;
    /**
     * @symbol ?hasTickInCurrentTick@BlockTickingQueue@@QEBA_NAEBVBlockPos@@@Z
     * @hash   -1960953889
     */
    MCAPI bool hasTickInCurrentTick(class BlockPos const &) const;
    /**
     * @symbol ?hasTickInPendingTicks@BlockTickingQueue@@QEBA_NAEBVBlockPos@@@Z
     * @hash   -2042174757
     */
    MCAPI bool hasTickInPendingTicks(class BlockPos const &) const;
    /**
     * @symbol ?isBlockInPendingTick@BlockTickingQueue@@QEBA_NAEBVBlockPos@@AEBVBlock@@@Z
     * @hash   496808150
     */
    MCAPI bool isBlockInPendingTick(class BlockPos const &, class Block const &) const;
    /**
     * @symbol ?isBlockInPendingTick@BlockTickingQueue@@QEBA_NAEBVBlockPos@@AEBVBlockLegacy@@@Z
     * @hash   -282803836
     */
    MCAPI bool isBlockInPendingTick(class BlockPos const &, class BlockLegacy const &) const;
    /**
     * @symbol ?isEmpty@BlockTickingQueue@@QEBA_NXZ
     * @hash   -89888116
     */
    MCAPI bool isEmpty() const;
    /**
     * @symbol ?isInstaticking@BlockTickingQueue@@QEBA_NXZ
     * @hash   -382281378
     */
    MCAPI bool isInstaticking() const;
    /**
     * @symbol ?load@BlockTickingQueue@@QEAAXAEBVCompoundTag@@AEBVBlockPalette@@@Z
     * @hash   -426072025
     */
    MCAPI void load(class CompoundTag const &, class BlockPalette const &);
    /**
     * @symbol ?remove@BlockTickingQueue@@QEAAX$$QEAV?$function@$$A6A_NAEBVTickNextTickData@@@Z@std@@@Z
     * @hash   -1924668386
     */
    MCAPI void remove(class std::function<bool (class TickNextTickData const &)> &&);
    /**
     * @symbol ?remove@BlockTickingQueue@@QEAAXAEBVBlockPos@@AEBVBlock@@@Z
     * @hash   1896034423
     */
    MCAPI void remove(class BlockPos const &, class Block const &);
    /**
     * @symbol ?save@BlockTickingQueue@@QEBAXAEAVCompoundTag@@@Z
     * @hash   -750681874
     */
    MCAPI void save(class CompoundTag &) const;
    /**
     * @symbol ?setOwningChunk@BlockTickingQueue@@QEAAXPEAVLevelChunk@@@Z
     * @hash   -1949588619
     */
    MCAPI void setOwningChunk(class LevelChunk *);
    /**
     * @symbol ?tickAllPendingTicks@BlockTickingQueue@@QEAAXAEAVBlockSource@@_K@Z
     * @hash   1833970270
     */
    MCAPI void tickAllPendingTicks(class BlockSource &, unsigned __int64);
    /**
     * @symbol ?tickPendingTicks@BlockTickingQueue@@QEAA_NAEAVBlockSource@@AEBUTick@@H_N@Z
     * @hash   1902247404
     */
    MCAPI bool tickPendingTicks(class BlockSource &, struct Tick const &, int, bool);
    /**
     * @symbol ?ticksFromNow@BlockTickingQueue@@QEBAHH@Z
     * @hash   -92634057
     */
    MCAPI int ticksFromNow(int) const;
    /**
     * @symbol ??1BlockTickingQueue@@QEAA@XZ
     * @hash   -1604836475
     */
    MCAPI ~BlockTickingQueue();

//protected:
    /**
     * @symbol ?_saveQueue@BlockTickingQueue@@IEBAXAEAVListTag@@AEBVTickDataSet@1@@Z
     * @hash   -767713995
     */
    MCAPI void _saveQueue(class ListTag &, class BlockTickingQueue::TickDataSet const &) const;

//private:
    /**
     * @symbol ?_acquireAllTicks@BlockTickingQueue@@AEAAXAEAV1@@Z
     * @hash   253008916
     */
    MCAPI void _acquireAllTicks(class BlockTickingQueue &);
    /**
     * @symbol ?_addToNextTickQueue@BlockTickingQueue@@AEAAXAEBVBlockPos@@AEBVBlock@@HH@Z
     * @hash   722726417
     */
    MCAPI void _addToNextTickQueue(class BlockPos const &, class Block const &, int, int);

protected:

private:

};