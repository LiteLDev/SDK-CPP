/**
 * @file  WorkGoal.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "MoveToPOIGoal.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class WorkGoal.
 *
 */
class WorkGoal : public MoveToPOIGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_WORKGOAL
public:
    class WorkGoal& operator=(class WorkGoal const &) = delete;
    WorkGoal(class WorkGoal const &) = delete;
    WorkGoal() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   1466647822
     */
    virtual ~WorkGoal();
    /**
     * @vftbl  1
     * @symbol ?canUse@WorkGoal@@UEAA_NXZ
     * @hash   788805148
     */
    virtual bool canUse();
    /**
     * @vftbl  2
     * @symbol ?canContinueToUse@WorkGoal@@UEAA_NXZ
     * @hash   -1124502022
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl  3
     * @hash   -1364347549
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl  4
     * @symbol ?start@WorkGoal@@UEAAXXZ
     * @hash   -482999979
     */
    virtual void start();
    /**
     * @vftbl  5
     * @symbol ?stop@WorkGoal@@UEAAXXZ
     * @hash   1650298165
     */
    virtual void stop();
    /**
     * @vftbl  6
     * @symbol ?tick@WorkGoal@@UEAAXXZ
     * @hash   -255546944
     */
    virtual void tick();
    /**
     * @vftbl  7
     * @symbol ?appendDebugInfo@WorkGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   -1332496508
     */
    virtual void appendDebugInfo(std::string &) const;
    /**
     * @vftbl  8
     * @hash   -1402013944
     */
    virtual void __unk_vfn_8();
    /**
     * @vftbl  9
     * @hash   -1352071735
     */
    virtual void __unk_vfn_9();
    /**
     * @vftbl  18
     * @symbol ?useWorkstation@WorkGoal@@UEAAXXZ
     * @hash   -479817425
     */
    virtual void useWorkstation();
    /**
     * @symbol ??0WorkGoal@@QEAA@AEAVMob@@@Z
     * @hash   -165072199
     */
    MCAPI WorkGoal(class Mob &);
    /**
     * @symbol ?playPOISoundEvent@WorkGoal@@QEBAXXZ
     * @hash   -429150191
     */
    MCAPI void playPOISoundEvent() const;

//private:
    /**
     * @symbol ?_isInsideOrIsNotRaining@WorkGoal@@AEAA_NXZ
     * @hash   -2108916785
     */
    MCAPI bool _isInsideOrIsNotRaining();

private:
    /**
     * @symbol ?RAIN_CHECK_MAX_COOLDOWN@WorkGoal@@0HB
     * @hash   974250156
     */
    MCAPI static int const RAIN_CHECK_MAX_COOLDOWN;
    /**
     * @symbol ?WORK_TIMESTAMP_UPDATE_INVERVAL@WorkGoal@@0HB
     * @hash   1239092458
     */
    MCAPI static int const WORK_TIMESTAMP_UPDATE_INVERVAL;

};