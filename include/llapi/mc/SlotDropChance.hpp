/**
 * @file  SlotDropChance.hpp
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
 * @brief MC class SlotDropChance.
 *
 */
class SlotDropChance {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SLOTDROPCHANCE
public:
    class SlotDropChance& operator=(class SlotDropChance const &) = delete;
    SlotDropChance(class SlotDropChance const &) = delete;
    SlotDropChance() = delete;
#endif

public:
    /**
     * @symbol ?setEquipmentSlot@SlotDropChance@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   1702307148
     */
    MCAPI void setEquipmentSlot(std::string const &);

};