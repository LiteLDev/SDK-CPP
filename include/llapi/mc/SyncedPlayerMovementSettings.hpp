/**
 * @file  SyncedPlayerMovementSettings.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class SyncedPlayerMovementSettings.
 *
 */
class SyncedPlayerMovementSettings {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SYNCEDPLAYERMOVEMENTSETTINGS
public:
    class SyncedPlayerMovementSettings& operator=(class SyncedPlayerMovementSettings const &) = delete;
    SyncedPlayerMovementSettings(class SyncedPlayerMovementSettings const &) = delete;
#endif

public:
    /**
     * @symbol ??0SyncedPlayerMovementSettings@@QEAA@XZ
     * @hash   1825868201
     */
    MCAPI SyncedPlayerMovementSettings();
    /**
     * @symbol ??0SyncedPlayerMovementSettings@@QEAA@AEBUPlayerMovementSettings@@@Z
     * @hash   86641270
     */
    MCAPI SyncedPlayerMovementSettings(struct PlayerMovementSettings const &);

};