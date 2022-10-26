/**
 * @file  ExperienceOrb.hpp
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
 * @brief MC class ExperienceOrb.
 *
 */
class ExperienceOrb : public Actor {

#define AFTER_EXTRA
// Add Member There
public:
enum class DropType;

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_EXPERIENCEORB
public:
    class ExperienceOrb& operator=(class ExperienceOrb const &) = delete;
    ExperienceOrb(class ExperienceOrb const &) = delete;
    ExperienceOrb() = delete;
#endif

public:
    /**
     * @vftbl  8
     * @symbol ?reloadHardcoded@ExperienceOrb@@UEAAXW4InitializationMethod@Actor@@AEBVVariantParameterList@@@Z
     * @hash   1324081576
     */
    virtual void reloadHardcoded(enum class Actor::InitializationMethod, class VariantParameterList const &);
    /**
     * @vftbl  14
     * @hash   -1038951581
     */
    virtual ~ExperienceOrb();
    /**
     * @vftbl  40
     * @hash   -246209152
     */
    virtual void __unk_vfn_40();
    /**
     * @vftbl  48
     * @symbol ?normalTick@ExperienceOrb@@UEAAXXZ
     * @hash   1923244262
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
     * @symbol ?getShadowRadius@ExperienceOrb@@UEBAMXZ
     * @hash   -1133534975
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
     * @vftbl  88
     * @symbol ?playerTouch@ExperienceOrb@@UEAAXAEAVPlayer@@@Z
     * @hash   664490035
     */
    virtual void playerTouch(class Player &);
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
     * @vftbl  134
     * @symbol ?isInvulnerableTo@ExperienceOrb@@UEBA_NAEBVActorDamageSource@@@Z
     * @hash   540593475
     */
    virtual bool isInvulnerableTo(class ActorDamageSource const &) const;
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
     * @vftbl  263
     * @symbol ?doWaterSplashEffect@ExperienceOrb@@MEAAXXZ
     * @hash   873814943
     */
    virtual void doWaterSplashEffect();
    /**
     * @vftbl  268
     * @hash   -1904234636
     */
    virtual void __unk_vfn_268();
    /**
     * @vftbl  269
     * @symbol ?_hurt@ExperienceOrb@@MEAA_NAEBVActorDamageSource@@M_N1@Z
     * @hash   688899227
     */
    virtual bool _hurt(class ActorDamageSource const &, float, bool, bool);
    /**
     * @vftbl  272
     * @symbol ?readAdditionalSaveData@ExperienceOrb@@UEAAXAEBVCompoundTag@@AEAVDataLoadHelper@@@Z
     * @hash   -1655296510
     */
    virtual void readAdditionalSaveData(class CompoundTag const &, class DataLoadHelper &);
    /**
     * @vftbl  273
     * @symbol ?addAdditionalSaveData@ExperienceOrb@@UEBAXAEAVCompoundTag@@@Z
     * @hash   353804587
     */
    virtual void addAdditionalSaveData(class CompoundTag &) const;
    /**
     * @vftbl  274
     * @symbol ?_playStepSound@ExperienceOrb@@MEAAXAEBVBlockPos@@AEBVBlock@@@Z
     * @hash   1398077677
     */
    virtual void _playStepSound(class BlockPos const &, class Block const &);
    /**
     * @vftbl  276
     * @hash   -1870241183
     */
    virtual void __unk_vfn_276();
    /**
     * @symbol ??0ExperienceOrb@@QEAA@PEAVActorDefinitionGroup@@AEBUActorDefinitionIdentifier@@AEAVEntityContext@@@Z
     * @hash   -887370703
     */
    MCAPI ExperienceOrb(class ActorDefinitionGroup *, struct ActorDefinitionIdentifier const &, class EntityContext &);
    /**
     * @symbol ?getIconIndex@ExperienceOrb@@QEBAHXZ
     * @hash   958945004
     */
    MCAPI int getIconIndex() const;
    /**
     * @symbol ?postNormalTick@ExperienceOrb@@QEAAXXZ
     * @hash   -1410940597
     */
    MCAPI void postNormalTick();
    /**
     * @symbol ?setValue@ExperienceOrb@@QEAAXH@Z
     * @hash   1980745178
     */
    MCAPI void setValue(int);
    /**
     * @symbol ?spawnOrbs@ExperienceOrb@@SAXAEAVBlockSource@@AEBVVec3@@HHW4DropType@1@PEAVPlayer@@@Z
     * @hash   -1115640964
     */
    MCAPI static void spawnOrbs(class BlockSource &, class Vec3 const &, int, int, enum class ExperienceOrb::DropType, class Player *);
    /**
     * @symbol ?spawnOrbs@ExperienceOrb@@SAXAEAVBlockSource@@AEBVVec3@@HW4DropType@1@PEAVPlayer@@@Z
     * @hash   1609087049
     */
    MCAPI static void spawnOrbs(class BlockSource &, class Vec3 const &, int, enum class ExperienceOrb::DropType, class Player *);

//private:
    /**
     * @symbol ?_handleMending@ExperienceOrb@@AEAAXAEAVPlayer@@@Z
     * @hash   -174188761
     */
    MCAPI void _handleMending(class Player &);

private:
    /**
     * @symbol ?LIFETIME@ExperienceOrb@@0HB
     * @hash   196611700
     */
    MCAPI static int const LIFETIME;

};