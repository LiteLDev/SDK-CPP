// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class SaveCommand {

#define AFTER_EXTRA
// Add Member There
public:
enum State;

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SAVECOMMAND
public:
    class SaveCommand& operator=(class SaveCommand const &) = delete;
    SaveCommand(class SaveCommand const &) = delete;
    SaveCommand() = delete;
#endif

public:
    /*0*/ virtual ~SaveCommand();
    /*1*/ virtual void execute(class CommandOrigin const &, class CommandOutput &) const;
    MCAPI static void setup(class CommandRegistry &);

protected:

private:
    MCAPI static std::vector<struct SnapshotFilenameAndLength> mSaveAllFileList;
    MCAPI static class std::mutex mSaveAllMutex;
    MCAPI static enum SaveCommand::State mState;
    MCAPI static void saveHold(class CommandOutput &);
    MCAPI static void saveResume(class CommandOutput &);
    MCAPI static void saveState(class CommandOutput &);

};