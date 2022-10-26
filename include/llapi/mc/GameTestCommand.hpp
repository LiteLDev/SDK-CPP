/**
 * @file  GameTestCommand.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Command.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class GameTestCommand.
 *
 */
class GameTestCommand : public Command {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_GAMETESTCOMMAND
public:
    class GameTestCommand& operator=(class GameTestCommand const &) = delete;
    GameTestCommand(class GameTestCommand const &) = delete;
    GameTestCommand() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -1100349483
     */
    virtual ~GameTestCommand();
    /**
     * @vftbl  1
     * @symbol ?execute@GameTestCommand@@UEBAXAEBVCommandOrigin@@AEAVCommandOutput@@@Z
     * @hash   1863722860
     */
    virtual void execute(class CommandOrigin const &, class CommandOutput &) const;
    /**
     * @symbol ?addGameTestNameEnums@GameTestCommand@@SAXAEAVMinecraftGameTest@@AEAVCommandRegistry@@@Z
     * @hash   56797903
     */
    MCAPI static void addGameTestNameEnums(class MinecraftGameTest &, class CommandRegistry &);
    /**
     * @symbol ?setup@GameTestCommand@@SAXAEAVCommandRegistry@@@Z
     * @hash   1850057296
     */
    MCAPI static void setup(class CommandRegistry &);

//private:
    /**
     * @symbol ?_createTestParameters@GameTestCommand@@AEBA?AUTestParameters@gametest@@AEAVBlockSource@@AEBVCommandOrigin@@@Z
     * @hash   -1583938443
     */
    MCAPI struct gametest::TestParameters _createTestParameters(class BlockSource &, class CommandOrigin const &) const;
    /**
     * @symbol ?_handleCreateTest@GameTestCommand@@AEBAXAEAVBlockSource@@AEBVCommandOrigin@@AEAVCommandOutput@@@Z
     * @hash   -1508295679
     */
    MCAPI void _handleCreateTest(class BlockSource &, class CommandOrigin const &, class CommandOutput &) const;
    /**
     * @symbol ?_handleRun@GameTestCommand@@AEBAXAEAVMinecraftGameTest@@AEAVBlockSource@@AEBVCommandOrigin@@AEAVCommandOutput@@@Z
     * @hash   188903049
     */
    MCAPI void _handleRun(class MinecraftGameTest &, class BlockSource &, class CommandOrigin const &, class CommandOutput &) const;
    /**
     * @symbol ?_handleRunNearbyTests@GameTestCommand@@AEBAXAEAVMinecraftGameTest@@AEAVBlockSource@@AEBVCommandOrigin@@AEAVCommandOutput@@@Z
     * @hash   646876499
     */
    MCAPI void _handleRunNearbyTests(class MinecraftGameTest &, class BlockSource &, class CommandOrigin const &, class CommandOutput &) const;
    /**
     * @symbol ?_handleRunSet@GameTestCommand@@AEBAXAEAVMinecraftGameTest@@AEAVBlockSource@@AEBVCommandOrigin@@AEAVCommandOutput@@@Z
     * @hash   -388208397
     */
    MCAPI void _handleRunSet(class MinecraftGameTest &, class BlockSource &, class CommandOrigin const &, class CommandOutput &) const;
    /**
     * @symbol ?_handleRunThis@GameTestCommand@@AEBAXAEAVMinecraftGameTest@@AEAVBlockSource@@AEBVCommandOrigin@@AEAVCommandOutput@@@Z
     * @hash   271272295
     */
    MCAPI void _handleRunThis(class MinecraftGameTest &, class BlockSource &, class CommandOrigin const &, class CommandOutput &) const;
    /**
     * @symbol ?_handleShowPosition@GameTestCommand@@AEBAXAEAVBlockSource@@AEBVCommandOrigin@@AEAVCommandOutput@@@Z
     * @hash   2144145641
     */
    MCAPI void _handleShowPosition(class BlockSource &, class CommandOrigin const &, class CommandOutput &) const;
    /**
     * @symbol ?_runTestAt@GameTestCommand@@AEBAXAEAVMinecraftGameTest@@AEAVBlockSource@@PEAVCommandOutput@@AEBVBlockPos@@V?$optional@W4Rotation@@@std@@@Z
     * @hash   266842115
     */
    MCAPI void _runTestAt(class MinecraftGameTest &, class BlockSource &, class CommandOutput *, class BlockPos const &, class std::optional<enum class Rotation>) const;

private:

};