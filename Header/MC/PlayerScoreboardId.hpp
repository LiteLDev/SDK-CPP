// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

struct PlayerScoreboardId {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PLAYERSCOREBOARDID
public:
    struct PlayerScoreboardId& operator=(struct PlayerScoreboardId const &) = delete;
    PlayerScoreboardId(struct PlayerScoreboardId const &) = delete;
#endif

public:
    MCAPI PlayerScoreboardId(__int64);
    MCAPI PlayerScoreboardId();
    MCAPI unsigned __int64 getHash() const;
    MCAPI bool operator==(struct PlayerScoreboardId const &) const;

protected:

private:

};