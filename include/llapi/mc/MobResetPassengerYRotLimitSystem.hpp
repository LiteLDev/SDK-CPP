/**
 * @file  MobResetPassengerYRotLimitSystem.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class MobResetPassengerYRotLimitSystem.
 *
 */
class MobResetPassengerYRotLimitSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MOBRESETPASSENGERYROTLIMITSYSTEM
public:
    class MobResetPassengerYRotLimitSystem& operator=(class MobResetPassengerYRotLimitSystem const &) = delete;
    MobResetPassengerYRotLimitSystem(class MobResetPassengerYRotLimitSystem const &) = delete;
    MobResetPassengerYRotLimitSystem() = delete;
#endif

public:
    /**
     * @symbol ?createSystem@MobResetPassengerYRotLimitSystem@@SA?AUTickingSystemWithInfo@@XZ
     * @hash   1620452960
     */
    MCAPI static struct TickingSystemWithInfo createSystem();

//private:
    /**
     * @symbol ?_tickPassengerView@MobResetPassengerYRotLimitSystem@@CAXAEAVStrictEntityContext@@AEAUPassengerYRotLimitComponent@@@Z
     * @hash   1115934782
     */
    MCAPI static void _tickPassengerView(class StrictEntityContext &, struct PassengerYRotLimitComponent &);

private:

};