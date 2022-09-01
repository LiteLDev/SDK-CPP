/**
 * @file  BlastFurnaceBlockActor.hpp
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
 * @brief MC class BlastFurnaceBlockActor.
 *
 */
class BlastFurnaceBlockActor {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLASTFURNACEBLOCKACTOR
public:
    class BlastFurnaceBlockActor& operator=(class BlastFurnaceBlockActor const &) = delete;
    BlastFurnaceBlockActor(class BlastFurnaceBlockActor const &) = delete;
    BlastFurnaceBlockActor() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BLASTFURNACEBLOCKACTOR
    /**
     * @symbol ?getName@BlastFurnaceBlockActor@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     * @hash   -984920285
     */
    MCVAPI std::string getName() const;
#endif
    /**
     * @symbol ??0BlastFurnaceBlockActor@@QEAA@AEBVBlockPos@@@Z
     * @hash   -313691541
     */
    MCAPI BlastFurnaceBlockActor(class BlockPos const &);

};