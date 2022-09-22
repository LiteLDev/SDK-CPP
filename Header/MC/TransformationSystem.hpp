/**
 * @file  TransformationSystem.hpp
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
 * @brief MC class TransformationSystem.
 *
 */
class TransformationSystem {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TRANSFORMATIONSYSTEM
public:
    class TransformationSystem& operator=(class TransformationSystem const &) = delete;
    TransformationSystem(class TransformationSystem const &) = delete;
    TransformationSystem() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   509262562
     */
    virtual ~TransformationSystem();
    /**
     * @vftbl  1
     * @hash   -1408478591
     */
    virtual void __unk_vfn_1();
    /**
     * @vftbl  2
     * @symbol ?tick@TransformationSystem@@UEAAXAEAVEntityRegistry@@@Z
     * @hash   1469228872
     */
    virtual void tick(class EntityRegistry &);

};