/**
 * @file  DyeableComponent.hpp
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
 * @brief MC class DyeableComponent.
 *
 */
class DyeableComponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DYEABLECOMPONENT
public:
    class DyeableComponent& operator=(class DyeableComponent const &) = delete;
    DyeableComponent(class DyeableComponent const &) = delete;
    DyeableComponent() = delete;
#endif

public:
    /**
     * @symbol ?appendFormattedHovertext@DyeableComponent@@QEBAXAEBVItemStackBase@@AEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@Z
     * @hash   -1627773096
     */
    MCAPI void appendFormattedHovertext(class ItemStackBase const &, std::string &, bool) const;
    /**
     * @symbol ?clearColor@DyeableComponent@@QEBAXAEAVItemStackBase@@@Z
     * @hash   585855496
     */
    MCAPI void clearColor(class ItemStackBase &) const;
    /**
     * @symbol ?getColor@DyeableComponent@@QEBA?AVColor@mce@@PEBVCompoundTag@@AEBVItemDescriptor@@@Z
     * @hash   -653124697
     */
    MCAPI class mce::Color getColor(class CompoundTag const *, class ItemDescriptor const &) const;
    /**
     * @symbol ?hasCustomColor@DyeableComponent@@QEBA_NAEBVItemStackBase@@@Z
     * @hash   948427327
     */
    MCAPI bool hasCustomColor(class ItemStackBase const &) const;
    /**
     * @symbol ?setColor@DyeableComponent@@QEBAXAEAVItemStackBase@@AEBVColor@mce@@@Z
     * @hash   1226993069
     */
    MCAPI void setColor(class ItemStackBase &, class mce::Color const &) const;
    /**
     * @symbol ?DEFAULT_HORSE_LEATHER_COLOR@DyeableComponent@@2VColor@mce@@A
     * @hash   -1269463391
     */
    MCAPI static class mce::Color DEFAULT_HORSE_LEATHER_COLOR;
    /**
     * @symbol ?DEFAULT_LEATHER_COLOR@DyeableComponent@@2VColor@mce@@A
     * @hash   -816833835
     */
    MCAPI static class mce::Color DEFAULT_LEATHER_COLOR;
    /**
     * @symbol ?ResetDefaultLeatherColor@DyeableComponent@@SAXXZ
     * @hash   -26564061
     */
    MCAPI static void ResetDefaultLeatherColor();
    /**
     * @symbol ?getIdentifier@DyeableComponent@@SAAEBVHashedString@@XZ
     * @hash   834578626
     */
    MCAPI static class HashedString const & getIdentifier();

};