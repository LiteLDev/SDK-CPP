/**
 * @file  WaterAnimal.hpp
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
 * @brief MC class WaterAnimal.
 *
 */
class WaterAnimal : public Mob {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_WATERANIMAL
public:
    class WaterAnimal& operator=(class WaterAnimal const &) = delete;
    WaterAnimal(class WaterAnimal const &) = delete;
    WaterAnimal() = delete;
#endif

public:
    /**
     * @vftbl  16
     * @hash   -1309539903
     */
    virtual ~WaterAnimal();
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
     * @hash   -6317605
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
     * @vftbl  274
     * @hash   -1775342433
     */
    virtual void __unk_vfn_274();
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
     * @vftbl  295
     * @symbol ?aiStep@WaterAnimal@@UEAAXXZ
     * @hash   1359017432
     */
    virtual void aiStep();
    /**
     * @vftbl  300
     * @symbol ?checkSpawnRules@WaterAnimal@@UEAA_N_N@Z
     * @hash   1366066146
     */
    virtual bool checkSpawnRules(bool);
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
     * @vftbl  360
     * @hash   -927619347
     */
    virtual void __unk_vfn_360();
    /**
     * @vftbl  362
     * @symbol ?getFlopVerticalVelocityFactor@WaterAnimal@@UEBAMXZ
     * @hash   683391818
     */
    virtual float getFlopVerticalVelocityFactor() const;
    /**
     * @vftbl  363
     * @symbol ?getFlopHorizontalVelocityFactor@WaterAnimal@@UEBAMXZ
     * @hash   1490140888
     */
    virtual float getFlopHorizontalVelocityFactor() const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_WATERANIMAL
    /**
     * @symbol ?useNewAi@WaterAnimal@@MEBA_NXZ
     * @hash   1570231439
     */
    MCVAPI bool useNewAi() const;
#endif
    /**
     * @symbol ??0WaterAnimal@@QEAA@PEAVActorDefinitionGroup@@AEBUActorDefinitionIdentifier@@AEAVEntityContext@@@Z
     * @hash   1756303439
     */
    MCAPI WaterAnimal(class ActorDefinitionGroup *, struct ActorDefinitionIdentifier const &, class EntityContext &);
    /**
     * @symbol ?preAiStep@WaterAnimal@@QEAAXXZ
     * @hash   -531954749
     */
    MCAPI void preAiStep();

};