/**
 * @file  GameModeCommand.hpp
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
 * @brief MC class GameModeCommand.
 *
 */
class GameModeCommand : public Command {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_GAMEMODECOMMAND
public:
    class GameModeCommand& operator=(class GameModeCommand const &) = delete;
    GameModeCommand(class GameModeCommand const &) = delete;
    GameModeCommand() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -1359092188
     */
    virtual ~GameModeCommand();
    /**
     * @vftbl  1
     * @symbol ?execute@GameModeCommand@@UEBAXAEBVCommandOrigin@@AEAVCommandOutput@@@Z
     * @hash   -1638509651
     */
    virtual void execute(class CommandOrigin const &, class CommandOutput &) const;
    /**
     * @symbol ?setup@GameModeCommand@@SAXAEAVCommandRegistry@@@Z
     * @hash   629756000
     */
    MCAPI static void setup(class CommandRegistry &);

};