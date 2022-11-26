/**
 * @file  DrinkPotionGoal.hpp
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
 * @brief MC class DrinkPotionGoal.
 *
 */
class DrinkPotionGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DRINKPOTIONGOAL
public:
    class DrinkPotionGoal& operator=(class DrinkPotionGoal const &) = delete;
    DrinkPotionGoal(class DrinkPotionGoal const &) = delete;
    DrinkPotionGoal() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -240098484
     */
    virtual ~DrinkPotionGoal();
    /**
     * @vftbl  1
     * @symbol ?canUse@DrinkPotionGoal@@UEAA_NXZ
     * @hash   886099954
     */
    virtual bool canUse();
    /**
     * @vftbl  2
     * @symbol ?canContinueToUse@DrinkPotionGoal@@UEAA_NXZ
     * @hash   1626977216
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl  3
     * @hash   -1264449677
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl  4
     * @symbol ?start@DrinkPotionGoal@@UEAAXXZ
     * @hash   -203189717
     */
    virtual void start();
    /**
     * @vftbl  5
     * @symbol ?stop@DrinkPotionGoal@@UEAAXXZ
     * @hash   1379394667
     */
    virtual void stop();
    /**
     * @vftbl  6
     * @symbol ?tick@DrinkPotionGoal@@UEAAXXZ
     * @hash   1218080118
     */
    virtual void tick();
    /**
     * @vftbl  7
     * @symbol ?appendDebugInfo@DrinkPotionGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   -1524297970
     */
    virtual void appendDebugInfo(std::string &) const;
    /**
     * @symbol ??0DrinkPotionGoal@@QEAA@AEAVMob@@MAEBV?$vector@UDrinkPotionData@@V?$allocator@UDrinkPotionData@@@std@@@std@@@Z
     * @hash   -146406317
     */
    MCAPI DrinkPotionGoal(class Mob &, float, std::vector<struct DrinkPotionData> const &);

//private:

private:
    /**
     * @symbol ?SPEED_MODIFIER_DRINKING_UUID@DrinkPotionGoal@@0VUUID@mce@@B
     * @hash   921292172
     */
    MCAPI static class mce::UUID const SPEED_MODIFIER_DRINKING_UUID;
    /**
     * @symbol ?THROTTLE_COOLDOWN@DrinkPotionGoal@@0HB
     * @hash   -1981926814
     */
    MCAPI static int const THROTTLE_COOLDOWN;

};