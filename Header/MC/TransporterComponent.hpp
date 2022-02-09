// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "BaseCircuitComponent.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class TransporterComponent : public BaseCircuitComponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TRANSPORTERCOMPONENT
public:
    class TransporterComponent& operator=(class TransporterComponent const&) = delete;
    TransporterComponent(class TransporterComponent const&) = delete;
#endif

public:
    /*0*/ virtual ~TransporterComponent();
    /*1*/ virtual int getStrength() const;
    /*7*/ virtual void __unk_vfn_7();
    /*8*/ virtual bool canStopPower() const;
    /*9*/ virtual void setStopPower(bool);
    /*11*/ virtual bool addSource(class CircuitSceneGraph&, class CircuitTrackingInfo const&, int&, bool&);
    /*12*/ virtual bool allowConnection(class CircuitSceneGraph&, class CircuitTrackingInfo const&, bool&);
    /*13*/ virtual void checkLock(class CircuitSystem&, class BlockPos const&);
    /*14*/ virtual bool evaluate(class CircuitSystem&, class BlockPos const&);
    /*15*/ virtual void cacheValues(class CircuitSystem&, class BlockPos const&);
    /*16*/ virtual void updateDependencies(class CircuitSceneGraph&, class BlockPos const&);
    /*17*/ virtual void __unk_vfn_17();
    /*18*/ virtual bool isHalfPulse() const;
    /*20*/ virtual void __unk_vfn_20();
    /*21*/ virtual bool isSecondaryPowered() const;
    /*22*/ virtual enum CircuitComponentType getCircuitComponentType() const;
    /*
    inline bool canConsumerPower() const{
        bool (TransporterComponent::*rv)() const;
        *((void**)&rv) = dlsym("?canConsumerPower@TransporterComponent@@UEBA_NXZ");
        return (this->*rv)();
    }
    */
    MCAPI TransporterComponent();

protected:

private:

};