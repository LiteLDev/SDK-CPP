/**
 * @file  CopperBehavior.hpp
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
 * @brief MC class CopperBehavior.
 *
 */
class CopperBehavior {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_COPPERBEHAVIOR
public:
    class CopperBehavior& operator=(class CopperBehavior const &) = delete;
    CopperBehavior(class CopperBehavior const &) = delete;
    CopperBehavior() = delete;
#endif

public:
    /**
     * @symbol ??0CopperBehavior@@QEAA@W4CopperType@@AEBVHashedString@@AEBV?$function@$$A6AAEBVBlock@@AEBVHashedString@@AEBV1@@Z@std@@@Z
     * @hash   1784647089
     */
    MCAPI CopperBehavior(enum class CopperType, class HashedString const &, class std::function<class Block const & (class HashedString const &, class Block const &)> const &);
    /**
     * @symbol ??0CopperBehavior@@QEAA@W4CopperType@@AEBVHashedString@@11AEBV?$function@$$A6AAEBVBlock@@AEBVHashedString@@AEBV1@@Z@std@@@Z
     * @hash   -668337807
     */
    MCAPI CopperBehavior(enum class CopperType, class HashedString const &, class HashedString const &, class HashedString const &, class std::function<class Block const & (class HashedString const &, class Block const &)> const &);
    /**
     * @symbol ?canDecrementAge@CopperBehavior@@QEBA_NXZ
     * @hash   -88455262
     */
    MCAPI bool canDecrementAge() const;
    /**
     * @symbol ?getCorrespondingWaxedBlock@CopperBehavior@@QEBAAEBVBlock@@AEBV2@@Z
     * @hash   -241009462
     */
    MCAPI class Block const & getCorrespondingWaxedBlock(class Block const &) const;
    /**
     * @symbol ?isWaxable@CopperBehavior@@QEBA_NXZ
     * @hash   -36777914
     */
    MCAPI bool isWaxable() const;
    /**
     * @symbol ?isWaxed@CopperBehavior@@QEBA_NXZ
     * @hash   15944288
     */
    MCAPI bool isWaxed() const;
    /**
     * @symbol ?tryDecrementAge@CopperBehavior@@QEBA_NAEAVBlockSource@@AEBVBlockPos@@@Z
     * @hash   -265907926
     */
    MCAPI bool tryDecrementAge(class BlockSource &, class BlockPos const &) const;
    /**
     * @symbol ?tryIncrementAge@CopperBehavior@@QEBA_NAEAVBlockSource@@AEBVBlockPos@@MM@Z
     * @hash   1079750874
     */
    MCAPI bool tryIncrementAge(class BlockSource &, class BlockPos const &, float, float) const;
    /**
     * @symbol ?use@CopperBehavior@@QEBA_NAEAVPlayer@@AEBVBlockPos@@E@Z
     * @hash   364245524
     */
    MCAPI bool use(class Player &, class BlockPos const &, unsigned char) const;
    /**
     * @symbol ??1CopperBehavior@@QEAA@XZ
     * @hash   583907317
     */
    MCAPI ~CopperBehavior();

//private:
    /**
     * @symbol ?_incrementAge@CopperBehavior@@AEBAXAEAVBlockSource@@AEBVBlock@@AEBVBlockPos@@M@Z
     * @hash   -165241145
     */
    MCAPI void _incrementAge(class BlockSource &, class Block const &, class BlockPos const &, float) const;

private:

};