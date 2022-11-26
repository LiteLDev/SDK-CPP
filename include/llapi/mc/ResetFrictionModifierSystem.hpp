/**
 * @file  ResetFrictionModifierSystem.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class ResetFrictionModifierSystem.
 *
 */
class ResetFrictionModifierSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RESETFRICTIONMODIFIERSYSTEM
public:
    class ResetFrictionModifierSystem& operator=(class ResetFrictionModifierSystem const &) = delete;
    ResetFrictionModifierSystem(class ResetFrictionModifierSystem const &) = delete;
    ResetFrictionModifierSystem() = delete;
#endif

public:
    /**
     * @symbol ?createResetFrictionModifierSystem@ResetFrictionModifierSystem@@SA?AUTickingSystemWithInfo@@XZ
     * @hash   -944330690
     */
    MCAPI static struct TickingSystemWithInfo createResetFrictionModifierSystem();

};