/**
 * @file  VibrationListenerUtils.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC namespace VibrationListenerUtils.
 *
 */
namespace VibrationListenerUtils {

#define AFTER_EXTRA

#undef AFTER_EXTRA
    /**
     * @symbol ?getGameEventFrequency@VibrationListenerUtils@@YAHAEBVGameEvent@@@Z
     * @hash   -731439192
     */
    MCAPI int getGameEventFrequency(class GameEvent const &);
    /**
     * @symbol ?ignoreVibrationIfSneaking@VibrationListenerUtils@@YA_NAEAVBlockSource@@AEBVGameEvent@@AEBUGameEventContext@@@Z
     * @hash   1840353310
     */
    MCAPI bool ignoreVibrationIfSneaking(class BlockSource &, class GameEvent const &, struct GameEventContext const &);

};