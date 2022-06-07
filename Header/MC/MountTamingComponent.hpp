// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class MountTamingComponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MOUNTTAMINGCOMPONENT
public:
    class MountTamingComponent& operator=(class MountTamingComponent const &) = delete;
    MountTamingComponent(class MountTamingComponent const &) = delete;
#endif


public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_MOUNTTAMINGCOMPONENT
public:
#endif
    MCAPI MountTamingComponent();
    MCAPI void addAdditionalSaveData(class CompoundTag &);
    MCAPI void becomeTame(class Actor &, bool);
    MCAPI int & getCounter();
    MCAPI bool getInteraction(class Actor &, class Player &, class ActorInteraction &);
    MCAPI int & getTemper();
    MCAPI int getTemperMod() const;
    MCAPI int getWaitCount() const;
    MCAPI void readAdditionalSaveData(class Actor &, class CompoundTag const &, class DataLoadHelper &);
    MCAPI void tameToPlayer(class Actor &, class Player &, bool);

//private:
    MCAPI void _feedItem(class Actor &, class Player &, int);
    MCAPI static bool _autoReject(class ItemStack const &, class MountTameableDefinition const *);

private:


};