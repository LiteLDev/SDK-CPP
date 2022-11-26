/**
 * @file  ShieldItem.hpp
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
 * @brief MC class ShieldItem.
 *
 */
class ShieldItem : public Item {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SHIELDITEM
public:
    class ShieldItem& operator=(class ShieldItem const &) = delete;
    ShieldItem(class ShieldItem const &) = delete;
    ShieldItem() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   506024422
     */
    virtual ~ShieldItem();
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
     * @vftbl  49
     * @symbol ?isHandEquipped@ShieldItem@@UEBA_NXZ
     * @hash   -1450111068
     */
    virtual bool isHandEquipped() const;
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
     * @vftbl  61
     * @symbol ?isValidRepairItem@ShieldItem@@UEBA_NAEBVItemStackBase@@0AEBVBaseGameVersion@@@Z
     * @hash   -31546908
     */
    virtual bool isValidRepairItem(class ItemStackBase const &, class ItemStackBase const &, class BaseGameVersion const &) const;
    /**
     * @vftbl  62
     * @symbol ?getEnchantSlot@ShieldItem@@UEBAHXZ
     * @hash   800653328
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
     * @vftbl  84
     * @symbol ?use@ShieldItem@@UEBAAEAVItemStack@@AEAV2@AEAVPlayer@@@Z
     * @hash   -1381800430
     */
    virtual class ItemStack & use(class ItemStack &, class Player &) const;
    /**
     * @vftbl  85
     * @symbol ?dispense@ShieldItem@@UEBA_NAEAVBlockSource@@AEAVContainer@@HAEBVVec3@@E@Z
     * @hash   63833224
     */
    virtual bool dispense(class BlockSource &, class Container &, int, class Vec3 const &, unsigned char) const;
    /**
     * @vftbl  89
     * @symbol ?hurtActor@ShieldItem@@UEBAXAEAVItemStack@@AEAVActor@@AEAVMob@@@Z
     * @hash   -1967675814
     */
    virtual void hurtActor(class ItemStack &, class Actor &, class Mob &) const;
    /**
     * @vftbl  98
     * @symbol ?readUserData@ShieldItem@@UEBAXAEAVItemStackBase@@AEAVIDataInput@@AEAVReadOnlyBinaryStream@@@Z
     * @hash   -2089214781
     */
    virtual void readUserData(class ItemStackBase &, class IDataInput &, class ReadOnlyBinaryStream &) const;
    /**
     * @vftbl  99
     * @symbol ?writeUserData@ShieldItem@@UEBAXAEBVItemStackBase@@AEAVIDataOutput@@@Z
     * @hash   -1703940605
     */
    virtual void writeUserData(class ItemStackBase const &, class IDataOutput &) const;
    /**
     * @vftbl  101
     * @symbol ?inventoryTick@ShieldItem@@UEBA_NAEAVItemStack@@AEAVLevel@@AEAVActor@@H_N@Z
     * @hash   1010273548
     */
    virtual bool inventoryTick(class ItemStack &, class Level &, class Actor &, int, bool) const;
    /**
     * @vftbl  103
     * @symbol ?getCooldownType@ShieldItem@@UEBAAEBVHashedString@@XZ
     * @hash   -1626406770
     */
    virtual class HashedString const & getCooldownType() const;
    /**
     * @vftbl  104
     * @symbol ?getCooldownTime@ShieldItem@@UEBAHXZ
     * @hash   -226493539
     */
    virtual int getCooldownTime() const;
    /**
     * @vftbl  109
     * @symbol ?getInHandUpdateType@ShieldItem@@UEBA?AW4InHandUpdateType@@AEBVPlayer@@AEBVItemInstance@@1_N2@Z
     * @hash   840624836
     */
    virtual enum class InHandUpdateType getInHandUpdateType(class Player const &, class ItemInstance const &, class ItemInstance const &, bool, bool) const;
    /**
     * @vftbl  110
     * @symbol ?getInHandUpdateType@ShieldItem@@UEBA?AW4InHandUpdateType@@AEBVPlayer@@AEBVItemStack@@1_N2@Z
     * @hash   -233137060
     */
    virtual enum class InHandUpdateType getInHandUpdateType(class Player const &, class ItemStack const &, class ItemStack const &, bool, bool) const;
    /**
     * @symbol ??0ShieldItem@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
     * @hash   265626106
     */
    MCAPI ShieldItem(std::string const &, int);
    /**
     * @symbol ?playBlockSound@ShieldItem@@QEBAXPEAVPlayer@@@Z
     * @hash   1609929551
     */
    MCAPI void playBlockSound(class Player *) const;
    /**
     * @symbol ?playBreakSound@ShieldItem@@QEBAXPEAVPlayer@@@Z
     * @hash   1250655491
     */
    MCAPI void playBreakSound(class Player *) const;
    /**
     * @symbol ?EFFECTIVE_BLOCK_DELAY@ShieldItem@@2HB
     * @hash   -1795050769
     */
    MCAPI static int const EFFECTIVE_BLOCK_DELAY;
    /**
     * @symbol ?IN_HAND_BLOCK_DURATION@ShieldItem@@2HB
     * @hash   -668537675
     */
    MCAPI static int const IN_HAND_BLOCK_DURATION;
    /**
     * @symbol ?TIMESTAMP_TAG@ShieldItem@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     * @hash   1743264599
     */
    MCAPI static std::string const TIMESTAMP_TAG;

//private:
    /**
     * @symbol ?_getInHandUpdateType@ShieldItem@@AEBA?AW4InHandUpdateType@@AEBVPlayer@@AEBVItemStack@@1_N2@Z
     * @hash   732792030
     */
    MCAPI enum class InHandUpdateType _getInHandUpdateType(class Player const &, class ItemStack const &, class ItemStack const &, bool, bool) const;

private:

};