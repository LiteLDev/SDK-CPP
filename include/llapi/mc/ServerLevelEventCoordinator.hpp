/**
 * @file  ServerLevelEventCoordinator.hpp
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
 * @brief MC class ServerLevelEventCoordinator.
 *
 */
class ServerLevelEventCoordinator {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SERVERLEVELEVENTCOORDINATOR
public:
    class ServerLevelEventCoordinator& operator=(class ServerLevelEventCoordinator const &) = delete;
    ServerLevelEventCoordinator(class ServerLevelEventCoordinator const &) = delete;
    ServerLevelEventCoordinator() = delete;
#endif

public:
    /**
     * @symbol ?sendLevelAddedPlayer@ServerLevelEventCoordinator@@QEAAXAEAVLevel@@AEAVPlayer@@@Z
     * @hash   -1160189803
     */
    MCAPI void sendLevelAddedPlayer(class Level &, class Player &);
    /**
     * @symbol ?sendLevelRemovedPlayer@ServerLevelEventCoordinator@@QEAAXAEAVLevel@@AEAVPlayer@@@Z
     * @hash   -1323874155
     */
    MCAPI void sendLevelRemovedPlayer(class Level &, class Player &);
    /**
     * @symbol ?sendLevelSaveData@ServerLevelEventCoordinator@@QEAAXAEAVLevel@@AEAVCompoundTag@@@Z
     * @hash   -734639171
     */
    MCAPI void sendLevelSaveData(class Level &, class CompoundTag &);

};