/**
 * @file  StalkAndPounceOnTargetGoal.hpp
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
 * @brief MC class StalkAndPounceOnTargetGoal.
 *
 */
class StalkAndPounceOnTargetGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_STALKANDPOUNCEONTARGETGOAL
public:
    class StalkAndPounceOnTargetGoal& operator=(class StalkAndPounceOnTargetGoal const &) = delete;
    StalkAndPounceOnTargetGoal(class StalkAndPounceOnTargetGoal const &) = delete;
    StalkAndPounceOnTargetGoal() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   1961804543
     */
    virtual ~StalkAndPounceOnTargetGoal();
    /**
     * @vftbl  1
     * @symbol ?canUse@StalkAndPounceOnTargetGoal@@UEAA_NXZ
     * @hash   1775668091
     */
    virtual bool canUse();
    /**
     * @vftbl  2
     * @symbol ?canContinueToUse@StalkAndPounceOnTargetGoal@@UEAA_NXZ
     * @hash   -1318781111
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl  3
     * @symbol ?canBeInterrupted@StalkAndPounceOnTargetGoal@@UEAA_NXZ
     * @hash   -102228925
     */
    virtual bool canBeInterrupted();
    /**
     * @vftbl  4
     * @symbol ?start@StalkAndPounceOnTargetGoal@@UEAAXXZ
     * @hash   1249682260
     */
    virtual void start();
    /**
     * @vftbl  5
     * @symbol ?stop@StalkAndPounceOnTargetGoal@@UEAAXXZ
     * @hash   221132628
     */
    virtual void stop();
    /**
     * @vftbl  6
     * @symbol ?tick@StalkAndPounceOnTargetGoal@@UEAAXXZ
     * @hash   1476831023
     */
    virtual void tick();
    /**
     * @vftbl  7
     * @symbol ?appendDebugInfo@StalkAndPounceOnTargetGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   -1471610427
     */
    virtual void appendDebugInfo(std::string &) const;
    /**
     * @symbol ??0StalkAndPounceOnTargetGoal@@QEAA@AEAVMob@@AEBVActorFilterGroup@@MMMMMMMM_N@Z
     * @hash   1217599068
     */
    MCAPI StalkAndPounceOnTargetGoal(class Mob &, class ActorFilterGroup const &, float, float, float, float, float, float, float, float, bool);

//private:
    /**
     * @symbol ?_isStuckBlock@StalkAndPounceOnTargetGoal@@AEBA_NVBlockPos@@@Z
     * @hash   1079405600
     */
    MCAPI bool _isStuckBlock(class BlockPos) const;
    /**
     * @symbol ?_preparePounce@StalkAndPounceOnTargetGoal@@AEAAXAEBVVec3@@0@Z
     * @hash   -2127101911
     */
    MCAPI void _preparePounce(class Vec3 const &, class Vec3 const &);

private:

};