/**
 * @file  Spider.hpp
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
 * @brief MC class Spider.
 *
 */
class Spider : public Monster {

#define AFTER_EXTRA
// Add Member There
public:
enum class Type;

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SPIDER
public:
    class Spider& operator=(class Spider const &) = delete;
    Spider(class Spider const &) = delete;
    Spider() = delete;
#endif

public:
    /**
     * @vftbl  16
     * @hash   -325965521
     */
    virtual ~Spider();
    /**
     * @vftbl  42
     * @hash   -147616318
     */
    virtual void __unk_vfn_42();
    /**
     * @vftbl  50
     * @symbol ?normalTick@Spider@@UEAAXXZ
     * @hash   -1464618186
     */
    virtual void normalTick();
    /**
     * @vftbl  63
     * @hash   -89434495
     */
    virtual void __unk_vfn_63();
    /**
     * @vftbl  70
     * @hash   -63575907
     */
    virtual void __unk_vfn_70();
    /**
     * @vftbl  78
     * @symbol ?setBlockMovementSlowdownMultiplier@Spider@@UEAAXAEBVBlockLegacy@@AEBVVec3@@@Z
     * @hash   -1538266065
     */
    virtual void setBlockMovementSlowdownMultiplier(class BlockLegacy const &, class Vec3 const &);
    /**
     * @vftbl  82
     * @symbol ?getShadowRadius@Spider@@UEBAMXZ
     * @hash   -605442559
     */
    virtual float getShadowRadius() const;
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
     * @vftbl  134
     * @symbol ?shouldRender@Spider@@UEBA_NXZ
     * @hash   620162412
     */
    virtual bool shouldRender() const;
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
     * @vftbl  212
     * @symbol ?canBeAffected@Spider@@UEBA_NI@Z
     * @hash   -463260274
     */
    virtual bool canBeAffected(unsigned int) const;
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
     * @vftbl  272
     * @symbol ?_playStepSound@Spider@@MEAAXAEBVBlockPos@@AEBVBlock@@@Z
     * @hash   -1143097395
     */
    virtual void _playStepSound(class BlockPos const &, class Block const &);
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
     * @symbol ?aiStep@Spider@@UEAAXXZ
     * @hash   -1844062138
     */
    virtual void aiStep();
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
     * @vftbl  363
     * @symbol ?getModelScale@Spider@@UEBAMXZ
     * @hash   -1331887936
     */
    virtual float getModelScale() const;
    /**
     * @vftbl  364
     * @symbol ?getSpiderType@Spider@@UEBA?AW4Type@1@XZ
     * @hash   1938652457
     */
    virtual enum class Spider::Type getSpiderType() const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SPIDER
    /**
     * @symbol ?useNewAi@Spider@@UEBA_NXZ
     * @hash   -1423642140
     */
    MCVAPI bool useNewAi() const;
#endif
    /**
     * @symbol ??0Spider@@QEAA@PEAVActorDefinitionGroup@@AEBUActorDefinitionIdentifier@@AEAVEntityContext@@@Z
     * @hash   -565250431
     */
    MCAPI Spider(class ActorDefinitionGroup *, struct ActorDefinitionIdentifier const &, class EntityContext &);

};