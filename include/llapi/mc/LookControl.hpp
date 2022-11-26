/**
 * @file  LookControl.hpp
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
 * @brief MC class LookControl.
 *
 */
class LookControl {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LOOKCONTROL
public:
    class LookControl& operator=(class LookControl const &) = delete;
    LookControl(class LookControl const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -611997684
     */
    virtual ~LookControl();
    /**
     * @vftbl  1
     * @symbol ?initializeInternal@LookControl@@UEAAXAEAVMob@@@Z
     * @hash   -836297834
     */
    virtual void initializeInternal(class Mob &);
    /**
     * @vftbl  2
     * @symbol ?tick@LookControl@@UEAAXAEAVMob@@@Z
     * @hash   -2085195002
     */
    virtual void tick(class Mob &);
    /**
     * @symbol ??0LookControl@@QEAA@XZ
     * @hash   -1253455238
     */
    MCAPI LookControl();

};