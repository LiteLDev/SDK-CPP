/**
 * @file  VibrationListenerSystem.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class VibrationListenerSystem.
 *
 */
class VibrationListenerSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_VIBRATIONLISTENERSYSTEM
public:
    class VibrationListenerSystem& operator=(class VibrationListenerSystem const &) = delete;
    VibrationListenerSystem(class VibrationListenerSystem const &) = delete;
    VibrationListenerSystem() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   200146691
     */
    virtual ~VibrationListenerSystem();
    /**
     * @vftbl  1
     * @hash   -1316591615
     */
    virtual void __unk_vfn_1();
    /**
     * @vftbl  2
     * @symbol ?tick@VibrationListenerSystem@@UEAAXAEAVEntityRegistry@@@Z
     * @hash   -324314059
     */
    virtual void tick(class EntityRegistry &);

};