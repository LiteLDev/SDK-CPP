// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class ScoreboardCommand {

#define AFTER_EXTRA
// Add Member There
public:
struct InitProxy {
    InitProxy() = delete;
    InitProxy(InitProxy const&) = delete;
    InitProxy(InitProxy const&&) = delete;
};
struct SetScoreOutput {
    SetScoreOutput() = delete;
    SetScoreOutput(SetScoreOutput const&) = delete;
    SetScoreOutput(SetScoreOutput const&&) = delete;
};

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCOREBOARDCOMMAND
public:
    class ScoreboardCommand& operator=(class ScoreboardCommand const &) = delete;
    ScoreboardCommand(class ScoreboardCommand const &) = delete;
    ScoreboardCommand() = delete;
#endif

public:
    /*0*/ virtual ~ScoreboardCommand();
    /*1*/ virtual void execute(class CommandOrigin const &, class CommandOutput &) const;
    /*
    inline  ~ScoreboardCommand(){
         (ScoreboardCommand::*rv)();
        *((void**)&rv) = dlsym("??1ScoreboardCommand@@UEAA@XZ");
        return (this->*rv)();
    }
    */
    MCAPI static void setup(class CommandRegistry &, struct ScoreboardCommand::InitProxy &&);

protected:

private:
    MCAPI void _generateCumulativeOutput(struct ScoreboardCommand::SetScoreOutput const &, class Objective const &, class CommandOutput &) const;
    MCAPI class Objective * _getObjective(class Scoreboard const &, std::string const &, bool, class CommandOutput &) const;
    MCAPI std::vector<struct ScoreboardId> _getScoreboardIdsForSelector(class Scoreboard &, class WildcardCommandSelector<class Actor> const &, class CommandOrigin const &, class CommandOutput &, bool) const;
    MCAPI bool _getSelectorResultsForObjective(std::vector<struct ScoreboardId> &, class Scoreboard &, class WildcardCommandSelector<class Actor> const &, class Objective &, class CommandOrigin const &, class CommandOutput &, bool) const;
    MCAPI void addObjective(class Scoreboard &, std::string const &, std::string const &, std::string const &, class CommandOutput &) const;
    MCAPI void addPlayerScore(class Scoreboard &, enum PlayerScoreSetFunction, struct ScoreboardId const &, class Objective &, class std::function<std::string const & (struct ActorUniqueID)> const &, class CommandOutput &, struct ScoreboardCommand::SetScoreOutput &) const;
    MCAPI bool applyPlayerOperation(class Scoreboard &, class std::function<std::string const & (struct ActorUniqueID)> const &, struct ScoreboardId const &, class Objective &, class Objective &, class CommandOrigin const &, class CommandOutput &, struct ScoreboardCommand::SetScoreOutput &) const;
    MCAPI void listObjectives(class Scoreboard const &, class CommandOutput &) const;
    MCAPI void listPlayers(class Scoreboard &, struct ScoreboardId const &, class std::function<std::string const & (struct ActorUniqueID)> const &, class CommandOutput &) const;
    MCAPI void objectives(class Scoreboard &, class CommandOrigin const &, class CommandOutput &) const;
    MCAPI void players(class Scoreboard &, class CommandOrigin const &, class CommandOutput &) const;
    MCAPI void removeObjective(class Scoreboard &, std::string const &, class CommandOutput &) const;
    MCAPI void resetPlayer(class Scoreboard &, struct ScoreboardId const &, class Objective *, class std::function<std::string const & (struct ActorUniqueID)> const &, class CommandOutput &) const;
    MCAPI void setDisplayObjective(class Scoreboard &, std::string const &, std::string const &, enum ObjectiveSortOrder, class CommandOutput &) const;
    MCAPI bool setPlayerRandomScore(class Scoreboard &, struct ScoreboardId const &, class Objective &, class std::function<std::string const & (struct ActorUniqueID)> const &, class CommandOutput &, struct ScoreboardCommand::SetScoreOutput &) const;
    MCAPI void testPlayerScore(struct ScoreboardId const &, class Objective &, class std::function<std::string const & (struct ActorUniqueID)> const &, class CommandOutput &) const;
    MCAPI static std::vector<std::string> _getNonSortableDisplaySlots(class Scoreboard &);
    MCAPI static std::vector<std::string> _getSortableDisplaySlots(class Scoreboard &);

};