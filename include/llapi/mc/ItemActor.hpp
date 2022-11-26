/**
 * @file  ItemActor.hpp
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
 * @brief MC class ItemActor.
 *
 */
class ItemActor : public Actor {

#define AFTER_EXTRA
// Add Member There
public:
    LIAPI ItemStack* getItemStack();
    LIAPI int getDespawnTime();
    LIAPI bool setDespawnTime(int);
    LIAPI int getLatestSpawnTime();
    LIAPI int& despawnTime();
#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ITEMACTOR
public:
    class ItemActor& operator=(class ItemActor const &) = delete;
    ItemActor(class ItemActor const &) = delete;
    ItemActor() = delete;
#endif

public:
    /**
     * @vftbl  10
     * @symbol ?reloadHardcoded@ItemActor@@UEAAXW4InitializationMethod@Actor@@AEBVVariantParameterList@@@Z
     * @hash   -1819547781
     */
    virtual void reloadHardcoded(enum class Actor::InitializationMethod, class VariantParameterList const &);
    /**
     * @vftbl  16
     * @hash   -1806437520
     */
    virtual ~ItemActor();
    /**
     * @vftbl  22
     * @symbol ?isRuntimePredictedMovementEnabled@ItemActor@@UEBA_NXZ
     * @hash   969554894
     */
    virtual bool isRuntimePredictedMovementEnabled() const;
    /**
     * @vftbl  41
     * @symbol ?isFireImmune@ItemActor@@UEBA_NXZ
     * @hash   1648222745
     */
    virtual bool isFireImmune() const;
    /**
     * @vftbl  42
     * @hash   -147616318
     */
    virtual void __unk_vfn_42();
    /**
     * @vftbl  49
     * @symbol ?tryCreateAddActorPacket@ItemActor@@UEAA?AV?$unique_ptr@VAddActorBasePacket@@U?$default_delete@VAddActorBasePacket@@@std@@@std@@XZ
     * @hash   1161472283
     */
    virtual std::unique_ptr<class AddActorBasePacket> tryCreateAddActorPacket();
    /**
     * @vftbl  50
     * @symbol ?normalTick@ItemActor@@UEAAXXZ
     * @hash   1530066777
     */
    virtual void normalTick();
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
     * @vftbl  91
     * @symbol ?playerTouch@ItemActor@@UEAAXAEAVPlayer@@@Z
     * @hash   -1675791392
     */
    virtual void playerTouch(class Player &);
    /**
     * @vftbl  98
     * @hash   -6386797
     */
    virtual void __unk_vfn_98();
    /**
     * @vftbl  101
     * @hash   1428946562
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
     * @vftbl  137
     * @symbol ?isInvulnerableTo@ItemActor@@UEBA_NAEBVActorDamageSource@@@Z
     * @hash   -51104736
     */
    virtual bool isInvulnerableTo(class ActorDamageSource const &) const;
    /**
     * @vftbl  144
     * @symbol ?handleEntityEvent@ItemActor@@UEAAXW4ActorEvent@@H@Z
     * @hash   2022300676
     */
    virtual void handleEntityEvent(enum class ActorEvent, int);
    /**
     * @vftbl  174
     * @symbol ?getSourceUniqueID@ItemActor@@UEBA?AUActorUniqueID@@XZ
     * @hash   -352230236
     */
    virtual struct ActorUniqueID getSourceUniqueID() const;
    /**
     * @vftbl  178
     * @symbol ?getLiquidAABB@ItemActor@@UEBA?AVAABB@@W4MaterialType@@@Z
     * @hash   -710818782
     */
    virtual class AABB getLiquidAABB(enum class MaterialType) const;
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
     * @vftbl  200
     * @symbol ?canSynchronizeNewEntity@ItemActor@@UEBA_NXZ
     * @hash   1134003385
     */
    virtual bool canSynchronizeNewEntity() const;
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
     * @hash   -1802124542
     */
    virtual void __unk_vfn_266();
    /**
     * @vftbl  267
     * @symbol ?_hurt@ItemActor@@MEAA_NAEBVActorDamageSource@@M_N1@Z
     * @hash   2032418974
     */
    virtual bool _hurt(class ActorDamageSource const &, float, bool, bool);
    /**
     * @vftbl  270
     * @symbol ?readAdditionalSaveData@ItemActor@@MEAAXAEBVCompoundTag@@AEAVDataLoadHelper@@@Z
     * @hash   -1560822722
     */
    virtual void readAdditionalSaveData(class CompoundTag const &, class DataLoadHelper &);
    /**
     * @vftbl  271
     * @symbol ?addAdditionalSaveData@ItemActor@@MEBAXAEAVCompoundTag@@@Z
     * @hash   1558325215
     */
    virtual void addAdditionalSaveData(class CompoundTag &) const;
    /**
     * @vftbl  274
     * @hash   -1775342433
     */
    virtual void __unk_vfn_274();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ITEMACTOR
    /**
     * @symbol ?canMakeStepSound@ItemActor@@UEBA_NXZ
     * @hash   1710858683
     */
    MCVAPI bool canMakeStepSound() const;
#endif
    /**
     * @symbol ??0ItemActor@@QEAA@PEAVActorDefinitionGroup@@AEBUActorDefinitionIdentifier@@AEAVEntityContext@@@Z
     * @hash   2114817150
     */
    MCAPI ItemActor(class ActorDefinitionGroup *, struct ActorDefinitionIdentifier const &, class EntityContext &);
    /**
     * @symbol ?postNormalTick@ItemActor@@QEAAXXZ
     * @hash   1385963019
     */
    MCAPI void postNormalTick();
    /**
     * @symbol ?setSourceEntity@ItemActor@@QEAAXPEBVActor@@@Z
     * @hash   1906335715
     */
    MCAPI void setSourceEntity(class Actor const *);
    /**
     * @symbol ?getLiquidAABB@ItemActor@@SA?AVAABB@@AEBUAABBShapeComponent@@@Z
     * @hash   694037593
     */
    MCAPI static class AABB getLiquidAABB(struct AABBShapeComponent const &);
    /**
     * @symbol ?tryGetFromEntity@ItemActor@@SAPEAV1@AEAVEntityContext@@_N@Z
     * @hash   1441034824
     */
    MCAPI static class ItemActor * tryGetFromEntity(class EntityContext &, bool);

//private:
    /**
     * @symbol ?_addComponents@ItemActor@@AEAAXXZ
     * @hash   393130482
     */
    MCAPI void _addComponents();
    /**
     * @symbol ?_dropContents@ItemActor@@AEAAXXZ
     * @hash   -321560014
     */
    MCAPI void _dropContents();
    /**
     * @symbol ?_merge@ItemActor@@AEAA_NPEAV1@@Z
     * @hash   -44888135
     */
    MCAPI bool _merge(class ItemActor *);
    /**
     * @symbol ?_validateItem@ItemActor@@AEAAXXZ
     * @hash   1782401394
     */
    MCAPI void _validateItem();

private:
    /**
     * @symbol ?LIFETIME@ItemActor@@0HB
     * @hash   1581377423
     */
    MCAPI static int const LIFETIME;

};