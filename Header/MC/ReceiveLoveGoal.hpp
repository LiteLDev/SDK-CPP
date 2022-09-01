/**
 * @file  ReceiveLoveGoal.hpp
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
 * @brief MC class ReceiveLoveGoal.
 *
 */
class ReceiveLoveGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RECEIVELOVEGOAL
public:
    class ReceiveLoveGoal& operator=(class ReceiveLoveGoal const &) = delete;
    ReceiveLoveGoal(class ReceiveLoveGoal const &) = delete;
    ReceiveLoveGoal() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -1496800778
     */
    virtual ~ReceiveLoveGoal();
    /**
     * @vftbl  1
     * @hash   -1408478591
     */
    virtual void __unk_vfn_1();
    /**
     * @vftbl  2
     * @hash   -1407555070
     */
    virtual void __unk_vfn_2();
    /**
     * @vftbl  3
     * @hash   -1364347549
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl  4
     * @hash   605057620
     */
    virtual void __unk_vfn_4();
    /**
     * @vftbl  5
     * @hash   605981141
     */
    virtual void __unk_vfn_5();
    /**
     * @vftbl  6
     * @symbol ?tick@ReceiveLoveGoal@@UEAAXXZ
     * @hash   -1904862820
     */
    virtual void tick();
    /**
     * @vftbl  7
     * @symbol ?appendDebugInfo@ReceiveLoveGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   789408216
     */
    virtual void appendDebugInfo(std::string &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_RECEIVELOVEGOAL
    /**
     * @symbol ?canContinueToUse@ReceiveLoveGoal@@UEAA_NXZ
     * @hash   1654739798
     */
    MCVAPI bool canContinueToUse();
    /**
     * @symbol ?canUse@ReceiveLoveGoal@@UEAA_NXZ
     * @hash   913847160
     */
    MCVAPI bool canUse();
#endif
    /**
     * @symbol ??0ReceiveLoveGoal@@QEAA@AEAVVillagerBase@@@Z
     * @hash   1504820317
     */
    MCAPI ReceiveLoveGoal(class VillagerBase &);

};