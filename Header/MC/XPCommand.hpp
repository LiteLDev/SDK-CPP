// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class XPCommand {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_XPCOMMAND
public:
    class XPCommand& operator=(class XPCommand const &) = delete;
    XPCommand(class XPCommand const &) = delete;
    XPCommand() = delete;
#endif

public:
    /*0*/ virtual ~XPCommand();
    /*1*/ virtual void execute(class CommandOrigin const &, class CommandOutput &) const;
    MCAPI static void setup(class CommandRegistry &);

protected:

private:

};