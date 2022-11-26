/**
 * @file  DiggingEnchant.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Enchant.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class DiggingEnchant.
 *
 */
class DiggingEnchant : public Enchant {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DIGGINGENCHANT
public:
    class DiggingEnchant& operator=(class DiggingEnchant const &) = delete;
    DiggingEnchant(class DiggingEnchant const &) = delete;
    DiggingEnchant() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -1295131450
     */
    virtual ~DiggingEnchant();
    /**
     * @vftbl  2
     * @symbol ?getMinCost@DiggingEnchant@@UEBAHH@Z
     * @hash   -1242815003
     */
    virtual int getMinCost(int) const;
    /**
     * @vftbl  3
     * @symbol ?getMaxCost@DiggingEnchant@@UEBAHH@Z
     * @hash   -2001595261
     */
    virtual int getMaxCost(int) const;
    /**
     * @vftbl  5
     * @symbol ?getMaxLevel@DiggingEnchant@@UEBAHXZ
     * @hash   -704541979
     */
    virtual int getMaxLevel() const;
    /**
     * @vftbl  10
     * @hash   -242808173
     */
    virtual void __unk_vfn_10();
    /**
     * @vftbl  11
     * @hash   -234427292
     */
    virtual void __unk_vfn_11();
    /**
     * @vftbl  12
     * @hash   -233503771
     */
    virtual void __unk_vfn_12();
    /**
     * @vftbl  13
     * @hash   -232580250
     */
    virtual void __unk_vfn_13();
    /**
     * @vftbl  14
     * @symbol ?_isValidEnchantmentTypeForCategory@DiggingEnchant@@EEBA_NW4Type@Enchant@@@Z
     * @hash   775938230
     */
    virtual bool _isValidEnchantmentTypeForCategory(enum class Enchant::Type) const;
    /**
     * @symbol ??0DiggingEnchant@@QEAA@W4Type@Enchant@@W4Frequency@2@V?$basic_string_span@$$CBD$0?0@gsl@@2HH@Z
     * @hash   780336525
     */
    MCAPI DiggingEnchant(enum class Enchant::Type, enum class Enchant::Frequency, class gsl::basic_string_span<char const, -1>, class gsl::basic_string_span<char const, -1>, int, int);

//private:

private:
    /**
     * @symbol ?VALID_ENCHANTMENTS@DiggingEnchant@@0V?$vector@W4Type@Enchant@@V?$allocator@W4Type@Enchant@@@std@@@std@@B
     * @hash   -736723307
     */
    MCAPI static std::vector<enum class Enchant::Type> const VALID_ENCHANTMENTS;

};