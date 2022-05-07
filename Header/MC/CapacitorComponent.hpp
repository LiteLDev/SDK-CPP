// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "ProducerComponent.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class CapacitorComponent : public ProducerComponent {

#define AFTER_EXTRA

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CAPACITORCOMPONENT
public:
    class CapacitorComponent& operator=(class CapacitorComponent const &) = delete;
    CapacitorComponent(class CapacitorComponent const &) = delete;
#endif

public:
    /*0*/ virtual ~CapacitorComponent();
    /*7*/ virtual void __unk_vfn_7();
    /*11*/ virtual bool addSource(class CircuitSceneGraph &, class CircuitTrackingInfo const &, int &, bool &);
    /*13*/ virtual void checkLock(class CircuitSystem &, class BlockPos const &);
    /*15*/ virtual void cacheValues(class CircuitSystem &, class BlockPos const &);
    /*16*/ virtual void updateDependencies(class CircuitSceneGraph &, class BlockPos const &);
    /*17*/ virtual void __unk_vfn_17();
    /*18*/ virtual bool isHalfPulse() const;
    /*20*/ virtual void __unk_vfn_20();
    /*21*/ virtual bool isSecondaryPowered() const;
    /*22*/ virtual enum CircuitComponentType getCircuitComponentType() const;
    /*24*/ virtual unsigned char getPoweroutDirection() const;
    MCAPI CapacitorComponent();

protected:

private:

};