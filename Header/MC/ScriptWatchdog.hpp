/**
 * @file  ScriptWatchdog.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Scripting.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class ScriptWatchdog.
 *
 */
class ScriptWatchdog {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTWATCHDOG
public:
    class ScriptWatchdog& operator=(class ScriptWatchdog const &) = delete;
    ScriptWatchdog(class ScriptWatchdog const &) = delete;
    ScriptWatchdog() = delete;
#endif

public:
    /**
     * @symbol ?initialize@ScriptWatchdog@@QEAAXPEAVIWatchdog@Scripting@@AEAVServerLevel@@PEAVScriptPluginManager@@VWeakLifetimeScope@3@PEAVServerInstance@@@Z
     * @hash   113781239
     */
    MCAPI void initialize(class Scripting::IWatchdog *, class ServerLevel &, class ScriptPluginManager *, class Scripting::WeakLifetimeScope, class ServerInstance *);

};