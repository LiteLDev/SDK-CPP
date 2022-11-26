/**
 * @file  AbstractCompassItem.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"
#include "Item.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class AbstractCompassItem.
 *
 */
class AbstractCompassItem : public Item {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ABSTRACTCOMPASSITEM
public:
    class AbstractCompassItem& operator=(class AbstractCompassItem const &) = delete;
    AbstractCompassItem(class AbstractCompassItem const &) = delete;
    AbstractCompassItem() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   2067728273
     */
    virtual ~AbstractCompassItem();
    /**
     * @vftbl  7
     * @hash   -1253298233
     */
    virtual void __unk_vfn_7();
    /**
     * @vftbl  11
     * @hash   -234427292
     */
    virtual void __unk_vfn_11();
    /**
     * @vftbl  14
     * @hash   -231656729
     */
    virtual void __unk_vfn_14();
    /**
     * @vftbl  16
     * @hash   -229809687
     */
    virtual void __unk_vfn_16();
    /**
     * @vftbl  51
     * @hash   -119910688
     */
    virtual void __unk_vfn_51();
    /**
     * @vftbl  53
     * @hash   -118063646
     */
    virtual void __unk_vfn_53();
    /**
     * @vftbl  62
     * @symbol ?getEnchantSlot@AbstractCompassItem@@UEBAHXZ
     * @hash   -228383543
     */
    virtual int getEnchantSlot() const;
    /**
     * @vftbl  66
     * @hash   -86663932
     */
    virtual void __unk_vfn_66();
    /**
     * @vftbl  70
     * @hash   -63575907
     */
    virtual void __unk_vfn_70();
    /**
     * @vftbl  71
     * @hash   -62652386
     */
    virtual void __unk_vfn_71();
    /**
     * @vftbl  72
     * @hash   -61728865
     */
    virtual void __unk_vfn_72();
    /**
     * @vftbl  75
     * @hash   -58958302
     */
    virtual void __unk_vfn_75();
    /**
     * @vftbl  79
     * @hash   -276670826
     */
    virtual void __unk_vfn_79();
    /**
     * @vftbl  80
     * @hash   -256353364
     */
    virtual void __unk_vfn_80();
    /**
     * @vftbl  118
     * @symbol ?getIconInfo@AbstractCompassItem@@UEBA?AUResolvedItemIconInfo@@AEBVItemStackBase@@H_N@Z
     * @hash   -770727798
     */
    virtual struct ResolvedItemIconInfo getIconInfo(class ItemStackBase const &, int, bool) const;
    /**
     * @vftbl  120
     * @symbol ?getAnimationFrameFor@AbstractCompassItem@@UEBAHPEAVMob@@_NPEBVItemStack@@_N@Z
     * @hash   -1243359246
     */
    virtual int getAnimationFrameFor(class Mob *, bool, class ItemStack const *, bool) const;
    /**
     * @symbol ??0AbstractCompassItem@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HV?$function@$$A6A?AVCompassSpriteCalculator@@PEAVMob@@@Z@2@@Z
     * @hash   -1463923283
     */
    MCAPI AbstractCompassItem(std::string const &, int, class std::function<class CompassSpriteCalculator (class Mob *)>);

};