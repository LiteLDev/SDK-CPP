/**
 * @file  IronGolem.hpp
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
 * @brief MC class IronGolem.
 *
 */
class IronGolem : public Mob {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_IRONGOLEM
public:
    class IronGolem& operator=(class IronGolem const &) = delete;
    IronGolem(class IronGolem const &) = delete;
    IronGolem() = delete;
#endif

public:
    /**
     * @vftbl  14
     * @hash   -372702190
     */
    virtual ~IronGolem();
    /**
     * @vftbl  41
     * @hash   -249160383
     */
    virtual void __unk_vfn_41();
    /**
     * @vftbl  61
     * @hash   -198636769
     */
    virtual void __unk_vfn_61();
    /**
     * @vftbl  68
     * @hash   -185437434
     */
    virtual void __unk_vfn_68();
    /**
     * @vftbl  80
     * @symbol ?getShadowRadius@IronGolem@@UEBAMXZ
     * @hash   1873170034
     */
    virtual float getShadowRadius() const;
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
     * @vftbl  142
     * @symbol ?handleEntityEvent@IronGolem@@UEAAXW4ActorEvent@@H@Z
     * @hash   -2123400638
     */
    virtual void handleEntityEvent(enum ActorEvent, int);
    /**
     * @vftbl  182
     * @hash   1509264059
     */
    virtual void __unk_vfn_182();
    /**
     * @vftbl  196
     * @hash   1590605982
     */
    virtual void __unk_vfn_196();
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
     * @symbol ?die@IronGolem@@UEAAXAEBVActorDamageSource@@@Z
     * @hash   -362318393
     */
    virtual void die(class ActorDamageSource const &);
    /**
     * @vftbl  267
     * @symbol ?updateEntitySpecificMolangVariables@IronGolem@@UEAAXAEAVRenderParams@@@Z
     * @hash   -600654164
     */
    virtual void updateEntitySpecificMolangVariables(class RenderParams &);
    /**
     * @vftbl  269
     * @hash   -1906709211
     */
    virtual void __unk_vfn_269();
    /**
     * @vftbl  275
     * @symbol ?_playStepSound@IronGolem@@MEAAXAEBVBlockPos@@AEBVBlock@@@Z
     * @hash   834661950
     */
    virtual void _playStepSound(class BlockPos const &, class Block const &);
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
     * @symbol ?hurtEffects@IronGolem@@UEAAXAEBVActorDamageSource@@M_N1@Z
     * @hash   1842018166
     */
    virtual void hurtEffects(class ActorDamageSource const &, float, bool, bool);
    /**
     * @vftbl  300
     * @symbol ?aiStep@IronGolem@@UEAAXXZ
     * @hash   1884828311
     */
    virtual void aiStep();
    /**
     * @vftbl  313
     * @hash   -1210176411
     */
    virtual void __unk_vfn_313();
    /**
     * @vftbl  316
     * @symbol ?doHurtTarget@IronGolem@@UEAA_NPEAVActor@@AEBW4ActorDamageCause@@@Z
     * @hash   -1180379270
     */
    virtual bool doHurtTarget(class Actor *, enum ActorDamageCause const &);
    /**
     * @vftbl  317
     * @hash   -1157463639
     */
    virtual void __unk_vfn_317();
    /**
     * @vftbl  351
     * @hash   -1055222849
     */
    virtual void __unk_vfn_351();
    /**
     * @vftbl  365
     * @hash   -1022899614
     */
    virtual void __unk_vfn_365();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_IRONGOLEM
    /**
     * @symbol ?useNewAi@IronGolem@@UEBA_NXZ
     * @hash   -323424779
     */
    MCVAPI bool useNewAi() const;
#endif
    /**
     * @symbol ??0IronGolem@@QEAA@PEAVActorDefinitionGroup@@AEBUActorDefinitionIdentifier@@AEAVEntityContext@@@Z
     * @hash   899187056
     */
    MCAPI IronGolem(class ActorDefinitionGroup *, struct ActorDefinitionIdentifier const &, class EntityContext &);
    /**
     * @symbol ?getOfferFlowerTick@IronGolem@@QEBAHXZ
     * @hash   -1694281134
     */
    MCAPI int getOfferFlowerTick() const;
    /**
     * @symbol ?offerFlower@IronGolem@@QEAAX_N@Z
     * @hash   -1513018106
     */
    MCAPI void offerFlower(bool);

};