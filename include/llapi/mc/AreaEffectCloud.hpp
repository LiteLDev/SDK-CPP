/**
 * @file  AreaEffectCloud.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Actor.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class AreaEffectCloud.
 *
 */
class AreaEffectCloud : public Actor {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_AREAEFFECTCLOUD
public:
    class AreaEffectCloud& operator=(class AreaEffectCloud const &) = delete;
    AreaEffectCloud(class AreaEffectCloud const &) = delete;
    AreaEffectCloud() = delete;
#endif

public:
    /**
     * @vftbl  8
     * @symbol ?reloadHardcoded@AreaEffectCloud@@UEAAXW4InitializationMethod@Actor@@AEBVVariantParameterList@@@Z
     * @hash   443440118
     */
    virtual void reloadHardcoded(enum class Actor::InitializationMethod, class VariantParameterList const &);
    /**
     * @vftbl  14
     * @hash   -1813303003
     */
    virtual ~AreaEffectCloud();
    /**
     * @vftbl  40
     * @hash   -246209152
     */
    virtual void __unk_vfn_40();
    /**
     * @vftbl  48
     * @symbol ?normalTick@AreaEffectCloud@@UEAAXXZ
     * @hash   -1372575900
     */
    virtual void normalTick();
    /**
     * @vftbl  60
     * @hash   -196162194
     */
    virtual void __unk_vfn_60();
    /**
     * @vftbl  67
     * @hash   -182486203
     */
    virtual void __unk_vfn_67();
    /**
     * @vftbl  79
     * @symbol ?getShadowRadius@AreaEffectCloud@@UEBAMXZ
     * @hash   341865151
     */
    virtual float getShadowRadius() const;
    /**
     * @vftbl  81
     * @hash   -130769027
     */
    virtual void __unk_vfn_81();
    /**
     * @vftbl  84
     * @hash   -135209808
     */
    virtual void __unk_vfn_84();
    /**
     * @vftbl  87
     * @hash   -125227901
     */
    virtual void __unk_vfn_87();
    /**
     * @vftbl  95
     * @hash   -105657136
     */
    virtual void __unk_vfn_95();
    /**
     * @vftbl  98
     * @hash   -95675229
     */
    virtual void __unk_vfn_98();
    /**
     * @vftbl  105
     * @hash   1335894854
     */
    virtual void __unk_vfn_105();
    /**
     * @vftbl  107
     * @hash   1337741896
     */
    virtual void __unk_vfn_107();
    /**
     * @vftbl  108
     * @hash   1331454073
     */
    virtual void __unk_vfn_108();
    /**
     * @vftbl  110
     * @hash   1359906400
     */
    virtual void __unk_vfn_110();
    /**
     * @vftbl  118
     * @symbol ?setOwner@AreaEffectCloud@@UEAAXUActorUniqueID@@@Z
     * @hash   496716460
     */
    virtual void setOwner(struct ActorUniqueID);
    /**
     * @vftbl  181
     * @hash   1511261978
     */
    virtual void __unk_vfn_181();
    /**
     * @vftbl  195
     * @hash   1593557213
     */
    virtual void __unk_vfn_195();
    /**
     * @vftbl  220
     * @hash   -2032751088
     */
    virtual void __unk_vfn_220();
    /**
     * @vftbl  221
     * @hash   -2018004543
     */
    virtual void __unk_vfn_221();
    /**
     * @vftbl  247
     * @hash   -2005177115
     */
    virtual void __unk_vfn_247();
    /**
     * @vftbl  250
     * @hash   -739509363
     */
    virtual void __unk_vfn_250();
    /**
     * @vftbl  268
     * @hash   -1904234636
     */
    virtual void __unk_vfn_268();
    /**
     * @vftbl  272
     * @symbol ?readAdditionalSaveData@AreaEffectCloud@@MEAAXAEBVCompoundTag@@AEAVDataLoadHelper@@@Z
     * @hash   311682921
     */
    virtual void readAdditionalSaveData(class CompoundTag const &, class DataLoadHelper &);
    /**
     * @vftbl  273
     * @symbol ?addAdditionalSaveData@AreaEffectCloud@@MEBAXAEAVCompoundTag@@@Z
     * @hash   1737779012
     */
    virtual void addAdditionalSaveData(class CompoundTag &) const;
    /**
     * @vftbl  276
     * @hash   -1870241183
     */
    virtual void __unk_vfn_276();
    /**
     * @symbol ??0AreaEffectCloud@@QEAA@PEAVActorDefinitionGroup@@AEBUActorDefinitionIdentifier@@AEAVEntityContext@@@Z
     * @hash   2012576931
     */
    MCAPI AreaEffectCloud(class ActorDefinitionGroup *, struct ActorDefinitionIdentifier const &, class EntityContext &);
    /**
     * @symbol ?addAreaEffect@AreaEffectCloud@@QEAAXVMobEffectInstance@@@Z
     * @hash   -1401322476
     */
    MCAPI void addAreaEffect(class MobEffectInstance);
    /**
     * @symbol ?getDuration@AreaEffectCloud@@QEBAHXZ
     * @hash   884960620
     */
    MCAPI int getDuration() const;
    /**
     * @symbol ?getEffectiveRadius@AreaEffectCloud@@QEBAMXZ
     * @hash   1273105642
     */
    MCAPI float getEffectiveRadius() const;
    /**
     * @symbol ?getParticle@AreaEffectCloud@@QEBA?AW4ParticleType@@XZ
     * @hash   67592216
     */
    MCAPI enum class ParticleType getParticle() const;
    /**
     * @symbol ?notifyPickup@AreaEffectCloud@@QEAAXXZ
     * @hash   1455454845
     */
    MCAPI void notifyPickup();
    /**
     * @symbol ?setAffectOwner@AreaEffectCloud@@QEAAX_N@Z
     * @hash   298030794
     */
    MCAPI void setAffectOwner(bool);
    /**
     * @symbol ?setDuration@AreaEffectCloud@@QEAAXH@Z
     * @hash   -1109073238
     */
    MCAPI void setDuration(int);
    /**
     * @symbol ?setInitialRadius@AreaEffectCloud@@QEAAXM@Z
     * @hash   198466702
     */
    MCAPI void setInitialRadius(float);
    /**
     * @symbol ?setParticle@AreaEffectCloud@@QEAAXW4ParticleType@@@Z
     * @hash   -1513058010
     */
    MCAPI void setParticle(enum class ParticleType);
    /**
     * @symbol ?setParticleColor@AreaEffectCloud@@QEAAXAEAVColor@mce@@@Z
     * @hash   -1929510950
     */
    MCAPI void setParticleColor(class mce::Color &);
    /**
     * @symbol ?setPotion@AreaEffectCloud@@QEAAXF@Z
     * @hash   -826323663
     */
    MCAPI void setPotion(short);
    /**
     * @symbol ?setRadiusChangeOnPickup@AreaEffectCloud@@QEAAXM@Z
     * @hash   -625690234
     */
    MCAPI void setRadiusChangeOnPickup(float);
    /**
     * @symbol ?setRadiusOnUse@AreaEffectCloud@@QEAAXM@Z
     * @hash   -1733064338
     */
    MCAPI void setRadiusOnUse(float);
    /**
     * @symbol ?setRadiusPerTick@AreaEffectCloud@@QEAAXM@Z
     * @hash   409543898
     */
    MCAPI void setRadiusPerTick(float);
    /**
     * @symbol ?setReapplicationDelay@AreaEffectCloud@@QEAAXH@Z
     * @hash   -427368170
     */
    MCAPI void setReapplicationDelay(int);

//private:
    /**
     * @symbol ?_getTicksAlive@AreaEffectCloud@@AEBA_JXZ
     * @hash   -1720876743
     */
    MCAPI __int64 _getTicksAlive() const;
    /**
     * @symbol ?_setSpawnTick@AreaEffectCloud@@AEAAX_J@Z
     * @hash   1435686487
     */
    MCAPI void _setSpawnTick(__int64);
    /**
     * @symbol ?_spawnParticles@AreaEffectCloud@@AEAAXAEAVRandom@@IM@Z
     * @hash   946079947
     */
    MCAPI void _spawnParticles(class Random &, unsigned int, float);

private:

};