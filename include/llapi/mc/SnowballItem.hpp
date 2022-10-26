/**
 * @file  SnowballItem.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"
#include "Item.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class SnowballItem.
 *
 */
class SnowballItem : public Item {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SNOWBALLITEM
public:
    class SnowballItem& operator=(class SnowballItem const &) = delete;
    SnowballItem(class SnowballItem const &) = delete;
    SnowballItem() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   486373375
     */
    virtual ~SnowballItem();
    /**
     * @vftbl  7
     * @hash   -1350044025
     */
    virtual void __unk_vfn_7();
    /**
     * @vftbl  11
     * @hash   -331173084
     */
    virtual void __unk_vfn_11();
    /**
     * @vftbl  14
     * @hash   -328402521
     */
    virtual void __unk_vfn_14();
    /**
     * @vftbl  16
     * @hash   -326555479
     */
    virtual void __unk_vfn_16();
    /**
     * @vftbl  23
     * @symbol ?isThrowable@SnowballItem@@UEBA_NXZ
     * @hash   -221975159
     */
    virtual bool isThrowable() const;
    /**
     * @vftbl  51
     * @hash   -216656480
     */
    virtual void __unk_vfn_51();
    /**
     * @vftbl  53
     * @hash   -214809438
     */
    virtual void __unk_vfn_53();
    /**
     * @vftbl  66
     * @hash   -183409724
     */
    virtual void __unk_vfn_66();
    /**
     * @vftbl  70
     * @hash   -160321699
     */
    virtual void __unk_vfn_70();
    /**
     * @vftbl  71
     * @hash   -159398178
     */
    virtual void __unk_vfn_71();
    /**
     * @vftbl  72
     * @hash   -158474657
     */
    virtual void __unk_vfn_72();
    /**
     * @vftbl  75
     * @hash   -155704094
     */
    virtual void __unk_vfn_75();
    /**
     * @vftbl  79
     * @hash   -1024298074
     */
    virtual void __unk_vfn_79();
    /**
     * @vftbl  80
     * @hash   -1003980612
     */
    virtual void __unk_vfn_80();
    /**
     * @vftbl  84
     * @symbol ?use@SnowballItem@@UEBAAEAVItemStack@@AEAV2@AEAVPlayer@@@Z
     * @hash   386144425
     */
    virtual class ItemStack & use(class ItemStack &, class Player &) const;
    /**
     * @vftbl  85
     * @symbol ?dispense@SnowballItem@@UEBA_NAEAVBlockSource@@AEAVContainer@@HAEBVVec3@@E@Z
     * @hash   -1565296063
     */
    virtual bool dispense(class BlockSource &, class Container &, int, class Vec3 const &, unsigned char) const;

};