// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class TakePictureCommand {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TAKEPICTURECOMMAND
public:
    class TakePictureCommand& operator=(class TakePictureCommand const &) = delete;
    TakePictureCommand(class TakePictureCommand const &) = delete;
    TakePictureCommand() = delete;
#endif

public:
    /*0*/ virtual ~TakePictureCommand();
    /*1*/ virtual void execute(class CommandOrigin const &, class CommandOutput &) const;
    MCAPI static void setup(class CommandRegistry &);

protected:

private:

};