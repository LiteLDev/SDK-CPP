/**
 * @file  SplashPotionEffectSubcomponent.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class SplashPotionEffectSubcomponent.
 *
 */
class SplashPotionEffectSubcomponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SPLASHPOTIONEFFECTSUBCOMPONENT
public:
    class SplashPotionEffectSubcomponent& operator=(class SplashPotionEffectSubcomponent const &) = delete;
    SplashPotionEffectSubcomponent(class SplashPotionEffectSubcomponent const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   908341810
     */
    virtual ~SplashPotionEffectSubcomponent();
    /**
     * @vftbl  1
     * @symbol ?readfromJSON@SplashPotionEffectSubcomponent@@UEAAXAEAVValue@Json@@AEBVSemVersion@@@Z
     * @hash   1377025472
     */
    virtual void readfromJSON(class Json::Value &, class SemVersion const &);
    /**
     * @vftbl  2
     * @symbol ?writetoJSON@SplashPotionEffectSubcomponent@@UEBAXAEAVValue@Json@@@Z
     * @hash   1202365689
     */
    virtual void writetoJSON(class Json::Value &) const;
    /**
     * @vftbl  3
     * @symbol ?doOnHitEffect@SplashPotionEffectSubcomponent@@UEAAXAEAVActor@@AEAVProjectileComponent@@@Z
     * @hash   407136250
     */
    virtual void doOnHitEffect(class Actor &, class ProjectileComponent &);
    /**
     * @vftbl  4
     * @symbol ?getName@SplashPotionEffectSubcomponent@@UEAAPEBDXZ
     * @hash   1672090485
     */
    virtual char const * getName();
    /**
     * @symbol ??0SplashPotionEffectSubcomponent@@QEAA@XZ
     * @hash   1572416452
     */
    MCAPI SplashPotionEffectSubcomponent();
    /**
     * @symbol ?applyMobEffects@SplashPotionEffectSubcomponent@@QEAAXAEBVMobEffectInstance@@AEBV?$vector@PEAVActor@@V?$allocator@PEAVActor@@@std@@@std@@AEAVActor@@AEBV?$shared_ptr@$$CBVPotion@@@4@MPEAVMobEffect@@AEAVHitResult@@H@Z
     * @hash   69354416
     */
    MCAPI void applyMobEffects(class MobEffectInstance const &, std::vector<class Actor *> const &, class Actor &, class std::shared_ptr<class Potion const> const &, float, class MobEffect *, class HitResult &, int);

};