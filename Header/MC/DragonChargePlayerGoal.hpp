/**
 * @file  DragonChargePlayerGoal.hpp
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
 * @brief MC class DragonChargePlayerGoal.
 *
 */
class DragonChargePlayerGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DRAGONCHARGEPLAYERGOAL
public:
    class DragonChargePlayerGoal& operator=(class DragonChargePlayerGoal const &) = delete;
    DragonChargePlayerGoal(class DragonChargePlayerGoal const &) = delete;
    DragonChargePlayerGoal() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   1504373477
     */
    virtual ~DragonChargePlayerGoal();
    /**
     * @vftbl  1
     * @symbol ?canUse@DragonChargePlayerGoal@@UEAA_NXZ
     * @hash   -674994651
     */
    virtual bool canUse();
    /**
     * @vftbl  2
     * @symbol ?canContinueToUse@DragonChargePlayerGoal@@UEAA_NXZ
     * @hash   2028171795
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl  3
     * @hash   -1364347549
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl  4
     * @symbol ?start@DragonChargePlayerGoal@@UEAAXXZ
     * @hash   521763838
     */
    virtual void start();
    /**
     * @vftbl  5
     * @symbol ?stop@DragonChargePlayerGoal@@UEAAXXZ
     * @hash   -1176163314
     */
    virtual void stop();
    /**
     * @vftbl  6
     * @symbol ?tick@DragonChargePlayerGoal@@UEAAXXZ
     * @hash   -1903801367
     */
    virtual void tick();
    /**
     * @vftbl  7
     * @symbol ?appendDebugInfo@DragonChargePlayerGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   -493453141
     */
    virtual void appendDebugInfo(std::string &) const;
    /**
     * @symbol ??0DragonChargePlayerGoal@@QEAA@AEAVMob@@@Z
     * @hash   473877938
     */
    MCAPI DragonChargePlayerGoal(class Mob &);

};