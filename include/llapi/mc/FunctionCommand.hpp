/**
 * @file  FunctionCommand.hpp
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
 * @brief MC class FunctionCommand.
 *
 */
class FunctionCommand : public Command {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FUNCTIONCOMMAND
public:
    class FunctionCommand& operator=(class FunctionCommand const &) = delete;
    FunctionCommand(class FunctionCommand const &) = delete;
    FunctionCommand() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -1269178591
     */
    virtual ~FunctionCommand();
    /**
     * @vftbl  1
     * @symbol ?execute@FunctionCommand@@UEBAXAEBVCommandOrigin@@AEAVCommandOutput@@@Z
     * @hash   2009739248
     */
    virtual void execute(class CommandOrigin const &, class CommandOutput &) const;
    /**
     * @symbol ?setup@FunctionCommand@@SAXAEAVCommandRegistry@@@Z
     * @hash   -958694848
     */
    MCAPI static void setup(class CommandRegistry &);

};