/**
 * @file  CatchFireSubcomponent.hpp
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
 * @brief MC class CatchFireSubcomponent.
 *
 */
class CatchFireSubcomponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CATCHFIRESUBCOMPONENT
public:
    class CatchFireSubcomponent& operator=(class CatchFireSubcomponent const &) = delete;
    CatchFireSubcomponent(class CatchFireSubcomponent const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   2013529276
     */
    virtual ~CatchFireSubcomponent();
    /**
     * @vftbl  1
     * @symbol ?readfromJSON@CatchFireSubcomponent@@UEAAXAEAVValue@Json@@AEBVSemVersion@@@Z
     * @hash   -580057526
     */
    virtual void readfromJSON(class Json::Value &, class SemVersion const &);
    /**
     * @vftbl  2
     * @symbol ?writetoJSON@CatchFireSubcomponent@@UEBAXAEAVValue@Json@@@Z
     * @hash   1044443567
     */
    virtual void writetoJSON(class Json::Value &) const;
    /**
     * @vftbl  3
     * @symbol ?doOnHitEffect@CatchFireSubcomponent@@UEAAXAEAVActor@@AEAVProjectileComponent@@@Z
     * @hash   -764151020
     */
    virtual void doOnHitEffect(class Actor &, class ProjectileComponent &);
    /**
     * @vftbl  4
     * @symbol ?getName@CatchFireSubcomponent@@UEAAPEBDXZ
     * @hash   -130421809
     */
    virtual char const * getName();
    /**
     * @symbol ??0CatchFireSubcomponent@@QEAA@XZ
     * @hash   662370602
     */
    MCAPI CatchFireSubcomponent();

};