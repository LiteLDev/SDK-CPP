/**
 * @file  VillagerBase.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Actor.hpp"
#include "Mob.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class VillagerBase.
 *
 */
class VillagerBase : public Mob {

#define AFTER_EXTRA
// Add Member There
    enum class BiomeType;

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_VILLAGERBASE
public:
    class VillagerBase& operator=(class VillagerBase const &) = delete;
    VillagerBase(class VillagerBase const &) = delete;
    VillagerBase() = delete;
#endif

public:
    /**
     * @vftbl  13
     * @symbol ?reloadComponents@VillagerBase@@UEAAXW4InitializationMethod@Actor@@AEBVVariantParameterList@@@Z
     * @hash   2055989362
     */
    virtual void reloadComponents(enum class Actor::InitializationMethod, class VariantParameterList const &);
    /**
     * @vftbl  16
     * @hash   -1348017151
     */
    virtual ~VillagerBase();
    /**
     * @vftbl  42
     * @hash   -147616318
     */
    virtual void __unk_vfn_42();
    /**
     * @vftbl  63
     * @hash   -96891855
     */
    virtual void __unk_vfn_63();
    /**
     * @vftbl  70
     * @hash   -63575907
     */
    virtual void __unk_vfn_70();
    /**
     * @vftbl  84
     * @hash   -31252672
     */
    virtual void __unk_vfn_84();
    /**
     * @vftbl  87
     * @hash   -35939469
     */
    virtual void __unk_vfn_87();
    /**
     * @vftbl  90
     * @hash   -13774965
     */
    virtual void __unk_vfn_90();
    /**
     * @vftbl  98
     * @hash   -6386797
     */
    virtual void __unk_vfn_98();
    /**
     * @vftbl  101
     * @hash   1421489202
     */
    virtual void __unk_vfn_101();
    /**
     * @vftbl  108
     * @hash   1435411209
     */
    virtual void __unk_vfn_108();
    /**
     * @vftbl  110
     * @hash   1456652192
     */
    virtual void __unk_vfn_110();
    /**
     * @vftbl  111
     * @hash   1450118353
     */
    virtual void __unk_vfn_111();
    /**
     * @vftbl  113
     * @hash   1459422755
     */
    virtual void __unk_vfn_113();
    /**
     * @vftbl  141
     * @symbol ?onLightningHit@VillagerBase@@UEAAXXZ
     * @hash   847782744
     */
    virtual void onLightningHit();
    /**
     * @vftbl  144
     * @symbol ?handleEntityEvent@VillagerBase@@UEAAXW4ActorEvent@@H@Z
     * @hash   2111371151
     */
    virtual void handleEntityEvent(enum class ActorEvent, int);
    /**
     * @vftbl  183
     * @hash   1602074556
     */
    virtual void __unk_vfn_183();
    /**
     * @vftbl  197
     * @hash   1692150047
     */
    virtual void __unk_vfn_197();
    /**
     * @vftbl  222
     * @hash   -1937633230
     */
    virtual void __unk_vfn_222();
    /**
     * @vftbl  223
     * @hash   -1919411709
     */
    virtual void __unk_vfn_223();
    /**
     * @vftbl  245
     * @hash   -1918058621
     */
    virtual void __unk_vfn_245();
    /**
     * @vftbl  248
     * @hash   -511059482
     */
    virtual void __unk_vfn_248();
    /**
     * @vftbl  266
     * @hash   -1809581902
     */
    virtual void __unk_vfn_266();
    /**
     * @vftbl  270
     * @symbol ?readAdditionalSaveData@VillagerBase@@UEAAXAEBVCompoundTag@@AEAVDataLoadHelper@@@Z
     * @hash   -1715113840
     */
    virtual void readAdditionalSaveData(class CompoundTag const &, class DataLoadHelper &);
    /**
     * @vftbl  271
     * @symbol ?addAdditionalSaveData@VillagerBase@@UEBAXAEAVCompoundTag@@@Z
     * @hash   1395240749
     */
    virtual void addAdditionalSaveData(class CompoundTag &) const;
    /**
     * @vftbl  274
     * @hash   -1775342433
     */
    virtual void __unk_vfn_274();
    /**
     * @vftbl  280
     * @symbol ?_onSizeUpdated@VillagerBase@@EEAAXXZ
     * @hash   1361405646
     */
    virtual void _onSizeUpdated();
    /**
     * @vftbl  281
     * @hash   -1807236101
     */
    virtual void __unk_vfn_281();
    /**
     * @vftbl  289
     * @hash   1042759315
     */
    virtual void __unk_vfn_289();
    /**
     * @vftbl  308
     * @hash   -1142300981
     */
    virtual void __unk_vfn_308();
    /**
     * @vftbl  312
     * @hash   -1061460700
     */
    virtual void __unk_vfn_312();
    /**
     * @vftbl  346
     * @hash   -979336523
     */
    virtual void __unk_vfn_346();
    /**
     * @vftbl  356
     * @symbol ?_serverAiMobStep@VillagerBase@@MEAAXXZ
     * @hash   -1381503557
     */
    virtual void _serverAiMobStep();
    /**
     * @vftbl  360
     * @hash   -927619347
     */
    virtual void __unk_vfn_360();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_VILLAGERBASE
    /**
     * @symbol ?interactPreventDefault@VillagerBase@@UEAA_NXZ
     * @hash   841506449
     */
    MCVAPI bool interactPreventDefault();
    /**
     * @symbol ?useNewAi@VillagerBase@@UEBA_NXZ
     * @hash   1855333650
     */
    MCVAPI bool useNewAi() const;
#endif
    /**
     * @symbol ??0VillagerBase@@QEAA@PEAVActorDefinitionGroup@@AEBUActorDefinitionIdentifier@@AEAVEntityContext@@@Z
     * @hash   -1497951453
     */
    MCAPI VillagerBase(class ActorDefinitionGroup *, struct ActorDefinitionIdentifier const &, class EntityContext &);
    /**
     * @symbol ?consumeLoveFood@VillagerBase@@QEAAXXZ
     * @hash   1647605075
     */
    MCAPI void consumeLoveFood();
    /**
     * @symbol ?getBreedingStackIndex@VillagerBase@@QEBAHXZ
     * @hash   390544662
     */
    MCAPI int getBreedingStackIndex() const;
    /**
     * @symbol ?isChasing@VillagerBase@@QEBA_NXZ
     * @hash   97872228
     */
    MCAPI bool isChasing() const;
    /**
     * @symbol ?isWillingToBreed@VillagerBase@@QEAA_N_N@Z
     * @hash   -1406831293
     */
    MCAPI bool isWillingToBreed(bool);
    /**
     * @symbol ?setChasing@VillagerBase@@QEAAX_N@Z
     * @hash   -106364390
     */
    MCAPI void setChasing(bool);
    /**
     * @symbol ?setWillingToBreed@VillagerBase@@QEAAX_N@Z
     * @hash   1055534340
     */
    MCAPI void setWillingToBreed(bool);
    /**
     * @symbol ?stopGoals@VillagerBase@@QEAAXXZ
     * @hash   -1027236637
     */
    MCAPI void stopGoals();
    /**
     * @symbol ?BiomeStrToEnum@VillagerBase@@SA?AW4BiomeType@1@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   -508902813
     */
    MCAPI static enum class VillagerBase::BiomeType BiomeStrToEnum(std::string const &);

//private:
    /**
     * @symbol ?_addParticlesAroundSelf@VillagerBase@@AEAAXW4ParticleType@@@Z
     * @hash   997106755
     */
    MCAPI void _addParticlesAroundSelf(enum class ParticleType);

private:

};