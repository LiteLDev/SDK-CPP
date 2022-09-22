/**
 * @file  FindUnderwaterTreasureGoal.hpp
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
 * @brief MC class FindUnderwaterTreasureGoal.
 *
 */
class FindUnderwaterTreasureGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FINDUNDERWATERTREASUREGOAL
public:
    class FindUnderwaterTreasureGoal& operator=(class FindUnderwaterTreasureGoal const &) = delete;
    FindUnderwaterTreasureGoal(class FindUnderwaterTreasureGoal const &) = delete;
    FindUnderwaterTreasureGoal() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -329805020
     */
    virtual ~FindUnderwaterTreasureGoal();
    /**
     * @vftbl  1
     * @symbol ?canUse@FindUnderwaterTreasureGoal@@UEAA_NXZ
     * @hash   -1283205738
     */
    virtual bool canUse();
    /**
     * @vftbl  2
     * @symbol ?canContinueToUse@FindUnderwaterTreasureGoal@@UEAA_NXZ
     * @hash   -82626140
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl  3
     * @symbol ?canBeInterrupted@FindUnderwaterTreasureGoal@@UEAA_NXZ
     * @hash   -775327250
     */
    virtual bool canBeInterrupted();
    /**
     * @vftbl  4
     * @symbol ?start@FindUnderwaterTreasureGoal@@UEAAXXZ
     * @hash   -783449057
     */
    virtual void start();
    /**
     * @vftbl  5
     * @symbol ?stop@FindUnderwaterTreasureGoal@@UEAAXXZ
     * @hash   -1810906993
     */
    virtual void stop();
    /**
     * @vftbl  6
     * @symbol ?tick@FindUnderwaterTreasureGoal@@UEAAXXZ
     * @hash   -555223974
     */
    virtual void tick();
    /**
     * @vftbl  7
     * @symbol ?appendDebugInfo@FindUnderwaterTreasureGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   -301540694
     */
    virtual void appendDebugInfo(std::string &) const;
    /**
     * @symbol ??0FindUnderwaterTreasureGoal@@QEAA@AEAVMob@@MHH@Z
     * @hash   -1094447122
     */
    MCAPI FindUnderwaterTreasureGoal(class Mob &, float, int, int);

};