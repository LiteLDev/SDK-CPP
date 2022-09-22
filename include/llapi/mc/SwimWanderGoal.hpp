/**
 * @file  SwimWanderGoal.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class SwimWanderGoal.
 *
 */
class SwimWanderGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SWIMWANDERGOAL
public:
    class SwimWanderGoal& operator=(class SwimWanderGoal const &) = delete;
    SwimWanderGoal(class SwimWanderGoal const &) = delete;
    SwimWanderGoal() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~SwimWanderGoal();
    /**
     * @hash   -682368392
     * @vftbl  1
     * @symbol ?canUse@SwimWanderGoal@@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @hash   -624742810
     * @vftbl  2
     * @symbol ?canContinueToUse@SwimWanderGoal@@UEAA_NXZ
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl  3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @hash   356754529
     * @vftbl  4
     * @symbol ?start@SwimWanderGoal@@UEAAXXZ
     */
    virtual void start();
    /**
     * @vftbl  5
     * @symbol __unk_vfn_5
     */
    virtual void __unk_vfn_5();
    /**
     * @hash   1634423004
     * @vftbl  6
     * @symbol ?tick@SwimWanderGoal@@UEAAXXZ
     */
    virtual void tick();
    /**
     * @hash   -783768808
     * @vftbl  7
     * @symbol ?appendDebugInfo@SwimWanderGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    virtual void appendDebugInfo(std::string &) const;
    /**
     * @hash   -117610875
     * @symbol ??0SwimWanderGoal@@QEAA@AEAVMob@@@Z
     */
    MCAPI SwimWanderGoal(class Mob &);

//protected:
    /**
     * @hash   1715290000
     * @symbol ?_setWantedPosition@SwimWanderGoal@@IEAA_NXZ
     */
    MCAPI bool _setWantedPosition();

protected:

};