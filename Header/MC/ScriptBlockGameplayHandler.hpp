/**
 * @file  ScriptBlockGameplayHandler.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Scripting.hpp"
#include "ScriptModuleMinecraft.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ScriptBlockGameplayHandler.
 *
 */
class ScriptBlockGameplayHandler {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTBLOCKGAMEPLAYHANDLER
public:
    class ScriptBlockGameplayHandler& operator=(class ScriptBlockGameplayHandler const &) = delete;
    ScriptBlockGameplayHandler(class ScriptBlockGameplayHandler const &) = delete;
    ScriptBlockGameplayHandler() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   168473644
     */
    virtual ~ScriptBlockGameplayHandler();
    /**
     * @vftbl  1
     * @hash   -2100135599
     */
    virtual void __unk_vfn_1();
    /**
     * @vftbl  2
     * @hash   -2099350462
     */
    virtual void __unk_vfn_2();
    /**
     * @vftbl  3
     * @hash   -2098580701
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl  4
     * @hash   -2096980636
     */
    virtual void __unk_vfn_4();
    /**
     * @vftbl  5
     * @symbol ?handleEvent@ScriptBlockGameplayHandler@@UEAA?AU?$GameplayHandlerResult@W4CoordinatorResult@@@@AEAUExplosionStartedEvent@@@Z
     * @hash   -1468984357
     */
    virtual struct GameplayHandlerResult<enum CoordinatorResult> handleEvent(struct ExplosionStartedEvent &);
    /**
     * @vftbl  6
     * @hash   -2096133034
     */
    virtual void __unk_vfn_6();
    /**
     * @vftbl  7
     * @hash   -2095209513
     */
    virtual void __unk_vfn_7();
    /**
     * @vftbl  8
     * @hash   -2094255240
     */
    virtual void __unk_vfn_8();
    /**
     * @vftbl  9
     * @symbol ?handleEvent@ScriptBlockGameplayHandler@@UEAA?AU?$GameplayHandlerResult@W4CoordinatorResult@@@@AEBUPistonActionEvent@@@Z
     * @hash   -1024143397
     */
    virtual struct GameplayHandlerResult<enum CoordinatorResult> handleEvent(struct PistonActionEvent const &);

//private:
    /**
     * @symbol ?_handleExplosionStartedEvent@ScriptBlockGameplayHandler@@AEBA_NAEAUExplosionStartedEvent@@AEBVWeakLifetimeScope@Scripting@@U?$TypedObjectHandle@VScriptWorldEvents@ScriptModuleMinecraft@@@4@@Z
     * @hash   733214830
     */
    MCAPI bool _handleExplosionStartedEvent(struct ExplosionStartedEvent &, class Scripting::WeakLifetimeScope const &, struct Scripting::TypedObjectHandle<class ScriptModuleMinecraft::ScriptWorldEvents>) const;
    /**
     * @symbol ?_handlePistonActionEvent@ScriptBlockGameplayHandler@@AEBA_NAEBUPistonActionEvent@@AEBVWeakLifetimeScope@Scripting@@U?$TypedObjectHandle@VScriptWorldEvents@ScriptModuleMinecraft@@@4@@Z
     * @hash   -1869192111
     */
    MCAPI bool _handlePistonActionEvent(struct PistonActionEvent const &, class Scripting::WeakLifetimeScope const &, struct Scripting::TypedObjectHandle<class ScriptModuleMinecraft::ScriptWorldEvents>) const;

private:

};