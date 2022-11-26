/**
 * @file  EatCarriedItemGoal.hpp
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
 * @brief MC class EatCarriedItemGoal.
 *
 */
class EatCarriedItemGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_EATCARRIEDITEMGOAL
public:
    class EatCarriedItemGoal& operator=(class EatCarriedItemGoal const &) = delete;
    EatCarriedItemGoal(class EatCarriedItemGoal const &) = delete;
    EatCarriedItemGoal() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -2107564254
     */
    virtual ~EatCarriedItemGoal();
    /**
     * @vftbl  1
     * @symbol ?canUse@EatCarriedItemGoal@@UEAA_NXZ
     * @hash   -150038344
     */
    virtual bool canUse();
    /**
     * @vftbl  2
     * @symbol ?canContinueToUse@EatCarriedItemGoal@@UEAA_NXZ
     * @hash   2127414438
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl  3
     * @hash   -1264449677
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl  4
     * @symbol ?start@EatCarriedItemGoal@@UEAAXXZ
     * @hash   993601377
     */
    virtual void start();
    /**
     * @vftbl  5
     * @symbol ?stop@EatCarriedItemGoal@@UEAAXXZ
     * @hash   -2046009647
     */
    virtual void stop();
    /**
     * @vftbl  6
     * @symbol ?tick@EatCarriedItemGoal@@UEAAXXZ
     * @hash   72186492
     */
    virtual void tick();
    /**
     * @vftbl  7
     * @symbol ?appendDebugInfo@EatCarriedItemGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   -1642792344
     */
    virtual void appendDebugInfo(std::string &) const;
    /**
     * @symbol ??0EatCarriedItemGoal@@QEAA@AEAVMob@@H@Z
     * @hash   -677399234
     */
    MCAPI EatCarriedItemGoal(class Mob &, int);

//private:

private:
    /**
     * @symbol ?CHEW_CHANCE@EatCarriedItemGoal@@0HB
     * @hash   -1014442352
     */
    MCAPI static int const CHEW_CHANCE;
    /**
     * @symbol ?EATING_TIME@EatCarriedItemGoal@@0HB
     * @hash   -875943662
     */
    MCAPI static int const EATING_TIME;

};