/**
 * @file  SimpleContainer.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Container.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class SimpleContainer.
 *
 */
class SimpleContainer : public Container {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SIMPLECONTAINER
public:
    class SimpleContainer& operator=(class SimpleContainer const &) = delete;
    SimpleContainer(class SimpleContainer const &) = delete;
    SimpleContainer() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -1677937731
     */
    virtual ~SimpleContainer();
    /**
     * @vftbl  2
     * @symbol ?serverInitItemStackIds@SimpleContainer@@UEAAXHHV?$function@$$A6AXHAEBVItemStack@@@Z@std@@@Z
     * @hash   -981301480
     */
    virtual void serverInitItemStackIds(int, int, class std::function<void (int, class ItemStack const &)>);
    /**
     * @vftbl  5
     * @symbol ?getItem@SimpleContainer@@UEBAAEBVItemStack@@H@Z
     * @hash   1409769123
     */
    virtual class ItemStack const & getItem(int) const;
    /**
     * @vftbl  9
     * @symbol ?setItem@SimpleContainer@@UEAAXHAEBVItemStack@@@Z
     * @hash   1322626274
     */
    virtual void setItem(int, class ItemStack const &);
    /**
     * @vftbl  14
     * @symbol ?getContainerSize@SimpleContainer@@UEBAHXZ
     * @hash   131646808
     */
    virtual int getContainerSize() const;
    /**
     * @vftbl  15
     * @symbol ?getMaxStackSize@SimpleContainer@@UEBAHXZ
     * @hash   -1758170745
     */
    virtual int getMaxStackSize() const;
    /**
     * @vftbl  16
     * @symbol ?startOpen@SimpleContainer@@UEAAXAEAVPlayer@@@Z
     * @hash   -1731904369
     */
    virtual void startOpen(class Player &);
    /**
     * @vftbl  17
     * @symbol ?stopOpen@SimpleContainer@@UEAAXAEAVPlayer@@@Z
     * @hash   2100567343
     */
    virtual void stopOpen(class Player &);
    /**
     * @vftbl  22
     * @hash   -212331980
     */
    virtual void __unk_vfn_22();
    /**
     * @vftbl  23
     * @hash   -211408459
     */
    virtual void __unk_vfn_23();
    /**
     * @symbol ??0SimpleContainer@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_NHW4ContainerType@@@Z
     * @hash   1746468849
     */
    MCAPI SimpleContainer(std::string const &, bool, int, enum class ContainerType);

};