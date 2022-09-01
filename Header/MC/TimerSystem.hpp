/**
 * @file  TimerSystem.hpp
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
 * @brief MC class TimerSystem.
 *
 */
class TimerSystem {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TIMERSYSTEM
public:
    class TimerSystem& operator=(class TimerSystem const &) = delete;
    TimerSystem(class TimerSystem const &) = delete;
    TimerSystem() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   1103918370
     */
    virtual ~TimerSystem();
    /**
     * @vftbl  1
     * @hash   -1408478591
     */
    virtual void __unk_vfn_1();
    /**
     * @vftbl  2
     * @symbol ?tick@TimerSystem@@UEAAXAEAVEntityRegistry@@@Z
     * @hash   192661076
     */
    virtual void tick(class EntityRegistry &);

};