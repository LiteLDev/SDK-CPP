/**
 * @file  BlockVolume.hpp
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
 * @brief MC class BlockVolume.
 *
 */
class BlockVolume {

#define AFTER_EXTRA
// Add Member There
public:
struct BlockVolumeIter {
    BlockVolumeIter() = delete;
    BlockVolumeIter(BlockVolumeIter const&) = delete;
    BlockVolumeIter(BlockVolumeIter const&&) = delete;
};

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLOCKVOLUME
public:
    class BlockVolume& operator=(class BlockVolume const &) = delete;
    BlockVolume(class BlockVolume const &) = delete;
    BlockVolume() = delete;
#endif

public:
    /**
     * @symbol ??0BlockVolume@@QEAA@V?$buffer_span_mut@PEBVBlock@@@@HHHAEBVBlock@@H@Z
     * @hash   -1353926566
     */
    MCAPI BlockVolume(class buffer_span_mut<class Block const *>, int, int, int, class Block const &, int);
    /**
     * @symbol ?begin@BlockVolume@@QEBA?AUBlockVolumeIter@1@XZ
     * @hash   2087372408
     */
    MCAPI struct BlockVolume::BlockVolumeIter begin() const;
    /**
     * @symbol ?computeHeightMap@BlockVolume@@QEBA?AV?$unique_ptr@V?$vector@FV?$allocator@F@std@@@std@@U?$default_delete@V?$vector@FV?$allocator@F@std@@@std@@@2@@std@@XZ
     * @hash   1220268467
     */
    MCAPI std::unique_ptr<std::vector<short>> computeHeightMap() const;
    /**
     * @symbol ?end@BlockVolume@@QEBA?AUBlockVolumeIter@1@XZ
     * @hash   1208472044
     */
    MCAPI struct BlockVolume::BlockVolumeIter end() const;
    /**
     * @symbol ?findHighestNonAirBlock@BlockVolume@@QEBAFXZ
     * @hash   1259466085
     */
    MCAPI short findHighestNonAirBlock() const;
    /**
     * @symbol ?getAboveTopSolidBlock@BlockVolume@@QEBAFAEBVBlockPos@@_N11@Z
     * @hash   396770713
     */
    MCAPI short getAboveTopSolidBlock(class BlockPos const &, bool, bool, bool) const;
    /**
     * @symbol ?getDimensions@BlockVolume@@QEBA?AVPos@@XZ
     * @hash   -1335363366
     */
    MCAPI class Pos getDimensions() const;
    /**
     * @symbol ?getIndexBounds@BlockVolume@@QEBAIXZ
     * @hash   -765105598
     */
    MCAPI unsigned int getIndexBounds() const;
    /**
     * @symbol ?index@BlockVolume@@QEBAIAEBVBlockPos@@@Z
     * @hash   -1133780185
     */
    MCAPI unsigned int index(class BlockPos const &) const;
    /**
     * @symbol ?index@BlockVolume@@QEBAIAEBVPos@@@Z
     * @hash   1199285253
     */
    MCAPI unsigned int index(class Pos const &) const;
    /**
     * @symbol ?indexNoBoundsCheck@BlockVolume@@QEBAIAEBVPos@@@Z
     * @hash   791956299
     */
    MCAPI unsigned int indexNoBoundsCheck(class Pos const &) const;
    /**
     * @symbol ?indexNoBoundsCheck@BlockVolume@@QEBAIAEBVBlockPos@@@Z
     * @hash   228818245
     */
    MCAPI unsigned int indexNoBoundsCheck(class BlockPos const &) const;
    /**
     * @symbol ?isInBounds@BlockVolume@@QEBA_NAEBVBlockPos@@@Z
     * @hash   1296957675
     */
    MCAPI bool isInBounds(class BlockPos const &) const;
    /**
     * @symbol ?isInBounds@BlockVolume@@QEBA_NAEBVPos@@@Z
     * @hash   -1807250711
     */
    MCAPI bool isInBounds(class Pos const &) const;

};