// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "SetTitlePacket.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class TitleRawCommand {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TITLERAWCOMMAND
public:
    class TitleRawCommand& operator=(class TitleRawCommand const &) = delete;
    TitleRawCommand(class TitleRawCommand const &) = delete;
    TitleRawCommand() = delete;
#endif

public:
    /*0*/ virtual ~TitleRawCommand();
    /*1*/ virtual void execute(class CommandOrigin const &, class CommandOutput &) const;
    MCAPI static void setup(class CommandRegistry &);

protected:

private:
    MCAPI bool _sendTitlePacketTextObject(enum SetTitlePacket::TitleType, class CommandOrigin const &, class CommandOutput &, class CommandSelectorResults<class Player> const &) const;

};