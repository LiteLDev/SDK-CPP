// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Actor.hpp"
#include "Monster.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class EnderDragon : public Monster {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ENDERDRAGON
public:
    class EnderDragon& operator=(class EnderDragon const &) = delete;
    EnderDragon(class EnderDragon const &) = delete;
    EnderDragon() = delete;
#endif


public:
    /*8*/ virtual void reloadHardcoded(enum Actor::InitializationMethod, class VariantParameterList const &);
    /*14*/ virtual ~EnderDragon();
    /*18*/ virtual void remove();
    /*40*/ virtual void __unk_vfn_40();
    /*61*/ virtual void __unk_vfn_61();
    /*68*/ virtual void __unk_vfn_68();
    /*80*/ virtual float getShadowRadius() const;
    /*81*/ virtual class Vec3 getHeadLookVector(float) const;
    /*82*/ virtual void __unk_vfn_82();
    /*88*/ virtual void __unk_vfn_88();
    /*92*/ virtual bool isImmobile() const;
    /*95*/ virtual void __unk_vfn_95();
    /*98*/ virtual void __unk_vfn_98();
    /*105*/ virtual void __unk_vfn_105();
    /*107*/ virtual void __unk_vfn_107();
    /*108*/ virtual void __unk_vfn_108();
    /*109*/ virtual void __unk_vfn_109();
    /*119*/ virtual void setSitting(bool);
    /*134*/ virtual bool isInvulnerableTo(class ActorDamageSource const &) const;
    /*141*/ virtual void handleEntityEvent(enum ActorEvent, int);
    /*180*/ virtual bool canChangeDimensions() const;
    /*181*/ virtual void __unk_vfn_181();
    /*193*/ virtual bool canBePulledIntoVehicle() const;
    /*195*/ virtual void __unk_vfn_195();
    /*211*/ virtual bool canBeAffected(class MobEffectInstance const &) const;
    /*220*/ virtual void __unk_vfn_220();
    /*221*/ virtual void __unk_vfn_221();
    /*246*/ virtual void __unk_vfn_246();
    /*249*/ virtual void __unk_vfn_249();
    /*259*/ virtual void updateEntitySpecificMolangVariables(class RenderParams &);
    /*261*/ virtual void __unk_vfn_261();
    /*262*/ virtual bool _hurt(class ActorDamageSource const &, float, bool, bool);
    /*269*/ virtual void __unk_vfn_269();
    /*277*/ virtual void _onSizeUpdated();
    /*278*/ virtual void __unk_vfn_278();
    /*294*/ virtual void aiStep();
    /*307*/ virtual void __unk_vfn_307();
    /*311*/ virtual void __unk_vfn_311();
    /*345*/ virtual void __unk_vfn_345();
    /*357*/ virtual void tickDeath();
    /*359*/ virtual void __unk_vfn_359();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ENDERDRAGON
public:
    MCVAPI bool canExistInPeaceful() const;
    MCVAPI bool isFishable() const;
#endif
    MCAPI EnderDragon(class ActorDefinitionGroup *, struct ActorDefinitionIdentifier const &, class EntityContext &);
    MCAPI void dieNaturally();
    MCAPI int findClosestNode(class Vec3 const &);
    MCAPI int findClosestNode();
    MCAPI std::unique_ptr<class Path> findPath(int, int, class PathfinderNode *);
    MCAPI int getFlameCount() const;
    MCAPI float getFlapTime() const;
    MCAPI class BlockPos getHeadPos() const;
    MCAPI std::vector<float> const getLatencyPos(int, float) const;
    MCAPI int getNumCrystalsAlive();
    MCAPI class Vec3 getTargetPos() const;
    MCAPI void incrementFlameCount();
    MCAPI void onCrystalDestroyed(class EnderCrystal const &, class BlockPos, class ActorDamageSource const &);
    MCAPI void resetFlameCount();
    MCAPI void setDragonKilledCallback(class std::function<void (class EnderDragon &)>);
    MCAPI void setHasDragonPreviouslyBeenKilled(bool);
    MCAPI void setNumCrystalsAlive(int);
    MCAPI void setTargetPos(class Vec3);
    MCAPI void setTurnSpeed(float);

//protected:
    MCAPI bool _hurt(class AABB *, class ActorDamageSource const &, float);

//private:
    MCAPI void checkCrystals();
    MCAPI bool checkWalls(class AABB);
    MCAPI void hurtEntities(class gsl::span<class gsl::not_null<class Actor *>, -1>) const;
    MCAPI void knockBack(class gsl::span<class gsl::not_null<class Actor *>, -1>) const;
    MCAPI std::unique_ptr<class Path> reconstructPath(class PathfinderNode &, class PathfinderNode &, enum PathCompletionType);

protected:

private:
    MCAPI static int GROWL_INTERVAL_MAX;
    MCAPI static int GROWL_INTERVAL_MIN;
    MCAPI static int MAX_PATH_RADIUS;
    MCAPI static float SITTING_ALLOWED_DAMAGE_PERCENTAGE;


};