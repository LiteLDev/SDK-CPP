// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "ProducerComponent.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class ComparatorCapacitor : public ProducerComponent {

#define AFTER_EXTRA
// Add Member There
public:
enum Mode;

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_COMPARATORCAPACITOR
public:
    class ComparatorCapacitor& operator=(class ComparatorCapacitor const&) = delete;
    ComparatorCapacitor(class ComparatorCapacitor const&) = delete;
#endif

public:
    /*0*/ virtual ~ComparatorCapacitor();
    /*1*/ virtual int getStrength() const;
    /*6*/ virtual bool canConsumePowerAnyDirection() const;
    /*7*/ virtual void __unk_vfn_7();
    /*10*/ virtual bool removeSource(class BlockPos const&, class BaseCircuitComponent const*);
    /*11*/ virtual bool addSource(class CircuitSceneGraph&, class CircuitTrackingInfo const&, int&, bool&);
    /*12*/ virtual bool allowConnection(class CircuitSceneGraph&, class CircuitTrackingInfo const&, bool&);
    /*13*/ virtual void checkLock(class CircuitSystem&, class BlockPos const&);
    /*14*/ virtual bool evaluate(class CircuitSystem&, class BlockPos const&);
    /*15*/ virtual void cacheValues(class CircuitSystem&, class BlockPos const&);
    /*16*/ virtual void updateDependencies(class CircuitSceneGraph&, class BlockPos const&);
    /*17*/ virtual void __unk_vfn_17();
    /*18*/ virtual void __unk_vfn_18();
    /*20*/ virtual void __unk_vfn_20();
    /*21*/ virtual bool isSecondaryPowered() const;
    /*22*/ virtual enum CircuitComponentType getCircuitComponentType() const;
    /*24*/ virtual unsigned char getPoweroutDirection() const;
    /*
    inline bool canConsumerPower() const{
        bool (ComparatorCapacitor::*rv)() const;
        *((void**)&rv) = dlsym("?canConsumerPower@ComparatorCapacitor@@UEBA_NXZ");
        return (this->*rv)();
    }
    */
    MCAPI ComparatorCapacitor();
    MCAPI void clearAnalogStrength(unsigned char);
    MCAPI int getOldStrength();
    MCAPI bool isSubtractMode();
    MCAPI void setAnalogStrength(int, unsigned char);
    MCAPI void setMode(enum ComparatorCapacitor::Mode);

protected:

private:

};