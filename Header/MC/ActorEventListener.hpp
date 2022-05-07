// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class ActorEventListener {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ACTOREVENTLISTENER
public:
    class ActorEventListener& operator=(class ActorEventListener const &) = delete;
    ActorEventListener(class ActorEventListener const &) = delete;
    ActorEventListener() = delete;
#endif

public:
    /*0*/ virtual ~ActorEventListener();
    /*
    inline enum EventResult onActorEquippedArmor(class Actor & a0, class ItemInstance const & a1, enum ArmorSlot a2){
        enum EventResult (ActorEventListener::*rv)(class Actor &, class ItemInstance const &, enum ArmorSlot);
        *((void**)&rv) = dlsym("?onActorEquippedArmor@ActorEventListener@@UEAA?AW4EventResult@@AEAVActor@@AEBVItemInstance@@W4ArmorSlot@@@Z");
        return (this->*rv)(std::forward<class Actor &>(a0), std::forward<class ItemInstance const &>(a1), std::forward<enum ArmorSlot>(a2));
    }
    inline enum EventResult onActorPlacedItem(class Actor & a0, class ItemInstance const & a1){
        enum EventResult (ActorEventListener::*rv)(class Actor &, class ItemInstance const &);
        *((void**)&rv) = dlsym("?onActorPlacedItem@ActorEventListener@@UEAA?AW4EventResult@@AEAVActor@@AEBVItemInstance@@@Z");
        return (this->*rv)(std::forward<class Actor &>(a0), std::forward<class ItemInstance const &>(a1));
    }
    inline enum EventResult onActorMobInteraction(class Actor & a0, enum MinecraftEventing::InteractionType a1, enum ActorType a2){
        enum EventResult (ActorEventListener::*rv)(class Actor &, enum MinecraftEventing::InteractionType, enum ActorType);
        *((void**)&rv) = dlsym("?onActorMobInteraction@ActorEventListener@@UEAA?AW4EventResult@@AEAVActor@@W4InteractionType@MinecraftEventing@@W4ActorType@@@Z");
        return (this->*rv)(std::forward<class Actor &>(a0), std::forward<enum MinecraftEventing::InteractionType>(a1), std::forward<enum ActorType>(a2));
    }
    inline enum EventResult onActorTeleported(class Actor & a0){
        enum EventResult (ActorEventListener::*rv)(class Actor &);
        *((void**)&rv) = dlsym("?onActorTeleported@ActorEventListener@@UEAA?AW4EventResult@@AEAVActor@@@Z");
        return (this->*rv)(std::forward<class Actor &>(a0));
    }
    inline enum EventResult onActorStopRiding(class Actor & a0, bool a1, bool a2, bool a3){
        enum EventResult (ActorEventListener::*rv)(class Actor &, bool, bool, bool);
        *((void**)&rv) = dlsym("?onActorStopRiding@ActorEventListener@@UEAA?AW4EventResult@@AEAVActor@@_N11@Z");
        return (this->*rv)(std::forward<class Actor &>(a0), std::forward<bool>(a1), std::forward<bool>(a2), std::forward<bool>(a3));
    }
    inline enum EventResult onActorUseItemOn(class Actor & a0, class ItemStack const & a1, class BlockPos const & a2, unsigned char a3){
        enum EventResult (ActorEventListener::*rv)(class Actor &, class ItemStack const &, class BlockPos const &, unsigned char);
        *((void**)&rv) = dlsym("?onActorUseItemOn@ActorEventListener@@UEAA?AW4EventResult@@AEAVActor@@AEBVItemStack@@AEBVBlockPos@@E@Z");
        return (this->*rv)(std::forward<class Actor &>(a0), std::forward<class ItemStack const &>(a1), std::forward<class BlockPos const &>(a2), std::forward<unsigned char>(a3));
    }
    inline enum EventResult onActorDroppedItem(class Actor & a0, class ItemInstance const & a1){
        enum EventResult (ActorEventListener::*rv)(class Actor &, class ItemInstance const &);
        *((void**)&rv) = dlsym("?onActorDroppedItem@ActorEventListener@@UEAA?AW4EventResult@@AEAVActor@@AEBVItemInstance@@@Z");
        return (this->*rv)(std::forward<class Actor &>(a0), std::forward<class ItemInstance const &>(a1));
    }
    inline enum EventResult onActorCreated(class Actor & a0){
        enum EventResult (ActorEventListener::*rv)(class Actor &);
        *((void**)&rv) = dlsym("?onActorCreated@ActorEventListener@@UEAA?AW4EventResult@@AEAVActor@@@Z");
        return (this->*rv)(std::forward<class Actor &>(a0));
    }
    inline enum EventResult onActorTargetAcquired(class Actor & a0, class Actor & a1){
        enum EventResult (ActorEventListener::*rv)(class Actor &, class Actor &);
        *((void**)&rv) = dlsym("?onActorTargetAcquired@ActorEventListener@@UEAA?AW4EventResult@@AEAVActor@@0@Z");
        return (this->*rv)(std::forward<class Actor &>(a0), std::forward<class Actor &>(a1));
    }
    inline enum EventResult onActorSneakChanged(class Actor & a0, bool a1){
        enum EventResult (ActorEventListener::*rv)(class Actor &, bool);
        *((void**)&rv) = dlsym("?onActorSneakChanged@ActorEventListener@@UEAA?AW4EventResult@@AEAVActor@@_N@Z");
        return (this->*rv)(std::forward<class Actor &>(a0), std::forward<bool>(a1));
    }
    inline enum EventResult onActorAttackedActor(class Actor & a0, class Actor & a1){
        enum EventResult (ActorEventListener::*rv)(class Actor &, class Actor &);
        *((void**)&rv) = dlsym("?onActorAttackedActor@ActorEventListener@@UEAA?AW4EventResult@@AEAVActor@@0@Z");
        return (this->*rv)(std::forward<class Actor &>(a0), std::forward<class Actor &>(a1));
    }
    inline enum EventResult onActorStartRiding(class Actor & a0, class Actor & a1){
        enum EventResult (ActorEventListener::*rv)(class Actor &, class Actor &);
        *((void**)&rv) = dlsym("?onActorStartRiding@ActorEventListener@@UEAA?AW4EventResult@@AEAVActor@@0@Z");
        return (this->*rv)(std::forward<class Actor &>(a0), std::forward<class Actor &>(a1));
    }
    inline enum EventResult onActorMove(class Actor & a0, class Vec3 const & a1){
        enum EventResult (ActorEventListener::*rv)(class Actor &, class Vec3 const &);
        *((void**)&rv) = dlsym("?onActorMove@ActorEventListener@@UEAA?AW4EventResult@@AEAVActor@@AEBVVec3@@@Z");
        return (this->*rv)(std::forward<class Actor &>(a0), std::forward<class Vec3 const &>(a1));
    }
    inline enum EventResult onActorDeath(class Actor & a0, class ActorDamageSource const & a1, enum ActorType a2){
        enum EventResult (ActorEventListener::*rv)(class Actor &, class ActorDamageSource const &, enum ActorType);
        *((void**)&rv) = dlsym("?onActorDeath@ActorEventListener@@UEAA?AW4EventResult@@AEAVActor@@AEBVActorDamageSource@@W4ActorType@@@Z");
        return (this->*rv)(std::forward<class Actor &>(a0), std::forward<class ActorDamageSource const &>(a1), std::forward<enum ActorType>(a2));
    }
    inline enum EventResult onActorTick(class Actor & a0){
        enum EventResult (ActorEventListener::*rv)(class Actor &);
        *((void**)&rv) = dlsym("?onActorTick@ActorEventListener@@UEAA?AW4EventResult@@AEAVActor@@@Z");
        return (this->*rv)(std::forward<class Actor &>(a0));
    }
    inline enum EventResult onActorCarriedItemChanged(class Actor & a0, class ItemInstance const & a1, class ItemInstance const & a2, enum HandSlot a3){
        enum EventResult (ActorEventListener::*rv)(class Actor &, class ItemInstance const &, class ItemInstance const &, enum HandSlot);
        *((void**)&rv) = dlsym("?onActorCarriedItemChanged@ActorEventListener@@UEAA?AW4EventResult@@AEAVActor@@AEBVItemInstance@@1W4HandSlot@@@Z");
        return (this->*rv)(std::forward<class Actor &>(a0), std::forward<class ItemInstance const &>(a1), std::forward<class ItemInstance const &>(a2), std::forward<enum HandSlot>(a3));
    }
    inline enum EventResult onActorPredictedMove(class Actor & a0, enum MovePredictionType a1, class Vec3 const & a2){
        enum EventResult (ActorEventListener::*rv)(class Actor &, enum MovePredictionType, class Vec3 const &);
        *((void**)&rv) = dlsym("?onActorPredictedMove@ActorEventListener@@UEAA?AW4EventResult@@AEAVActor@@W4MovePredictionType@@AEBVVec3@@@Z");
        return (this->*rv)(std::forward<class Actor &>(a0), std::forward<enum MovePredictionType>(a1), std::forward<class Vec3 const &>(a2));
    }
    inline enum EventResult onEvent(struct ActorNotificationEvent const & a0){
        enum EventResult (ActorEventListener::*rv)(struct ActorNotificationEvent const &);
        *((void**)&rv) = dlsym("?onEvent@ActorEventListener@@UEAA?AW4EventResult@@AEBUActorNotificationEvent@@@Z");
        return (this->*rv)(std::forward<struct ActorNotificationEvent const &>(a0));
    }
    inline enum EventResult onActorDefinitionEvent(class Actor & a0, std::string const & a1, std::vector<struct DefinitionModifier> & a2){
        enum EventResult (ActorEventListener::*rv)(class Actor &, std::string const &, std::vector<struct DefinitionModifier> &);
        *((void**)&rv) = dlsym("?onActorDefinitionEvent@ActorEventListener@@UEAA?AW4EventResult@@AEAVActor@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAV?$vector@UDefinitionModifier@@V?$allocator@UDefinitionModifier@@@std@@@5@@Z");
        return (this->*rv)(std::forward<class Actor &>(a0), std::forward<std::string const &>(a1), std::forward<std::vector<struct DefinitionModifier> &>(a2));
    }
    inline  ~ActorEventListener(){
         (ActorEventListener::*rv)();
        *((void**)&rv) = dlsym("??1ActorEventListener@@UEAA@XZ");
        return (this->*rv)();
    }
    */

protected:

private:

};