/**
 * @file  LootingEnchantFunction.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"
#include "LootItemFunction.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class LootingEnchantFunction.
 *
 */
class LootingEnchantFunction : public LootItemFunction {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LOOTINGENCHANTFUNCTION
public:
    class LootingEnchantFunction& operator=(class LootingEnchantFunction const &) = delete;
    LootingEnchantFunction(class LootingEnchantFunction const &) = delete;
    LootingEnchantFunction() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   1039459585
     */
    virtual ~LootingEnchantFunction();
    /**
     * @vftbl  1
     * @symbol ?apply@LootingEnchantFunction@@UEAAXAEAVItemStack@@AEAVRandom@@AEAVLootTableContext@@@Z
     * @hash   173312099
     */
    virtual void apply(class ItemStack &, class Random &, class LootTableContext &);
    /**
     * @vftbl  3
     * @symbol ?apply@LootingEnchantFunction@@UEAAXAEAVItemInstance@@AEAVRandom@@AEAVLootTableContext@@@Z
     * @hash   182627016
     */
    virtual void apply(class ItemInstance &, class Random &, class LootTableContext &);
    /**
     * @symbol ?deserialize@LootingEnchantFunction@@SA?AV?$unique_ptr@VLootItemFunction@@U?$default_delete@VLootItemFunction@@@std@@@std@@VValue@Json@@AEAV?$vector@V?$unique_ptr@VLootItemCondition@@U?$default_delete@VLootItemCondition@@@std@@@std@@V?$allocator@V?$unique_ptr@VLootItemCondition@@U?$default_delete@VLootItemCondition@@@std@@@std@@@2@@3@@Z
     * @hash   1132946559
     */
    MCAPI static std::unique_ptr<class LootItemFunction> deserialize(class Json::Value, std::vector<std::unique_ptr<class LootItemCondition>> &);

};