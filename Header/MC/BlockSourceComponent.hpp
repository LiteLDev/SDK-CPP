/**
 * @file  BlockSourceComponent.hpp
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
 * @brief MC class BlockSourceComponent.
 *
 */
class BlockSourceComponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLOCKSOURCECOMPONENT
public:
    class BlockSourceComponent& operator=(class BlockSourceComponent const &) = delete;
    BlockSourceComponent(class BlockSourceComponent const &) = delete;
    BlockSourceComponent() = delete;
#endif

public:
    /**
     * @symbol ??0BlockSourceComponent@@QEAA@AEAVLevel@@AEAVDimension@@AEAVChunkSource@@_N@Z
     * @hash   -384775655
     */
    MCAPI BlockSourceComponent(class Level &, class Dimension &, class ChunkSource &, bool);
    /**
     * @symbol ?tryGetBlockSource@BlockSourceComponent@@QEBA?AV?$StackRefResultT@U?$SharePtrRefTraits@VBlockSource@@@@@@XZ
     * @hash   -817913802
     */
    MCAPI class StackRefResultT<struct SharePtrRefTraits<class BlockSource>> tryGetBlockSource() const;

};