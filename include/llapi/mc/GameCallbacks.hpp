/**
 * @file  GameCallbacks.hpp
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
 * @brief MC class GameCallbacks.
 *
 */
class GameCallbacks {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_GAMECALLBACKS
public:
    class GameCallbacks& operator=(class GameCallbacks const &) = delete;
    GameCallbacks(class GameCallbacks const &) = delete;
    GameCallbacks() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   385691594
     */
    virtual ~GameCallbacks();
    /**
     * @vftbl  1
     * @hash   1843395808
     */
    virtual void __unk_vfn_1() = 0;
    /**
     * @vftbl  2
     * @hash   1844319329
     */
    virtual void __unk_vfn_2() = 0;
    /**
     * @vftbl  3
     * @symbol ?onBeforeSimTick@GameCallbacks@@UEAAXXZ
     * @hash   -1504869727
     */
    virtual void onBeforeSimTick();

};