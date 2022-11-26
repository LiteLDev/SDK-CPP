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
     * @hash   1151385585
     */
    virtual void __unk_vfn_1();
    /**
     * @vftbl  2
     * @hash   1152170722
     */
    virtual void __unk_vfn_2();
    /**
     * @vftbl  3
     * @hash   1152940483
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl  4
     * @hash   1154540548
     */
    virtual void __unk_vfn_4();
    /**
     * @vftbl  5
     * @symbol ?handleEvent@ScriptBlockGameplayHandler@@UEAA?AU?$GameplayHandlerResult@W4CoordinatorResult@@@@AEAUExplosionStartedEvent@@@Z
     * @hash   -1461184133
     */
    virtual struct GameplayHandlerResult<enum class CoordinatorResult> handleEvent(struct ExplosionStartedEvent &);
    /**
     * @vftbl  6
     * @hash   1155388150
     */
    virtual void __unk_vfn_6();
    /**
     * @vftbl  7
     * @hash   1156311671
     */
    virtual void __unk_vfn_7();
    /**
     * @vftbl  8
     * @hash   1157265944
     */
    virtual void __unk_vfn_8();
    /**
     * @vftbl  9
     * @symbol ?handleEvent@ScriptBlockGameplayHandler@@UEAA?AU?$GameplayHandlerResult@W4CoordinatorResult@@@@AEBUPistonActionEvent@@@Z
     * @hash   -1016327797
     */
    virtual struct GameplayHandlerResult<enum class CoordinatorResult> handleEvent(struct PistonActionEvent const &);

//private:
    /**
     * @symbol ?_handleExplosionStartedEvent@ScriptBlockGameplayHandler@@AEBA_NAEAUExplosionStartedEvent@@AEBVWeakLifetimeScope@Scripting@@U?$TypedObjectHandle@VScriptWorldEvents@ScriptModuleMinecraft@@@4@@Z
     * @hash   740984302
     */
    MCAPI bool _handleExplosionStartedEvent(struct ExplosionStartedEvent &, class Scripting::WeakLifetimeScope const &, struct Scripting::TypedObjectHandle<class ScriptModuleMinecraft::ScriptWorldEvents>) const;
    /**
     * @symbol ?_handlePistonActionEvent@ScriptBlockGameplayHandler@@AEBA_NAEBUPistonActionEvent@@AEBVWeakLifetimeScope@Scripting@@U?$TypedObjectHandle@VScriptWorldEvents@ScriptModuleMinecraft@@@4@@Z
     * @hash   -1861407263
     */
    MCAPI bool _handlePistonActionEvent(struct PistonActionEvent const &, class Scripting::WeakLifetimeScope const &, struct Scripting::TypedObjectHandle<class ScriptModuleMinecraft::ScriptWorldEvents>) const;

private:

};