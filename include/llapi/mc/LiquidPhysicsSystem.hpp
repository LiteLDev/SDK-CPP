/**
 * @file  LiquidPhysicsSystem.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class LiquidPhysicsSystem.
 *
 */
class LiquidPhysicsSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LIQUIDPHYSICSSYSTEM
public:
    class LiquidPhysicsSystem& operator=(class LiquidPhysicsSystem const &) = delete;
    LiquidPhysicsSystem(class LiquidPhysicsSystem const &) = delete;
    LiquidPhysicsSystem() = delete;
#endif

public:
    /**
     * @symbol ?applyPhysics@LiquidPhysicsSystem@@SA_NW4MaterialType@@AEBVIConstBlockSource@@AEBVAABB@@AEAUStateVectorComponent@@@Z
     * @hash   -342106718
     */
    MCAPI static bool applyPhysics(enum class MaterialType, class IConstBlockSource const &, class AABB const &, struct StateVectorComponent &);
    /**
     * @symbol ?createApplyFlowSystem@LiquidPhysicsSystem@@SA?AUTickingSystemWithInfo@@XZ
     * @hash   -1465780648
     */
    MCAPI static struct TickingSystemWithInfo createApplyFlowSystem();
    /**
     * @symbol ?createFilterSystem@LiquidPhysicsSystem@@SA?AUTickingSystemWithInfo@@_N@Z
     * @hash   1571547973
     */
    MCAPI static struct TickingSystemWithInfo createFilterSystem(bool);
    /**
     * @symbol ?createLiquidFetchingSystem@LiquidPhysicsSystem@@SA?AUTickingSystemWithInfo@@XZ
     * @hash   -1475421318
     */
    MCAPI static struct TickingSystemWithInfo createLiquidFetchingSystem();

};