/**
 * @file  EnchantBookForTradingFunction.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class EnchantBookForTradingFunction.
 *
 */
class EnchantBookForTradingFunction {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ENCHANTBOOKFORTRADINGFUNCTION
public:
    class EnchantBookForTradingFunction& operator=(class EnchantBookForTradingFunction const &) = delete;
    EnchantBookForTradingFunction(class EnchantBookForTradingFunction const &) = delete;
    EnchantBookForTradingFunction() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ENCHANTBOOKFORTRADINGFUNCTION
    /**
     * @symbol ?apply@EnchantBookForTradingFunction@@UEAAHAEAVItemStack@@AEAVRandom@@AEBUTrade@@AEAVLootTableContext@@@Z
     * @hash   1180525973
     */
    MCVAPI int apply(class ItemStack &, class Random &, struct Trade const &, class LootTableContext &);
    /**
     * @symbol ?apply@EnchantBookForTradingFunction@@UEAAHAEAVItemInstance@@AEAVRandom@@AEBUTrade@@AEAVLootTableContext@@@Z
     * @hash   -397022176
     */
    MCVAPI int apply(class ItemInstance &, class Random &, struct Trade const &, class LootTableContext &);
    /**
     * @symbol ?apply@EnchantBookForTradingFunction@@UEAAXAEAVItemInstance@@AEAVRandom@@AEAVLootTableContext@@@Z
     * @hash   416387955
     */
    MCVAPI void apply(class ItemInstance &, class Random &, class LootTableContext &);
    /**
     * @symbol ?apply@EnchantBookForTradingFunction@@UEAAXAEAVItemStack@@AEAVRandom@@AEAVLootTableContext@@@Z
     * @hash   469116254
     */
    MCVAPI void apply(class ItemStack &, class Random &, class LootTableContext &);
#endif
    /**
     * @symbol ?deserialize@EnchantBookForTradingFunction@@SA?AV?$unique_ptr@VLootItemFunction@@U?$default_delete@VLootItemFunction@@@std@@@std@@VValue@Json@@AEAV?$vector@V?$unique_ptr@VLootItemCondition@@U?$default_delete@VLootItemCondition@@@std@@@std@@V?$allocator@V?$unique_ptr@VLootItemCondition@@U?$default_delete@VLootItemCondition@@@std@@@std@@@2@@3@@Z
     * @hash   637054511
     */
    MCAPI static std::unique_ptr<class LootItemFunction> deserialize(class Json::Value, std::vector<std::unique_ptr<class LootItemCondition>> &);

//private:
    /**
     * @symbol ?_getRandomEnchantAndCalculateCost@EnchantBookForTradingFunction@@AEBA?AVEnchantmentInstance@@AEAVItemStackBase@@AEAVRandom@@AEAH@Z
     * @hash   1776252159
     */
    MCAPI class EnchantmentInstance _getRandomEnchantAndCalculateCost(class ItemStackBase &, class Random &, int &) const;

private:

};