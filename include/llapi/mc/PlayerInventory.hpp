/**
 * @file  PlayerInventory.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class PlayerInventory.
 *
 */
class PlayerInventory {

#define AFTER_EXTRA
// Add Member There
public:
struct SlotData {
    SlotData() = delete;
    SlotData(SlotData const&) = delete;
    SlotData(SlotData const&&) = delete;
};

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PLAYERINVENTORY
public:
    class PlayerInventory& operator=(class PlayerInventory const &) = delete;
    PlayerInventory(class PlayerInventory const &) = delete;
    PlayerInventory() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_PLAYERINVENTORY
    /**
     * @symbol ?containerContentChanged@PlayerInventory@@UEAAXH@Z
     * @hash   -862122249
     */
    MCVAPI void containerContentChanged(int);
    /**
     * @symbol ?containerSizeChanged@PlayerInventory@@UEAAXH@Z
     * @hash   1595055153
     */
    MCVAPI void containerSizeChanged(int);
    /**
     * @symbol ?createTransactionContext@PlayerInventory@@UEAAXV?$function@$$A6AXAEAVContainer@@HAEBVItemStack@@1@Z@std@@V?$function@$$A6AXXZ@3@@Z
     * @hash   -1199526391
     */
    MCVAPI void createTransactionContext(class std::function<void (class Container &, int, class ItemStack const &, class ItemStack const &)>, class std::function<void (void)>);
#endif
    /**
     * @symbol ??0PlayerInventory@@QEAA@V?$unique_ptr@VInventory@@U?$default_delete@VInventory@@@std@@@std@@@Z
     * @hash   -1005534894
     */
    MCAPI PlayerInventory(std::unique_ptr<class Inventory>);
    /**
     * @symbol ?_getHudContainerManagerModel@PlayerInventory@@QEAA?AV?$weak_ptr@VHudContainerManagerModel@@@std@@XZ
     * @hash   1489445665
     */
    MCAPI class std::weak_ptr<class HudContainerManagerModel> _getHudContainerManagerModel();
    /**
     * @symbol ?add@PlayerInventory@@QEAA_NAEAVItemStack@@_N@Z
     * @hash   1674321778
     */
    MCAPI bool add(class ItemStack &, bool);
    /**
     * @symbol ?addListener@PlayerInventory@@QEAAXPEAVContainerContentChangeListener@@@Z
     * @hash   -1891040027
     */
    MCAPI void addListener(class ContainerContentChangeListener *);
    /**
     * @symbol ?canAdd@PlayerInventory@@QEBA_NAEBVItemStack@@@Z
     * @hash   1289453247
     */
    MCAPI bool canAdd(class ItemStack const &) const;
    /**
     * @symbol ?clearInventory@PlayerInventory@@QEAAHH@Z
     * @hash   -1238460011
     */
    MCAPI int clearInventory(int);
    /**
     * @symbol ?clearSlot@PlayerInventory@@QEAAXHW4ContainerID@@@Z
     * @hash   1085168075
     */
    MCAPI void clearSlot(int, enum class ContainerID);
    /**
     * @symbol ?clearVanishEnchantedItemsOnDeath@PlayerInventory@@QEAAXXZ
     * @hash   -412515955
     */
    MCAPI void clearVanishEnchantedItemsOnDeath();
    /**
     * @symbol ?dropAllOnDeath@PlayerInventory@@QEAAX_N@Z
     * @hash   1304860914
     */
    MCAPI void dropAllOnDeath(bool);
    /**
     * @symbol ?getAllContainerIds@PlayerInventory@@QEAAAEBV?$vector@W4ContainerID@@V?$allocator@W4ContainerID@@@std@@@std@@XZ
     * @hash   159941368
     */
    MCAPI std::vector<enum class ContainerID> const & getAllContainerIds();
    /**
     * @symbol ?getComplexItems@PlayerInventory@@QEBAAEBV?$vector@VItemStack@@V?$allocator@VItemStack@@@std@@@std@@W4ContainerID@@@Z
     * @hash   651900519
     */
    MCAPI std::vector<class ItemStack> const & getComplexItems(enum class ContainerID) const;
    /**
     * @symbol ?getContainer@PlayerInventory@@QEAAAEAVContainer@@XZ
     * @hash   -2081677446
     */
    MCAPI class Container & getContainer();
    /**
     * @symbol ?getContainerSize@PlayerInventory@@QEBAHW4ContainerID@@@Z
     * @hash   -782553757
     */
    MCAPI int getContainerSize(enum class ContainerID) const;
    /**
     * @symbol ?getFirstEmptySlot@PlayerInventory@@QEBAHXZ
     * @hash   -1841792710
     */
    MCAPI int getFirstEmptySlot() const;
    /**
     * @symbol ?getHotbarSize@PlayerInventory@@QEBAHXZ
     * @hash   -314601934
     */
    MCAPI int getHotbarSize() const;
    /**
     * @symbol ?getItem@PlayerInventory@@QEBAAEBVItemStack@@HW4ContainerID@@@Z
     * @hash   119367610
     */
    MCAPI class ItemStack const & getItem(int, enum class ContainerID) const;
    /**
     * @symbol ?getItemCount@PlayerInventory@@QEAAHV?$function@$$A6A_NAEBVItemStack@@@Z@std@@@Z
     * @hash   -2003131065
     */
    MCAPI int getItemCount(class std::function<bool (class ItemStack const &)>);
    /**
     * @symbol ?getSelectedContainerId@PlayerInventory@@QEAA?AW4ContainerID@@XZ
     * @hash   1741389688
     */
    MCAPI enum class ContainerID getSelectedContainerId();
    /**
     * @symbol ?getSelectedItem@PlayerInventory@@QEAAAEBVItemStack@@XZ
     * @hash   390370450
     */
    MCAPI class ItemStack const & getSelectedItem();
    /**
     * @symbol ?getSelectedSlot@PlayerInventory@@QEBA?AUSlotData@1@XZ
     * @hash   -1213698462
     */
    MCAPI struct PlayerInventory::SlotData getSelectedSlot() const;
    /**
     * @symbol ?getSlotWithItem@PlayerInventory@@QEBAHAEBVItemStack@@_N1@Z
     * @hash   1119124407
     */
    MCAPI int getSlotWithItem(class ItemStack const &, bool, bool) const;
    /**
     * @symbol ?hasResource@PlayerInventory@@QEAA_NH@Z
     * @hash   736065395
     */
    MCAPI bool hasResource(int);
    /**
     * @symbol ?init@PlayerInventory@@QEAAXV?$weak_ptr@VHudContainerManagerModel@@@std@@@Z
     * @hash   387602405
     */
    MCAPI void init(class std::weak_ptr<class HudContainerManagerModel>);
    /**
     * @symbol ?load@PlayerInventory@@QEAAXAEBVListTag@@AEBVSemVersion@@AEAVLevel@@@Z
     * @hash   1879993732
     */
    MCAPI void load(class ListTag const &, class SemVersion const &, class Level &);
    /**
     * @symbol ?removeItem@PlayerInventory@@QEAAXHHW4ContainerID@@@Z
     * @hash   2035966994
     */
    MCAPI void removeItem(int, int, enum class ContainerID);
    /**
     * @symbol ?removeListener@PlayerInventory@@QEAAXPEAVContainerContentChangeListener@@@Z
     * @hash   1218813459
     */
    MCAPI void removeListener(class ContainerContentChangeListener *);
    /**
     * @symbol ?removeResource@PlayerInventory@@QEAAHAEBVItemStack@@_N1H@Z
     * @hash   -144467876
     */
    MCAPI int removeResource(class ItemStack const &, bool, bool, int);
    /**
     * @symbol ?removeResource@PlayerInventory@@QEAA_NH@Z
     * @hash   400546481
     */
    MCAPI bool removeResource(int);
    /**
     * @symbol ?save@PlayerInventory@@QEAA?AV?$unique_ptr@VListTag@@U?$default_delete@VListTag@@@std@@@std@@XZ
     * @hash   -1790667846
     */
    MCAPI std::unique_ptr<class ListTag> save();
    /**
     * @symbol ?selectSlot@PlayerInventory@@QEAA_NHW4ContainerID@@@Z
     * @hash   -1658474822
     */
    MCAPI bool selectSlot(int, enum class ContainerID);
    /**
     * @symbol ?serverInitItemStackId@PlayerInventory@@QEAAXH@Z
     * @hash   1890626684
     */
    MCAPI void serverInitItemStackId(int);
    /**
     * @symbol ?serverInitItemStackIds@PlayerInventory@@QEAAXHHV?$function@$$A6AXHAEBVItemStack@@@Z@std@@@Z
     * @hash   -177941520
     */
    MCAPI void serverInitItemStackIds(int, int, class std::function<void (int, class ItemStack const &)>);
    /**
     * @symbol ?setContainerChanged@PlayerInventory@@QEAAXH@Z
     * @hash   -1828356404
     */
    MCAPI void setContainerChanged(int);
    /**
     * @symbol ?setItem@PlayerInventory@@QEAAXHAEBVItemStack@@W4ContainerID@@_N@Z
     * @hash   -561767681
     */
    MCAPI void setItem(int, class ItemStack const &, enum class ContainerID, bool);
    /**
     * @symbol ?setSelectedItem@PlayerInventory@@QEAAXAEBVItemStack@@@Z
     * @hash   1448824598
     */
    MCAPI void setSelectedItem(class ItemStack const &);
    /**
     * @symbol ?setupDefaultInventory@PlayerInventory@@QEAAXXZ
     * @hash   -1460742587
     */
    MCAPI void setupDefaultInventory();
    /**
     * @symbol ?swapSlots@PlayerInventory@@QEAAXHH@Z
     * @hash   -1318223439
     */
    MCAPI void swapSlots(int, int);
    /**
     * @symbol ?tick@PlayerInventory@@QEAAXXZ
     * @hash   859104141
     */
    MCAPI void tick();

};