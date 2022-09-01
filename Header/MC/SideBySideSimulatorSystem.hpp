/**
 * @file  SideBySideSimulatorSystem.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "SideBySideExtractionId.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class SideBySideSimulatorSystem.
 *
 */
class SideBySideSimulatorSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SIDEBYSIDESIMULATORSYSTEM
public:
    class SideBySideSimulatorSystem& operator=(class SideBySideSimulatorSystem const &) = delete;
    SideBySideSimulatorSystem(class SideBySideSimulatorSystem const &) = delete;
    SideBySideSimulatorSystem() = delete;
#endif

public:
    /**
     * @symbol ?_clearRemappings@SideBySideSimulatorSystem@@SAXV?$OptionalGlobalT@USideBySideRemappingComponent@@VEntityRegistryBase@@@@@Z
     * @hash   -593216145
     */
    MCAPI static void _clearRemappings(class OptionalGlobalT<struct SideBySideRemappingComponent, class EntityRegistryBase>);
    /**
     * @symbol ?createBegin@SideBySideSimulatorSystem@@SA?AUTickingSystemWithInfo@@XZ
     * @hash   -1223740848
     */
    MCAPI static struct TickingSystemWithInfo createBegin();
    /**
     * @symbol ?createClearRemappingsSystem@SideBySideSimulatorSystem@@SA?AUTickingSystemWithInfo@@XZ
     * @hash   726666304
     */
    MCAPI static struct TickingSystemWithInfo createClearRemappingsSystem();
    /**
     * @symbol ?createEnd@SideBySideSimulatorSystem@@SA?AUTickingSystemWithInfo@@XZ
     * @hash   -793710992
     */
    MCAPI static struct TickingSystemWithInfo createEnd();
    /**
     * @symbol ?createMigrator@SideBySideSimulatorSystem@@SA?AUTickingSystemWithInfo@@V?$variant@UTickBegin@SideBySideExtractionId@@UBeginManagePassengers@2@UManagePassengersStopRiding@2@UManagePassengersPositioning@2@UEntityInside@2@@std@@AEBV?$vector@IV?$allocator@I@std@@@4@@Z
     * @hash   532380876
     */
    MCAPI static struct TickingSystemWithInfo createMigrator(class std::variant<struct SideBySideExtractionId::TickBegin, struct SideBySideExtractionId::BeginManagePassengers, struct SideBySideExtractionId::ManagePassengersStopRiding, struct SideBySideExtractionId::ManagePassengersPositioning, struct SideBySideExtractionId::EntityInside>, std::vector<unsigned int> const &);
    /**
     * @symbol ?createSideBySideResultMigratorSystem@SideBySideSimulatorSystem@@SA?AUTickingSystemWithInfo@@XZ
     * @hash   1651193442
     */
    MCAPI static struct TickingSystemWithInfo createSideBySideResultMigratorSystem();
    /**
     * @symbol ?tickBegin@SideBySideSimulatorSystem@@SAXVEntityFactory@@V?$EntityModifierT@VEntityRegistryBase@@VStrictEntityContext@@V?$FlagComponent@UActorMovementTickNeededFlag@@@@USideBySideSimulatorComponent@@V?$FlagComponent@UUsesECSMovementFlag@@@@@@V?$OptionalGlobalT@USideBySideRemappingComponent@@VEntityRegistryBase@@@@@Z
     * @hash   1030661958
     */
    MCAPI static void tickBegin(class EntityFactory, class EntityModifierT<class EntityRegistryBase, class StrictEntityContext, class FlagComponent<struct ActorMovementTickNeededFlag>, struct SideBySideSimulatorComponent, class FlagComponent<struct UsesECSMovementFlag>>, class OptionalGlobalT<struct SideBySideRemappingComponent, class EntityRegistryBase>);
    /**
     * @symbol ?tickEnd@SideBySideSimulatorSystem@@SAXV?$ViewT@VStrictEntityContext@@VEntityRegistryBase@@USideBySideSimulatorComponent@@@@VEntityFactory@@@Z
     * @hash   1032079960
     */
    MCAPI static void tickEnd(class ViewT<class StrictEntityContext, class EntityRegistryBase, struct SideBySideSimulatorComponent>, class EntityFactory);

};