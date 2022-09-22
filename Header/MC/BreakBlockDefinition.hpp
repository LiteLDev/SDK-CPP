/**
 * @file  BreakBlockDefinition.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"
#include "BehaviorDefinition.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class BreakBlockDefinition.
 *
 */
class BreakBlockDefinition : public BehaviorDefinition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BREAKBLOCKDEFINITION
public:
    class BreakBlockDefinition& operator=(class BreakBlockDefinition const &) = delete;
    BreakBlockDefinition(class BreakBlockDefinition const &) = delete;
    BreakBlockDefinition() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -1745624437
     */
    virtual ~BreakBlockDefinition();
    /**
     * @vftbl  1
     * @symbol ?load@BreakBlockDefinition@@UEAAXVValue@Json@@AEBVBehaviorFactory@@@Z
     * @hash   1242246339
     */
    virtual void load(class Json::Value, class BehaviorFactory const &);

};