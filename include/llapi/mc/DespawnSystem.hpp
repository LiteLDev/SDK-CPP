/**
 * @file  DespawnSystem.hpp
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
 * @brief MC class DespawnSystem.
 *
 */
class DespawnSystem {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DESPAWNSYSTEM
public:
    class DespawnSystem& operator=(class DespawnSystem const &) = delete;
    DespawnSystem(class DespawnSystem const &) = delete;
    DespawnSystem() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   2128803511
     */
    virtual ~DespawnSystem();
    /**
     * @vftbl  1
     * @hash   -1405557151
     */
    virtual void __unk_vfn_1();
    /**
     * @vftbl  2
     * @symbol ?tick@DespawnSystem@@UEAAXAEAVEntityRegistry@@@Z
     * @hash   -645933207
     */
    virtual void tick(class EntityRegistry &);

};