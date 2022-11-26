/**
 * @file  SilverfishMergeWithStoneGoal.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "RandomStrollGoal.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class SilverfishMergeWithStoneGoal.
 *
 */
class SilverfishMergeWithStoneGoal : public RandomStrollGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SILVERFISHMERGEWITHSTONEGOAL
public:
    class SilverfishMergeWithStoneGoal& operator=(class SilverfishMergeWithStoneGoal const &) = delete;
    SilverfishMergeWithStoneGoal(class SilverfishMergeWithStoneGoal const &) = delete;
    SilverfishMergeWithStoneGoal() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -93935575
     */
    virtual ~SilverfishMergeWithStoneGoal();
    /**
     * @vftbl  1
     * @symbol ?canUse@SilverfishMergeWithStoneGoal@@UEAA_NXZ
     * @hash   -2001228831
     */
    virtual bool canUse();
    /**
     * @vftbl  2
     * @symbol ?canContinueToUse@SilverfishMergeWithStoneGoal@@UEAA_NXZ
     * @hash   1575350319
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl  4
     * @symbol ?start@SilverfishMergeWithStoneGoal@@UEAAXXZ
     * @hash   -113445478
     */
    virtual void start();
    /**
     * @vftbl  7
     * @symbol ?appendDebugInfo@SilverfishMergeWithStoneGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   -1591284769
     */
    virtual void appendDebugInfo(std::string &) const;
    /**
     * @vftbl  8
     * @hash   -1310126968
     */
    virtual void __unk_vfn_8();
    /**
     * @vftbl  9
     * @hash   -1251451191
     */
    virtual void __unk_vfn_9();
    /**
     * @symbol ??0SilverfishMergeWithStoneGoal@@QEAA@AEAVSilverfish@@@Z
     * @hash   466460120
     */
    MCAPI SilverfishMergeWithStoneGoal(class Silverfish &);

};