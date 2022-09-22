/**
 * @file  MC/ItemComponent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ItemComponent.
 *
 */
class ItemComponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ITEMCOMPONENT
public:
    class ItemComponent& operator=(class ItemComponent const &) = delete;
    ItemComponent(class ItemComponent const &) = delete;
    ItemComponent() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~ItemComponent();
    /**
     * @vftbl  1
     * @symbol __unk_vfn_1
     */
    virtual void __unk_vfn_1();
    /**
     * @hash   -392091073
     * @vftbl  2
     * @symbol ?writeSettings@ItemComponent@@UEAAXXZ
     */
    virtual void writeSettings();
    /**
     * @vftbl  3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl  4
     * @symbol __unk_vfn_4
     */
    virtual void __unk_vfn_4();
    /**
     * @hash   -1631869335
     * @vftbl  5
     * @symbol ?buildNetworkTag@ItemComponent@@UEBA?AV?$unique_ptr@VCompoundTag@@U?$default_delete@VCompoundTag@@@std@@@std@@XZ
     */
    virtual std::unique_ptr<class CompoundTag> buildNetworkTag() const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ITEMCOMPONENT
    /**
     * @hash   1635948744
     * @symbol ?checkComponentDataForContentErrors@ItemComponent@@UEBA_NXZ
     */
    MCVAPI bool checkComponentDataForContentErrors() const;
    /**
     * @hash   1977106263
     * @symbol ?initializeFromNetwork@ItemComponent@@UEAA_NAEBVCompoundTag@@@Z
     */
    MCVAPI bool initializeFromNetwork(class CompoundTag const &);
    /**
     * @hash   1379454215
     * @symbol ?isNetworkComponent@ItemComponent@@UEBA_NXZ
     */
    MCVAPI bool isNetworkComponent() const;
    /**
     * @hash   -739579495
     * @symbol ?useOn@ItemComponent@@UEBA_NAEAVItemStack@@AEAVActor@@AEBVBlockPos@@EAEBVVec3@@@Z
     */
    MCVAPI bool useOn(class ItemStack &, class Actor &, class BlockPos const &, unsigned char, class Vec3 const &) const;
#endif
    /**
     * @hash   -804576768
     * @symbol ??0ItemComponent@@QEAA@PEAVComponentItem@@@Z
     */
    MCAPI ItemComponent(class ComponentItem *);
    /**
     * @hash   -507523983
     * @symbol ?bindItemComponentType@ItemComponent@@SAXXZ
     */
    MCAPI static void bindItemComponentType();
    /**
     * @hash   -602922820
     * @symbol ?registerVersionUpgrades@ItemComponent@@SAXAEAVCerealSchemaUpgradeSet@@@Z
     */
    MCAPI static void registerVersionUpgrades(class CerealSchemaUpgradeSet &);

};