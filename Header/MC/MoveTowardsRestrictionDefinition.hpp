// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class MoveTowardsRestrictionDefinition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MOVETOWARDSRESTRICTIONDEFINITION
public:
    class MoveTowardsRestrictionDefinition& operator=(class MoveTowardsRestrictionDefinition const &) = delete;
    MoveTowardsRestrictionDefinition(class MoveTowardsRestrictionDefinition const &) = delete;
#endif


public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_MOVETOWARDSRESTRICTIONDEFINITION
public:
#endif
    MCAPI MoveTowardsRestrictionDefinition();
    MCAPI void initialize(class EntityContext &, class MoveTowardsRestrictionGoal &);


};