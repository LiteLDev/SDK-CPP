/**
 * @file  DrinkMilkGoal.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class DrinkMilkGoal.
 *
 */
class DrinkMilkGoal {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DRINKMILKGOAL
public:
    class DrinkMilkGoal& operator=(class DrinkMilkGoal const &) = delete;
    DrinkMilkGoal(class DrinkMilkGoal const &) = delete;
    DrinkMilkGoal() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -1478966188
     */
    virtual ~DrinkMilkGoal();
    /**
     * @vftbl  1
     * @symbol ?canUse@DrinkMilkGoal@@UEAA_NXZ
     * @hash   2142367418
     */
    virtual bool canUse();
    /**
     * @vftbl  2
     * @symbol ?canContinueToUse@DrinkMilkGoal@@UEAA_NXZ
     * @hash   -1285635448
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl  3
     * @hash   -1364347549
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl  4
     * @symbol ?start@DrinkMilkGoal@@UEAAXXZ
     * @hash   1226253459
     */
    virtual void start();
    /**
     * @vftbl  5
     * @symbol ?stop@DrinkMilkGoal@@UEAAXXZ
     * @hash   830682499
     */
    virtual void stop();
    /**
     * @vftbl  6
     * @symbol ?tick@DrinkMilkGoal@@UEAAXXZ
     * @hash   346206814
     */
    virtual void tick();
    /**
     * @vftbl  7
     * @symbol ?appendDebugInfo@DrinkMilkGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   -2124579754
     */
    virtual void appendDebugInfo(std::string &) const;
    /**
     * @symbol ??0DrinkMilkGoal@@QEAA@AEAVMob@@@Z
     * @hash   -170305081
     */
    MCAPI DrinkMilkGoal(class Mob &);

};