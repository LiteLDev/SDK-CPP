/**
 * @file  RemovePassengersWithoutSeatSystem.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class RemovePassengersWithoutSeatSystem.
 *
 */
class RemovePassengersWithoutSeatSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_REMOVEPASSENGERSWITHOUTSEATSYSTEM
public:
    class RemovePassengersWithoutSeatSystem& operator=(class RemovePassengersWithoutSeatSystem const &) = delete;
    RemovePassengersWithoutSeatSystem(class RemovePassengersWithoutSeatSystem const &) = delete;
    RemovePassengersWithoutSeatSystem() = delete;
#endif

public:
    /**
     * @symbol ?createSystem@RemovePassengersWithoutSeatSystem@@SA?AUTickingSystemWithInfo@@XZ
     * @hash   1166793728
     */
    MCAPI static struct TickingSystemWithInfo createSystem();
    /**
     * @symbol ?removePassengersWithoutSeat@RemovePassengersWithoutSeatSystem@@SAXAEAVStrictEntityContext@@AEBVRideableComponent@@AEAUVehicleComponent@@AEAV?$EntityModifierT@VEntityRegistryBase@@VStrictEntityContext@@URemovePassengersComponent@@@@@Z
     * @hash   -555023482
     */
    MCAPI static void removePassengersWithoutSeat(class StrictEntityContext &, class RideableComponent const &, struct VehicleComponent &, class EntityModifierT<class EntityRegistryBase, class StrictEntityContext, struct RemovePassengersComponent> &);

};