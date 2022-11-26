/**
 * @file  ItemTagDescriptor.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "ItemDescriptor.hpp"
#include "Json.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC structure ItemTagDescriptor.
 *
 */
struct ItemTagDescriptor {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ITEMTAGDESCRIPTOR
public:
    struct ItemTagDescriptor& operator=(struct ItemTagDescriptor const &) = delete;
    ItemTagDescriptor(struct ItemTagDescriptor const &) = delete;
    ItemTagDescriptor() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol ?clone@ItemTagDescriptor@@UEBA?AV?$unique_ptr@UBaseDescriptor@ItemDescriptor@@U?$default_delete@UBaseDescriptor@ItemDescriptor@@@std@@@std@@XZ
     * @hash   90238868
     */
    virtual std::unique_ptr<struct ItemDescriptor::BaseDescriptor> clone() const;
    /**
     * @vftbl  1
     * @symbol ?sameItems@ItemTagDescriptor@@UEBA_NAEBUBaseDescriptor@ItemDescriptor@@_N@Z
     * @hash   1636198916
     */
    virtual bool sameItems(struct ItemDescriptor::BaseDescriptor const &, bool) const;
    /**
     * @vftbl  2
     * @symbol ?sameItem@ItemTagDescriptor@@UEBA_NAEBUItemEntry@ItemDescriptor@@_N@Z
     * @hash   -986691568
     */
    virtual bool sameItem(struct ItemDescriptor::ItemEntry const &, bool) const;
    /**
     * @vftbl  3
     * @symbol ?getFullName@MolangDescriptor@@UEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     * @hash   -926386318
     */
    virtual std::string const & getFullName() const;
    /**
     * @vftbl  4
     * @symbol ?getItem@ItemTagDescriptor@@UEBA?AUItemEntry@ItemDescriptor@@XZ
     * @hash   1506132184
     */
    virtual struct ItemDescriptor::ItemEntry getItem() const;
    /**
     * @vftbl  5
     * @symbol ?forEachItemUntil@ItemTagDescriptor@@UEBA_NV?$function@$$A6A_NAEBVItem@@F@Z@std@@@Z
     * @hash   1993662032
     */
    virtual bool forEachItemUntil(class std::function<bool (class Item const &, short)>) const;
    /**
     * @vftbl  6
     * @symbol ?toMap@ItemTagDescriptor@@UEBA?AV?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V12@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V12@@std@@@2@@std@@XZ
     * @hash   2052388778
     */
    virtual class std::map<std::string, std::string, struct std::less<std::string>, class std::allocator<struct std::pair<std::string const, std::string>>> toMap() const;
    /**
     * @vftbl  7
     * @symbol ?save@ItemTagDescriptor@@UEBA?AV?$optional@VCompoundTag@@@std@@XZ
     * @hash   -2073116226
     */
    virtual class std::optional<class CompoundTag> save() const;
    /**
     * @vftbl  8
     * @symbol ?serialize@ItemTagDescriptor@@UEBAXAEAVValue@Json@@@Z
     * @hash   -1204532759
     */
    virtual void serialize(class Json::Value &) const;
    /**
     * @vftbl  9
     * @symbol ?serialize@ItemTagDescriptor@@UEBAXAEAVBinaryStream@@@Z
     * @hash   348206945
     */
    virtual void serialize(class BinaryStream &) const;
    /**
     * @vftbl  10
     * @symbol ?getType@ItemTagDescriptor@@UEBA?AW4InternalType@ItemDescriptor@@XZ
     * @hash   743545497
     */
    virtual enum class ItemDescriptor::InternalType getType() const;
    /**
     * @vftbl  11
     * @symbol ?shouldResolve@DeferredDescriptor@@UEBA_NXZ
     * @hash   957877067
     */
    virtual bool shouldResolve() const;
    /**
     * @vftbl  12
     * @symbol ?getHash@ItemTagDescriptor@@UEBA_KXZ
     * @hash   -1069663042
     */
    virtual unsigned __int64 getHash() const;
    /**
     * @vftbl  13
     * @hash   -232580250
     */
    virtual void __unk_vfn_13();
    /**
     * @vftbl  14
     * @symbol ?resolve@DeferredDescriptor@@UEBA?AV?$unique_ptr@UBaseDescriptor@ItemDescriptor@@U?$default_delete@UBaseDescriptor@ItemDescriptor@@@std@@@std@@XZ
     * @hash   -667742701
     */
    virtual std::unique_ptr<struct ItemDescriptor::BaseDescriptor> resolve() const;
    /**
     * @symbol ?deserialize@ItemTagDescriptor@@SA?AV?$unique_ptr@UItemTagDescriptor@@U?$default_delete@UItemTagDescriptor@@@std@@@std@@AEAVReadOnlyBinaryStream@@@Z
     * @hash   -1101797019
     */
    MCAPI static std::unique_ptr<struct ItemTagDescriptor> deserialize(class ReadOnlyBinaryStream &);

};