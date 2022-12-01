/**
 * @file  NavigationSystem.hpp
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
 * @brief MC class NavigationSystem.
 *
 */
class NavigationSystem {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_NAVIGATIONSYSTEM
public:
    class NavigationSystem& operator=(class NavigationSystem const &) = delete;
    NavigationSystem(class NavigationSystem const &) = delete;
    NavigationSystem() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -423583955
     */
    virtual ~NavigationSystem();
    /**
     * @vftbl  1
     * @hash   -1316591615
     */
    virtual void __unk_vfn_1();
    /**
     * @vftbl  2
     * @symbol ?tick@NavigationSystem@@UEAAXAEAVEntityRegistry@@@Z
     * @hash   630613043
     */
    virtual void tick(class EntityRegistry &);

};