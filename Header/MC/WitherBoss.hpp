/**
 * @file  WitherBoss.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Actor.hpp"
#include "Monster.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class WitherBoss.
 *
 */
class WitherBoss : public Monster {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_WITHERBOSS
public:
    class WitherBoss& operator=(class WitherBoss const &) = delete;
    WitherBoss(class WitherBoss const &) = delete;
    WitherBoss() = delete;
#endif

public:
    /**
     * @vftbl  8
     * @symbol ?reloadHardcoded@WitherBoss@@UEAAXW4InitializationMethod@Actor@@AEBVVariantParameterList@@@Z
     * @hash   1729405197
     */
    virtual void reloadHardcoded(enum Actor::InitializationMethod, class VariantParameterList const &);
    /**
     * @vftbl  9
     * @symbol ?reloadHardcodedClient@WitherBoss@@UEAAXW4InitializationMethod@Actor@@AEBVVariantParameterList@@@Z
     * @hash   73814680
     */
    virtual void reloadHardcodedClient(enum Actor::InitializationMethod, class VariantParameterList const &);
    /**
     * @vftbl  14
     * @hash   1304473546
     */
    virtual ~WitherBoss();
    /**
     * @vftbl  18
     * @symbol ?remove@WitherBoss@@UEAAXXZ
     * @hash   1785670475
     */
    virtual void remove();
    /**
     * @vftbl  26
     * @symbol ?getFiringPos@WitherBoss@@UEBA?AVVec3@@XZ
     * @hash   -887880485
     */
    virtual class Vec3 getFiringPos() const;
    /**
     * @vftbl  41
     * @hash   -249160383
     */
    virtual void __unk_vfn_41();
    /**
     * @vftbl  53
     * @symbol ?startRiding@WitherBoss@@UEAA_NAEAVActor@@@Z
     * @hash   -2131519225
     */
    virtual bool startRiding(class Actor &);
    /**
     * @vftbl  61
     * @hash   -191902081
     */
    virtual void __unk_vfn_61();
    /**
     * @vftbl  68
     * @hash   -185437434
     */
    virtual void __unk_vfn_68();
    /**
     * @vftbl  76
     * @symbol ?setBlockMovementSlowdownMultiplier@WitherBoss@@UEAAXAEBVBlockLegacy@@AEBVVec3@@@Z
     * @hash   1880177844
     */
    virtual void setBlockMovementSlowdownMultiplier(class BlockLegacy const &, class Vec3 const &);
    /**
     * @vftbl  82
     * @hash   -133720258
     */
    virtual void __unk_vfn_82();
    /**
     * @vftbl  85
     * @hash   -137684383
     */
    virtual void __unk_vfn_85();
    /**
     * @vftbl  88
     * @hash   -128179132
     */
    virtual void __unk_vfn_88();
    /**
     * @vftbl  96
     * @hash   -108131711
     */
    virtual void __unk_vfn_96();
    /**
     * @vftbl  99
     * @hash   -105361148
     */
    virtual void __unk_vfn_99();
    /**
     * @vftbl  106
     * @hash   1332943623
     */
    virtual void __unk_vfn_106();
    /**
     * @vftbl  108
     * @hash   1334790665
     */
    virtual void __unk_vfn_108();
    /**
     * @vftbl  109
     * @hash   1328979498
     */
    virtual void __unk_vfn_109();
    /**
     * @vftbl  111
     * @hash   1356955169
     */
    virtual void __unk_vfn_111();
    /**
     * @vftbl  135
     * @symbol ?isInvulnerableTo@WitherBoss@@UEBA_NAEBVActorDamageSource@@@Z
     * @hash   -1299828258
     */
    virtual bool isInvulnerableTo(class ActorDamageSource const &) const;
    /**
     * @vftbl  142
     * @symbol ?handleEntityEvent@WitherBoss@@UEAAXW4ActorEvent@@H@Z
     * @hash   215119862
     */
    virtual void handleEntityEvent(enum ActorEvent, int);
    /**
     * @vftbl  174
     * @symbol ?canFreeze@WitherBoss@@UEBA_NXZ
     * @hash   2033449535
     */
    virtual bool canFreeze() const;
    /**
     * @vftbl  182
     * @hash   1509264059
     */
    virtual void __unk_vfn_182();
    /**
     * @vftbl  186
     * @symbol ?causeFallDamage@WitherBoss@@UEAAXMMVActorDamageSource@@@Z
     * @hash   -1511222638
     */
    virtual void causeFallDamage(float, float, class ActorDamageSource);
    /**
     * @vftbl  196
     * @hash   1590605982
     */
    virtual void __unk_vfn_196();
    /**
     * @vftbl  212
     * @symbol ?canBeAffected@WitherBoss@@UEBA_NAEBVMobEffectInstance@@@Z
     * @hash   -1574502846
     */
    virtual bool canBeAffected(class MobEffectInstance const &) const;
    /**
     * @vftbl  213
     * @symbol ?canBeAffectedByArrow@WitherBoss@@UEBA_NAEBVMobEffectInstance@@@Z
     * @hash   -1047878402
     */
    virtual bool canBeAffectedByArrow(class MobEffectInstance const &) const;
    /**
     * @vftbl  222
     * @hash   -2034256014
     */
    virtual void __unk_vfn_222();
    /**
     * @vftbl  223
     * @hash   -2020032253
     */
    virtual void __unk_vfn_223();
    /**
     * @vftbl  248
     * @hash   -2007175034
     */
    virtual void __unk_vfn_248();
    /**
     * @vftbl  251
     * @hash   -786620466
     */
    virtual void __unk_vfn_251();
    /**
     * @vftbl  253
     * @symbol ?die@WitherBoss@@UEAAXAEBVActorDamageSource@@@Z
     * @hash   751542563
     */
    virtual void die(class ActorDamageSource const &);
    /**
     * @vftbl  269
     * @hash   -1906709211
     */
    virtual void __unk_vfn_269();
    /**
     * @vftbl  270
     * @symbol ?_hurt@WitherBoss@@MEAA_NAEBVActorDamageSource@@M_N1@Z
     * @hash   -388040144
     */
    virtual bool _hurt(class ActorDamageSource const &, float, bool, bool);
    /**
     * @vftbl  273
     * @symbol ?readAdditionalSaveData@WitherBoss@@UEAAXAEBVCompoundTag@@AEAVDataLoadHelper@@@Z
     * @hash   -1546479833
     */
    virtual void readAdditionalSaveData(class CompoundTag const &, class DataLoadHelper &);
    /**
     * @vftbl  274
     * @symbol ?addAdditionalSaveData@WitherBoss@@UEBAXAEAVCompoundTag@@@Z
     * @hash   1750274406
     */
    virtual void addAdditionalSaveData(class CompoundTag &) const;
    /**
     * @vftbl  277
     * @hash   -1873192414
     */
    virtual void __unk_vfn_277();
    /**
     * @vftbl  285
     * @hash   -1895428993
     */
    virtual void __unk_vfn_285();
    /**
     * @vftbl  294
     * @symbol ?hurtEffects@WitherBoss@@UEAAXAEBVActorDamageSource@@M_N1@Z
     * @hash   -53663030
     */
    virtual void hurtEffects(class ActorDamageSource const &, float, bool, bool);
    /**
     * @vftbl  300
     * @symbol ?aiStep@WitherBoss@@UEAAXXZ
     * @hash   -612504805
     */
    virtual void aiStep();
    /**
     * @vftbl  313
     * @hash   -1210176411
     */
    virtual void __unk_vfn_313();
    /**
     * @vftbl  317
     * @hash   -1157463639
     */
    virtual void __unk_vfn_317();
    /**
     * @vftbl  322
     * @symbol ?getArmorValue@WitherBoss@@UEBAHXZ
     * @hash   -1401843549
     */
    virtual int getArmorValue() const;
    /**
     * @vftbl  351
     * @hash   -1055222849
     */
    virtual void __unk_vfn_351();
    /**
     * @vftbl  360
     * @symbol ?newServerAiStep@WitherBoss@@UEAAXXZ
     * @hash   -1789121794
     */
    virtual void newServerAiStep();
    /**
     * @vftbl  365
     * @hash   -1022899614
     */
    virtual void __unk_vfn_365();
    /**
     * @symbol ??0WitherBoss@@QEAA@PEAVActorDefinitionGroup@@AEBUActorDefinitionIdentifier@@AEAVEntityContext@@@Z
     * @hash   -1818614436
     */
    MCAPI WitherBoss(class ActorDefinitionGroup *, struct ActorDefinitionIdentifier const &, class EntityContext &);
    /**
     * @symbol ?awardSpawnWitherAchievement@WitherBoss@@QEBAXXZ
     * @hash   1030673217
     */
    MCAPI void awardSpawnWitherAchievement() const;
    /**
     * @symbol ?getHeadPos@WitherBoss@@QEBA?AVVec3@@H@Z
     * @hash   680945303
     */
    MCAPI class Vec3 getHeadPos(int) const;
    /**
     * @symbol ?getHeadRot@WitherBoss@@QEAA?AVVec2@@H@Z
     * @hash   -408774347
     */
    MCAPI class Vec2 getHeadRot(int);
    /**
     * @symbol ?getInvulnerableTicks@WitherBoss@@QEBAHXZ
     * @hash   768538952
     */
    MCAPI int getInvulnerableTicks() const;
    /**
     * @symbol ?getOverlayAlpha@WitherBoss@@QEAAMXZ
     * @hash   1924653430
     */
    MCAPI float getOverlayAlpha();
    /**
     * @symbol ?getSwellAmount@WitherBoss@@QEBAMM@Z
     * @hash   1271509617
     */
    MCAPI float getSwellAmount(float) const;
    /**
     * @symbol ?hasAerialAttack@WitherBoss@@QEBA_NXZ
     * @hash   -1155073424
     */
    MCAPI bool hasAerialAttack() const;
    /**
     * @symbol ?postAiStep@WitherBoss@@QEAAXXZ
     * @hash   -1130043627
     */
    MCAPI void postAiStep();
    /**
     * @symbol ?preAiStep@WitherBoss@@QEAA?AW4PreAiStepResult@1@XZ
     * @hash   2137326997
     */
    MCAPI enum WitherBoss::PreAiStepResult preAiStep();
    /**
     * @symbol ?removeSkeleton@WitherBoss@@QEAAXXZ
     * @hash   169538741
     */
    MCAPI void removeSkeleton();
    /**
     * @symbol ?setAerialAttack@WitherBoss@@QEAAX_N@Z
     * @hash   -687168164
     */
    MCAPI void setAerialAttack(bool);
    /**
     * @symbol ?setAlternativeTarget@WitherBoss@@QEAAXHUActorUniqueID@@@Z
     * @hash   -1911950723
     */
    MCAPI void setAlternativeTarget(int, struct ActorUniqueID);
    /**
     * @symbol ?setInvulnerableTicks@WitherBoss@@QEAAXH@Z
     * @hash   196256406
     */
    MCAPI void setInvulnerableTicks(int);
    /**
     * @symbol ?setIsPathing@WitherBoss@@QEAAX_N@Z
     * @hash   -1739108148
     */
    MCAPI void setIsPathing(bool);
    /**
     * @symbol ?setShotDelay@WitherBoss@@QEAAXH@Z
     * @hash   358963782
     */
    MCAPI void setShotDelay(int);
    /**
     * @symbol ?setWantsToMove@WitherBoss@@QEAAX_N@Z
     * @hash   -1928007308
     */
    MCAPI void setWantsToMove(bool);
    /**
     * @symbol ?wantsToMove@WitherBoss@@QEAA_NXZ
     * @hash   1847558126
     */
    MCAPI bool wantsToMove();
    /**
     * @symbol ?MAX_HEALTH_CAP_UUID@WitherBoss@@2VUUID@mce@@B
     * @hash   -690473935
     */
    MCAPI static class mce::UUID const MAX_HEALTH_CAP_UUID;
    /**
     * @symbol ?canDestroy@WitherBoss@@SA_NAEBVBlock@@W4WitherAttackType@1@@Z
     * @hash   1790099095
     */
    MCAPI static bool canDestroy(class Block const &, enum WitherBoss::WitherAttackType);

//private:
    /**
     * @symbol ?_destroyBlocks@WitherBoss@@AEAAXAEAVLevel@@AEBVAABB@@AEAVBlockSource@@HW4WitherAttackType@1@@Z
     * @hash   -1898298882
     */
    MCAPI void _destroyBlocks(class Level &, class AABB const &, class BlockSource &, int, enum WitherBoss::WitherAttackType);
    /**
     * @symbol ?_performRangedAttack@WitherBoss@@AEAAXHAEAVActor@@@Z
     * @hash   672356149
     */
    MCAPI void _performRangedAttack(int, class Actor &);
    /**
     * @symbol ?_performRangedAttack@WitherBoss@@AEAAXHAEBVVec3@@_N@Z
     * @hash   1979337564
     */
    MCAPI void _performRangedAttack(int, class Vec3 const &, bool);
    /**
     * @symbol ?canShoot@WitherBoss@@AEAA_NXZ
     * @hash   1740146549
     */
    MCAPI bool canShoot();

private:
    /**
     * @symbol ?TIME_BEFORE_MOVING@WitherBoss@@0HB
     * @hash   682876332
     */
    MCAPI static int const TIME_BEFORE_MOVING;

};