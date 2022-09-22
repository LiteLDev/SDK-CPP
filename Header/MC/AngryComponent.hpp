/**
 * @file  AngryComponent.hpp
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
 * @brief MC class AngryComponent.
 *
 */
class AngryComponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ANGRYCOMPONENT
public:
    class AngryComponent& operator=(class AngryComponent const &) = delete;
    AngryComponent(class AngryComponent const &) = delete;
#endif

public:
    /**
     * @symbol ??0AngryComponent@@QEAA@XZ
     * @hash   875686456
     */
    MCAPI AngryComponent();
    /**
     * @symbol ??0AngryComponent@@QEAA@$$QEAV0@@Z
     * @hash   790744097
     */
    MCAPI AngryComponent(class AngryComponent &&);
    /**
     * @symbol ?canGetAngry@AngryComponent@@QEBA_NAEAVMob@@PEAV2@PEAVActor@@_N3@Z
     * @hash   -2129249821
     */
    MCAPI bool canGetAngry(class Mob &, class Mob *, class Actor *, bool, bool) const;
    /**
     * @symbol ?getAngrySound@AngryComponent@@QEBA?BW4LevelSoundEvent@@AEBVMob@@@Z
     * @hash   983122571
     */
    MCAPI enum LevelSoundEvent const getAngrySound(class Mob const &) const;
    /**
     * @symbol ?getBroadcastAnger@AngryComponent@@QEBA_NXZ
     * @hash   217781216
     */
    MCAPI bool getBroadcastAnger() const;
    /**
     * @symbol ?getBroadcastAngerOnAttack@AngryComponent@@QEBA_NXZ
     * @hash   -1460285650
     */
    MCAPI bool getBroadcastAngerOnAttack() const;
    /**
     * @symbol ?getBroadcastAngerOnBeingAttacked@AngryComponent@@QEBA_NXZ
     * @hash   1050883372
     */
    MCAPI bool getBroadcastAngerOnBeingAttacked() const;
    /**
     * @symbol ?getBroadcastFilter@AngryComponent@@QEBAAEBVActorFilterGroup@@XZ
     * @hash   52458100
     */
    MCAPI class ActorFilterGroup const & getBroadcastFilter() const;
    /**
     * @symbol ?getBroadcastRange@AngryComponent@@QEBAHXZ
     * @hash   520782182
     */
    MCAPI int getBroadcastRange() const;
    /**
     * @symbol ?getHasTicked@AngryComponent@@QEBA_NXZ
     * @hash   732338422
     */
    MCAPI bool getHasTicked() const;
    /**
     * @symbol ?getNextSoundEventTick@AngryComponent@@QEBA?BUTick@@XZ
     * @hash   1865874000
     */
    MCAPI struct Tick const getNextSoundEventTick() const;
    /**
     * @symbol ??4AngryComponent@@QEAAAEAV0@$$QEAV0@@Z
     * @hash   -159397484
     */
    MCAPI class AngryComponent & operator=(class AngryComponent &&);
    /**
     * @symbol ?restartTimer@AngryComponent@@QEAAXAEAVMob@@@Z
     * @hash   -1856927244
     */
    MCAPI void restartTimer(class Mob &);
    /**
     * @symbol ?setAngry@AngryComponent@@QEAAXAEAVMob@@_N@Z
     * @hash   1426123819
     */
    MCAPI void setAngry(class Mob &, bool);
    /**
     * @symbol ?setHasTicked@AngryComponent@@QEAAX_N@Z
     * @hash   994704542
     */
    MCAPI void setHasTicked(bool);
    /**
     * @symbol ?setNextSoundEventTick@AngryComponent@@QEAAXAEBVMob@@@Z
     * @hash   818050722
     */
    MCAPI void setNextSoundEventTick(class Mob const &);
    /**
     * @symbol ??1AngryComponent@@QEAA@XZ
     * @hash   498494278
     */
    MCAPI ~AngryComponent();

};