/**
 * @file  DolphinMoveControl.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "MoveControl.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class DolphinMoveControl.
 *
 */
class DolphinMoveControl : public MoveControl {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DOLPHINMOVECONTROL
public:
    class DolphinMoveControl& operator=(class DolphinMoveControl const &) = delete;
    DolphinMoveControl(class DolphinMoveControl const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -844032936
     */
    virtual ~DolphinMoveControl();
    /**
     * @vftbl  2
     * @symbol ?tick@DolphinMoveControl@@MEAAXAEAVMoveControlComponent@@AEAVMob@@@Z
     * @hash   -1958193816
     */
    virtual void tick(class MoveControlComponent &, class Mob &);
    /**
     * @symbol ??0DolphinMoveControl@@QEAA@XZ
     * @hash   -1575161510
     */
    MCAPI DolphinMoveControl();

//private:
    /**
     * @symbol ?_calcRotX@DolphinMoveControl@@AEAAMMMM@Z
     * @hash   -1959545289
     */
    MCAPI float _calcRotX(float, float, float);
    /**
     * @symbol ?_calcRotY@DolphinMoveControl@@AEAAMMM@Z
     * @hash   11621980
     */
    MCAPI float _calcRotY(float, float);
    /**
     * @symbol ?_clearOfObstacles@DolphinMoveControl@@AEBA_NAEBVMob@@MMH@Z
     * @hash   -1956796276
     */
    MCAPI bool _clearOfObstacles(class Mob const &, float, float, int) const;
    /**
     * @symbol ?_isInWater@DolphinMoveControl@@AEBA_NAEBVMob@@@Z
     * @hash   2128736487
     */
    MCAPI bool _isInWater(class Mob const &) const;
    /**
     * @symbol ?_setupBreach@DolphinMoveControl@@AEAAXAEAVMob@@@Z
     * @hash   1018724847
     */
    MCAPI void _setupBreach(class Mob &);

private:

};