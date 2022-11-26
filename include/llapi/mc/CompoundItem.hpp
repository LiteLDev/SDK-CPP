/**
 * @file  CompoundItem.hpp
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
 * @brief MC class CompoundItem.
 *
 */
class CompoundItem : public Item {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_COMPOUNDITEM
public:
    class CompoundItem& operator=(class CompoundItem const &) = delete;
    CompoundItem(class CompoundItem const &) = delete;
    CompoundItem() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   1623001768
     */
    virtual ~CompoundItem();
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
     * @vftbl  66
     * @hash   -86663932
     */
    virtual void __unk_vfn_66();
    /**
     * @vftbl  67
     * @symbol ?isValidAuxValue@CompoundItem@@UEBA_NH@Z
     * @hash   -1374073916
     */
    virtual bool isValidAuxValue(int) const;
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
     * @vftbl  95
     * @symbol ?buildDescriptionId@CompoundItem@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVItemDescriptor@@PEBVCompoundTag@@@Z
     * @hash   -1268848404
     */
    virtual std::string buildDescriptionId(class ItemDescriptor const &, class CompoundTag const *) const;
    /**
     * @vftbl  117
     * @symbol ?setIconInfo@CompoundItem@@UEAAAEAVItem@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
     * @hash   -658048004
     */
    virtual class Item & setIconInfo(std::string const &, int);
    /**
     * @vftbl  118
     * @symbol ?getIconInfo@CompoundItem@@UEBA?AUResolvedItemIconInfo@@AEBVItemStackBase@@H_N@Z
     * @hash   -978924043
     */
    virtual struct ResolvedItemIconInfo getIconInfo(class ItemStackBase const &, int, bool) const;
    /**
     * @symbol ??0CompoundItem@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HAEBVExperiments@@@Z
     * @hash   -1508234987
     */
    MCAPI CompoundItem(std::string const &, int, class Experiments const &);
    /**
     * @symbol ?getCompoundType@CompoundItem@@SA?AW4CompoundType@@AEBVItemDescriptor@@@Z
     * @hash   1377568651
     */
    MCAPI static enum class CompoundType getCompoundType(class ItemDescriptor const &);
    /**
     * @symbol ?getIngredientForCompound@CompoundItem@@SA?AVRecipeIngredient@@W4CompoundType@@@Z
     * @hash   1122796645
     */
    MCAPI static class RecipeIngredient getIngredientForCompound(enum class CompoundType);
    /**
     * @symbol ?getItemForCompound@CompoundItem@@SA?AVItemInstance@@W4CompoundType@@H@Z
     * @hash   1418462
     */
    MCAPI static class ItemInstance getItemForCompound(enum class CompoundType, int);
    /**
     * @symbol ?isCompoundItem@CompoundItem@@SA_NAEBVItemStackBase@@@Z
     * @hash   80037505
     */
    MCAPI static bool isCompoundItem(class ItemStackBase const &);
    /**
     * @symbol ?unregisterSpecialCompounds@CompoundItem@@SAXXZ
     * @hash   -1726668269
     */
    MCAPI static void unregisterSpecialCompounds();

//private:
    /**
     * @symbol ?_registerSpecialCompound@CompoundItem@@AEAAXAEBVItemInstance@@W4CompoundType@@@Z
     * @hash   851214630
     */
    MCAPI void _registerSpecialCompound(class ItemInstance const &, enum class CompoundType);
    /**
     * @symbol ?_registerSpecialCompounds@CompoundItem@@AEAAXAEBVExperiments@@@Z
     * @hash   837385412
     */
    MCAPI void _registerSpecialCompounds(class Experiments const &);
    /**
     * @symbol ?_getName@CompoundItem@@CA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4CompoundType@@@Z
     * @hash   314666475
     */
    MCAPI static std::string _getName(enum class CompoundType);

private:
    /**
     * @symbol ?mIdToSpecialCompound@CompoundItem@@0V?$unordered_map@HHU?$hash@H@std@@U?$equal_to@H@2@V?$allocator@U?$pair@$$CBHH@std@@@2@@std@@A
     * @hash   -462174491
     */
    MCAPI static class std::unordered_map<int, int, struct std::hash<int>, struct std::equal_to<int>, class std::allocator<struct std::pair<int const, int>>> mIdToSpecialCompound;
    /**
     * @symbol ?mTypeToSpecialCompound@CompoundItem@@0V?$unordered_map@HVItemInstance@@U?$hash@H@std@@U?$equal_to@H@3@V?$allocator@U?$pair@$$CBHVItemInstance@@@std@@@3@@std@@A
     * @hash   1210188544
     */
    MCAPI static class std::unordered_map<int, class ItemInstance, struct std::hash<int>, struct std::equal_to<int>, class std::allocator<struct std::pair<int const, class ItemInstance>>> mTypeToSpecialCompound;

};