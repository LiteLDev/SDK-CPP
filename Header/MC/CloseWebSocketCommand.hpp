// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class CloseWebSocketCommand {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CLOSEWEBSOCKETCOMMAND
public:
    class CloseWebSocketCommand& operator=(class CloseWebSocketCommand const &) = delete;
    CloseWebSocketCommand(class CloseWebSocketCommand const &) = delete;
    CloseWebSocketCommand() = delete;
#endif

public:
    /*0*/ virtual ~CloseWebSocketCommand();
    /*1*/ virtual void execute(class CommandOrigin const &, class CommandOutput &) const;
    MCAPI static void setup(class CommandRegistry &, class IMinecraftApp &);

protected:

private:
    MCAPI static class IMinecraftApp * mApp;

};