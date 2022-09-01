/**
 * @file  DropItemForGoal.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "BaseMoveToBlockGoal.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class DropItemForGoal.
 *
 */
class DropItemForGoal : public BaseMoveToBlockGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DROPITEMFORGOAL
public:
    class DropItemForGoal& operator=(class DropItemForGoal const &) = delete;
    DropItemForGoal(class DropItemForGoal const &) = delete;
    DropItemForGoal() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -609282616
     */
    virtual ~DropItemForGoal();
    /**
     * @vftbl  1
     * @symbol ?canUse@DropItemForGoal@@UEAA_NXZ
     * @hash   -317989242
     */
    virtual bool canUse();
    /**
     * @vftbl  2
     * @symbol ?canContinueToUse@DropItemForGoal@@UEAA_NXZ
     * @hash   422811140
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl  3
     * @hash   -1364347549
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl  4
     * @symbol ?start@DropItemForGoal@@UEAAXXZ
     * @hash   -1376895313
     */
    virtual void start();
    /**
     * @vftbl  5
     * @symbol ?stop@DropItemForGoal@@UEAAXXZ
     * @hash   -486483137
     */
    virtual void stop();
    /**
     * @vftbl  6
     * @symbol ?tick@DropItemForGoal@@UEAAXXZ
     * @hash   -647628550
     */
    virtual void tick();
    /**
     * @vftbl  7
     * @symbol ?appendDebugInfo@DropItemForGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   1328436378
     */
    virtual void appendDebugInfo(std::string &) const;
    /**
     * @vftbl  8
     * @hash   -1402013944
     */
    virtual void __unk_vfn_8();
    /**
     * @vftbl  9
     * @hash   -1352071735
     */
    virtual void __unk_vfn_9();
    /**
     * @vftbl  11
     * @symbol ?isValidTarget@DropItemForGoal@@UEAA_NAEAVBlockSource@@AEBVBlockPos@@@Z
     * @hash   2096430296
     */
    virtual bool isValidTarget(class BlockSource &, class BlockPos const &);
    /**
     * @vftbl  17
     * @symbol ?findTargetBlock@DropItemForGoal@@UEAA_NXZ
     * @hash   284543186
     */
    virtual bool findTargetBlock();
    /**
     * @symbol ??0DropItemForGoal@@QEAA@AEAVMob@@@Z
     * @hash   60556019
     */
    MCAPI DropItemForGoal(class Mob &);

};