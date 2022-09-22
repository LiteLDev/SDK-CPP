/**
 * @file  ShulkerPeekGoal.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ShulkerPeekGoal.
 *
 */
class ShulkerPeekGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SHULKERPEEKGOAL
public:
    class ShulkerPeekGoal& operator=(class ShulkerPeekGoal const &) = delete;
    ShulkerPeekGoal(class ShulkerPeekGoal const &) = delete;
    ShulkerPeekGoal() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~ShulkerPeekGoal();
    /**
     * @hash   1805759574
     * @vftbl  1
     * @symbol ?canUse@ShulkerPeekGoal@@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @hash   -1748361212
     * @vftbl  2
     * @symbol ?canContinueToUse@ShulkerPeekGoal@@UEAA_NXZ
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl  3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @hash   1781512191
     * @vftbl  4
     * @symbol ?start@ShulkerPeekGoal@@UEAAXXZ
     */
    virtual void start();
    /**
     * @hash   -1624011617
     * @vftbl  5
     * @symbol ?stop@ShulkerPeekGoal@@UEAAXXZ
     */
    virtual void stop();
    /**
     * @hash   -1785233910
     * @vftbl  6
     * @symbol ?tick@ShulkerPeekGoal@@UEAAXXZ
     */
    virtual void tick();
    /**
     * @hash   1964236170
     * @vftbl  7
     * @symbol ?appendDebugInfo@ShulkerPeekGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    virtual void appendDebugInfo(std::string &) const;
    /**
     * @hash   -198675693
     * @symbol ??0ShulkerPeekGoal@@QEAA@AEAVMob@@@Z
     */
    MCAPI ShulkerPeekGoal(class Mob &);

};