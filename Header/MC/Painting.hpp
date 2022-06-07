// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Actor.hpp"
#include "HangingActor.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class Painting : public HangingActor {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PAINTING
public:
    class Painting& operator=(class Painting const &) = delete;
    Painting(class Painting const &) = delete;
    Painting() = delete;
#endif


public:
    /*14*/ virtual ~Painting();
    /*18*/ virtual void remove();
    /*19*/ virtual void setPos(class Vec3 const &);
    /*40*/ virtual void __unk_vfn_40();
    /*47*/ virtual std::unique_ptr<class AddActorBasePacket> tryCreateAddActorPacket();
    /*61*/ virtual void __unk_vfn_61();
    /*68*/ virtual void __unk_vfn_68();
    /*80*/ virtual float getShadowRadius() const;
    /*82*/ virtual void __unk_vfn_82();
    /*88*/ virtual void __unk_vfn_88();
    /*94*/ virtual bool isPickable();
    /*95*/ virtual void __unk_vfn_95();
    /*98*/ virtual void __unk_vfn_98();
    /*105*/ virtual void __unk_vfn_105();
    /*107*/ virtual void __unk_vfn_107();
    /*108*/ virtual void __unk_vfn_108();
    /*109*/ virtual void __unk_vfn_109();
    /*181*/ virtual void __unk_vfn_181();
    /*195*/ virtual void __unk_vfn_195();
    /*220*/ virtual void __unk_vfn_220();
    /*221*/ virtual void __unk_vfn_221();
    /*246*/ virtual void __unk_vfn_246();
    /*249*/ virtual void __unk_vfn_249();
    /*261*/ virtual void __unk_vfn_261();
    /*265*/ virtual void readAdditionalSaveData(class CompoundTag const &, class DataLoadHelper &);
    /*266*/ virtual void addAdditionalSaveData(class CompoundTag &);
    /*269*/ virtual void __unk_vfn_269();
    /*278*/ virtual void __unk_vfn_278();
    /*280*/ virtual int getWidth() const;
    /*281*/ virtual int getHeight() const;
    /*282*/ virtual void dropItem();
    /*283*/ virtual bool placeHangingEntity(class BlockSource &, int);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_PAINTING
public:
#endif
    MCAPI Painting(class ActorDefinitionGroup *, struct ActorDefinitionIdentifier const &, class EntityContext &);
    MCAPI class Motive const & getCurrentMotive() const;


};